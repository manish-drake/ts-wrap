#ifndef ROUTERCLIENT_H
#define ROUTERCLIENT_H

#include <functional>
#include <map>
#include <memory>
#include <iostream>
#include "zlistener.h"
#include "zclient.h"
#include "messages/TServerMessage.h"
#include "semaphore.h"
#include "logger.h"

using namespace std;

class RouterClient;

using up_routerClient = std::unique_ptr<RouterClient>;
using subscription_callback = std::function<void(const Json::Value &)>;
struct subscription
{
    subscription_callback Callback;
    int ServiceDestination;
    subscription() = default;
    subscription(subscription_callback &callback, int serviceDestination): Callback{callback},
        ServiceDestination{serviceDestination}
    {

    }
    void Disable()
    {
        Callback = nullptr;
    }
};

/*!
  @class Functions Start Starts the service, RouterClient, isConnected Returns true/false ,getAddress Returns router client address,
  isReplyPending, Send Sends the Router client request, Subscribe Returns subscription token, Unsubscribe  Erases the subscription token,
  Close Closes the listener and router client Service.
*/
class RouterClient
{
    const bool PENDNG = true; const bool RECVD = false;
    bool m_msgReply;
    int m_sequence;
    int m_address;
    string m_localEndpoint;
    string m_serverEndpoint;
    up_listener m_listener;
    up_client m_client;
    std::map<int, subscription> m_subscriptions;

    Semaphore m_semaphore;
    inline int getNextSequence()
    {
        return m_sequence++;
    }
    RouterClient();
    bool handleInboundMessage(const string &message, string &reply);
    string listenerCallback(const string &msg);
    int getRegistered(const string &localEndpoint);
    void getRegisteredAsync(const string &localEndpoint, const char *serverEndpoint, std::function<void(int)> callback);

public:
    void Start(const char* localEndpoint, const char* serverEndpoint);
    static RouterClient* m_singleton;
    static RouterClient& Instance()
    {
        if(!m_singleton)
        {
            m_singleton = new RouterClient;
        }
        return *m_singleton;
    }
    inline bool isConnected() const
    {
        return ((m_address > 0 ) && m_listener->isRunning());
    }
    inline int getAddress() const
    {
        return m_address;
    }
    inline bool isReplyPending() const
    {
        return m_msgReply == PENDNG;
    }
    bool Send(TServerMessage &message, int destination, bool wait = true);
    int Subscribe(subscription &subscription_callback);
    void Unsubscribe(int token);
    void Close();
    ~RouterClient()
    {
        Logger::Instance()->Log(Level::Info, "router_client", "Router client destroyed!!!");
    }
};

#endif //ROUTERCLIENT_H
