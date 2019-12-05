#include "uatclient.h"
#include "messages/UATStart.h"
#include "messages/UATStop.h"
#include "messages/UATCount.h"

UATClient::UATClient(RouterClient &routerClient) : AppClientBase{routerClient},
    m_isRunning{false},
    m_countSet{false}
{
}

/*!
  @brief It sets the count.
  @param[in] count holds the count number.
  @details It checks if the router client is connected, if reply is not pending and UAT Data is not running,
   if true then it sets the count.
*/
void UATClient::SetCount(int count)
{
    if (m_routerClient.isConnected() && !m_routerClient.isReplyPending() && !getIsRunning())
    {
        if(!m_countSet)
        {
            m_countSet = true;
            CUATCount msg;
            msg.setCount(count);
            m_routerClient.Send(msg, this->getServiceDestination());
        }
    }
    else {
        Logger::Instance()->Log(Level::Info, "uatClient", "Connected?: %i |Reply_Pending?: %i |Running?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending(), getIsRunning());
    }
}

/*!
  @brief It starts the UAT Client service.
*/
void UATClient::Start()
{
    auto delegate = [this](const Json::Value &reply) -> void {
        this->m_data = reply;
    };
    this->Start(delegate);
}

/*!
  @brief It starts the UAT Client service.
  @param[in] callback .
  @details It checks if the router client is connected, if reply is not pending and UAT Data is not running,
  if true then it sets the mode and address, setting isRunning to true.
*/
void UATClient::Start(std::function<void(const Json::Value &)> &&callback)
{
    if (m_routerClient.isConnected() && !m_routerClient.isReplyPending() && !getIsRunning())
    {
        CUATStart msg;
        msg.setAddress(m_routerClient.getAddress());
        msg.setMode(0);
        m_routerClient.Send(msg, this->getServiceDestination(), false);

        subscription subscription{callback, getServiceDestination()};
        this->m_subscriptionToken = m_routerClient.Subscribe(subscription);
        m_isRunning = true;
    }
    else {
        Logger::Instance()->Log(Level::Info, "uatClient", "Connected?: %i |Reply_Pending?: %i |Running?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending(), getIsRunning());
    }
}

/*!
  @brief It stops the UAT Client service.
  @details It checks if the router client is connected, if reply is not pending and UAT Data is not running,
  if true then it sets the address, Unsubscribes the token .
*/
void UATClient::Stop()
{
    if (m_routerClient.isConnected() && !m_routerClient.isReplyPending() && getIsRunning())
    {
        m_isRunning = false;
        CUATStop msg;
        m_routerClient.Send(msg, this->getServiceDestination());
        m_routerClient.Unsubscribe(this->m_subscriptionToken);
    }
    else {
        Logger::Instance()->Log(Level::Info, "uatClient", "Connected?: %i |Reply_Pending?: %i |Running?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending(), getIsRunning());
    }
}

/*!
  @brief Returns UAT Data as string.
  @param[in] key is the get value for key.
*/
std::string UATClient::getData(const char *key)
{
    return m_data[key].asString();
}
