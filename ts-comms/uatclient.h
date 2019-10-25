#ifndef UATCLIENT_H
#define UATCLIENT_H

#include <functional>
#include "appclientbase.h"
#include "json.h"

/*!
  @class Function SetCount Returns UAT ADSB Message, getIsRunning returns true/false for isRunning,
         Start starts the UAT Client, Stop stops the UAT Client service service,
         getData Returns UAT Data as string.
*/
class UATClient : AppClientBase
{
  private:
    int getServiceDestination() const override
    {
        return 11;
    }
    bool m_isRunning;
    Json::Value m_data;
    int m_subscriptionToken;
    bool m_countSet;

  public:
    UATClient(RouterClient &routerClient);
    void SetCount(int count);
    void Start();
    void Start(std::function<void(const Json::Value &)> &&callback);
    void Stop();
    inline bool getIsRunning() const
    {
        return m_isRunning;
    }
    std::string getData(const char *key);
};

#endif //UATCLIENT_H
