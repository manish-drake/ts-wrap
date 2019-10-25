#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"
const unsigned int MESSAGEVERSION=0x0002
const unsigned int DESTINATION=0x000a


Json::Value messageCommandResponse(
        unsigned int _Result
        )
{
    CCommandResponse msg;
    msg.setResult(_Result);
    return msg.get();
}


Json::Value messageRFInit(
        )
{
    CRFInit msg;
    return msg.get();
}


Json::Value messageRFPath(
        unsigned int _Path,
        int _Index
        )
{
    CRFPath msg;
    msg.setPath(_Path);
    msg.setIndex(_Index);
    return msg.get();
}


Json::Value messageTXFreq(
        float _Freq,
        unsigned int _Mod,
        unsigned int _A,
        unsigned int _B,
        bool _DisableRetry,
        bool _Sync
        )
{
    CTXFreq msg;
    msg.setFreq(_Freq);
    msg.setMod(_Mod);
    msg.setA(_A);
    msg.setB(_B);
    msg.setDisableRetry(_DisableRetry);
    msg.setSync(_Sync);
    return msg.get();
}


Json::Value messageRXFreq(
        float _Freq,
        unsigned int _Mod,
        bool _DisableRetry,
        bool _Sync
        )
{
    CRXFreq msg;
    msg.setFreq(_Freq);
    msg.setMod(_Mod);
    msg.setDisableRetry(_DisableRetry);
    msg.setSync(_Sync);
    return msg.get();
}


Json::Value messageTXAtten(
        unsigned int _Fine,
        unsigned int _Coarse
        )
{
    CTXAtten msg;
    msg.setFine(_Fine);
    msg.setCoarse(_Coarse);
    return msg.get();
}


Json::Value messageRXAtten(
        unsigned int _Coarse
        )
{
    CRXAtten msg;
    msg.setCoarse(_Coarse);
    return msg.get();
}


Json::Value messageNCOOffset(
        unsigned int _Channel,
        int _Offset
        )
{
    CNCOOffset msg;
    msg.setChannel(_Channel);
    msg.setOffset(_Offset);
    return msg.get();
}


Json::Value messageDACGainBalance(
        unsigned int _Channel,
        float _IGain,
        float _QGain
        )
{
    CDACGainBalance msg;
    msg.setChannel(_Channel);
    msg.setIGain(_IGain);
    msg.setQGain(_QGain);
    return msg.get();
}


Json::Value messageRFEnable(
        bool _Enable,
        unsigned int _Flags
        )
{
    CRFEnable msg;
    msg.setEnable(_Enable);
    msg.setFlags(_Flags);
    return msg.get();
}


Json::Value messageModSource(
        unsigned int _Source
        )
{
    CModSource msg;
    msg.setSource(_Source);
    return msg.get();
}


Json::Value messageStartRXLevelMeasurement(
        )
{
    CStartRXLevelMeasurement msg;
    return msg.get();
}


Json::Value messageReadRXLevelMeasurement(
        )
{
    CReadRXLevelMeasurement msg;
    return msg.get();
}


Json::Value messageRXBandwidth(
        unsigned int _Bandwidth
        )
{
    CRXBandwidth msg;
    msg.setBandwidth(_Bandwidth);
    return msg.get();
}


Json::Value messageScopeMode(
        unsigned int _Mode,
        unsigned int _DecimationCount,
        unsigned int _BufferSize
        )
{
    CScopeMode msg;
    msg.setMode(_Mode);
    msg.setDecimationCount(_DecimationCount);
    msg.setBufferSize(_BufferSize);
    return msg.get();
}


Json::Value messageScopeCapture(
        )
{
    CScopeCapture msg;
    return msg.get();
}


Json::Value messageReadScopeBuffer(
        unsigned int _Channel,
        unsigned int _Size,
        bool _Signed,
        int _Bits
        )
{
    CReadScopeBuffer msg;
    msg.setChannel(_Channel);
    msg.setSize(_Size);
    msg.setSigned(_Signed);
    msg.setBits(_Bits);
    return msg.get();
}


Json::Value messageCalIQOffset(
        bool _Update,
        double _Freq
        )
{
    CCalIQOffset msg;
    msg.setUpdate(_Update);
    msg.setFreq(_Freq);
    return msg.get();
}


