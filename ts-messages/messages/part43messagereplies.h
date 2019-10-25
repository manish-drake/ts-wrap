#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"


Json::Value messagePart43CoarseMTLReply(
        float _MTL
        )
{
    CPart43CoarseMTLReply msg;
    msg.setMTL(_MTL);
    return msg.get();
}


Json::Value messagePart43Results(
        float _MTL_ModeA,
        float _MTL_ModeC,
        bool _MustReply_ModeA,
        unsigned int _MustReply_ModeA_Pct,
        bool _MustReply_ModeC,
        bool _MTL_DifferencePass,
        float _MTL_Difference
        )
{
    CPart43Results msg;
    msg.setMTL_ModeA(_MTL_ModeA);
    msg.setMTL_ModeC(_MTL_ModeC);
    msg.setMustReply_ModeA(_MustReply_ModeA);
    msg.setMustReply_ModeA_Pct(_MustReply_ModeA_Pct);
    msg.setMustReply_ModeC(_MustReply_ModeC);
    msg.setMTL_DifferencePass(_MTL_DifferencePass);
    msg.setMTL_Difference(_MTL_Difference);
    return msg.get();
}


Json::Value messagePart43TransponderInfo(
        )
{
    CPart43TransponderInfo msg;
    return msg.get();
}


Json::Value messagePart43SummaryResults(
        std::string _UutType,
        float _ReplyFrequency,
        float _RfPeakOutputPower,
        float _ReceiverSensitivity,
        bool _Suppression,
        bool _DiversityIsolation,
        bool _PulseMeasurements,
        unsigned int _ModeACode,
        unsigned int _ModeCAltitude,
        unsigned int _ModeSAddress,
        std::string _CommCapability,
        bool _ModeSOnlyAllCall,
        bool _AtcrbsMsAllCall,
        bool _AtcrbsOnlyAllCall,
        bool _ModeSSquitter,
        bool _ModeSFormats,
        bool _IdAndAltitudeMatch,
        std::string _FlightId,
        std::string _Icao24BitAddress,
        unsigned int _VerticalStatus,
        unsigned int _FlightStatus
        )
{
    CPart43SummaryResults msg;
    msg.setUutType(_UutType);
    msg.setReplyFrequency(_ReplyFrequency);
    msg.setRfPeakOutputPower(_RfPeakOutputPower);
    msg.setReceiverSensitivity(_ReceiverSensitivity);
    msg.setSuppression(_Suppression);
    msg.setDiversityIsolation(_DiversityIsolation);
    msg.setPulseMeasurements(_PulseMeasurements);
    msg.setModeACode(_ModeACode);
    msg.setModeCAltitude(_ModeCAltitude);
    msg.setModeSAddress(_ModeSAddress);
    msg.setCommCapability(_CommCapability);
    msg.setModeSOnlyAllCall(_ModeSOnlyAllCall);
    msg.setAtcrbsMsAllCall(_AtcrbsMsAllCall);
    msg.setAtcrbsOnlyAllCall(_AtcrbsOnlyAllCall);
    msg.setModeSSquitter(_ModeSSquitter);
    msg.setModeSFormats(_ModeSFormats);
    msg.setIdAndAltitudeMatch(_IdAndAltitudeMatch);
    msg.setFlightId(_FlightId);
    msg.setIcao24BitAddress(_Icao24BitAddress);
    msg.setVerticalStatus(_VerticalStatus);
    msg.setFlightStatus(_FlightStatus);
    return msg.get();
}


Json::Value messageRadioReplyFrequency(
        unsigned int _Result,
        float _ModeAReply,
        float _ModeCReply,
        float _ModeSReply
        )
{
    CRadioReplyFrequency msg;
    msg.setResult(_Result);
    msg.setModeAReply(_ModeAReply);
    msg.setModeCReply(_ModeCReply);
    msg.setModeSReply(_ModeSReply);
    return msg.get();
}


Json::Value messageRfPeakOutputPower(
        float _ModeA,
        float _ModeC,
        float _ModeS
        )
{
    CRfPeakOutputPower msg;
    msg.setModeA(_ModeA);
    msg.setModeC(_ModeC);
    msg.setModeS(_ModeS);
    return msg.get();
}


Json::Value messageReceiverSensitivity(
        float _ModeAMtl,
        float _ModeCMtl,
        float _ModeSMtl
        )
{
    CReceiverSensitivity msg;
    msg.setModeAMtl(_ModeAMtl);
    msg.setModeCMtl(_ModeCMtl);
    msg.setModeSMtl(_ModeSMtl);
    return msg.get();
}


