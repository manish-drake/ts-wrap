#include "part43client.h"
#include "messages/IdentifyTransponder.h"
#include "messages/StartPart43Test.h"
#include "messages/FetchPart43TestResults.h"
#include "messages/StopPart43Test.h"
#include "messages/RunMode3ATest.h"
#include "messages/RunModeCTest.h"


Part43Client::Part43Client(RouterClient &routerClient):
    AppClientBase{routerClient},
    m_isRunning{false}
{

}

void Part43Client::Stop()
{
    m_routerClient.Unsubscribe(m_subscriptionToken);
    this->m_subscriptionToken = 0;
}

void Part43Client::IdentifyTransponder(const unsigned &port,
                                       const unsigned &address,
                                       const unsigned &Class,
                                       std::function<void (const Json::Value &)> &&callback)
{
    if (m_routerClient.isConnected() && !m_routerClient.isReplyPending() && !getIsRunning())
    {
        CIdentifyTransponder msg;
        msg.setPort(port);       //#enum (Port A, Port B, Ant)
        msg.setAddress(address); //#All zeros if it is a simple Transponder Indentification test and address of the transponder to query if user manually enters the address
        msg.setClass(Class);     //#Stays empty but default, but gets value from UI if user manually enters the values in case of manual Address entry
        m_routerClient.Send(msg, this->getServiceDestination(), false);
        subscription subscription{callback, getServiceDestination()};
        this->m_subscriptionToken = m_routerClient.Subscribe(subscription);
    }
    else {
        Logger::Instance()->Log(Level::Info, "Part43Client", "Connected?: %i |Reply_Pending?: %i |Running?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending(), getIsRunning());
    }
}

void Part43Client::StartPart43Test(const unsigned &antenna,
                                   const unsigned &distance,
                                   const unsigned &port,
                                   const unsigned &address,
                                   std::function<void (const Json::Value &)> &&callback)
{
    if (m_routerClient.isConnected() && !m_routerClient.isReplyPending() && !getIsRunning())
    {
        CStartPart43Test msg;
        msg.setAntenna(antenna);   //#0=single, 1=top, 2=bottom
        msg.setDistance(distance); //#Feet
        msg.setPort(port);         //#enum (PortA, PortB, Ant)
        msg.setAddress(address);   //#Address of the selected UUT
        m_routerClient.Send(msg, this->getServiceDestination(), false);
        subscription subscription{callback, getServiceDestination()};
        this->m_subscriptionToken = m_routerClient.Subscribe(subscription);
    }
    else {
        Logger::Instance()->Log(Level::Info, "Part43Client", "Connected?: %i |Reply_Pending?: %i |Running?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending(), getIsRunning());
    }
}

void Part43Client::FetchPart43TestResults(const unsigned &testNo, const bool &reRun, std::function<void (const Json::Value &)> &&callback)
{
    if (m_routerClient.isConnected() && !m_routerClient.isReplyPending() && !getIsRunning())
    {
        CFetchPart43TestResults msg;
        msg.setTestNo(testNo); //#0=summary(SummaryResultsMessage, (DetailedResultsMessages) 1=ModeS L1,2=ModeS L2plus...
        msg.setReRun(reRun);   //#True=rerun and refresh test, False=report current data
        m_routerClient.Send(msg, this->getServiceDestination(), false);
        subscription subscription{callback, getServiceDestination()};
        this->m_subscriptionToken = m_routerClient.Subscribe(subscription);
    }
    else {
        Logger::Instance()->Log(Level::Info, "Part43Client", "Connected?: %i |Reply_Pending?: %i |Running?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending(), getIsRunning());
    }
}

void Part43Client::StopPart43Test()
{
    if (m_routerClient.isConnected() && !m_routerClient.isReplyPending() && !getIsRunning())
    {
        m_isRunning = false;
        CStopPart43Test msg;
        m_routerClient.Send(msg, this->getServiceDestination(), false);
    }
    else {
        Logger::Instance()->Log(Level::Info, "Part43Client", "Connected?: %i |Reply_Pending?: %i |Running?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending(), getIsRunning());
    }
}

void Part43Client::RunMode3A(std::function<void (const Json::Value &)> &&callback)
{
    if (m_routerClient.isConnected() && !m_routerClient.isReplyPending() && !getIsRunning())
    {
        CRunMode3ATest msg;
        //msg.setRate(235); //default: 235; #The PRF or the rate at which the interrogations will be sent.
        //msg.setCount(10); //default: 10; #The number of 3A interrogations the user wants to send.
        //msg.setType(0);   //default: 0; #An enum from 0 to 3; full, basic, must_reply and must_NOT_reply.
        //msg.setPort(0);   //#The port that we will be using for interrogation; A, B or Direct.
        m_routerClient.Send(msg, this->getServiceDestination(), false);
        subscription subscription{callback, getServiceDestination()};
        this->m_subscriptionToken = m_routerClient.Subscribe(subscription);
    }
    else {
        Logger::Instance()->Log(Level::Info, "Part43Client", "Connected?: %i |Reply_Pending?: %i |Running?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending(), getIsRunning());
    }
}

void Part43Client::RunModeC(std::function<void (const Json::Value &)> &&callback)
{
    if (m_routerClient.isConnected() && !m_routerClient.isReplyPending() && !getIsRunning())
    {
        CRunModeCTest msg;
        //msg.setRate(235); //default: 235; #The PRF or the rate at which the interrogations will be sent.
        //msg.setCount(10); //default: 10; #The number of 3A interrogations the user wants to send.
        //msg.setType(0);   //default: 0; #An enum from 0 to 3; full, basic, must_reply and must_NOT_reply.
        //msg.setPort(0);   //#The port that we will be using for interrogation; A, B or Direct.
        m_routerClient.Send(msg, this->getServiceDestination(), false);
        subscription subscription{callback, getServiceDestination()};
        this->m_subscriptionToken = m_routerClient.Subscribe(subscription);
    }
    else {
        Logger::Instance()->Log(Level::Info, "Part43Client", "Connected?: %i |Reply_Pending?: %i |Running?: %i", m_routerClient.isConnected(), m_routerClient.isReplyPending(), getIsRunning());
    }
}
