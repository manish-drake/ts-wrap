#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"
const unsigned int MESSAGEVERSION=0x0002
const unsigned int DESTINATION=0x000c


Json::Value messageSystemInfo(
        )
{
    CSystemInfo msg;
    return msg.get();
}


Json::Value messageLogLevel(
        unsigned int _Level
        )
{
    CLogLevel msg;
    msg.setLevel(_Level);
    return msg.get();
}


Json::Value messageLoadImage(
        std::string _FileName
        )
{
    CLoadImage msg;
    msg.setFileName(_FileName);
    return msg.get();
}


Json::Value messageGetRFVersion(
        )
{
    CGetRFVersion msg;
    return msg.get();
}


Json::Value messageGetFpgaVersion(
        )
{
    CGetFpgaVersion msg;
    return msg.get();
}


Json::Value messageLogModule(
        unsigned int _SetBits,
        unsigned int _ClearBits
        )
{
    CLogModule msg;
    msg.setSetBits(_SetBits);
    msg.setClearBits(_ClearBits);
    return msg.get();
}


Json::Value messageServerExit(
        bool _Exit
        )
{
    CServerExit msg;
    msg.setExit(_Exit);
    return msg.get();
}


Json::Value messageSetVerbose(
        bool _Verbose
        )
{
    CSetVerbose msg;
    msg.setVerbose(_Verbose);
    return msg.get();
}


Json::Value messageVersionsSummary(
        )
{
    CVersionsSummary msg;
    return msg.get();
}
