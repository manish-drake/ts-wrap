#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"


Json::Value messageADSBDataReply(
        unsigned int _Size,
        std::vector<int> _Data
        )
{
    CADSBDataReply msg;
    msg.setSize(_Size);
    msg.setData(_Data);
    return msg.get();
}


Json::Value messageADSBTestDataReply(
        std::string _Data
        )
{
    CADSBTestDataReply msg;
    msg.setData(_Data);
    return msg.get();
}


Json::Value messageIdentifyTransponderReply(
        unsigned int _Addresses,
        std::string _FlightID,
        unsigned int _Level,
        unsigned int _Type,
        unsigned int _Class,
        float _Power,
        bool _SingleAntenna,
        unsigned int _AirGroundState
        )
{
    CIdentifyTransponderReply msg;
    msg.setAddresses(_Addresses);
    msg.setFlightID(_FlightID);
    msg.setLevel(_Level);
    msg.setType(_Type);
    msg.setClass(_Class);
    msg.setPower(_Power);
    msg.setSingleAntenna(_SingleAntenna);
    msg.setAirGroundState(_AirGroundState);
    return msg.get();
}


Json::Value messagePart43SummaryResults(
        float _Frequency,
        bool _FrequencyPass,
        float _RFPower,
        bool _RFPowerPass,
        float _MTL,
        bool _MTLPass,
        unsigned int _AirGroundState,
        unsigned int _ModeACode,
        bool _ModeAIdent,
        bool _AddressTestPass,
        bool _ModeSAllCallTestPass,
        bool _ATCRBSAllCallTestPass,
        bool _AllCallTestPass,
        bool _ModeSFormatsTestPass,
        bool _ModeSSquitterTestPass,
        bool _IDAltitudeTestPass,
        bool _SLSSuppressionTestPass,
        bool _PulseTestPass,
        float _AntennaDiversity,
        bool _AntennaDiversityTest,
        bool _AirBorne,
        unsigned int _FlightStatus,
        unsigned int _CommCapability,
        unsigned int _ModeCAltitude,
        std::string _FlightID,
        bool _TestResult
        )
{
    CPart43SummaryResults msg;
    msg.setFrequency(_Frequency);
    msg.setFrequencyPass(_FrequencyPass);
    msg.setRFPower(_RFPower);
    msg.setRFPowerPass(_RFPowerPass);
    msg.setMTL(_MTL);
    msg.setMTLPass(_MTLPass);
    msg.setAirGroundState(_AirGroundState);
    msg.setModeACode(_ModeACode);
    msg.setModeAIdent(_ModeAIdent);
    msg.setAddressTestPass(_AddressTestPass);
    msg.setModeSAllCallTestPass(_ModeSAllCallTestPass);
    msg.setATCRBSAllCallTestPass(_ATCRBSAllCallTestPass);
    msg.setAllCallTestPass(_AllCallTestPass);
    msg.setModeSFormatsTestPass(_ModeSFormatsTestPass);
    msg.setModeSSquitterTestPass(_ModeSSquitterTestPass);
    msg.setIDAltitudeTestPass(_IDAltitudeTestPass);
    msg.setSLSSuppressionTestPass(_SLSSuppressionTestPass);
    msg.setPulseTestPass(_PulseTestPass);
    msg.setAntennaDiversity(_AntennaDiversity);
    msg.setAntennaDiversityTest(_AntennaDiversityTest);
    msg.setAirBorne(_AirBorne);
    msg.setFlightStatus(_FlightStatus);
    msg.setCommCapability(_CommCapability);
    msg.setModeCAltitude(_ModeCAltitude);
    msg.setFlightID(_FlightID);
    msg.setTestResult(_TestResult);
    return msg.get();
}