Json::Value messageSetDACIQOffset(
        int _IOffset,
        int _QOffset
        )
{
    CSetDACIQOffset msg;
    msg.setIOffset(_IOffset);
    msg.setQOffset(_QOffset);
    return msg.get();
}


Json::Value messageSetAuxDACIQ(
        unsigned int _IValue,
        unsigned int _QValue
        )
{
    CSetAuxDACIQ msg;
    msg.setIValue(_IValue);
    msg.setQValue(_QValue);
    return msg.get();
}


Json::Value messageSetRXThreshold(
        float _Threshold
        )
{
    CSetRXThreshold msg;
    msg.setThreshold(_Threshold);
    return msg.get();
}


Json::Value messageSetRXIQOffset(
        int _IOffset,
        int _QOffset
        )
{
    CSetRXIQOffset msg;
    msg.setIOffset(_IOffset);
    msg.setQOffset(_QOffset);
    return msg.get();
}


Json::Value messageSetRFPowerConfig(
        unsigned int _Mode
        )
{
    CSetRFPowerConfig msg;
    msg.setMode(_Mode);
    return msg.get();
}


Json::Value messageRFADC(
        unsigned int _ADC,
        unsigned int _Channel
        )
{
    CRFADC msg;
    msg.setADC(_ADC);
    msg.setChannel(_Channel);
    return msg.get();
}


Json::Value messageRFDetector(
        unsigned int _Detector
        )
{
    CRFDetector msg;
    msg.setDetector(_Detector);
    return msg.get();
}


Json::Value messageRFDetectorDAC(
        unsigned int _Value
        )
{
    CRFDetectorDAC msg;
    msg.setValue(_Value);
    return msg.get();
}


Json::Value messageTXRegisters(
        unsigned int _Reg0,
        unsigned int _Reg1,
        unsigned int _Reg2,
        unsigned int _Reg3,
        unsigned int _Reg4,
        unsigned int _Reg5
        )
{
    CTXRegisters msg;
    msg.setReg0(_Reg0);
    msg.setReg1(_Reg1);
    msg.setReg2(_Reg2);
    msg.setReg3(_Reg3);
    msg.setReg4(_Reg4);
    msg.setReg5(_Reg5);
    return msg.get();
}


Json::Value messageRXRegisters(
        unsigned int _Reg0,
        unsigned int _Reg1,
        unsigned int _Reg2,
        unsigned int _Reg3,
        unsigned int _Reg4,
        unsigned int _Reg5
        )
{
    CRXRegisters msg;
    msg.setReg0(_Reg0);
    msg.setReg1(_Reg1);
    msg.setReg2(_Reg2);
    msg.setReg3(_Reg3);
    msg.setReg4(_Reg4);
    msg.setReg5(_Reg5);
    return msg.get();
}


Json::Value messageDACGainControl(
        unsigned int _Channel,
        unsigned int _Value
        )
{
    CDACGainControl msg;
    msg.setChannel(_Channel);
    msg.setValue(_Value);
    return msg.get();
}


Json::Value messageTXAttenuation(
        unsigned int _Coarse,
        unsigned int _Step,
        float _Fine,
        int _Index
        )
{
    CTXAttenuation msg;
    msg.setCoarse(_Coarse);
    msg.setStep(_Step);
    msg.setFine(_Fine);
    msg.setIndex(_Index);
    return msg.get();
}


Json::Value messageAGCControl(
        unsigned int _Mode,
        unsigned int _Samples,
        unsigned int _Delay,
        unsigned int _Threshold
        )
{
    CAGCControl msg;
    msg.setMode(_Mode);
    msg.setSamples(_Samples);
    msg.setDelay(_Delay);
    msg.setThreshold(_Threshold);
    return msg.get();
}


Json::Value messageGetAGCCount(
        )
{
    CGetAGCCount msg;
    return msg.get();
}


Json::Value messageCALTXIQOffset(
        float _Freq
        )
{
    CCALTXIQOffset msg;
    msg.setFreq(_Freq);
    return msg.get();
}


Json::Value messageCALTXIQGainBal(
        float _Freq
        )
{
    CCALTXIQGainBal msg;
    msg.setFreq(_Freq);
    return msg.get();
}


Json::Value messagegetCalDetTemp(
        )
{
    CgetCalDetTemp msg;
    return msg.get();
}


Json::Value messageTXPower(
        float _Power
        )
{
    CTXPower msg;
    msg.setPower(_Power);
    return msg.get();
}
