#ifndef PART43CLIENT_H
#define PART43CLIENT_H

#include "appclientbase.h"

class Part43Client : AppClientBase
{
private:
    int getServiceDestination() const override
    {
        return 19;
    }
    bool m_isRunning;
    int m_subscriptionToken;

    inline bool getIsRunning() const
    {
        return m_isRunning;
    }

public:
    Part43Client(RouterClient &routerClient);
    void Stop();
    void IdentifyTransponder(const unsigned &port, const unsigned &address, const unsigned &Class, std::function<void(const Json::Value &)> &&callback);
    void StartPart43Test(const unsigned &antenna, const unsigned &distance, const unsigned &port, const unsigned &address, std::function<void (const Json::Value &)> &&callback);
    void FetchPart43TestResults(const unsigned &testNo, const bool &reRun, std::function<void (const Json::Value &)> &&callback);
    void StopPart43Test();
    void RunMode3A(std::function<void(const Json::Value &)> &&callback);
    void RunModeC(std::function<void(const Json::Value &)> &&callback);
};

#endif // PART43CLIENT_H