Json::Value messagePart43Freq(
        unsigned int _TestNum,
        float _ModeAFreq,
        bool _ModeAFreqPass,
        float _ModeCFreq,
        bool _ModeCFreqPass,
        float _ModeSFreq,
        bool _ModeSFreqPass,
        bool _Pass
        )
{
    CPart43Freq msg;
    msg.setTestNum(_TestNum);
    msg.setModeAFreq(_ModeAFreq);
    msg.setModeAFreqPass(_ModeAFreqPass);
    msg.setModeCFreq(_ModeCFreq);
    msg.setModeCFreqPass(_ModeCFreqPass);
    msg.setModeSFreq(_ModeSFreq);
    msg.setModeSFreqPass(_ModeSFreqPass);
    msg.setPass(_Pass);
    return msg.get();
}


Json::Value messagePart43RFPower(
        unsigned int _TestNum,
        float _ModeAPower,
        bool _ModeAPowerPass,
        float _ModeCPower,
        bool _ModeCPowerPass,
        float _ModeSPower,
        bool _ModeSPowerPass,
        bool _Pass
        )
{
    CPart43RFPower msg;
    msg.setTestNum(_TestNum);
    msg.setModeAPower(_ModeAPower);
    msg.setModeAPowerPass(_ModeAPowerPass);
    msg.setModeCPower(_ModeCPower);
    msg.setModeCPowerPass(_ModeCPowerPass);
    msg.setModeSPower(_ModeSPower);
    msg.setModeSPowerPass(_ModeSPowerPass);
    msg.setPass(_Pass);
    return msg.get();
}


Json::Value messagePart43MTL(
        unsigned int _TestNum,
        float _ModeAMTL,
        bool _ModeAMTLPass,
        float _ModeCMTL,
        bool _ModeCMTLPass,
        float _ModeSMTL,
        bool _ModeSMTLPass,
        bool _Pass
        )
{
    CPart43MTL msg;
    msg.setTestNum(_TestNum);
    msg.setModeAMTL(_ModeAMTL);
    msg.setModeAMTLPass(_ModeAMTLPass);
    msg.setModeCMTL(_ModeCMTL);
    msg.setModeCMTLPass(_ModeCMTLPass);
    msg.setModeSMTL(_ModeSMTL);
    msg.setModeSMTLPass(_ModeSMTLPass);
    msg.setPass(_Pass);
    return msg.get();
}


Json::Value messagePart43SLS(
        unsigned int _TestNum,
        float _ATCRBSSuppressionOffPct,
        float _ATCRBSSupressionOnPct,
        float _ATCRBSSupressionPass,
        float _ModeS_SuppressionOffPct,
        float _ModeS_SupressionOnPct,
        float _ModeS_SupressionPass,
        bool _Pass
        )
{
    CPart43SLS msg;
    msg.setTestNum(_TestNum);
    msg.setATCRBSSuppressionOffPct(_ATCRBSSuppressionOffPct);
    msg.setATCRBSSupressionOnPct(_ATCRBSSupressionOnPct);
    msg.setATCRBSSupressionPass(_ATCRBSSupressionPass);
    msg.setModeS_SuppressionOffPct(_ModeS_SuppressionOffPct);
    msg.setModeS_SupressionOnPct(_ModeS_SupressionOnPct);
    msg.setModeS_SupressionPass(_ModeS_SupressionPass);
    msg.setPass(_Pass);
    return msg.get();
}


Json::Value messagePart43Diversity(
        unsigned int _TestNum,
        float _DiversityIsolation,
        bool _Pass
        )
{
    CPart43Diversity msg;
    msg.setTestNum(_TestNum);
    msg.setDiversityIsolation(_DiversityIsolation);
    msg.setPass(_Pass);
    return msg.get();
}


