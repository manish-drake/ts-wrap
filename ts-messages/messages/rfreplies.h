#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"
const unsigned int MESSAGEVERSION=0x0002
const unsigned int DESTINATION=0x0000


Json::Value messageReplyRXLevelMeasurement(
        unsigned int _Level
        )
{
    CReplyRXLevelMeasurement msg;
    msg.setLevel(_Level);
    return msg.get();
}


Json::Value messageReplyScopeBuffer(
        unsigned int _Channel,
        unsigned int _Size,
        std::vector<int> _Data,
        bool _Signed
        )
{
    CReplyScopeBuffer msg;
    msg.setChannel(_Channel);
    msg.setSize(_Size);
    msg.setData(_Data);
    msg.setSigned(_Signed);
    return msg.get();
}


Json::Value messageReplyIQCal(
        int _IOffset,
        int _QOffset
        )
{
    CReplyIQCal msg;
    msg.setIOffset(_IOffset);
    msg.setQOffset(_QOffset);
    return msg.get();
}


Json::Value messageReplyRFADC(
        unsigned int _Raw,
        unsigned int _Voltage
        )
{
    CReplyRFADC msg;
    msg.setRaw(_Raw);
    msg.setVoltage(_Voltage);
    return msg.get();
}


Json::Value messageReplyRFDetector(
        unsigned int _Value
        )
{
    CReplyRFDetector msg;
    msg.setValue(_Value);
    return msg.get();
}


Json::Value messageAGCCountReply(
        unsigned int _Count
        )
{
    CAGCCountReply msg;
    msg.setCount(_Count);
    return msg.get();
}


Json::Value messageReplyCALTXIQOffset(
        float _Freq,
        float _Suppression,
        unsigned int _IOffset,
        unsigned int _QOffset
        )
{
    CReplyCALTXIQOffset msg;
    msg.setFreq(_Freq);
    msg.setSuppression(_Suppression);
    msg.setIOffset(_IOffset);
    msg.setQOffset(_QOffset);
    return msg.get();
}


Json::Value messageReplyCALTXIQGainBal(
        float _Freq,
        float _IBal,
        float _QBal,
        float _DeltaPWR
        )
{
    CReplyCALTXIQGainBal msg;
    msg.setFreq(_Freq);
    msg.setIBal(_IBal);
    msg.setQBal(_QBal);
    msg.setDeltaPWR(_DeltaPWR);
    return msg.get();
}


Json::Value messageReplyCalDetTemp(
        float _Temp
        )
{
    CReplyCalDetTemp msg;
    msg.setTemp(_Temp);
    return msg.get();
}