Json::Value messageSuppression(
        float _AtcrbsSuppresionOff,
        float _AtcrbsSuppresionOn,
        float _ModeSSuppresionOff,
        float _ModeSSuppresionOn
        )
{
    CSuppression msg;
    msg.setAtcrbsSuppresionOff(_AtcrbsSuppresionOff);
    msg.setAtcrbsSuppresionOn(_AtcrbsSuppresionOn);
    msg.setModeSSuppresionOff(_ModeSSuppresionOff);
    msg.setModeSSuppresionOn(_ModeSSuppresionOn);
    return msg.get();
}


Json::Value messageModeSDiversityChannelIsolation(
        float _SelectedVsNonSelectedAntennaIsolation
        )
{
    CModeSDiversityChannelIsolation msg;
    msg.setSelectedVsNonSelectedAntennaIsolation(_SelectedVsNonSelectedAntennaIsolation);
    return msg.get();
}


Json::Value messagePulseMeasurements(
        float _ModeAWidth,
        float _ModeASpacing,
        float _ModeADroop,
        float _ModeAJitter,
        bool _ModeAResult,
        float _ModeCWidth,
        float _ModeCSpacing,
        float _ModeCDroop,
        float _ModeCJitter,
        bool _ModeCResult,
        float _ModeSWidth,
        float _ModeSSpacing,
        float _ModeSDroop,
        float _ModeSJitter,
        bool _ModeSResult
        )
{
    CPulseMeasurements msg;
    msg.setModeAWidth(_ModeAWidth);
    msg.setModeASpacing(_ModeASpacing);
    msg.setModeADroop(_ModeADroop);
    msg.setModeAJitter(_ModeAJitter);
    msg.setModeAResult(_ModeAResult);
    msg.setModeCWidth(_ModeCWidth);
    msg.setModeCSpacing(_ModeCSpacing);
    msg.setModeCDroop(_ModeCDroop);
    msg.setModeCJitter(_ModeCJitter);
    msg.setModeCResult(_ModeCResult);
    msg.setModeSWidth(_ModeSWidth);
    msg.setModeSSpacing(_ModeSSpacing);
    msg.setModeSDroop(_ModeSDroop);
    msg.setModeSJitter(_ModeSJitter);
    msg.setModeSResult(_ModeSResult);
    return msg.get();
}


Json::Value messageModeSAddress(
        std::string _CorrectAddress,
        float _CorrectAddressReplies
        )
{
    CModeSAddress msg;
    msg.setCorrectAddress(_CorrectAddress);
    msg.setCorrectAddressReplies(_CorrectAddressReplies);
    return msg.get();
}


Json::Value messageCommCapability(
        unsigned int _CommCap,
        unsigned int _Level,
        unsigned int _CA,
        unsigned int _UELM,
        unsigned int _DELM,
        unsigned int _TL
        )
{
    CCommCapability msg;
    msg.setCommCap(_CommCap);
    msg.setLevel(_Level);
    msg.setCA(_CA);
    msg.setUELM(_UELM);
    msg.setDELM(_DELM);
    msg.setTL(_TL);
    return msg.get();
}


Json::Value messageAtcrbsModeSAllCall(
        bool _AtcrbsResult,
        float _AtcrbsReplies,
        bool _AtcrbsModeSResult,
        std::string _AtcrbsModeSAddress,
        unsigned int _AtcrbsModeSCA,
        unsigned int _AtcrbsModeSVerticalStatus,
        unsigned int _AtcrbsModeSComm,
        unsigned int _AtcrbsModeSReplyFormat,
        float _AtcrbsModeSReplies,
        bool _ModeSResult,
        std::string _ModeSAddress,
        unsigned int _ModeSCA,
        unsigned int _ModeSVerticalStatus,
        unsigned int _ModeSComm,
        unsigned int _ModeSReplyFormat,
        float _ModeSModeSReplies
        )
{
    CAtcrbsModeSAllCall msg;
    msg.setAtcrbsResult(_AtcrbsResult);
    msg.setAtcrbsReplies(_AtcrbsReplies);
    msg.setAtcrbsModeSResult(_AtcrbsModeSResult);
    msg.setAtcrbsModeSAddress(_AtcrbsModeSAddress);
    msg.setAtcrbsModeSCA(_AtcrbsModeSCA);
    msg.setAtcrbsModeSVerticalStatus(_AtcrbsModeSVerticalStatus);
    msg.setAtcrbsModeSComm(_AtcrbsModeSComm);
    msg.setAtcrbsModeSReplyFormat(_AtcrbsModeSReplyFormat);
    msg.setAtcrbsModeSReplies(_AtcrbsModeSReplies);
    msg.setModeSResult(_ModeSResult);
    msg.setModeSAddress(_ModeSAddress);
    msg.setModeSCA(_ModeSCA);
    msg.setModeSVerticalStatus(_ModeSVerticalStatus);
    msg.setModeSComm(_ModeSComm);
    msg.setModeSReplyFormat(_ModeSReplyFormat);
    msg.setModeSModeSReplies(_ModeSModeSReplies);
    return msg.get();
}