Json::Value messagePart43PulseMeasurements(
        unsigned int _TestNum,
        std::vector<float> _PulseWidth,
        std::vector<bool> _PulseWidthPass,
        std::vector<float> _PulseSpacing,
        std::vector<bool> _PulseSpacingPass,
        std::vector<float> _PulseDroop,
        std::vector<bool> _PulseDroopPass,
        std::vector<float> _PulseJitter,
        std::vector<bool> _PulseJitterPass,
        std::vector<bool> _PulseResult
        )
{
    CPart43PulseMeasurements msg;
    msg.setTestNum(_TestNum);
    msg.setPulseWidth(_PulseWidth);
    msg.setPulseWidthPass(_PulseWidthPass);
    msg.setPulseSpacing(_PulseSpacing);
    msg.setPulseSpacingPass(_PulseSpacingPass);
    msg.setPulseDroop(_PulseDroop);
    msg.setPulseDroopPass(_PulseDroopPass);
    msg.setPulseJitter(_PulseJitter);
    msg.setPulseJitterPass(_PulseJitterPass);
    msg.setPulseResult(_PulseResult);
    return msg.get();
}


Json::Value messagePart43ATCRBS(
        unsigned int _TestNum,
        unsigned int _ModeACode,
        bool _ModeACodeReplyPass,
        float _ModeACodeReplyPct,
        bool _ModeAIdent,
        unsigned int _ModeCAltitude,
        bool _ModeCReplyPass,
        float _ModeCReplyPct,
        bool _Pass
        )
{
    CPart43ATCRBS msg;
    msg.setTestNum(_TestNum);
    msg.setModeACode(_ModeACode);
    msg.setModeACodeReplyPass(_ModeACodeReplyPass);
    msg.setModeACodeReplyPct(_ModeACodeReplyPct);
    msg.setModeAIdent(_ModeAIdent);
    msg.setModeCAltitude(_ModeCAltitude);
    msg.setModeCReplyPass(_ModeCReplyPass);
    msg.setModeCReplyPct(_ModeCReplyPct);
    msg.setPass(_Pass);
    return msg.get();
}


Json::Value messagePart43ModeSAddressTest(
        unsigned int _TestNum,
        float _ModeSCorrectReplies,
        float _ModeSCorrectRepliesPass,
        float _ModeSIncorrectReplies1,
        float _ModeSIncorrectReplies1Pass,
        float _ModeSIncorrectReplies2,
        float _ModeSIncorrectReplies2Pass,
        bool _Pass
        )
{
    CPart43ModeSAddressTest msg;
    msg.setTestNum(_TestNum);
    msg.setModeSCorrectReplies(_ModeSCorrectReplies);
    msg.setModeSCorrectRepliesPass(_ModeSCorrectRepliesPass);
    msg.setModeSIncorrectReplies1(_ModeSIncorrectReplies1);
    msg.setModeSIncorrectReplies1Pass(_ModeSIncorrectReplies1Pass);
    msg.setModeSIncorrectReplies2(_ModeSIncorrectReplies2);
    msg.setModeSIncorrectReplies2Pass(_ModeSIncorrectReplies2Pass);
    msg.setPass(_Pass);
    return msg.get();
}


Json::Value messagePart43ID_AltitudeMatch(
        unsigned int _TestNum,
        unsigned int _ModeAID,
        unsigned int _ModeSID,
        bool _IDMatchPass,
        unsigned int _ModeAAltitude,
        unsigned int _ModeSAltitude,
        bool _AltitudeMatchPass,
        unsigned int _ModeSAddress,
        bool _Pass
        )
{
    CPart43ID_AltitudeMatch msg;
    msg.setTestNum(_TestNum);
    msg.setModeAID(_ModeAID);
    msg.setModeSID(_ModeSID);
    msg.setIDMatchPass(_IDMatchPass);
    msg.setModeAAltitude(_ModeAAltitude);
    msg.setModeSAltitude(_ModeSAltitude);
    msg.setAltitudeMatchPass(_AltitudeMatchPass);
    msg.setModeSAddress(_ModeSAddress);
    msg.setPass(_Pass);
    return msg.get();
}


Json::Value messagePart43Capabilities(
        unsigned int _TestNum,
        unsigned int _Level,
        unsigned int _CA,
        unsigned int _UELM,
        unsigned int _DELM,
        unsigned int _TL
        )
{
    CPart43Capabilities msg;
    msg.setTestNum(_TestNum);
    msg.setLevel(_Level);
    msg.setCA(_CA);
    msg.setUELM(_UELM);
    msg.setDELM(_DELM);
    msg.setTL(_TL);
    return msg.get();
}


