#include "systemclient.h"
#include "messages/LogLevel.h"
#include "messages/LogModule.h"
#include "messages/GetFpgaVersion.h"
#include "messages/ReplyFpgaVersion.h"
#include <thread>

SystemClient::SystemClient(RouterClient &routerClient) : AppClientBase{routerClient}
{
}

/*!
  @brief It sets the log level and address for the router client.
  @param[in] level holds serial number for the level .
  @details It checks if the router client is connected and if reply is not pending,
   if true then it sets the level and address else.
*/
void SystemClient::SetLevel(int level)
{
    if (m_routerClient.isConnected() && !m_routerClient.isReplyPending())
    {
        CLogLevel logLevel;
        logLevel.setLevel(level);
        m_routerClient.Send(logLevel, this->getServiceDestination());
    }
    else {
        Logger::Instance()->Log(Level::Info, "systemClient", "Connected?: %i |Reply_Pending?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending());
    }
}

/*!
  @brief It sets the module level and address for the router client.
  @param[in] setBits, clearBits.
  @details It checks if the router client is connected and if reply is not pending, if true then it sets the level and address else.
*/
void SystemClient::SetModule(uint setBits, uint clearBits)
{
    if (m_routerClient.isConnected() && !m_routerClient.isReplyPending())
    {
        CLogModule logModule;
        logModule.setSetBits(setBits);
        logModule.setClearBits(clearBits);
        m_routerClient.Send(logModule, this->getServiceDestination());
    }
    else {
        Logger::Instance()->Log(Level::Info, "systemClient", "Connected?: %i |Reply_Pending?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending());
    }
}

SystemClient::Async SystemClient::GetFPGAVersionAsync()
{
    return Async([this]()->UINT{
        if (m_routerClient.isConnected() && !m_routerClient.isReplyPending())
        {
            UINT ver = 0;
            std::function<void(const Json::Value &)> callback = [&ver](const Json::Value &rep) {
                CReplyFpgaVersion replymsg;
                replymsg.set(rep);
                ver = replymsg.getValue();
            };

            CGetFpgaVersion getVer;
            subscription subscription{callback, getServiceDestination()};
            int subscriptionToken = m_routerClient.Subscribe(subscription);
            m_routerClient.Send(getVer, this->getServiceDestination());
            int timeout = 20;
            while (timeout-- && (ver==0))
            {
                std::this_thread::sleep_for(std::chrono::milliseconds(200));
            }
            m_routerClient.Unsubscribe(subscriptionToken);
            return ver;
        }
        else {
            Logger::Instance()->Log(Level::Info, "systemClient", "Connected?: %i |Reply_Pending?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending());
        }
        return 0;
    });
}
