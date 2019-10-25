#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"
const unsigned int MESSAGEVERSION=0x0002
const unsigned int DESTINATION=0x0012


Json::Value messageGICBStart(
        unsigned int _Port,
        unsigned int _Endpoint
        )
{
    CGICBStart msg;
    msg.setPort(_Port);
    msg.setEndpoint(_Endpoint);
    return msg.get();
}


Json::Value messageGICBStop(
        )
{
    CGICBStop msg;
    return msg.get();
}


Json::Value messageGICBData(
        )
{
    CGICBData msg;
    return msg.get();
}


Json::Value messageGICBInterrogate(
        unsigned int _BDSRegister,
        unsigned int _ModeSUFFormat,
        unsigned int _ModeSAddress
        )
{
    CGICBInterrogate msg;
    msg.setBDSRegister(_BDSRegister);
    msg.setModeSUFFormat(_ModeSUFFormat);
    msg.setModeSAddress(_ModeSAddress);
    return msg.get();
}