Json::Value messagePart43ShortP4AllCall(
        unsigned int _TestNum,
        float _ATCRBS_P4_ShortReplyPct,
        float _ATCRBS_P4_ShortReplyPctPass
        )
{
    CPart43ShortP4AllCall msg;
    msg.setTestNum(_TestNum);
    msg.setATCRBS_P4_ShortReplyPct(_ATCRBS_P4_ShortReplyPct);
    msg.setATCRBS_P4_ShortReplyPctPass(_ATCRBS_P4_ShortReplyPctPass);
    return msg.get();
}


Json::Value messagePart43ATCRBSLong(
        unsigned int _TestNum,
        unsigned int _ATCRBS_ModeSAddress,
        unsigned int _ATCRBS_CA,
        float _ATCRBS_P4_LongReplyPct,
        bool _ATCRBS_P4_LongReplyPctPass,
        bool _ATCRBSAirborne,
        unsigned int _ATCRBSReplyFormat,
        unsigned int _ATCRBSCommCap,
        bool _ATCRBSPass
        )
{
    CPart43ATCRBSLong msg;
    msg.setTestNum(_TestNum);
    msg.setATCRBS_ModeSAddress(_ATCRBS_ModeSAddress);
    msg.setATCRBS_CA(_ATCRBS_CA);
    msg.setATCRBS_P4_LongReplyPct(_ATCRBS_P4_LongReplyPct);
    msg.setATCRBS_P4_LongReplyPctPass(_ATCRBS_P4_LongReplyPctPass);
    msg.setATCRBSAirborne(_ATCRBSAirborne);
    msg.setATCRBSReplyFormat(_ATCRBSReplyFormat);
    msg.setATCRBSCommCap(_ATCRBSCommCap);
    msg.setATCRBSPass(_ATCRBSPass);
    return msg.get();
}


Json::Value messagePart43ModeSAllCall(
        unsigned int _TestNum,
        unsigned int _ModeSAddress,
        unsigned int _ModeSCA,
        bool _ModeSAirborne,
        unsigned int _ModeSReplyFormat,
        float _ModeSReplyPct,
        bool _ModeSReplyPctPass,
        unsigned int _ModeSCommCap,
        bool _ModeSPass
        )
{
    CPart43ModeSAllCall msg;
    msg.setTestNum(_TestNum);
    msg.setModeSAddress(_ModeSAddress);
    msg.setModeSCA(_ModeSCA);
    msg.setModeSAirborne(_ModeSAirborne);
    msg.setModeSReplyFormat(_ModeSReplyFormat);
    msg.setModeSReplyPct(_ModeSReplyPct);
    msg.setModeSReplyPctPass(_ModeSReplyPctPass);
    msg.setModeSCommCap(_ModeSCommCap);
    msg.setModeSPass(_ModeSPass);
    return msg.get();
}


Json::Value messagePart43Squitter(
        unsigned int _TestNum,
        unsigned int _SquitterAddressDF11,
        unsigned int _SquitterCADF11,
        unsigned int _SquitterCapDF11,
        unsigned int _SquitterUpdateRateDF11,
        unsigned int _SquitterAddressDF17,
        std::vector<unsigned int> _SquitterBDSRegisters,
        unsigned int _SquitterUpdateRateDF17
        )
{
    CPart43Squitter msg;
    msg.setTestNum(_TestNum);
    msg.setSquitterAddressDF11(_SquitterAddressDF11);
    msg.setSquitterCADF11(_SquitterCADF11);
    msg.setSquitterCapDF11(_SquitterCapDF11);
    msg.setSquitterUpdateRateDF11(_SquitterUpdateRateDF11);
    msg.setSquitterAddressDF17(_SquitterAddressDF17);
    msg.setSquitterBDSRegisters(_SquitterBDSRegisters);
    msg.setSquitterUpdateRateDF17(_SquitterUpdateRateDF17);
    return msg.get();
}


