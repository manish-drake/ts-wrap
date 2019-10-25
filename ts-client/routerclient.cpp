#include "routerclient.h"
#include "routerregistermessage.h"
#include "envelope.h"
#include "socketpool.h"
#include <utility>
#include <iostream>
#include <memory>

using up_json = std::unique_ptr<Json::Value>;
RouterClient* RouterClient::m_singleton = nullptr;
bool RouterClient::handleInboundMessage(const string &message, string &reply)
{
    reply = message;
    return true;
}

/*!
  @brief Returns .
  @param[in] localEndpoint holds string value.
  @details It initialized RouterRegisterMessage as msg and the it assigns the setDynamic, setsEndPointName, setEndPointURI fields with specific values.
  Similarly it initialized Envelope as envelope and replyEnvelope and lly it assigns setDestination, setSource, setSequence, setMessage.
  Further it checks if the status code equals to the Reply_OK if true it returns address else -1.
*/
int RouterClient::getRegistered(const string &localEndpoint)
{
    RouterRegisterMessage msg;
    Envelope envelope, replyEnvelope;
    msg.setDynamic(true);
    msg.setEndPointName(std::string("ts-qt"));
    msg.setEndPointURI(localEndpoint);

    envelope.setDestination(1);
    envelope.setSource(0);
    envelope.setSequence(getNextSequence());
    envelope.setMessage(msg);

    string reply = m_client->Send(envelope.toString());
    replyEnvelope = Envelope::fromString(reply);
    if (replyEnvelope.getStatusCode() == Envelope::REPLY_OK)
    {
        string address = replyEnvelope.getAddress();
        return atoi(address.c_str());
    }
    return -1;
}

/*!
  @brief .
  @param[in] localEndpoint, serverEndpoint, callback.
  @details It initialized RouterRegisterMessage as msg and the it assigns the setDynamic, setsEndPointName, setEndPointURI fields with specific values.
  Similarly it initialized Envelope as envelope and replyEnvelope and lly it assigns setDestination, setSource, setSequence, setMessage.
  Further it checks if the status code equals to the Reply_OK if true it returns address.
*/
void RouterClient::getRegisteredAsync(const string &localEndpoint, const char *serverEndpoint, std::function<void(int)> callback)
{

    Logger::Instance()->Log(Level::Info, "router_client", "@@@Sending RouterRegisterMessage");
    std::thread([this](const string &localEndpoint, const char *serverEndpoint, std::function<void(int)> callback) {
        RouterRegisterMessage msg;
        Envelope envelope, replyEnvelope;
        msg.setDynamic(true);
        msg.setEndPointName(std::string("ts-qt"));
        msg.setEndPointURI(localEndpoint);

        envelope.setDestination(1);
        envelope.setSource(0);
        envelope.setSequence(getNextSequence());
        envelope.setMessage(msg);

        string reply = m_client->SendAsync(serverEndpoint, envelope.toString());

        Logger::Instance()->Log(Level::Info, "router_client", "@@@Received reply for RouterRegisterMessage");
        replyEnvelope = Envelope::fromString(reply);
        if (replyEnvelope.getStatusCode() == Envelope::REPLY_OK)
        {
            string address = replyEnvelope.getAddress();
            callback(atoi(address.c_str()));
        }
    },
    localEndpoint, serverEndpoint, callback)
            .detach();
}

/*!
  @brief Starts the service .
  @param[in] localEndpoint, serverEndpoint.
  @details Checks if localEndPoint or serverEndPoint are false, if yes then it returns.
  Assigns localEndpoint and serverEndpoint to string object.
*/
void RouterClient::Start(const char *localEndpoint, const char *serverEndpoint)
{
    if(!localEndpoint || !serverEndpoint) return;

    Logger::Instance()->Log(Level::Info, "router_client", "@@@Starting to connect to the server");
    m_localEndpoint=localEndpoint;
    m_serverEndpoint=serverEndpoint;
    m_listener = up_listener{new ZListener(m_localEndpoint)};
    this->m_listener->RunAsync([this](const string &message) -> string {

        Logger::Instance()->Log(Level::Info, "router_client", "@@@Starting a listener at local endpoint");
        string reply;
        Logger::Instance()->Log(Level::Info, "router_client", "received: %s", message.c_str());
//        std::cout << "RCVD:: " << message.c_str() << std::endl;
        Json::Reader reader;
        Json::Value value;
        int source = 0;
        if (reader.parse(message, value))
        {
            source = value["source"].asInt();
            for (auto &subscription : this->m_subscriptions)
            {
                if((subscription.second.ServiceDestination == source) &&
                        subscription.second.Callback)
                {
                    subscription.second.Callback(value["message"]);
                }
            }
            this->handleInboundMessage(message, reply);
        }
        this->m_msgReply = RECVD;
        this->m_semaphore.signal();

        Logger::Instance()->Log(Level::Info, "router_client", "@@@Listener started.");
        return reply;
    });

    m_client = ZClient::Connect(serverEndpoint);
    this->getRegisteredAsync(m_localEndpoint, serverEndpoint,
                             [this](int address) {

        Logger::Instance()->Log(Level::Info, "router_client", "@@@Setting address for client");
        this->m_address = address;
        Logger::Instance()->Log(Level::Info, "router_client", "@@@Connected to server and ready!!!");
    });
}

RouterClient::RouterClient() :
    m_msgReply{false},
    m_sequence{0},
    m_address{-1}
{
}

/*!
  @brief Sends the Router client request.
  @param[in] message holds message from server, destination, wait holds true/false.
  @details It initialized Envelope as env and then it assigns the setDestination, setSource fields with specific values.
  Similarly it also initialized Envelope as reply and then it assigns setSequence, setMessage with specific values.
*/
bool RouterClient::Send(TServerMessage &message, int destination, bool wait)
{
    Message msg;
    msg.fromJSON(message.get());

    Envelope env, reply;
    env.setDestination(destination);
    env.setSource(m_address);

    env.setSequence(getNextSequence());
    env.setMessage(msg);
    Logger::Instance()->Log(Level::Info, "router_client", "sending: %s", env.toString().c_str());
    this->m_msgReply = PENDNG;
    string replyJson = m_client->Send(env.toString());
    if(wait)
        this->m_semaphore.wait();
    this->m_msgReply = RECVD;
    reply = Envelope::fromString(replyJson);
    return (reply.getStatusCode() == Envelope::REPLY_OK);
}

/*!
  @brief Returns subscription token.
  @param[in] subscription .
  @details Assisgns numeric token equal to 1 then increments the token by 1, returns the token after calling function insert
  by passing the token and subscription as parmeters .
*/
int RouterClient::Subscribe(subscription &subscription)
{
    static int token = 0;
    token += 1;
    m_subscriptions.insert(std::make_pair(token, subscription));
    return token;
}

/*!
  @brief Erases the subscription token.
  @param[in] token holds the value for subscription.
*/
void RouterClient::Unsubscribe(int token)
{
    m_subscriptions[token].Disable();
}

/*!
  @brief Closes the listener and router client Service.
*/
void RouterClient::Close()
{
    m_listener->Stop();
    m_client->Close();
    context->close();
}
