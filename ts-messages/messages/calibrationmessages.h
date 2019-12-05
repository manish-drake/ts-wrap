#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"
const unsigned int MESSAGEVERSION=0x0002
const unsigned int DESTINATION=0x000e


Json::Value messageInitiateCalibration(
        )
{
    CInitiateCalibration msg;
    return msg.get();
}


Json::Value messageRFVoltageRegulatorTest(
        unsigned int _TestType
        )
{
    CRFVoltageRegulatorTest msg;
    msg.setTestType(_TestType);
    return msg.get();
}


Json::Value messageSetLimits(
        std::string _LimitsFilename
        )
{
    CSetLimits msg;
    msg.setLimitsFilename(_LimitsFilename);
    return msg.get();
}


Json::Value messageSetPresets(
        std::string _PresetsFilename
        )
{
    CSetPresets msg;
    msg.setPresetsFilename(_PresetsFilename);
    return msg.get();
}


Json::Value messageSetMfgCal(
        std::string _MfgCalFilename
        )
{
    CSetMfgCal msg;
    msg.setMfgCalFilename(_MfgCalFilename);
    return msg.get();
}


Json::Value messageSetFreq(
        std::string _FreqFilename
        )
{
    CSetFreq msg;
    msg.setFreqFilename(_FreqFilename);
    return msg.get();
}


Json::Value messageRFSynthesizerTest(
        unsigned int _TestType
        )
{
    CRFSynthesizerTest msg;
    msg.setTestType(_TestType);
    return msg.get();
}


Json::Value messageRXIQDemOffsetTest(
        double _Freq
        )
{
    CRXIQDemOffsetTest msg;
    msg.setFreq(_Freq);
    return msg.get();
}


Json::Value messageTXRefTuningTest(
        double _Freq
        )
{
    CTXRefTuningTest msg;
    msg.setFreq(_Freq);
    return msg.get();
}


Json::Value messageTempSensorTest(
        )
{
    CTempSensorTest msg;
    return msg.get();
}


Json::Value messageAssemblyRevTest(
        )
{
    CAssemblyRevTest msg;
    return msg.get();
}


Json::Value messageCalDetTest(
        )
{
    CCalDetTest msg;
    return msg.get();
}


Json::Value messageVSWRDetTest(
        )
{
    CVSWRDetTest msg;
    return msg.get();
}


Json::Value messageDirDetTest(
        )
{
    CDirDetTest msg;
    return msg.get();
}


Json::Value messageThldDetTest(
        )
{
    CThldDetTest msg;
    return msg.get();
}


Json::Value messageTXIQModOffsetTest(
        double _Freq
        )
{
    CTXIQModOffsetTest msg;
    msg.setFreq(_Freq);
    return msg.get();
}


Json::Value messageTXIQGainBalTest(
        double _Freq
        )
{
    CTXIQGainBalTest msg;
    msg.setFreq(_Freq);
    return msg.get();
}


Json::Value messageTXStepAttenTest(
        double _Freq
        )
{
    CTXStepAttenTest msg;
    msg.setFreq(_Freq);
    return msg.get();
}


Json::Value messageTXCoarseAttenTest(
        double _Freq
        )
{
    CTXCoarseAttenTest msg;
    msg.setFreq(_Freq);
    return msg.get();
}


Json::Value messageRXAttenuatorTest(
        double _Freq
        )
{
    CRXAttenuatorTest msg;
    msg.setFreq(_Freq);
    return msg.get();
}


Json::Value messageRXBWTest(
        unsigned int _TestType,
        double _Freq
        )
{
    CRXBWTest msg;
    msg.setTestType(_TestType);
    msg.setFreq(_Freq);
    return msg.get();
}


Json::Value messageRunBITTest(
        bool _RunAlignment,
        double _Freq
        )
{
    CRunBITTest msg;
    msg.setRunAlignment(_RunAlignment);
    msg.setFreq(_Freq);
    return msg.get();
}


Json::Value messageTXBWTest(
        double _Freq
        )
{
    CTXBWTest msg;
    msg.setFreq(_Freq);
    return msg.get();
}


Json::Value messageRXIQGainTest(
        double _Freq
        )
{
    CRXIQGainTest msg;
    msg.setFreq(_Freq);
    return msg.get();
}
