#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"
const unsigned int MESSAGEVERSION=0x0002
const unsigned int DESTINATION=0x0000


Json::Value messageReplySystemInfo(
        std::string _Version,
        unsigned int _LogLevel,
        unsigned int _LogModuleBits
        )
{
    CReplySystemInfo msg;
    msg.setVersion(_Version);
    msg.setLogLevel(_LogLevel);
    msg.setLogModuleBits(_LogModuleBits);
    return msg.get();
}


Json::Value messageReplyRFVersion(
        unsigned int _Value
        )
{
    CReplyRFVersion msg;
    msg.setValue(_Value);
    return msg.get();
}


Json::Value messageReplyFpgaVersion(
        unsigned int _Value
        )
{
    CReplyFpgaVersion msg;
    msg.setValue(_Value);
    return msg.get();
}


Json::Value messageReplyVersionsSummary(
        std::string _Summary,
        std::string _BSP,
        std::string _Testserver,
        unsigned int _FPGA,
        unsigned int _Max10
        )
{
    CReplyVersionsSummary msg;
    msg.setSummary(_Summary);
    msg.setBSP(_BSP);
    msg.setTestserver(_Testserver);
    msg.setFPGA(_FPGA);
    msg.setMax10(_Max10);
    return msg.get();
}
