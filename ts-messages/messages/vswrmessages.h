#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"
const unsigned int MESSAGEVERSION=0x0002
const unsigned int DESTINATION=0x6001


Json::Value messageInitiateVSWR(
        )
{
    CInitiateVSWR msg;
    return msg.get();
}


Json::Value messageStartVSWRCalibration(
        unsigned int _CalAction
        )
{
    CStartVSWRCalibration msg;
    msg.setCalAction(_CalAction);
    return msg.get();
}


Json::Value messageStartVSWRTest(
        float _StartFreq,
        float _StopFreq
        )
{
    CStartVSWRTest msg;
    msg.setStartFreq(_StartFreq);
    msg.setStopFreq(_StopFreq);
    return msg.get();
}
