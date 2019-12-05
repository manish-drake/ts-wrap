#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"
const unsigned int MESSAGEVERSION=0x0002
const unsigned int DESTINATION=0x0000


Json::Value messageDummyMessage(
        )
{
    CDummyMessage msg;
    return msg.get();
}