Json::Value messageModeSSquitter(
        std::string _Df11Address,
        unsigned int _Df11CA,
        unsigned int _Df11UpadteRate,
        std::string _Df17Address,
        std::vector<unsigned int> _Df17BdsRegisters,
        unsigned int _Df17UpdateRate,
        float _Frequency,
        float _Power
        )
{
    CModeSSquitter msg;
    msg.setDf11Address(_Df11Address);
    msg.setDf11CA(_Df11CA);
    msg.setDf11UpadteRate(_Df11UpadteRate);
    msg.setDf17Address(_Df17Address);
    msg.setDf17BdsRegisters(_Df17BdsRegisters);
    msg.setDf17UpdateRate(_Df17UpdateRate);
    msg.setFrequency(_Frequency);
    msg.setPower(_Power);
    return msg.get();
}


Json::Value messageModeSFormats1of3(
        unsigned int _Uut,
        std::vector<unsigned int> _RespondsToUfFormats,
        std::vector<unsigned int> _UfInterrogation,
        std::vector<unsigned int> _DfReply,
        std::vector<bool> _Result
        )
{
    CModeSFormats1of3 msg;
    msg.setUut(_Uut);
    msg.setRespondsToUfFormats(_RespondsToUfFormats);
    msg.setUfInterrogation(_UfInterrogation);
    msg.setDfReply(_DfReply);
    msg.setResult(_Result);
    return msg.get();
}


Json::Value messageModeSFormats2of3(
        unsigned int _Uut,
        std::vector<unsigned int> _RespondsToUfFormats,
        unsigned int _Uf0Df0_Vs,
        unsigned int _Uf0Df0_Cc,
        unsigned int _Uf0Df0_Sl,
        unsigned int _Uf0Df0_Ri,
        std::string _Uf0Df0_Ac,
        std::string _Uf0Df0_Ap,
        unsigned int _Uf4Df4_Fs,
        unsigned int _Uf4Df4_Dr,
        unsigned int _Uf4Df4_Um,
        std::string _Uf4Df4_Ac,
        std::string _Uf4Df4_Ap,
        unsigned int _Uf5Df5_Fs,
        unsigned int _Uf5Df5_Dr,
        unsigned int _Uf5Df5_Um,
        std::string _Uf5Df5_Id,
        std::string _Uf5Df5_Ap,
        unsigned int _Uf11Df11_Ca,
        std::string _Uf11Df11_Aa,
        unsigned int _Uf11Df11_Pi
        )
{
    CModeSFormats2of3 msg;
    msg.setUut(_Uut);
    msg.setRespondsToUfFormats(_RespondsToUfFormats);
    msg.setUf0Df0_Vs(_Uf0Df0_Vs);
    msg.setUf0Df0_Cc(_Uf0Df0_Cc);
    msg.setUf0Df0_Sl(_Uf0Df0_Sl);
    msg.setUf0Df0_Ri(_Uf0Df0_Ri);
    msg.setUf0Df0_Ac(_Uf0Df0_Ac);
    msg.setUf0Df0_Ap(_Uf0Df0_Ap);
    msg.setUf4Df4_Fs(_Uf4Df4_Fs);
    msg.setUf4Df4_Dr(_Uf4Df4_Dr);
    msg.setUf4Df4_Um(_Uf4Df4_Um);
    msg.setUf4Df4_Ac(_Uf4Df4_Ac);
    msg.setUf4Df4_Ap(_Uf4Df4_Ap);
    msg.setUf5Df5_Fs(_Uf5Df5_Fs);
    msg.setUf5Df5_Dr(_Uf5Df5_Dr);
    msg.setUf5Df5_Um(_Uf5Df5_Um);
    msg.setUf5Df5_Id(_Uf5Df5_Id);
    msg.setUf5Df5_Ap(_Uf5Df5_Ap);
    msg.setUf11Df11_Ca(_Uf11Df11_Ca);
    msg.setUf11Df11_Aa(_Uf11Df11_Aa);
    msg.setUf11Df11_Pi(_Uf11Df11_Pi);
    return msg.get();
}


