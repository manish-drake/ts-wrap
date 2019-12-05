#ifndef NAVCLIENT_H
#define NAVCLIENT_H


#include <functional>
#include "appclientbase.h"
#include "json.h"

/*!
  @class Function Start starts the NavClient service, Stop stops the UAT Client service  getIsRunning returns true/false for IsRunning, getData returns UAT data as string   .
*/
class NavClient : AppClientBase
{
  private:
    int getServiceDestination() const override
    {
        return 20;
    }
    bool m_isRunning;
    Json::Value m_data;
    int m_subscriptionToken;
    bool m_countSet;

  public:
    NavClient(RouterClient &routerClient);
    void Start(const unsigned &route);
    void Start(std::function<void(const Json::Value &)> &&callback, const unsigned &route);
    void Stop();
    void setMBFreq(const double& freq);
    inline bool getIsRunning() const
    {
        return m_isRunning;
    }
    std::string getData(const char *key);
};

#endif // NAVCLIENT_H
