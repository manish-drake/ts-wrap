#include "gicbclient.h"
#include "messages/GICBStart.h"
#include "messages/GICBStop.h"
#include "messages/GICBInterrogate.h"
#include "messages/SIFQueryGICB.h"
#include "gicbmanager.h"
#include "RouterRegister.h"
#include "RouterRegisterReply.h"

GICBClient::GICBClient(RouterClient &routerClient) :
    AppClientBase{routerClient},
    m_isRunning{false},
    m_countSet{false}
#ifdef TS_SHELL
    ,m_endPoint{8283}
#endif
{
#ifdef TS_SHELL
    m_endPoint.SetReceiveParts([this](std::vector<std::string> &messages)->string{
        Json::Value jsonRoot;
        Json::Reader reader;
        if(reader.parse(messages[1], jsonRoot))
        {
            m_callback(jsonRoot);
        }
        return "OK";
    });
#endif
}

/*!
  @brief It starts the UAT Client service.
*/
void GICBClient::Start(const unsigned &route)
{
    auto delegate = [this](const Json::Value &reply) -> void {
        this->m_gicbData = reply;
    };
    this->Start(delegate, route);
}

/*!
  @brief It stops the UAT Client service.
  @details It checks if the router client is connected, if reply is not pending and UAT Data is not running,
  if true then it sets the address, Unsubscribes the token .
*/
void GICBClient::Stop()
{
    if (m_routerClient.isConnected() && !m_routerClient.isReplyPending() && getIsRunning())
    {
        m_isRunning = false;
        CGICBStop msg;
        m_routerClient.Send(msg, this->getServiceDestination(), false);

        m_routerClient.Unsubscribe(this->m_subscriptionToken);
    }
    else {
        Logger::Instance()->Log(Level::Info, "gicbClient", "Connected?: %i |Reply_Pending?: %i |Running?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending(), getIsRunning());
    }
}

/*!
  @brief It starts the GICB Client service.
  @param[in] callback .
  @details It checks if the router client is connected, if reply is not pending and UAT Data is not running,
  if true then it sets the mode and address, setting isRunning to true.
*/
void GICBClient::Start(std::function<void(const Json::Value &)> &&callback, const unsigned &route)
{
#ifdef TS_SHELL
    m_callback = callback;
    CRouterRegister request;
    request.setAddressUri("tcp://127.0.0.1:1470");
    request.setName("ts-qt");

    Header header;
    header.setDestination("router");
    header.setSource(m_token);
    header.setType("CRouterRegister");

    std::string reply = m_endPoint.GetSendParts()("tcp://127.0.0.1:6000", {header.getMessage(), request.getMessage()});
    CRouterRegisterReply replyMessage;
    replyMessage.setMessage(reply);
    m_token = replyMessage.getToken();
#else
    if (m_routerClient.isConnected() && !m_routerClient.isReplyPending() && !getIsRunning())
    {
        CGICBStart msg;
        msg.setPort(route);
        //        msg.setAddress(m_routerClient.getAddress());
        msg.setEndpoint(m_routerClient.getAddress());
        m_routerClient.Send(msg, this->getServiceDestination(), false);

        subscription subscription{callback, getServiceDestination()};
        this->m_subscriptionToken = m_routerClient.Subscribe(subscription);
        m_isRunning = true;
    }
    else {
        Logger::Instance()->Log(Level::Info, "gicbClient", "Connected?: %i |Reply_Pending?: %i |Running?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending(), getIsRunning());
    }
#endif
}

/*!
  @brief Returns GICB Data as string.
  @param[in] key .
*/
std::string GICBClient::getData(const char *key)
{
    return m_gicbData[key].asString();
}

/*!
  @brief Get .
  @param[in] arg .
  @details .
*/
void GICBClient::get(std::function<void (const Json::Value &)> &&callback, const int &arg)
{
    GICBManager gicbManager;
    std::string message = gicbManager.queryMessage(arg);
    if(message.empty()) return;

    std::cout << "BDS_getMessage: " << message;
    std::cout.flush();

    Json::Reader reader;
    Json::Value value;
    if (reader.parse(message, value))
    {
        callback(value);
    }
}

/*!
  @brief Query .
  @param[in] bdsRegister .
  @details .
*/
void GICBClient::Query(const int &bdsRegister)
{
#ifdef TS_SHELL
    CSIFQueryGICB request;
    request.setBDSRegister(bdsRegister);

    Header header;
    header.setDestination("gicb");
    header.setSource(m_token);
    header.setType("CSIFQueryGICB");

    m_endPoint.GetSendParts()("tcp://127.0.0.1:6000", {header.getMessage(), request.getMessage()});
#else
    if (m_routerClient.isConnected() && !m_routerClient.isReplyPending() && getIsRunning())
    {
        CGICBInterrogate msg;
        msg.setBDSRegister(bdsRegister);
        if(modeSAddress > 0)
        {
            msg.setModeSAddress(modeSAddress);
            Logger::Instance()->Log(Level::Info, "gicbClient", "Mode S address set: %i", modeSAddress);
        }
        m_routerClient.Send(msg, this->getServiceDestination(), false);

        //        subscription subscription{callback, getServiceDestination()};
        //        this->m_subscriptionToken = m_routerClient.Subscribe(subscription);
        m_isRunning = true;
    }
    else {
        Logger::Instance()->Log(Level::Info, "gicbClient", "Connected?: %i |Reply_Pending?: %i |Running?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending(), getIsRunning());
    }
#endif
}
