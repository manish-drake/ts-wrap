#include "navclient.h"
#include "messages/ADSBStart.h"
#include "messages/ADSBStop.h"
#include "messages/ADSB1090FindAll.h"
#include "messages/MBFreq.h"

NavClient::NavClient(RouterClient &routerClient) : AppClientBase{routerClient},
    m_isRunning{false},
    m_countSet{false}
{
}

void NavClient::setMBFreq(const double& freq)
{
    CMBFreq msg;
    Json::Value reply;
    if(freq >= 72 && freq <= 78)
    {
        msg.setFreq(freq);

        m_routerClient.Send(msg, this->getServiceDestination(), false);   
    }
    else
    {
        printf("Frequency not in Range, MB is 72-78MHZ");
    }
}
/*!
  @brief It starts the NavClient service.
*/
void NavClient::Start(const unsigned &route)
{
    auto delegate = [this](const Json::Value &reply) -> void {
        this->m_data = reply;
    };
    this->Start(delegate, route);
}
/*!
  @brief It starts the UAT Client service.
  @param[in] callback .
  @details It checks if the router client is connected, if reply is not pending and UAT Data is not running,
  if true then it sets the mode and address, setting isRunning to true.
*/
void NavClient::Start(std::function<void(const Json::Value &)> &&callback, const unsigned &route)
{
    if (m_routerClient.isConnected() && !m_routerClient.isReplyPending() && !getIsRunning())
    {
        CADSB1090FindAll msg;
        msg.setPort(route);
        msg.setEndpoint(m_routerClient.getAddress());
        m_routerClient.Send(msg, this->getServiceDestination(), false);

        subscription subscription{callback, getServiceDestination()};
        this->m_subscriptionToken = m_routerClient.Subscribe(subscription);
        m_isRunning = true;
    }
    else {
        Logger::Instance()->Log(Level::Info, "navclient", "Connected?: %i |Reply_Pending?: %i |Running?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending(), getIsRunning());
    }
}

/*!
  @brief It stops the UAT Client service.
  @details It checks if the router client is connected, if reply is not pending and UAT Data is not running,
  if true then it sets the address, Unsubscribes the token .
*/
void NavClient::Stop()
{
    if (m_routerClient.isConnected() && !m_routerClient.isReplyPending() && getIsRunning())
    {
        m_isRunning = false;
        CADSBStop msg;
        m_routerClient.Send(msg, this->getServiceDestination());
        m_routerClient.Unsubscribe(this->m_subscriptionToken);
    }
    else {
        Logger::Instance()->Log(Level::Info, "navclient", "Connected?: %i |Reply_Pending?: %i |Running?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending(), getIsRunning());
    }
}

/*!
  @brief Returns UAT data as string .
  @param[in] index .
*/
std::string NavClient::getData(const char *key)
{
    return m_data[key].asString();
}