Json::Value messageReplyAdsb1090FindAll(
        )
{
    CReplyAdsb1090FindAll msg;
    return msg.get();
}


Json::Value messageBDSCode62(
        int _TypeCode,
        int _SubTypeCode,
        int _SelAltitudeType,
        int _SelectedAltitude,
        double _BaroPressureSetting,
        int _SelectedHeadingStatus,
        int _SelectedHeading,
        bool _AutopilotEngaged,
        bool _VnavMode,
        bool _AltHoldMode,
        bool _ApproachMode,
        bool _LNAV,
        bool _TCASOperational,
        int _NACP,
        int _SIL,
        int _SILSup,
        int _NICBaro
        )
{
    CBDSCode62 msg;
    msg.setTypeCode(_TypeCode);
    msg.setSubTypeCode(_SubTypeCode);
    msg.setSelAltitudeType(_SelAltitudeType);
    msg.setSelectedAltitude(_SelectedAltitude);
    msg.setBaroPressureSetting(_BaroPressureSetting);
    msg.setSelectedHeadingStatus(_SelectedHeadingStatus);
    msg.setSelectedHeading(_SelectedHeading);
    msg.setAutopilotEngaged(_AutopilotEngaged);
    msg.setVnavMode(_VnavMode);
    msg.setAltHoldMode(_AltHoldMode);
    msg.setApproachMode(_ApproachMode);
    msg.setLNAV(_LNAV);
    msg.setTCASOperational(_TCASOperational);
    msg.setNACP(_NACP);
    msg.setSIL(_SIL);
    msg.setSILSup(_SILSup);
    msg.setNICBaro(_NICBaro);
    return msg.get();
}


Json::Value messageBDSCode65_SubType0(
        bool _TCASOp,
        bool _AirCanRxES,
        bool _AirCanSendVelReports,
        bool _AirCanSendTargetStateReports,
        int _AirCanSendTargetChangeReports,
        bool _AirCanRxUAT,
        bool _RA_active,
        bool _ident,
        bool _singleAnt,
        int _sda,
        int _version,
        bool _nicSupA,
        int _nacp,
        int _GVA,
        int _sil,
        bool _altVerified,
        int _hrd,
        int _silSup,
        unsigned int _rawCapability,
        unsigned int _rawOpMode
        )
{
    CBDSCode65_SubType0 msg;
    msg.setTCASOp(_TCASOp);
    msg.setAirCanRxES(_AirCanRxES);
    msg.setAirCanSendVelReports(_AirCanSendVelReports);
    msg.setAirCanSendTargetStateReports(_AirCanSendTargetStateReports);
    msg.setAirCanSendTargetChangeReports(_AirCanSendTargetChangeReports);
    msg.setAirCanRxUAT(_AirCanRxUAT);
    msg.setRA_active(_RA_active);
    msg.setident(_ident);
    msg.setsingleAnt(_singleAnt);
    msg.setsda(_sda);
    msg.setversion(_version);
    msg.setnicSupA(_nicSupA);
    msg.setnacp(_nacp);
    msg.setGVA(_GVA);
    msg.setsil(_sil);
    msg.setaltVerified(_altVerified);
    msg.sethrd(_hrd);
    msg.setsilSup(_silSup);
    msg.setrawCapability(_rawCapability);
    msg.setrawOpMode(_rawOpMode);
    return msg.get();
}


