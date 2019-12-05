#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"
const unsigned int MESSAGEVERSION=0x0002
const unsigned int DESTINATION=0x000b


Json::Value messageUATADSBData(
        unsigned int _Address,
        unsigned int _AddressType,
        float _Latitude,
        float _Longitude,
        int _Altitude,
        unsigned int _AltitudeType,
        unsigned int _NIC,
        unsigned int _AirGroundState,
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
    CUATADSBData msg;
    msg.setAddress(_Address);
    msg.setAddressType(_AddressType);
    msg.setLatitude(_Latitude);
    msg.setLongitude(_Longitude);
    msg.setAltitude(_Altitude);
    msg.setAltitudeType(_AltitudeType);
    msg.setNIC(_NIC);
    msg.setAirGroundState(_AirGroundState);
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


Json::Value messageUATStart(
        unsigned int _Address,
        unsigned int _Mode
        )
{
    CUATStart msg;
    msg.setAddress(_Address);
    msg.setMode(_Mode);
    return msg.get();
}


Json::Value messageUATStop(
        )
{
    CUATStop msg;
    return msg.get();
}


Json::Value messageUATCount(
        unsigned int _Count
        )
{
    CUATCount msg;
    msg.setCount(_Count);
    return msg.get();
}


Json::Value messageUATMSO(
        unsigned int _StartMSO
        )
{
    CUATMSO msg;
    msg.setStartMSO(_StartMSO);
    return msg.get();
}


Json::Value messageUATStaticSeq(
        unsigned int _StaticSeq,
        unsigned int _PayloadType
        )
{
    CUATStaticSeq msg;
    msg.setStaticSeq(_StaticSeq);
    msg.setPayloadType(_PayloadType);
    return msg.get();
}


Json::Value messageUATSpacing(
        unsigned int _Spacing
        )
{
    CUATSpacing msg;
    msg.setSpacing(_Spacing);
    return msg.get();
}


Json::Value messageUATShort(
        unsigned int _Short
        )
{
    CUATShort msg;
    msg.setShort(_Short);
    return msg.get();
}


Json::Value messageUATQueryTargetData(
        unsigned int _Address
        )
{
    CUATQueryTargetData msg;
    msg.setAddress(_Address);
    return msg.get();
}
