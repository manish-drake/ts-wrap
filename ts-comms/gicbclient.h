#ifndef GICBCLIENT_H
#define GICBCLIENT_H

#include "appclientbase.h"

#ifdef TS_SHELL
#include "endpoint.h"
#endif

#include <functional>


/*!
  @class Function Start It starts the UAT Client service, Stop stops the UAT Client service,
   getIsRunning returns true/false for IsRunning, getData Returns GICB Data as string,  .
*/
class GICBClient : AppClientBase
{
private:
    int getServiceDestination() const override
    {
        return 18;
    }
    bool m_isRunning;
    Json::Value m_gicbData;
    int m_subscriptionToken;
    bool m_countSet;
#ifdef TS_SHELL
    Endpoint m_endPoint;
#endif
    int m_token =0;
    std::function<void(const Json::Value &)> m_callback;

public:
    GICBClient(RouterClient &routerClient);
    void Start(const unsigned &route);
    void Stop();
    void Start(std::function<void(const Json::Value &)> &&callback, const unsigned &route);
    inline bool getIsRunning() const
    {
        return m_isRunning;
    }
    std::string getData(const char *key);
    void get(std::function<void(const Json::Value &)> &&callback, const int &arg);
    void Query(const int &bdsRegister);

    int modeSAddress = -1;
};

#endif // GICBCLIENT_H