Json::Value messageModeSFormats3of3(
        unsigned int _Uut,
        std::vector<unsigned int> _RespondsToUfFormats,
        unsigned int _Uf16Df16_Vs,
        unsigned int _Uf16Df16_Sl,
        unsigned int _Uf16Df16_Ri,
        std::string _Uf16Df16_Ac,
        std::string _Uf16Df16_Ap,
        std::string _Uf16Df16_Mv,
        unsigned int _Uf20Df20_Fs,
        unsigned int _Uf20Df20_Dr,
        std::string _Uf20Df20_Um,
        std::string _Uf20Df20_Ac,
        std::string _Uf20Df20_Ap,
        std::string _Uf20Df20_Mv,
        unsigned int _Uf21Df21_Fs,
        unsigned int _Uf21Df21_Dr,
        std::string _Uf21Df21_Um,
        std::string _Uf21Df21_Id,
        std::string _Uf21Df21_Ap,
        std::string _Uf21Df21_Mv,
        unsigned int _Uf24Df24_Ke,
        unsigned int _Uf24Df24_Nd,
        unsigned int _Uf24Df24_Md
        )
{
    CModeSFormats3of3 msg;
    msg.setUut(_Uut);
    msg.setRespondsToUfFormats(_RespondsToUfFormats);
    msg.setUf16Df16_Vs(_Uf16Df16_Vs);
    msg.setUf16Df16_Sl(_Uf16Df16_Sl);
    msg.setUf16Df16_Ri(_Uf16Df16_Ri);
    msg.setUf16Df16_Ac(_Uf16Df16_Ac);
    msg.setUf16Df16_Ap(_Uf16Df16_Ap);
    msg.setUf16Df16_Mv(_Uf16Df16_Mv);
    msg.setUf20Df20_Fs(_Uf20Df20_Fs);
    msg.setUf20Df20_Dr(_Uf20Df20_Dr);
    msg.setUf20Df20_Um(_Uf20Df20_Um);
    msg.setUf20Df20_Ac(_Uf20Df20_Ac);
    msg.setUf20Df20_Ap(_Uf20Df20_Ap);
    msg.setUf20Df20_Mv(_Uf20Df20_Mv);
    msg.setUf21Df21_Fs(_Uf21Df21_Fs);
    msg.setUf21Df21_Dr(_Uf21Df21_Dr);
    msg.setUf21Df21_Um(_Uf21Df21_Um);
    msg.setUf21Df21_Id(_Uf21Df21_Id);
    msg.setUf21Df21_Ap(_Uf21Df21_Ap);
    msg.setUf21Df21_Mv(_Uf21Df21_Mv);
    msg.setUf24Df24_Ke(_Uf24Df24_Ke);
    msg.setUf24Df24_Nd(_Uf24Df24_Nd);
    msg.setUf24Df24_Md(_Uf24Df24_Md);
    return msg.get();
}


Json::Value messageAtcrbsModeSIdAltitudeMatch(
        unsigned int _ModeAId,
        unsigned int _ModeSUf5Df5Id,
        unsigned int _ModeCAltitude,
        unsigned int _ModeSUf5Df5Altitude
        )
{
    CAtcrbsModeSIdAltitudeMatch msg;
    msg.setModeAId(_ModeAId);
    msg.setModeSUf5Df5Id(_ModeSUf5Df5Id);
    msg.setModeCAltitude(_ModeCAltitude);
    msg.setModeSUf5Df5Altitude(_ModeSUf5Df5Altitude);
    return msg.get();
}


