#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"
const unsigned int MESSAGEVERSION=0x0002
const unsigned int DESTINATION=0x0010


Json::Value messageADSBStart(
        unsigned int _Port,
        unsigned int _Endpoint,
        unsigned int _Address,
        unsigned int _Mode
        )
{
    CADSBStart msg;
    msg.setPort(_Port);
    msg.setEndpoint(_Endpoint);
    msg.setAddress(_Address);
    msg.setMode(_Mode);
    return msg.get();
}


Json::Value messageADSBStop(
        )
{
    CADSBStop msg;
    return msg.get();
}


Json::Value messageADSBData(
        )
{
    CADSBData msg;
    return msg.get();
}


Json::Value messageADSBTestData(
        )
{
    CADSBTestData msg;
    return msg.get();
}


Json::Value messageSIFADSBData(
        unsigned int _Address,
        unsigned int _AddressType,
        float _Latitude,
        float _Longitude,
        int _Altitude,
        unsigned int _AltitudeType,
        int _AltitudeBaro,
        int _AltitudeGNS,
        unsigned int _NIC,
        unsigned int _Airborne,
        int _NorthVel,
        int _EastVel,
        unsigned int _Groundspeed,
        float _HeadingTrack,
        unsigned int _AngleType,
        int _VerticalVelocity,
        unsigned int _VerticalVelocitySource,
        unsigned int _AVSize,
        int _GPSOffsetLateral,
        unsigned int _GPSOffsetLongitudinal,
        unsigned int _GPSOffsetSensorApplied,
        unsigned int _UTCCoupling,
        unsigned int _UplinkFeedback,
        unsigned int _EmitterCategory,
        std::string _Callsign,
        std::string _FlightID,
        unsigned int _EmergencyStatus,
        unsigned int _MOPSVersion,
        unsigned int _SIL,
        unsigned int _TXMSO,
        unsigned int _SDA,
        unsigned int _NACp,
        unsigned int _NACv,
        unsigned int _NICBaro,
        bool _UATIn,
        bool _ES1090In,
        bool _TCASOperational,
        unsigned int _OperationalModes,
        bool _TCASResolutionAdvisory,
        bool _IdentActive,
        bool _ATCServices,
        unsigned int _CallsignID,
        unsigned int _SILSupplement,
        unsigned int _GeometricVerticalAccuracy,
        unsigned int _SingleAntenna,
        unsigned int _NICSupp,
        int _SecondaryAltitude,
        unsigned int _SelectedAltitude,
        unsigned int _SelectedAltitudeType,
        float _BaroSetting,
        float _SelectedHeading,
        bool _MCPFCUStatus,
        bool _ModeAutoPilotEngaged,
        bool _ModeVNAV,
        bool _ModeAltitudeHold,
        bool _ModeApproach,
        bool _ModeLNAV
        )
{
    CSIFADSBData msg;
    msg.setAddress(_Address);
    msg.setAddressType(_AddressType);
    msg.setLatitude(_Latitude);
    msg.setLongitude(_Longitude);
    msg.setAltitude(_Altitude);
    msg.setAltitudeType(_AltitudeType);
    msg.setAltitudeBaro(_AltitudeBaro);
    msg.setAltitudeGNS(_AltitudeGNS);
    msg.setNIC(_NIC);
    msg.setAirborne(_Airborne);
    msg.setNorthVel(_NorthVel);
    msg.setEastVel(_EastVel);
    msg.setGroundspeed(_Groundspeed);
    msg.setHeadingTrack(_HeadingTrack);
    msg.setAngleType(_AngleType);
    msg.setVerticalVelocity(_VerticalVelocity);
    msg.setVerticalVelocitySource(_VerticalVelocitySource);
    msg.setAVSize(_AVSize);
    msg.setGPSOffsetLateral(_GPSOffsetLateral);
    msg.setGPSOffsetLongitudinal(_GPSOffsetLongitudinal);
    msg.setGPSOffsetSensorApplied(_GPSOffsetSensorApplied);
    msg.setUTCCoupling(_UTCCoupling);
    msg.setUplinkFeedback(_UplinkFeedback);
    msg.setEmitterCategory(_EmitterCategory);
    msg.setCallsign(_Callsign);
    msg.setFlightID(_FlightID);
    msg.setEmergencyStatus(_EmergencyStatus);
    msg.setMOPSVersion(_MOPSVersion);
    msg.setSIL(_SIL);
    msg.setTXMSO(_TXMSO);
    msg.setSDA(_SDA);
    msg.setNACp(_NACp);
    msg.setNACv(_NACv);
    msg.setNICBaro(_NICBaro);
    msg.setUATIn(_UATIn);
    msg.setES1090In(_ES1090In);
    msg.setTCASOperational(_TCASOperational);
    msg.setOperationalModes(_OperationalModes);
    msg.setTCASResolutionAdvisory(_TCASResolutionAdvisory);
    msg.setIdentActive(_IdentActive);
    msg.setATCServices(_ATCServices);
    msg.setCallsignID(_CallsignID);
    msg.setSILSupplement(_SILSupplement);
    msg.setGeometricVerticalAccuracy(_GeometricVerticalAccuracy);
    msg.setSingleAntenna(_SingleAntenna);
    msg.setNICSupp(_NICSupp);
    msg.setSecondaryAltitude(_SecondaryAltitude);
    msg.setSelectedAltitude(_SelectedAltitude);
    msg.setSelectedAltitudeType(_SelectedAltitudeType);
    msg.setBaroSetting(_BaroSetting);
    msg.setSelectedHeading(_SelectedHeading);
    msg.setMCPFCUStatus(_MCPFCUStatus);
    msg.setModeAutoPilotEngaged(_ModeAutoPilotEngaged);
    msg.setModeVNAV(_ModeVNAV);
    msg.setModeAltitudeHold(_ModeAltitudeHold);
    msg.setModeApproach(_ModeApproach);
    msg.setModeLNAV(_ModeLNAV);
    return msg.get();
}


