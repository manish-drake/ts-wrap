#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"
const unsigned int MESSAGEVERSION=0x0002
const unsigned int DESTINATION=0x000d


Json::Value messageFpgaPeek(
        unsigned int _Address
        )
{
    CFpgaPeek msg;
    msg.setAddress(_Address);
    return msg.get();
}


Json::Value messageFpgaPoke(
        unsigned int _Address,
        unsigned int _Value
        )
{
    CFpgaPoke msg;
    msg.setAddress(_Address);
    msg.setValue(_Value);
    return msg.get();
}


Json::Value messageRFPeek(
        unsigned int _Address
        )
{
    CRFPeek msg;
    msg.setAddress(_Address);
    return msg.get();
}


Json::Value messageRFPoke(
        unsigned int _Address,
        unsigned int _Value
        )
{
    CRFPoke msg;
    msg.setAddress(_Address);
    msg.setValue(_Value);
    return msg.get();
}


Json::Value messageFpgaPower(
        bool _On
        )
{
    CFpgaPower msg;
    msg.setOn(_On);
    return msg.get();
}


Json::Value messageExecuteFunction(
        unsigned int _FunctionID
        )
{
    CExecuteFunction msg;
    msg.setFunctionID(_FunctionID);
    return msg.get();
}


Json::Value messageWriteSPI2(
        unsigned int _Address,
        unsigned int _Value
        )
{
    CWriteSPI2 msg;
    msg.setAddress(_Address);
    msg.setValue(_Value);
    return msg.get();
}


Json::Value messageWriteSPI3(
        unsigned int _Value
        )
{
    CWriteSPI3 msg;
    msg.setValue(_Value);
    return msg.get();
}


Json::Value messageWriteSPI4(
        unsigned int _Address,
        unsigned int _Value
        )
{
    CWriteSPI4 msg;
    msg.setAddress(_Address);
    msg.setValue(_Value);
    return msg.get();
}


Json::Value messageWriteFpgaBuffer(
        unsigned int _Address,
        std::vector<unsigned int> _Buffer,
        unsigned int _Length
        )
{
    CWriteFpgaBuffer msg;
    msg.setAddress(_Address);
    msg.setBuffer(_Buffer);
    msg.setLength(_Length);
    return msg.get();
}


Json::Value messageReadFpgaBuffer(
        unsigned int _Address,
        unsigned int _Length
        )
{
    CReadFpgaBuffer msg;
    msg.setAddress(_Address);
    msg.setLength(_Length);
    return msg.get();
}


Json::Value messageSendRegs(
        std::vector<std::string> _Commands
        )
{
    CSendRegs msg;
    msg.setCommands(_Commands);
    return msg.get();
}
