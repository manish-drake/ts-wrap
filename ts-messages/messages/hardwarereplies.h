#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"
const unsigned int MESSAGEVERSION=0x0002
const unsigned int DESTINATION=0x0000


Json::Value messageReplyPeek(
        unsigned int _Value
        )
{
    CReplyPeek msg;
    msg.setValue(_Value);
    return msg.get();
}


Json::Value messageReplyRFPeek(
        unsigned int _Value
        )
{
    CReplyRFPeek msg;
    msg.setValue(_Value);
    return msg.get();
}


Json::Value messageReplyReadFpgaBuffer(
        std::vector<unsigned int> _Buffer
        )
{
    CReplyReadFpgaBuffer msg;
    msg.setBuffer(_Buffer);
    return msg.get();
}


Json::Value messageReplySendRegs(
        unsigned int _Commands,
        unsigned int _Time
        )
{
    CReplySendRegs msg;
    msg.setCommands(_Commands);
    msg.setTime(_Time);
    return msg.get();
}