Json::Value messageSIFQueryGICB(
        unsigned int _BDSRegister
        )
{
    CSIFQueryGICB msg;
    msg.setBDSRegister(_BDSRegister);
    return msg.get();
}


Json::Value messageIdentifyTransponder(
        unsigned int _Port,
        unsigned int _Address,
        unsigned int _Class
        )
{
    CIdentifyTransponder msg;
    msg.setPort(_Port);
    msg.setAddress(_Address);
    msg.setClass(_Class);
    return msg.get();
}


Json::Value messageStartPart43Test(
        unsigned int _Antenna,
        unsigned int _Distance,
        unsigned int _Port,
        unsigned int _Address
        )
{
    CStartPart43Test msg;
    msg.setAntenna(_Antenna);
    msg.setDistance(_Distance);
    msg.setPort(_Port);
    msg.setAddress(_Address);
    return msg.get();
}


Json::Value messageFetchPart43TestResults(
        unsigned int _TestNo,
        bool _ReRun
        )
{
    CFetchPart43TestResults msg;
    msg.setTestNo(_TestNo);
    msg.setReRun(_ReRun);
    return msg.get();
}


Json::Value messageStopPart43Test(
        )
{
    CStopPart43Test msg;
    return msg.get();
}


Json::Value messageInterrogate(
        unsigned int _Mode,
        unsigned int _Rate,
        unsigned int _Count,
        unsigned int _Cycles
        )
{
    CInterrogate msg;
    msg.setMode(_Mode);
    msg.setRate(_Rate);
    msg.setCount(_Count);
    msg.setCycles(_Cycles);
    return msg.get();
}


Json::Value messageADSB1090Start(
        unsigned int _Port,
        unsigned int _Endpoint
        )
{
    CADSB1090Start msg;
    msg.setPort(_Port);
    msg.setEndpoint(_Endpoint);
    return msg.get();
}


Json::Value messageADSB1090FindAll(
        unsigned int _Port,
        unsigned int _Endpoint
        )
{
    CADSB1090FindAll msg;
    msg.setPort(_Port);
    msg.setEndpoint(_Endpoint);
    return msg.get();
}


Json::Value messageSetRXListenInterval(
        bool _Enabled,
        unsigned int _StartuS,
        unsigned int _StopuS
        )
{
    CSetRXListenInterval msg;
    msg.setEnabled(_Enabled);
    msg.setStartuS(_StartuS);
    msg.setStopuS(_StopuS);
    return msg.get();
}