Json::Value messageBDSCode65_SubType1(
        bool _SurfCanRxES,
        bool _SurfLT70WTx,
        bool _SurfCanRxUAT,
        int _nacv,
        bool _nicSupC,
        bool _lenWidthOK,
        float _length,
        float _width,
        bool _RA_active,
        bool _ident,
        bool _singleAnt,
        int _sda,
        int _version,
        bool _nicSupA,
        int _nacp,
        int _sil,
        int _headingOrTrack,
        int _hrd,
        int _silSup,
        unsigned int _rawCapability,
        unsigned int _rawOpMode,
        unsigned int _lenWidthCode,
        int _latOffset,
        bool _longOffset,
        bool _sensorComp
        )
{
    CBDSCode65_SubType1 msg;
    msg.setSurfCanRxES(_SurfCanRxES);
    msg.setSurfLT70WTx(_SurfLT70WTx);
    msg.setSurfCanRxUAT(_SurfCanRxUAT);
    msg.setnacv(_nacv);
    msg.setnicSupC(_nicSupC);
    msg.setlenWidthOK(_lenWidthOK);
    msg.setlength(_length);
    msg.setwidth(_width);
    msg.setRA_active(_RA_active);
    msg.setident(_ident);
    msg.setsingleAnt(_singleAnt);
    msg.setsda(_sda);
    msg.setversion(_version);
    msg.setnicSupA(_nicSupA);
    msg.setnacp(_nacp);
    msg.setsil(_sil);
    msg.setheadingOrTrack(_headingOrTrack);
    msg.sethrd(_hrd);
    msg.setsilSup(_silSup);
    msg.setrawCapability(_rawCapability);
    msg.setrawOpMode(_rawOpMode);
    msg.setlenWidthCode(_lenWidthCode);
    msg.setlatOffset(_latOffset);
    msg.setlongOffset(_longOffset);
    msg.setsensorComp(_sensorComp);
    return msg.get();
}


Json::Value messageBDSCode09Subtypes3n4(
        unsigned int _FormatTypeCode,
        unsigned int _Subtype,
        unsigned int _Heading,
        unsigned int _Airspeed,
        unsigned int _VerticalRate,
        unsigned int _GeoHBaroAltDiff,
        unsigned int _IntentChangeFlag,
        unsigned int _AirspeedType,
        unsigned int _NACv,
        unsigned int _VerticalRateSource,
        bool _HeadingStatus
        )
{
    CBDSCode09Subtypes3n4 msg;
    msg.setFormatTypeCode(_FormatTypeCode);
    msg.setSubtype(_Subtype);
    msg.setHeading(_Heading);
    msg.setAirspeed(_Airspeed);
    msg.setVerticalRate(_VerticalRate);
    msg.setGeoHBaroAltDiff(_GeoHBaroAltDiff);
    msg.setIntentChangeFlag(_IntentChangeFlag);
    msg.setAirspeedType(_AirspeedType);
    msg.setNACv(_NACv);
    msg.setVerticalRateSource(_VerticalRateSource);
    msg.setHeadingStatus(_HeadingStatus);
    return msg.get();
}


Json::Value messageBDSCode61_Subtype2(
        unsigned int _FormatTypeCode,
        unsigned int _SubtypeCode,
        unsigned int _ActiveResolutionAdv,
        int _RACRecord,
        bool _RATerminated,
        bool _MultipleThreatENC,
        unsigned int _ThreatTypeInd,
        int _ThreatIdData,
        int _ThModeSAddr,
        int _ThAltitude,
        float _ThRange,
        int _ThRangeState,
        int _ThBearing,
        int _ThBearingState
        )
{
    CBDSCode61_Subtype2 msg;
    msg.setFormatTypeCode(_FormatTypeCode);
    msg.setSubtypeCode(_SubtypeCode);
    msg.setActiveResolutionAdv(_ActiveResolutionAdv);
    msg.setRACRecord(_RACRecord);
    msg.setRATerminated(_RATerminated);
    msg.setMultipleThreatENC(_MultipleThreatENC);
    msg.setThreatTypeInd(_ThreatTypeInd);
    msg.setThreatIdData(_ThreatIdData);
    msg.setThModeSAddr(_ThModeSAddr);
    msg.setThAltitude(_ThAltitude);
    msg.setThRange(_ThRange);
    msg.setThRangeState(_ThRangeState);
    msg.setThBearing(_ThBearing);
    msg.setThBearingState(_ThBearingState);
    return msg.get();
}