Json::Value messageMode3AReply(
        float _Mode3AFineMTL,
        unsigned int _Mode3APercentReply,
        bool _Mode3AReplyPass,
        unsigned int _Mode3ACode,
        bool _Mode3AIdent,
        bool _Mode3AXPulse,
        unsigned int _Mode3APercentageMustReply,
        bool _Mode3AMustReplyPass,
        unsigned int _Mode3ASLSReply,
        bool _Mode3ASLSReplyPass,
        float _Mode3AFreq,
        bool _Mode3AFreqPass,
        float _Mode3APower,
        bool _Mode3APowerPass,
        float _Mode3ADroop,
        bool _Mode3ADroopPass,
        float _Mode3AReplyDelay,
        bool _Mode3AReplyDelayPass,
        float _Mode3AJitter,
        bool _Mode3AJitterPass,
        std::vector<float> _Mode3APulseWidth,
        bool _Mode3APulseWidthPass,
        std::vector<float> _Mode3APulseSpacing,
        bool _Mode3APulseSpacingPass
        )
{
    CMode3AReply msg;
    msg.setMode3AFineMTL(_Mode3AFineMTL);
    msg.setMode3APercentReply(_Mode3APercentReply);
    msg.setMode3AReplyPass(_Mode3AReplyPass);
    msg.setMode3ACode(_Mode3ACode);
    msg.setMode3AIdent(_Mode3AIdent);
    msg.setMode3AXPulse(_Mode3AXPulse);
    msg.setMode3APercentageMustReply(_Mode3APercentageMustReply);
    msg.setMode3AMustReplyPass(_Mode3AMustReplyPass);
    msg.setMode3ASLSReply(_Mode3ASLSReply);
    msg.setMode3ASLSReplyPass(_Mode3ASLSReplyPass);
    msg.setMode3AFreq(_Mode3AFreq);
    msg.setMode3AFreqPass(_Mode3AFreqPass);
    msg.setMode3APower(_Mode3APower);
    msg.setMode3APowerPass(_Mode3APowerPass);
    msg.setMode3ADroop(_Mode3ADroop);
    msg.setMode3ADroopPass(_Mode3ADroopPass);
    msg.setMode3AReplyDelay(_Mode3AReplyDelay);
    msg.setMode3AReplyDelayPass(_Mode3AReplyDelayPass);
    msg.setMode3AJitter(_Mode3AJitter);
    msg.setMode3AJitterPass(_Mode3AJitterPass);
    msg.setMode3APulseWidth(_Mode3APulseWidth);
    msg.setMode3APulseWidthPass(_Mode3APulseWidthPass);
    msg.setMode3APulseSpacing(_Mode3APulseSpacing);
    msg.setMode3APulseSpacingPass(_Mode3APulseSpacingPass);
    return msg.get();
}


Json::Value messageModeCReply(
        float _ModeCFineMTL,
        unsigned int _ModeCPercentReply,
        bool _ModeCReplyPass,
        unsigned int _ModeCCode,
        unsigned int _ModeCPercentageMustReply,
        bool _ModeCMustReplyPass,
        unsigned int _ModeCSLSReply,
        bool _ModeCSLSReplyPass,
        float _ModeCFreq,
        bool _ModeCFreqPass,
        float _ModeCPower,
        bool _ModeCPowerPass,
        float _ModeCDroop,
        bool _ModeCDroopPass,
        float _ModeCReplyDelay,
        bool _ModeCReplyDelayPass,
        float _ModeCJitter,
        bool _ModeCJitterPass,
        std::vector<float> _ModeCPulseWidth,
        bool _ModeCPulseWidthPass,
        std::vector<float> _ModeCPulseSpacing,
        bool _ModeCPulseSpacingPass
        )
{
    CModeCReply msg;
    msg.setModeCFineMTL(_ModeCFineMTL);
    msg.setModeCPercentReply(_ModeCPercentReply);
    msg.setModeCReplyPass(_ModeCReplyPass);
    msg.setModeCCode(_ModeCCode);
    msg.setModeCPercentageMustReply(_ModeCPercentageMustReply);
    msg.setModeCMustReplyPass(_ModeCMustReplyPass);
    msg.setModeCSLSReply(_ModeCSLSReply);
    msg.setModeCSLSReplyPass(_ModeCSLSReplyPass);
    msg.setModeCFreq(_ModeCFreq);
    msg.setModeCFreqPass(_ModeCFreqPass);
    msg.setModeCPower(_ModeCPower);
    msg.setModeCPowerPass(_ModeCPowerPass);
    msg.setModeCDroop(_ModeCDroop);
    msg.setModeCDroopPass(_ModeCDroopPass);
    msg.setModeCReplyDelay(_ModeCReplyDelay);
    msg.setModeCReplyDelayPass(_ModeCReplyDelayPass);
    msg.setModeCJitter(_ModeCJitter);
    msg.setModeCJitterPass(_ModeCJitterPass);
    msg.setModeCPulseWidth(_ModeCPulseWidth);
    msg.setModeCPulseWidthPass(_ModeCPulseWidthPass);
    msg.setModeCPulseSpacing(_ModeCPulseSpacing);
    msg.setModeCPulseSpacingPass(_ModeCPulseSpacingPass);
    return msg.get();
}
