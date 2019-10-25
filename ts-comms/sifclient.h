#ifndef SIFCLIENT_H
#define SIFCLIENT_H


#include <functional>
#include "appclientbase.h"
#include "json.h"

/*!
  @class Function Start starts the SIFClient service, Stop stops the UAT Client service  getIsRunning returns true/false for IsRunning, getData returns UAT data as string   .
*/
class SIFClient : AppClientBase
{
  private:
    int getServiceDestination() const override
    {
        return 16;
    }
    bool m_isRunning;
    Json::Value m_data;
    int m_subscriptionToken;
    bool m_countSet;

  public:
    SIFClient(RouterClient &routerClient);
    void Start(const unsigned &route);
    void Start(std::function<void(const Json::Value &)> &&callback, const unsigned &route);
    void Stop();
    inline bool getIsRunning() const
    {
        return m_isRunning;
    }
    std::string getData(const char *key);
};

#endif // SIFCLIENT_H
