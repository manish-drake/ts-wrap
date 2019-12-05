#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"
const unsigned int MESSAGEVERSION=0x0002
const unsigned int DESTINATION=0x0013


Json::Value messagePart43Start(
        unsigned int _Endpoint,
        bool _Run,
        unsigned int _TestSelect,
        float _CableLoss,
        unsigned int _Port
        )
{
    CPart43Start msg;
    msg.setEndpoint(_Endpoint);
    msg.setRun(_Run);
    msg.setTestSelect(_TestSelect);
    msg.setCableLoss(_CableLoss);
    msg.setPort(_Port);
    return msg.get();
}


Json::Value messagePart43Stop(
        )
{
    CPart43Stop msg;
    return msg.get();
}


Json::Value messagePart43CoarseMTL(
        unsigned int _Port
        )
{
    CPart43CoarseMTL msg;
    msg.setPort(_Port);
    return msg.get();
}


Json::Value messagePart43IdentfyTransponder(
        )
{
    CPart43IdentfyTransponder msg;
    return msg.get();
}


Json::Value messageInterrogateModeS(
        unsigned int _BDS,
        unsigned int _UF
        )
{
    CInterrogateModeS msg;
    msg.setBDS(_BDS);
    msg.setUF(_UF);
    return msg.get();
}


Json::Value messageGetCA(
        )
{
    CGetCA msg;
    return msg.get();
}


Json::Value messageGetBDS65(
        )
{
    CGetBDS65 msg;
    return msg.get();
}


Json::Value messageGetMOPSVer(
        )
{
    CGetMOPSVer msg;
    return msg.get();
}


Json::Value messageGetBDS05(
        )
{
    CGetBDS05 msg;
    return msg.get();
}


Json::Value messageStartPart43Test(
        unsigned int _Antenna,
        unsigned int _Distance,
        unsigned int _Port,
        unsigned int _Address
        )
{
    CStartPart43Test msg;
    msg.setAntenna(_Antenna);
    msg.setDistance(_Distance);
    msg.setPort(_Port);
    msg.setAddress(_Address);
    return msg.get();
}


Json::Value messageRunPart43Test(
        unsigned int _InterNum,
        unsigned int _InterRate
        )
{
    CRunPart43Test msg;
    msg.setInterNum(_InterNum);
    msg.setInterRate(_InterRate);
    return msg.get();
}


Json::Value messageStopPart43Test(
        )
{
    CStopPart43Test msg;
    return msg.get();
}


Json::Value messageRunMode3ATest(
        unsigned int _InterNum,
        unsigned int _InterRate,
        unsigned int _Port
        )
{
    CRunMode3ATest msg;
    msg.setInterNum(_InterNum);
    msg.setInterRate(_InterRate);
    msg.setPort(_Port);
    return msg.get();
}


Json::Value messageRunMode3AMTL(
        unsigned int _InterNum,
        unsigned int _InterRate,
        unsigned int _Port
        )
{
    CRunMode3AMTL msg;
    msg.setInterNum(_InterNum);
    msg.setInterRate(_InterRate);
    msg.setPort(_Port);
    return msg.get();
}


Json::Value messageRunMode3AMustReply(
        unsigned int _InterNum,
        unsigned int _InterRate,
        unsigned int _P2Amplitude,
        unsigned int _Port
        )
{
    CRunMode3AMustReply msg;
    msg.setInterNum(_InterNum);
    msg.setInterRate(_InterRate);
    msg.setP2Amplitude(_P2Amplitude);
    msg.setPort(_Port);
    return msg.get();
}


Json::Value messageRunMode3AMustNotReply(
        unsigned int _InterNum,
        unsigned int _InterRate,
        unsigned int _Port
        )
{
    CRunMode3AMustNotReply msg;
    msg.setInterNum(_InterNum);
    msg.setInterRate(_InterRate);
    msg.setPort(_Port);
    return msg.get();
}


Json::Value messageRunModeCTest(
        unsigned int _InterNum,
        unsigned int _InterRate,
        unsigned int _Port
        )
{
    CRunModeCTest msg;
    msg.setInterNum(_InterNum);
    msg.setInterRate(_InterRate);
    msg.setPort(_Port);
    return msg.get();
}


Json::Value messageRunModeCMTL(
        unsigned int _InterNum,
        unsigned int _InterRate,
        unsigned int _P2Amplitude,
        unsigned int _Port
        )
{
    CRunModeCMTL msg;
    msg.setInterNum(_InterNum);
    msg.setInterRate(_InterRate);
    msg.setP2Amplitude(_P2Amplitude);
    msg.setPort(_Port);
    return msg.get();
}


Json::Value messageRunModeCMustReply(
        unsigned int _InterNum,
        unsigned int _InterRate,
        unsigned int _Port
        )
{
    CRunModeCMustReply msg;
    msg.setInterNum(_InterNum);
    msg.setInterRate(_InterRate);
    msg.setPort(_Port);
    return msg.get();
}


Json::Value messageRunModeCMustNotReply(
        unsigned int _InterNum,
        unsigned int _InterRate,
        unsigned int _Port
        )
{
    CRunModeCMustNotReply msg;
    msg.setInterNum(_InterNum);
    msg.setInterRate(_InterRate);
    msg.setPort(_Port);
    return msg.get();
}


Json::Value messageInterrogate(
        unsigned int _Mode,
        unsigned int _Rate,
        unsigned int _Count,
        unsigned int _Cycles
        )
{
    CInterrogate msg;
    msg.setMode(_Mode);
    msg.setRate(_Rate);
    msg.setCount(_Count);
    msg.setCycles(_Cycles);
    return msg.get();
}
