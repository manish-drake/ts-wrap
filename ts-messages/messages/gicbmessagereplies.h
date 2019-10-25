#ifndef ___h
#define ___h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "inc/json.h"
#include "classes.h"


Json::Value messageBDSCode05(
        unsigned int _FormatTypeCode,
        unsigned int _SureveillanceStatus,
        bool _singleAntennaFlag,
        unsigned int _Altitude,
        bool _UTCTimeSync,
        unsigned int _CPRFormat,
        float _EncodedLatitude,
        float _EncodedLongitude,
        unsigned int _radContainment,
        bool _positionOK,
        unsigned int _altSource,
        unsigned int _NICb
        )
{
    CBDSCode05 msg;
    msg.setFormatTypeCode(_FormatTypeCode);
    msg.setSureveillanceStatus(_SureveillanceStatus);
    msg.setsingleAntennaFlag(_singleAntennaFlag);
    msg.setAltitude(_Altitude);
    msg.setUTCTimeSync(_UTCTimeSync);
    msg.setCPRFormat(_CPRFormat);
    msg.setEncodedLatitude(_EncodedLatitude);
    msg.setEncodedLongitude(_EncodedLongitude);
    msg.setradContainment(_radContainment);
    msg.setpositionOK(_positionOK);
    msg.setaltSource(_altSource);
    msg.setNICb(_NICb);
    return msg.get();
}


Json::Value messageBDSCode06(
        unsigned int _FormatTypeCode,
        unsigned int _Movement,
        float _MovementKnts,
        unsigned int _GroundTrackStatus,
        unsigned int _GroundTrack,
        unsigned int _UTCTimeSync,
        bool _CPRFormat,
        float _EncodedLatitude,
        float _EncodedLongitude,
        unsigned int _radContainment
        )
{
    CBDSCode06 msg;
    msg.setFormatTypeCode(_FormatTypeCode);
    msg.setMovement(_Movement);
    msg.setMovementKnts(_MovementKnts);
    msg.setGroundTrackStatus(_GroundTrackStatus);
    msg.setGroundTrack(_GroundTrack);
    msg.setUTCTimeSync(_UTCTimeSync);
    msg.setCPRFormat(_CPRFormat);
    msg.setEncodedLatitude(_EncodedLatitude);
    msg.setEncodedLongitude(_EncodedLongitude);
    msg.setradContainment(_radContainment);
    return msg.get();
}


Json::Value messageBDSCode07(
        unsigned int _TransmissionRateSubfield,
        unsigned int _AltitudeTypeSubfield
        )
{
    CBDSCode07 msg;
    msg.setTransmissionRateSubfield(_TransmissionRateSubfield);
    msg.setAltitudeTypeSubfield(_AltitudeTypeSubfield);
    return msg.get();
}


Json::Value messageBDSCode08(
        unsigned int _CategoryGroup,
        unsigned int _AircraftCategory,
        std::string _AircraftID
        )
{
    CBDSCode08 msg;
    msg.setCategoryGroup(_CategoryGroup);
    msg.setAircraftCategory(_AircraftCategory);
    msg.setAircraftID(_AircraftID);
    return msg.get();
}


Json::Value messageBDSCode09Subtypes1n2(
        unsigned int _FormatTypeCode,
        unsigned int _Subtype,
        unsigned int _intentChangeFlag,
        unsigned int _iFRCapabilityFlag,
        unsigned int _NavigationUncertaintyCategoryForVelocity,
        unsigned int _EastWestVelocityDirection,
        unsigned int _EastWestVelocity,
        unsigned int _NorthSouthVelocityDirection,
        unsigned int _NorthSouthVelocity,
        unsigned int _VerticalRateSource,
        unsigned int _VerticalRateSign,
        unsigned int _VerticalRate,
        unsigned int _GNSSAltSign,
        unsigned int _GNSSAltDifferenceFromBaroAlt
        )
{
    CBDSCode09Subtypes1n2 msg;
    msg.setFormatTypeCode(_FormatTypeCode);
    msg.setSubtype(_Subtype);
    msg.setintentChangeFlag(_intentChangeFlag);
    msg.setiFRCapabilityFlag(_iFRCapabilityFlag);
    msg.setNavigationUncertaintyCategoryForVelocity(_NavigationUncertaintyCategoryForVelocity);
    msg.setEastWestVelocityDirection(_EastWestVelocityDirection);
    msg.setEastWestVelocity(_EastWestVelocity);
    msg.setNorthSouthVelocityDirection(_NorthSouthVelocityDirection);
    msg.setNorthSouthVelocity(_NorthSouthVelocity);
    msg.setVerticalRateSource(_VerticalRateSource);
    msg.setVerticalRateSign(_VerticalRateSign);
    msg.setVerticalRate(_VerticalRate);
    msg.setGNSSAltSign(_GNSSAltSign);
    msg.setGNSSAltDifferenceFromBaroAlt(_GNSSAltDifferenceFromBaroAlt);
    return msg.get();
}


Json::Value messageBDSCode0B(
        bool _TrueAirspeedStatus,
        unsigned int _TrueAirspeed,
        unsigned int _HeadingSwitch,
        bool _HeadingStatus,
        bool _HeadingSign,
        float _Heading,
        unsigned int _TrueTrackAngleStatus,
        bool _TrueTrackAngleSign,
        float _TrueTrackAngle,
        unsigned int _GroundSpeedStatus,
        float _GroundSpeed
        )
{
    CBDSCode0B msg;
    msg.setTrueAirspeedStatus(_TrueAirspeedStatus);
    msg.setTrueAirspeed(_TrueAirspeed);
    msg.setHeadingSwitch(_HeadingSwitch);
    msg.setHeadingStatus(_HeadingStatus);
    msg.setHeadingSign(_HeadingSign);
    msg.setHeading(_Heading);
    msg.setTrueTrackAngleStatus(_TrueTrackAngleStatus);
    msg.setTrueTrackAngleSign(_TrueTrackAngleSign);
    msg.setTrueTrackAngle(_TrueTrackAngle);
    msg.setGroundSpeedStatus(_GroundSpeedStatus);
    msg.setGroundSpeed(_GroundSpeed);
    return msg.get();
}


Json::Value messageBDSCode0C(
        bool _AltitudeLevelStatus,
        unsigned int _AltitudeLevel,
        unsigned int _NextCourseStatus,
        bool _NextCourseSign,
        float _NextCourse,
        bool _WaypointStatus,
        unsigned int _NextWaypointTime,
        bool _VerticalVelocityStatus,
        bool _VerticalVelocitySign,
        int _VerticalVelocity,
        bool _RollAngleStatus,
        bool _RollAngleSign,
        float _RollAngle
        )
{
    CBDSCode0C msg;
    msg.setAltitudeLevelStatus(_AltitudeLevelStatus);
    msg.setAltitudeLevel(_AltitudeLevel);
    msg.setNextCourseStatus(_NextCourseStatus);
    msg.setNextCourseSign(_NextCourseSign);
    msg.setNextCourse(_NextCourse);
    msg.setWaypointStatus(_WaypointStatus);
    msg.setNextWaypointTime(_NextWaypointTime);
    msg.setVerticalVelocityStatus(_VerticalVelocityStatus);
    msg.setVerticalVelocitySign(_VerticalVelocitySign);
    msg.setVerticalVelocity(_VerticalVelocity);
    msg.setRollAngleStatus(_RollAngleStatus);
    msg.setRollAngleSign(_RollAngleSign);
    msg.setRollAngle(_RollAngle);
    return msg.get();
}


Json::Value messageBDSCode10(
        std::string _BDSCode,
        bool _continuationFlag,
        unsigned int _OverlayCommandCapability,
        bool _ACASStatus,
        unsigned int _ModeSSubnetworkVersion,
        unsigned int _TransponderEnhancedProtocolIndicator,
        unsigned int _ModeSSpecificServicesCapability,
        unsigned int _UplinkELM,
        unsigned int _DownlinkELM,
        bool _AircraftIDCapability,
        bool _SquitterCapabilitySubfield,
        bool _SurveillanceIdentifierCode,
        bool _CommonUsageGICBCapabilityReport,
        bool _HybridSurveillanceCapability,
        bool _ACASTAsRAsGeneration,
        unsigned int _MOPSDocument,
        bool _DTESubAddrStatus0,
        bool _DTESubAddrStatus1,
        bool _DTESubAddrStatus2,
        bool _DTESubAddrStatus3,
        bool _DTESubAddrStatus4,
        bool _DTESubAddrStatus5,
        bool _DTESubAddrStatus6,
        bool _DTESubAddrStatus7,
        bool _DTESubAddrStatus8,
        bool _DTESubAddrStatus9,
        bool _DTESubAddrStatus10,
        bool _DTESubAddrStatus11,
        bool _DTESubAddrStatus12,
        bool _DTESubAddrStatus13,
        bool _DTESubAddrStatus14,
        bool _DTESubAddrStatus15
        )
{
    CBDSCode10 msg;
    msg.setBDSCode(_BDSCode);
    msg.setcontinuationFlag(_continuationFlag);
    msg.setOverlayCommandCapability(_OverlayCommandCapability);
    msg.setACASStatus(_ACASStatus);
    msg.setModeSSubnetworkVersion(_ModeSSubnetworkVersion);
    msg.setTransponderEnhancedProtocolIndicator(_TransponderEnhancedProtocolIndicator);
    msg.setModeSSpecificServicesCapability(_ModeSSpecificServicesCapability);
    msg.setUplinkELM(_UplinkELM);
    msg.setDownlinkELM(_DownlinkELM);
    msg.setAircraftIDCapability(_AircraftIDCapability);
    msg.setSquitterCapabilitySubfield(_SquitterCapabilitySubfield);
    msg.setSurveillanceIdentifierCode(_SurveillanceIdentifierCode);
    msg.setCommonUsageGICBCapabilityReport(_CommonUsageGICBCapabilityReport);
    msg.setHybridSurveillanceCapability(_HybridSurveillanceCapability);
    msg.setACASTAsRAsGeneration(_ACASTAsRAsGeneration);
    msg.setMOPSDocument(_MOPSDocument);
    msg.setDTESubAddrStatus0(_DTESubAddrStatus0);
    msg.setDTESubAddrStatus1(_DTESubAddrStatus1);
    msg.setDTESubAddrStatus2(_DTESubAddrStatus2);
    msg.setDTESubAddrStatus3(_DTESubAddrStatus3);
    msg.setDTESubAddrStatus4(_DTESubAddrStatus4);
    msg.setDTESubAddrStatus5(_DTESubAddrStatus5);
    msg.setDTESubAddrStatus6(_DTESubAddrStatus6);
    msg.setDTESubAddrStatus7(_DTESubAddrStatus7);
    msg.setDTESubAddrStatus8(_DTESubAddrStatus8);
    msg.setDTESubAddrStatus9(_DTESubAddrStatus9);
    msg.setDTESubAddrStatus10(_DTESubAddrStatus10);
    msg.setDTESubAddrStatus11(_DTESubAddrStatus11);
    msg.setDTESubAddrStatus12(_DTESubAddrStatus12);
    msg.setDTESubAddrStatus13(_DTESubAddrStatus13);
    msg.setDTESubAddrStatus14(_DTESubAddrStatus14);
    msg.setDTESubAddrStatus15(_DTESubAddrStatus15);
    return msg.get();
}


Json::Value messageBDSCode17(
        bool _05_ExtendedSquitterAirbornePosition,
        bool _06_ExtendedSquitterSurfacePosition,
        bool _07_ExtendedSquitterStatus,
        bool _08_ExtendedSquitterIDnAndCategory,
        bool _09_ExtendedSquitterAirborneVelocityInfo,
        bool _0A_ExtendedSquitterEventDrivenInfo,
        bool _20_AircraftID,
        bool _2l_AircraftRegistrationNumber,
        bool _40_SelectedVerticalIntention,
        bool _4l_NextWaypointIdentifier,
        bool _42_NextWaypointPosition,
        bool _43_NextWaypointInfo,
        bool _44_MeteorologicalRoutineReport,
        bool _45_MeteorologicalHazardReport,
        bool _48_VHFChannelReport,
        bool _50_TrackAndTurnReport,
        bool _51_PositionCoarse,
        bool _52_PositionFine,
        bool _53_AirReferencedStateVector,
        bool _54_Waypoint1,
        bool _55_Waypoint2,
        bool _56_Waypoint3,
        bool _5F_QuasiStaticParameterMonitoring,
        bool _60_HeadingAndSpeedReport
        )
{
    CBDSCode17 msg;
    msg.set05_ExtendedSquitterAirbornePosition(_05_ExtendedSquitterAirbornePosition);
    msg.set06_ExtendedSquitterSurfacePosition(_06_ExtendedSquitterSurfacePosition);
    msg.set07_ExtendedSquitterStatus(_07_ExtendedSquitterStatus);
    msg.set08_ExtendedSquitterIDnAndCategory(_08_ExtendedSquitterIDnAndCategory);
    msg.set09_ExtendedSquitterAirborneVelocityInfo(_09_ExtendedSquitterAirborneVelocityInfo);
    msg.set0A_ExtendedSquitterEventDrivenInfo(_0A_ExtendedSquitterEventDrivenInfo);
    msg.set20_AircraftID(_20_AircraftID);
    msg.set2l_AircraftRegistrationNumber(_2l_AircraftRegistrationNumber);
    msg.set40_SelectedVerticalIntention(_40_SelectedVerticalIntention);
    msg.set4l_NextWaypointIdentifier(_4l_NextWaypointIdentifier);
    msg.set42_NextWaypointPosition(_42_NextWaypointPosition);
    msg.set43_NextWaypointInfo(_43_NextWaypointInfo);
    msg.set44_MeteorologicalRoutineReport(_44_MeteorologicalRoutineReport);
    msg.set45_MeteorologicalHazardReport(_45_MeteorologicalHazardReport);
    msg.set48_VHFChannelReport(_48_VHFChannelReport);
    msg.set50_TrackAndTurnReport(_50_TrackAndTurnReport);
    msg.set51_PositionCoarse(_51_PositionCoarse);
    msg.set52_PositionFine(_52_PositionFine);
    msg.set53_AirReferencedStateVector(_53_AirReferencedStateVector);
    msg.set54_Waypoint1(_54_Waypoint1);
    msg.set55_Waypoint2(_55_Waypoint2);
    msg.set56_Waypoint3(_56_Waypoint3);
    msg.set5F_QuasiStaticParameterMonitoring(_5F_QuasiStaticParameterMonitoring);
    msg.set60_HeadingAndSpeedReport(_60_HeadingAndSpeedReport);
    return msg.get();
}


Json::Value messageBDSCode18(
        bool _BDS_38,
        bool _BDS_37,
        bool _BDS_36,
        bool _BDS_35,
        bool _BDS_34,
        bool _BDS_33,
        bool _BDS_32,
        bool _BDS_31,
        bool _BDS_30,
        bool _BDS_2F,
        bool _BDS_2E,
        bool _BDS_2D,
        bool _BDS_2C,
        bool _BDS_2B,
        bool _BDS_2A,
        bool _BDS_29,
        bool _BDS_28,
        bool _BDS_27,
        bool _BDS_26,
        bool _BDS_25,
        bool _BDS_24,
        bool _BDS_23,
        bool _BDS_22,
        bool _BDS_21,
        bool _BDS_20,
        bool _BDS_1F,
        bool _BDS_1E,
        bool _BDS_1D,
        bool _BDS_1C,
        bool _BDS_1B,
        bool _BDS_1A,
        bool _BDS_19,
        bool _BDS_18,
        bool _BDS_17,
        bool _BDS_16,
        bool _BDS_15,
        bool _BDS_14,
        bool _BDS_13,
        bool _BDS_12,
        bool _BDS_11,
        bool _BDS_10,
        bool _BDS_0F,
        bool _BDS_0E,
        bool _BDS_0D,
        bool _BDS_0C,
        bool _BDS_0B,
        bool _BDS_0A,
        bool _BDS_09,
        bool _BDS_08,
        bool _BDS_07,
        bool _BDS_06,
        bool _BDS_05,
        bool _BDS_04,
        bool _BDS_03,
        bool _BDS_02,
        bool _BDS_01
        )
{
    CBDSCode18 msg;
    msg.setBDS_38(_BDS_38);
    msg.setBDS_37(_BDS_37);
    msg.setBDS_36(_BDS_36);
    msg.setBDS_35(_BDS_35);
    msg.setBDS_34(_BDS_34);
    msg.setBDS_33(_BDS_33);
    msg.setBDS_32(_BDS_32);
    msg.setBDS_31(_BDS_31);
    msg.setBDS_30(_BDS_30);
    msg.setBDS_2F(_BDS_2F);
    msg.setBDS_2E(_BDS_2E);
    msg.setBDS_2D(_BDS_2D);
    msg.setBDS_2C(_BDS_2C);
    msg.setBDS_2B(_BDS_2B);
    msg.setBDS_2A(_BDS_2A);
    msg.setBDS_29(_BDS_29);
    msg.setBDS_28(_BDS_28);
    msg.setBDS_27(_BDS_27);
    msg.setBDS_26(_BDS_26);
    msg.setBDS_25(_BDS_25);
    msg.setBDS_24(_BDS_24);
    msg.setBDS_23(_BDS_23);
    msg.setBDS_22(_BDS_22);
    msg.setBDS_21(_BDS_21);
    msg.setBDS_20(_BDS_20);
    msg.setBDS_1F(_BDS_1F);
    msg.setBDS_1E(_BDS_1E);
    msg.setBDS_1D(_BDS_1D);
    msg.setBDS_1C(_BDS_1C);
    msg.setBDS_1B(_BDS_1B);
    msg.setBDS_1A(_BDS_1A);
    msg.setBDS_19(_BDS_19);
    msg.setBDS_18(_BDS_18);
    msg.setBDS_17(_BDS_17);
    msg.setBDS_16(_BDS_16);
    msg.setBDS_15(_BDS_15);
    msg.setBDS_14(_BDS_14);
    msg.setBDS_13(_BDS_13);
    msg.setBDS_12(_BDS_12);
    msg.setBDS_11(_BDS_11);
    msg.setBDS_10(_BDS_10);
    msg.setBDS_0F(_BDS_0F);
    msg.setBDS_0E(_BDS_0E);
    msg.setBDS_0D(_BDS_0D);
    msg.setBDS_0C(_BDS_0C);
    msg.setBDS_0B(_BDS_0B);
    msg.setBDS_0A(_BDS_0A);
    msg.setBDS_09(_BDS_09);
    msg.setBDS_08(_BDS_08);
    msg.setBDS_07(_BDS_07);
    msg.setBDS_06(_BDS_06);
    msg.setBDS_05(_BDS_05);
    msg.setBDS_04(_BDS_04);
    msg.setBDS_03(_BDS_03);
    msg.setBDS_02(_BDS_02);
    msg.setBDS_01(_BDS_01);
    return msg.get();
}


Json::Value messageBDSCode19(
        bool _BDS_70,
        bool _BDS_6F,
        bool _BDS_6E,
        bool _BDS_6D,
        bool _BDS_6C,
        bool _BDS_6B,
        bool _BDS_6A,
        bool _BDS_69,
        bool _BDS_68,
        bool _BDS_67,
        bool _BDS_66,
        bool _BDS_65,
        bool _BDS_64,
        bool _BDS_63,
        bool _BDS_62,
        bool _BDS_61,
        bool _BDS_60,
        bool _BDS_5F,
        bool _BDS_5E,
        bool _BDS_5D,
        bool _BDS_5C,
        bool _BDS_5B,
        bool _BDS_5A,
        bool _BDS_59,
        bool _BDS_58,
        bool _BDS_57,
        bool _BDS_56,
        bool _BDS_55,
        bool _BDS_54,
        bool _BDS_53,
        bool _BDS_52,
        bool _BDS_51,
        bool _BDS_50,
        bool _BDS_4F,
        bool _BDS_4E,
        bool _BDS_4D,
        bool _BDS_4C,
        bool _BDS_4B,
        bool _BDS_4A,
        bool _BDS_49,
        bool _BDS_48,
        bool _BDS_47,
        bool _BDS_46,
        bool _BDS_45,
        bool _BDS_44,
        bool _BDS_43,
        bool _BDS_42,
        bool _BDS_41,
        bool _BDS_40,
        bool _BDS_3F,
        bool _BDS_3E,
        bool _BDS_3D,
        bool _BDS_3C,
        bool _BDS_3B,
        bool _BDS_3A,
        bool _BDS_39
        )
{
    CBDSCode19 msg;
    msg.setBDS_70(_BDS_70);
    msg.setBDS_6F(_BDS_6F);
    msg.setBDS_6E(_BDS_6E);
    msg.setBDS_6D(_BDS_6D);
    msg.setBDS_6C(_BDS_6C);
    msg.setBDS_6B(_BDS_6B);
    msg.setBDS_6A(_BDS_6A);
    msg.setBDS_69(_BDS_69);
    msg.setBDS_68(_BDS_68);
    msg.setBDS_67(_BDS_67);
    msg.setBDS_66(_BDS_66);
    msg.setBDS_65(_BDS_65);
    msg.setBDS_64(_BDS_64);
    msg.setBDS_63(_BDS_63);
    msg.setBDS_62(_BDS_62);
    msg.setBDS_61(_BDS_61);
    msg.setBDS_60(_BDS_60);
    msg.setBDS_5F(_BDS_5F);
    msg.setBDS_5E(_BDS_5E);
    msg.setBDS_5D(_BDS_5D);
    msg.setBDS_5C(_BDS_5C);
    msg.setBDS_5B(_BDS_5B);
    msg.setBDS_5A(_BDS_5A);
    msg.setBDS_59(_BDS_59);
    msg.setBDS_58(_BDS_58);
    msg.setBDS_57(_BDS_57);
    msg.setBDS_56(_BDS_56);
    msg.setBDS_55(_BDS_55);
    msg.setBDS_54(_BDS_54);
    msg.setBDS_53(_BDS_53);
    msg.setBDS_52(_BDS_52);
    msg.setBDS_51(_BDS_51);
    msg.setBDS_50(_BDS_50);
    msg.setBDS_4F(_BDS_4F);
    msg.setBDS_4E(_BDS_4E);
    msg.setBDS_4D(_BDS_4D);
    msg.setBDS_4C(_BDS_4C);
    msg.setBDS_4B(_BDS_4B);
    msg.setBDS_4A(_BDS_4A);
    msg.setBDS_49(_BDS_49);
    msg.setBDS_48(_BDS_48);
    msg.setBDS_47(_BDS_47);
    msg.setBDS_46(_BDS_46);
    msg.setBDS_45(_BDS_45);
    msg.setBDS_44(_BDS_44);
    msg.setBDS_43(_BDS_43);
    msg.setBDS_42(_BDS_42);
    msg.setBDS_41(_BDS_41);
    msg.setBDS_40(_BDS_40);
    msg.setBDS_3F(_BDS_3F);
    msg.setBDS_3E(_BDS_3E);
    msg.setBDS_3D(_BDS_3D);
    msg.setBDS_3C(_BDS_3C);
    msg.setBDS_3B(_BDS_3B);
    msg.setBDS_3A(_BDS_3A);
    msg.setBDS_39(_BDS_39);
    return msg.get();
}


Json::Value messageBDSCode1A(
        bool _BDS_A8,
        bool _BDS_A7,
        bool _BDS_A6,
        bool _BDS_A5,
        bool _BDS_A4,
        bool _BDS_A3,
        bool _BDS_A2,
        bool _BDS_A1,
        bool _BDS_A0,
        bool _BDS_9F,
        bool _BDS_9E,
        bool _BDS_9D,
        bool _BDS_9C,
        bool _BDS_9B,
        bool _BDS_9A,
        bool _BDS_99,
        bool _BDS_98,
        bool _BDS_97,
        bool _BDS_96,
        bool _BDS_95,
        bool _BDS_94,
        bool _BDS_93,
        bool _BDS_92,
        bool _BDS_91,
        bool _BDS_90,
        bool _BDS_8F,
        bool _BDS_8E,
        bool _BDS_8D,
        bool _BDS_8C,
        bool _BDS_8B,
        bool _BDS_8A,
        bool _BDS_89,
        bool _BDS_88,
        bool _BDS_87,
        bool _BDS_86,
        bool _BDS_85,
        bool _BDS_84,
        bool _BDS_83,
        bool _BDS_82,
        bool _BDS_81,
        bool _BDS_80,
        bool _BDS_7F,
        bool _BDS_7E,
        bool _BDS_7D,
        bool _BDS_7C,
        bool _BDS_7B,
        bool _BDS_7A,
        bool _BDS_79,
        bool _BDS_78,
        bool _BDS_77,
        bool _BDS_76,
        bool _BDS_75,
        bool _BDS_74,
        bool _BDS_73,
        bool _BDS_72,
        bool _BDS_71
        )
{
    CBDSCode1A msg;
    msg.setBDS_A8(_BDS_A8);
    msg.setBDS_A7(_BDS_A7);
    msg.setBDS_A6(_BDS_A6);
    msg.setBDS_A5(_BDS_A5);
    msg.setBDS_A4(_BDS_A4);
    msg.setBDS_A3(_BDS_A3);
    msg.setBDS_A2(_BDS_A2);
    msg.setBDS_A1(_BDS_A1);
    msg.setBDS_A0(_BDS_A0);
    msg.setBDS_9F(_BDS_9F);
    msg.setBDS_9E(_BDS_9E);
    msg.setBDS_9D(_BDS_9D);
    msg.setBDS_9C(_BDS_9C);
    msg.setBDS_9B(_BDS_9B);
    msg.setBDS_9A(_BDS_9A);
    msg.setBDS_99(_BDS_99);
    msg.setBDS_98(_BDS_98);
    msg.setBDS_97(_BDS_97);
    msg.setBDS_96(_BDS_96);
    msg.setBDS_95(_BDS_95);
    msg.setBDS_94(_BDS_94);
    msg.setBDS_93(_BDS_93);
    msg.setBDS_92(_BDS_92);
    msg.setBDS_91(_BDS_91);
    msg.setBDS_90(_BDS_90);
    msg.setBDS_8F(_BDS_8F);
    msg.setBDS_8E(_BDS_8E);
    msg.setBDS_8D(_BDS_8D);
    msg.setBDS_8C(_BDS_8C);
    msg.setBDS_8B(_BDS_8B);
    msg.setBDS_8A(_BDS_8A);
    msg.setBDS_89(_BDS_89);
    msg.setBDS_88(_BDS_88);
    msg.setBDS_87(_BDS_87);
    msg.setBDS_86(_BDS_86);
    msg.setBDS_85(_BDS_85);
    msg.setBDS_84(_BDS_84);
    msg.setBDS_83(_BDS_83);
    msg.setBDS_82(_BDS_82);
    msg.setBDS_81(_BDS_81);
    msg.setBDS_80(_BDS_80);
    msg.setBDS_7F(_BDS_7F);
    msg.setBDS_7E(_BDS_7E);
    msg.setBDS_7D(_BDS_7D);
    msg.setBDS_7C(_BDS_7C);
    msg.setBDS_7B(_BDS_7B);
    msg.setBDS_7A(_BDS_7A);
    msg.setBDS_79(_BDS_79);
    msg.setBDS_78(_BDS_78);
    msg.setBDS_77(_BDS_77);
    msg.setBDS_76(_BDS_76);
    msg.setBDS_75(_BDS_75);
    msg.setBDS_74(_BDS_74);
    msg.setBDS_73(_BDS_73);
    msg.setBDS_72(_BDS_72);
    msg.setBDS_71(_BDS_71);
    return msg.get();
}


Json::Value messageBDSCode1B(
        bool _BDS_E0,
        bool _BDS_DF,
        bool _BDS_DE,
        bool _BDS_DD,
        bool _BDS_DC,
        bool _BDS_DB,
        bool _BDS_DA,
        bool _BDS_D9,
        bool _BDS_D8,
        bool _BDS_D7,
        bool _BDS_D6,
        bool _BDS_D5,
        bool _BDS_D4,
        bool _BDS_D3,
        bool _BDS_D2,
        bool _BDS_D1,
        bool _BDS_D0,
        bool _BDS_CF,
        bool _BDS_CE,
        bool _BDS_CD,
        bool _BDS_CC,
        bool _BDS_CB,
        bool _BDS_CA,
        bool _BDS_C9,
        bool _BDS_C8,
        bool _BDS_C7,
        bool _BDS_C6,
        bool _BDS_C5,
        bool _BDS_C4,
        bool _BDS_C3,
        bool _BDS_C2,
        bool _BDS_C1,
        bool _BDS_C0,
        bool _BDS_BF,
        bool _BDS_BE,
        bool _BDS_BD,
        bool _BDS_BC,
        bool _BDS_BB,
        bool _BDS_BA,
        bool _BDS_B9,
        bool _BDS_B8,
        bool _BDS_B7,
        bool _BDS_B6,
        bool _BDS_B5,
        bool _BDS_B4,
        bool _BDS_B3,
        bool _BDS_B2,
        bool _BDS_B1,
        bool _BDS_B0,
        bool _BDS_AF,
        bool _BDS_AE,
        bool _BDS_AD,
        bool _BDS_AC,
        bool _BDS_AB,
        bool _BDS_AA,
        bool _BDS_A9
        )
{
    CBDSCode1B msg;
    msg.setBDS_E0(_BDS_E0);
    msg.setBDS_DF(_BDS_DF);
    msg.setBDS_DE(_BDS_DE);
    msg.setBDS_DD(_BDS_DD);
    msg.setBDS_DC(_BDS_DC);
    msg.setBDS_DB(_BDS_DB);
    msg.setBDS_DA(_BDS_DA);
    msg.setBDS_D9(_BDS_D9);
    msg.setBDS_D8(_BDS_D8);
    msg.setBDS_D7(_BDS_D7);
    msg.setBDS_D6(_BDS_D6);
    msg.setBDS_D5(_BDS_D5);
    msg.setBDS_D4(_BDS_D4);
    msg.setBDS_D3(_BDS_D3);
    msg.setBDS_D2(_BDS_D2);
    msg.setBDS_D1(_BDS_D1);
    msg.setBDS_D0(_BDS_D0);
    msg.setBDS_CF(_BDS_CF);
    msg.setBDS_CE(_BDS_CE);
    msg.setBDS_CD(_BDS_CD);
    msg.setBDS_CC(_BDS_CC);
    msg.setBDS_CB(_BDS_CB);
    msg.setBDS_CA(_BDS_CA);
    msg.setBDS_C9(_BDS_C9);
    msg.setBDS_C8(_BDS_C8);
    msg.setBDS_C7(_BDS_C7);
    msg.setBDS_C6(_BDS_C6);
    msg.setBDS_C5(_BDS_C5);
    msg.setBDS_C4(_BDS_C4);
    msg.setBDS_C3(_BDS_C3);
    msg.setBDS_C2(_BDS_C2);
    msg.setBDS_C1(_BDS_C1);
    msg.setBDS_C0(_BDS_C0);
    msg.setBDS_BF(_BDS_BF);
    msg.setBDS_BE(_BDS_BE);
    msg.setBDS_BD(_BDS_BD);
    msg.setBDS_BC(_BDS_BC);
    msg.setBDS_BB(_BDS_BB);
    msg.setBDS_BA(_BDS_BA);
    msg.setBDS_B9(_BDS_B9);
    msg.setBDS_B8(_BDS_B8);
    msg.setBDS_B7(_BDS_B7);
    msg.setBDS_B6(_BDS_B6);
    msg.setBDS_B5(_BDS_B5);
    msg.setBDS_B4(_BDS_B4);
    msg.setBDS_B3(_BDS_B3);
    msg.setBDS_B2(_BDS_B2);
    msg.setBDS_B1(_BDS_B1);
    msg.setBDS_B0(_BDS_B0);
    msg.setBDS_AF(_BDS_AF);
    msg.setBDS_AE(_BDS_AE);
    msg.setBDS_AD(_BDS_AD);
    msg.setBDS_AC(_BDS_AC);
    msg.setBDS_AB(_BDS_AB);
    msg.setBDS_AA(_BDS_AA);
    msg.setBDS_A9(_BDS_A9);
    return msg.get();
}


Json::Value messageBDSCode1C(
        bool _BDS_FF,
        bool _BDS_FE,
        bool _BDS_FD,
        bool _BDS_FC,
        bool _BDS_FB,
        bool _BDS_FA,
        bool _BDS_F9,
        bool _BDS_F8,
        bool _BDS_F7,
        bool _BDS_F6,
        bool _BDS_F5,
        bool _BDS_F4,
        bool _BDS_F3,
        bool _BDS_F2,
        bool _BDS_F1,
        bool _BDS_F0,
        bool _BDS_EF,
        bool _BDS_EE,
        bool _BDS_ED,
        bool _BDS_EC,
        bool _BDS_EB,
        bool _BDS_EA,
        bool _BDS_E9,
        bool _BDS_E8,
        bool _BDS_E7,
        bool _BDS_E6,
        bool _BDS_E5,
        bool _BDS_E4,
        bool _BDS_E3,
        bool _BDS_E2,
        bool _BDS_E1
        )
{
    CBDSCode1C msg;
    msg.setBDS_FF(_BDS_FF);
    msg.setBDS_FE(_BDS_FE);
    msg.setBDS_FD(_BDS_FD);
    msg.setBDS_FC(_BDS_FC);
    msg.setBDS_FB(_BDS_FB);
    msg.setBDS_FA(_BDS_FA);
    msg.setBDS_F9(_BDS_F9);
    msg.setBDS_F8(_BDS_F8);
    msg.setBDS_F7(_BDS_F7);
    msg.setBDS_F6(_BDS_F6);
    msg.setBDS_F5(_BDS_F5);
    msg.setBDS_F4(_BDS_F4);
    msg.setBDS_F3(_BDS_F3);
    msg.setBDS_F2(_BDS_F2);
    msg.setBDS_F1(_BDS_F1);
    msg.setBDS_F0(_BDS_F0);
    msg.setBDS_EF(_BDS_EF);
    msg.setBDS_EE(_BDS_EE);
    msg.setBDS_ED(_BDS_ED);
    msg.setBDS_EC(_BDS_EC);
    msg.setBDS_EB(_BDS_EB);
    msg.setBDS_EA(_BDS_EA);
    msg.setBDS_E9(_BDS_E9);
    msg.setBDS_E8(_BDS_E8);
    msg.setBDS_E7(_BDS_E7);
    msg.setBDS_E6(_BDS_E6);
    msg.setBDS_E5(_BDS_E5);
    msg.setBDS_E4(_BDS_E4);
    msg.setBDS_E3(_BDS_E3);
    msg.setBDS_E2(_BDS_E2);
    msg.setBDS_E1(_BDS_E1);
    return msg.get();
}


Json::Value messageBDSCode1D(
        bool _UplinkMSPChannel1,
        bool _UplinkMSPChannel2,
        bool _UplinkMSPChannel3,
        bool _UplinkMSPChannel4,
        bool _UplinkMSPChannel5,
        bool _UplinkMSPChannel6,
        bool _UplinkMSPChannel7,
        bool _UplinkMSPChannel8,
        bool _UplinkMSPChannel9,
        bool _UplinkMSPChannel10,
        bool _UplinkMSPChannel11,
        bool _UplinkMSPChannel12,
        bool _UplinkMSPChannel13,
        bool _UplinkMSPChannel14,
        bool _UplinkMSPChannel15,
        bool _UplinkMSPChannel16,
        bool _UplinkMSPChannel17,
        bool _UplinkMSPChannel18,
        bool _UplinkMSPChannel19,
        bool _UplinkMSPChannel20,
        bool _UplinkMSPChannel21,
        bool _UplinkMSPChannel22,
        bool _UplinkMSPChannel23,
        bool _UplinkMSPChannel24,
        bool _UplinkMSPChannel25,
        bool _UplinkMSPChannel26,
        bool _UplinkMSPChannel27,
        bool _UplinkMSPChannel28,
        bool _DownlinkMSPChannel1,
        bool _DownlinkMSPChannel2,
        bool _DownlinkMSPChannel3,
        bool _DownlinkMSPChannel4,
        bool _DownlinkMSPChannel5,
        bool _DownlinkMSPChannel6,
        bool _DownlinkMSPChannel7,
        bool _DownlinkMSPChannel8,
        bool _DownlinkMSPChannel9,
        bool _DownlinkMSPChannel10,
        bool _DownlinkMSPChannel11,
        bool _DownlinkMSPChannel12,
        bool _DownlinkMSPChannel13,
        bool _DownlinkMSPChannel14,
        bool _DownlinkMSPChannel15,
        bool _DownlinkMSPChannel16,
        bool _DownlinkMSPChannel17,
        bool _DownlinkMSPChannel18,
        bool _DownlinkMSPChannel19,
        bool _DownlinkMSPChannel20,
        bool _DownlinkMSPChannel21,
        bool _DownlinkMSPChannel22,
        bool _DownlinkMSPChannel23,
        bool _DownlinkMSPChannel24,
        bool _DownlinkMSPChannel25,
        bool _DownlinkMSPChannel26,
        bool _DownlinkMSPChannel27,
        bool _DownlinkMSPChannel28
        )
{
    CBDSCode1D msg;
    msg.setUplinkMSPChannel1(_UplinkMSPChannel1);
    msg.setUplinkMSPChannel2(_UplinkMSPChannel2);
    msg.setUplinkMSPChannel3(_UplinkMSPChannel3);
    msg.setUplinkMSPChannel4(_UplinkMSPChannel4);
    msg.setUplinkMSPChannel5(_UplinkMSPChannel5);
    msg.setUplinkMSPChannel6(_UplinkMSPChannel6);
    msg.setUplinkMSPChannel7(_UplinkMSPChannel7);
    msg.setUplinkMSPChannel8(_UplinkMSPChannel8);
    msg.setUplinkMSPChannel9(_UplinkMSPChannel9);
    msg.setUplinkMSPChannel10(_UplinkMSPChannel10);
    msg.setUplinkMSPChannel11(_UplinkMSPChannel11);
    msg.setUplinkMSPChannel12(_UplinkMSPChannel12);
    msg.setUplinkMSPChannel13(_UplinkMSPChannel13);
    msg.setUplinkMSPChannel14(_UplinkMSPChannel14);
    msg.setUplinkMSPChannel15(_UplinkMSPChannel15);
    msg.setUplinkMSPChannel16(_UplinkMSPChannel16);
    msg.setUplinkMSPChannel17(_UplinkMSPChannel17);
    msg.setUplinkMSPChannel18(_UplinkMSPChannel18);
    msg.setUplinkMSPChannel19(_UplinkMSPChannel19);
    msg.setUplinkMSPChannel20(_UplinkMSPChannel20);
    msg.setUplinkMSPChannel21(_UplinkMSPChannel21);
    msg.setUplinkMSPChannel22(_UplinkMSPChannel22);
    msg.setUplinkMSPChannel23(_UplinkMSPChannel23);
    msg.setUplinkMSPChannel24(_UplinkMSPChannel24);
    msg.setUplinkMSPChannel25(_UplinkMSPChannel25);
    msg.setUplinkMSPChannel26(_UplinkMSPChannel26);
    msg.setUplinkMSPChannel27(_UplinkMSPChannel27);
    msg.setUplinkMSPChannel28(_UplinkMSPChannel28);
    msg.setDownlinkMSPChannel1(_DownlinkMSPChannel1);
    msg.setDownlinkMSPChannel2(_DownlinkMSPChannel2);
    msg.setDownlinkMSPChannel3(_DownlinkMSPChannel3);
    msg.setDownlinkMSPChannel4(_DownlinkMSPChannel4);
    msg.setDownlinkMSPChannel5(_DownlinkMSPChannel5);
    msg.setDownlinkMSPChannel6(_DownlinkMSPChannel6);
    msg.setDownlinkMSPChannel7(_DownlinkMSPChannel7);
    msg.setDownlinkMSPChannel8(_DownlinkMSPChannel8);
    msg.setDownlinkMSPChannel9(_DownlinkMSPChannel9);
    msg.setDownlinkMSPChannel10(_DownlinkMSPChannel10);
    msg.setDownlinkMSPChannel11(_DownlinkMSPChannel11);
    msg.setDownlinkMSPChannel12(_DownlinkMSPChannel12);
    msg.setDownlinkMSPChannel13(_DownlinkMSPChannel13);
    msg.setDownlinkMSPChannel14(_DownlinkMSPChannel14);
    msg.setDownlinkMSPChannel15(_DownlinkMSPChannel15);
    msg.setDownlinkMSPChannel16(_DownlinkMSPChannel16);
    msg.setDownlinkMSPChannel17(_DownlinkMSPChannel17);
    msg.setDownlinkMSPChannel18(_DownlinkMSPChannel18);
    msg.setDownlinkMSPChannel19(_DownlinkMSPChannel19);
    msg.setDownlinkMSPChannel20(_DownlinkMSPChannel20);
    msg.setDownlinkMSPChannel21(_DownlinkMSPChannel21);
    msg.setDownlinkMSPChannel22(_DownlinkMSPChannel22);
    msg.setDownlinkMSPChannel23(_DownlinkMSPChannel23);
    msg.setDownlinkMSPChannel24(_DownlinkMSPChannel24);
    msg.setDownlinkMSPChannel25(_DownlinkMSPChannel25);
    msg.setDownlinkMSPChannel26(_DownlinkMSPChannel26);
    msg.setDownlinkMSPChannel27(_DownlinkMSPChannel27);
    msg.setDownlinkMSPChannel28(_DownlinkMSPChannel28);
    return msg.get();
}


Json::Value messageBDSCode1E(
        bool _UplinkMSPChannel29,
        bool _UplinkMSPChannel30,
        bool _UplinkMSPChannel31,
        bool _UplinkMSPChannel32,
        bool _UplinkMSPChannel33,
        bool _UplinkMSPChannel34,
        bool _UplinkMSPChannel35,
        bool _UplinkMSPChannel36,
        bool _UplinkMSPChannel37,
        bool _UplinkMSPChannel38,
        bool _UplinkMSPChannel39,
        bool _UplinkMSPChannel40,
        bool _UplinkMSPChannel41,
        bool _UplinkMSPChannel42,
        bool _UplinkMSPChannel43,
        bool _UplinkMSPChannel44,
        bool _UplinkMSPChannel45,
        bool _UplinkMSPChannel46,
        bool _UplinkMSPChannel47,
        bool _UplinkMSPChannel48,
        bool _UplinkMSPChannel49,
        bool _UplinkMSPChannel50,
        bool _UplinkMSPChannel51,
        bool _UplinkMSPChannel52,
        bool _UplinkMSPChannel53,
        bool _UplinkMSPChannel54,
        bool _UplinkMSPChannel55,
        bool _UplinkMSPChannel56,
        bool _DownlinkMSPChannel29,
        bool _DownlinkMSPChannel30,
        bool _DownlinkMSPChannel31,
        bool _DownlinkMSPChannel32,
        bool _DownlinkMSPChannel33,
        bool _DownlinkMSPChannel34,
        bool _DownlinkMSPChannel35,
        bool _DownlinkMSPChannel36,
        bool _DownlinkMSPChannel37,
        bool _DownlinkMSPChannel38,
        bool _DownlinkMSPChannel39,
        bool _DownlinkMSPChannel40,
        bool _DownlinkMSPChannel41,
        bool _DownlinkMSPChannel42,
        bool _DownlinkMSPChannel43,
        bool _DownlinkMSPChannel44,
        bool _DownlinkMSPChannel45,
        bool _DownlinkMSPChannel46,
        bool _DownlinkMSPChannel47,
        bool _DownlinkMSPChannel48,
        bool _DownlinkMSPChannel49,
        bool _DownlinkMSPChannel50,
        bool _DownlinkMSPChannel51,
        bool _DownlinkMSPChannel52,
        bool _DownlinkMSPChannel53,
        bool _DownlinkMSPChannel54,
        bool _DownlinkMSPChannel55,
        bool _DownlinkMSPChannel56
        )
{
    CBDSCode1E msg;
    msg.setUplinkMSPChannel29(_UplinkMSPChannel29);
    msg.setUplinkMSPChannel30(_UplinkMSPChannel30);
    msg.setUplinkMSPChannel31(_UplinkMSPChannel31);
    msg.setUplinkMSPChannel32(_UplinkMSPChannel32);
    msg.setUplinkMSPChannel33(_UplinkMSPChannel33);
    msg.setUplinkMSPChannel34(_UplinkMSPChannel34);
    msg.setUplinkMSPChannel35(_UplinkMSPChannel35);
    msg.setUplinkMSPChannel36(_UplinkMSPChannel36);
    msg.setUplinkMSPChannel37(_UplinkMSPChannel37);
    msg.setUplinkMSPChannel38(_UplinkMSPChannel38);
    msg.setUplinkMSPChannel39(_UplinkMSPChannel39);
    msg.setUplinkMSPChannel40(_UplinkMSPChannel40);
    msg.setUplinkMSPChannel41(_UplinkMSPChannel41);
    msg.setUplinkMSPChannel42(_UplinkMSPChannel42);
    msg.setUplinkMSPChannel43(_UplinkMSPChannel43);
    msg.setUplinkMSPChannel44(_UplinkMSPChannel44);
    msg.setUplinkMSPChannel45(_UplinkMSPChannel45);
    msg.setUplinkMSPChannel46(_UplinkMSPChannel46);
    msg.setUplinkMSPChannel47(_UplinkMSPChannel47);
    msg.setUplinkMSPChannel48(_UplinkMSPChannel48);
    msg.setUplinkMSPChannel49(_UplinkMSPChannel49);
    msg.setUplinkMSPChannel50(_UplinkMSPChannel50);
    msg.setUplinkMSPChannel51(_UplinkMSPChannel51);
    msg.setUplinkMSPChannel52(_UplinkMSPChannel52);
    msg.setUplinkMSPChannel53(_UplinkMSPChannel53);
    msg.setUplinkMSPChannel54(_UplinkMSPChannel54);
    msg.setUplinkMSPChannel55(_UplinkMSPChannel55);
    msg.setUplinkMSPChannel56(_UplinkMSPChannel56);
    msg.setDownlinkMSPChannel29(_DownlinkMSPChannel29);
    msg.setDownlinkMSPChannel30(_DownlinkMSPChannel30);
    msg.setDownlinkMSPChannel31(_DownlinkMSPChannel31);
    msg.setDownlinkMSPChannel32(_DownlinkMSPChannel32);
    msg.setDownlinkMSPChannel33(_DownlinkMSPChannel33);
    msg.setDownlinkMSPChannel34(_DownlinkMSPChannel34);
    msg.setDownlinkMSPChannel35(_DownlinkMSPChannel35);
    msg.setDownlinkMSPChannel36(_DownlinkMSPChannel36);
    msg.setDownlinkMSPChannel37(_DownlinkMSPChannel37);
    msg.setDownlinkMSPChannel38(_DownlinkMSPChannel38);
    msg.setDownlinkMSPChannel39(_DownlinkMSPChannel39);
    msg.setDownlinkMSPChannel40(_DownlinkMSPChannel40);
    msg.setDownlinkMSPChannel41(_DownlinkMSPChannel41);
    msg.setDownlinkMSPChannel42(_DownlinkMSPChannel42);
    msg.setDownlinkMSPChannel43(_DownlinkMSPChannel43);
    msg.setDownlinkMSPChannel44(_DownlinkMSPChannel44);
    msg.setDownlinkMSPChannel45(_DownlinkMSPChannel45);
    msg.setDownlinkMSPChannel46(_DownlinkMSPChannel46);
    msg.setDownlinkMSPChannel47(_DownlinkMSPChannel47);
    msg.setDownlinkMSPChannel48(_DownlinkMSPChannel48);
    msg.setDownlinkMSPChannel49(_DownlinkMSPChannel49);
    msg.setDownlinkMSPChannel50(_DownlinkMSPChannel50);
    msg.setDownlinkMSPChannel51(_DownlinkMSPChannel51);
    msg.setDownlinkMSPChannel52(_DownlinkMSPChannel52);
    msg.setDownlinkMSPChannel53(_DownlinkMSPChannel53);
    msg.setDownlinkMSPChannel54(_DownlinkMSPChannel54);
    msg.setDownlinkMSPChannel55(_DownlinkMSPChannel55);
    msg.setDownlinkMSPChannel56(_DownlinkMSPChannel56);
    return msg.get();
}


Json::Value messageBDSCode1F(
        bool _UplinkMSPChannel57,
        bool _UplinkMSPChannel58,
        bool _UplinkMSPChannel59,
        bool _UplinkMSPChannel60,
        bool _UplinkMSPChannel61,
        bool _UplinkMSPChannel62,
        bool _UplinkMSPChannel63,
        bool _DownlinkMSPChannel57,
        bool _DownlinkMSPChannel58,
        bool _DownlinkMSPChannel59,
        bool _DownlinkMSPChannel60,
        bool _DownlinkMSPChannel61,
        bool _DownlinkMSPChannel62,
        bool _DownlinkMSPChannel63
        )
{
    CBDSCode1F msg;
    msg.setUplinkMSPChannel57(_UplinkMSPChannel57);
    msg.setUplinkMSPChannel58(_UplinkMSPChannel58);
    msg.setUplinkMSPChannel59(_UplinkMSPChannel59);
    msg.setUplinkMSPChannel60(_UplinkMSPChannel60);
    msg.setUplinkMSPChannel61(_UplinkMSPChannel61);
    msg.setUplinkMSPChannel62(_UplinkMSPChannel62);
    msg.setUplinkMSPChannel63(_UplinkMSPChannel63);
    msg.setDownlinkMSPChannel57(_DownlinkMSPChannel57);
    msg.setDownlinkMSPChannel58(_DownlinkMSPChannel58);
    msg.setDownlinkMSPChannel59(_DownlinkMSPChannel59);
    msg.setDownlinkMSPChannel60(_DownlinkMSPChannel60);
    msg.setDownlinkMSPChannel61(_DownlinkMSPChannel61);
    msg.setDownlinkMSPChannel62(_DownlinkMSPChannel62);
    msg.setDownlinkMSPChannel63(_DownlinkMSPChannel63);
    return msg.get();
}


Json::Value messageBDSCode20(
        std::string _BDSCode,
        std::string _AircraftID
        )
{
    CBDSCode20 msg;
    msg.setBDSCode(_BDSCode);
    msg.setAircraftID(_AircraftID);
    return msg.get();
}


Json::Value messageBDSCode21(
        bool _AircraftRegistrationStatus,
        std::string _AircraftRegistrationNumber,
        bool _ICAOAirlineRegistrationStatus,
        std::string _ICAOAirlineRegistrationMarking
        )
{
    CBDSCode21 msg;
    msg.setAircraftRegistrationStatus(_AircraftRegistrationStatus);
    msg.setAircraftRegistrationNumber(_AircraftRegistrationNumber);
    msg.setICAOAirlineRegistrationStatus(_ICAOAirlineRegistrationStatus);
    msg.setICAOAirlineRegistrationMarking(_ICAOAirlineRegistrationMarking);
    return msg.get();
}


Json::Value messageBDSCode22(
        unsigned int _Antenna1AntennaType,
        unsigned int _Antenna1XPostion,
        unsigned int _Antenna1ZPostion,
        unsigned int _Antenna2AntennaType,
        unsigned int _Antenna2XPostion,
        unsigned int _Antenna2ZPostion,
        unsigned int _Antenna3AntennaType,
        unsigned int _Antenna3XPostion,
        unsigned int _Antenna3ZPostion,
        unsigned int _Antenna4AntennaType,
        unsigned int _Antenna4XPostion,
        unsigned int _Antenna4ZPostion
        )
{
    CBDSCode22 msg;
    msg.setAntenna1AntennaType(_Antenna1AntennaType);
    msg.setAntenna1XPostion(_Antenna1XPostion);
    msg.setAntenna1ZPostion(_Antenna1ZPostion);
    msg.setAntenna2AntennaType(_Antenna2AntennaType);
    msg.setAntenna2XPostion(_Antenna2XPostion);
    msg.setAntenna2ZPostion(_Antenna2ZPostion);
    msg.setAntenna3AntennaType(_Antenna3AntennaType);
    msg.setAntenna3XPostion(_Antenna3XPostion);
    msg.setAntenna3ZPostion(_Antenna3ZPostion);
    msg.setAntenna4AntennaType(_Antenna4AntennaType);
    msg.setAntenna4XPostion(_Antenna4XPostion);
    msg.setAntenna4ZPostion(_Antenna4ZPostion);
    return msg.get();
}


Json::Value messageBDSCode25(
        std::string _AircraftType,
        unsigned int _Engines,
        std::string _EngineType,
        unsigned int _ModelDesignation,
        std::string _WakeTurbulenceCategory
        )
{
    CBDSCode25 msg;
    msg.setAircraftType(_AircraftType);
    msg.setEngines(_Engines);
    msg.setEngineType(_EngineType);
    msg.setModelDesignation(_ModelDesignation);
    msg.setWakeTurbulenceCategory(_WakeTurbulenceCategory);
    return msg.get();
}


Json::Value messageBDSCode30(
        std::string _BDSCode,
        bool _ARABit41,
        bool _ARABit42,
        bool _ARABit43,
        bool _ARABit44,
        bool _ARABit45,
        bool _ARABit46,
        bool _ARABit47,
        bool _RACBit55,
        bool _RACBit56,
        bool _RACBit57,
        bool _RACBit58,
        bool _RATerminated,
        bool _MultipleThreatEncouter,
        unsigned int _ThreatTypeIndicator,
        std::string _TID,
        std::string _TIDA,
        unsigned int _TIDR,
        unsigned int _TIDB
        )
{
    CBDSCode30 msg;
    msg.setBDSCode(_BDSCode);
    msg.setARABit41(_ARABit41);
    msg.setARABit42(_ARABit42);
    msg.setARABit43(_ARABit43);
    msg.setARABit44(_ARABit44);
    msg.setARABit45(_ARABit45);
    msg.setARABit46(_ARABit46);
    msg.setARABit47(_ARABit47);
    msg.setRACBit55(_RACBit55);
    msg.setRACBit56(_RACBit56);
    msg.setRACBit57(_RACBit57);
    msg.setRACBit58(_RACBit58);
    msg.setRATerminated(_RATerminated);
    msg.setMultipleThreatEncouter(_MultipleThreatEncouter);
    msg.setThreatTypeIndicator(_ThreatTypeIndicator);
    msg.setTID(_TID);
    msg.setTIDA(_TIDA);
    msg.setTIDR(_TIDR);
    msg.setTIDB(_TIDB);
    return msg.get();
}


Json::Value messageBDSCode40(
        bool _MCPnFCUSelectedAltitudeStatus,
        int _MCPnFCUSelectedAltitude,
        bool _FMSSelectedAltitudeStatus,
        int _FMSSelectedAltitude,
        bool _BarometricPressureStatus,
        float _BarometricPressureMinus800mb,
        bool _MCPnFCUModeStatus,
        bool _VNAVMode,
        bool _AltHoldMode,
        bool _ApproachMode,
        bool _TargetAltSourceStatus,
        unsigned int _TargetAltSource
        )
{
    CBDSCode40 msg;
    msg.setMCPnFCUSelectedAltitudeStatus(_MCPnFCUSelectedAltitudeStatus);
    msg.setMCPnFCUSelectedAltitude(_MCPnFCUSelectedAltitude);
    msg.setFMSSelectedAltitudeStatus(_FMSSelectedAltitudeStatus);
    msg.setFMSSelectedAltitude(_FMSSelectedAltitude);
    msg.setBarometricPressureStatus(_BarometricPressureStatus);
    msg.setBarometricPressureMinus800mb(_BarometricPressureMinus800mb);
    msg.setMCPnFCUModeStatus(_MCPnFCUModeStatus);
    msg.setVNAVMode(_VNAVMode);
    msg.setAltHoldMode(_AltHoldMode);
    msg.setApproachMode(_ApproachMode);
    msg.setTargetAltSourceStatus(_TargetAltSourceStatus);
    msg.setTargetAltSource(_TargetAltSource);
    return msg.get();
}


Json::Value messageBDSCode41(
        bool _WaypointNameStatus,
        std::string _WaypointName
        )
{
    CBDSCode41 msg;
    msg.setWaypointNameStatus(_WaypointNameStatus);
    msg.setWaypointName(_WaypointName);
    return msg.get();
}


Json::Value messageBDSCode42(
        bool _WaypointLatitudeStatus,
        bool _WaypointLatitudeSign,
        double _WaypointLatitude,
        bool _WaypointLongitudeStatus,
        bool _WaypointLongitudeSign,
        double _WaypointLongitude,
        bool _WaypointCrossingAltitudeStatus,
        bool _WaypointCrossingAltitudeSign,
        int _WaypointCrossingAltitude
        )
{
    CBDSCode42 msg;
    msg.setWaypointLatitudeStatus(_WaypointLatitudeStatus);
    msg.setWaypointLatitudeSign(_WaypointLatitudeSign);
    msg.setWaypointLatitude(_WaypointLatitude);
    msg.setWaypointLongitudeStatus(_WaypointLongitudeStatus);
    msg.setWaypointLongitudeSign(_WaypointLongitudeSign);
    msg.setWaypointLongitude(_WaypointLongitude);
    msg.setWaypointCrossingAltitudeStatus(_WaypointCrossingAltitudeStatus);
    msg.setWaypointCrossingAltitudeSign(_WaypointCrossingAltitudeSign);
    msg.setWaypointCrossingAltitude(_WaypointCrossingAltitude);
    return msg.get();
}


Json::Value messageBDSCode43(
        bool _BearingToWaypointStatus,
        bool _BearingToWaypointSign,
        float _BearingToWaypoint,
        bool _TimeToGoStatus,
        float _TimeToGo,
        bool _DistanceToGoStatus,
        float _DistanceToGo
        )
{
    CBDSCode43 msg;
    msg.setBearingToWaypointStatus(_BearingToWaypointStatus);
    msg.setBearingToWaypointSign(_BearingToWaypointSign);
    msg.setBearingToWaypoint(_BearingToWaypoint);
    msg.setTimeToGoStatus(_TimeToGoStatus);
    msg.setTimeToGo(_TimeToGo);
    msg.setDistanceToGoStatus(_DistanceToGoStatus);
    msg.setDistanceToGo(_DistanceToGo);
    return msg.get();
}


Json::Value messageBDSCode44(
        unsigned int _FOMSource,
        bool _WindSpeednDirectionStatus,
        unsigned int _WindSpeed,
        float _WindDirection,
        bool _StaticAirTemperatureSign,
        float _StaticAirTemperature,
        bool _AverageStaticPressureStatus,
        unsigned int _AverageStaticPressure,
        bool _TurbulenceStatus,
        unsigned int _Turbulence,
        bool _HumidityStatus,
        float _Humidity
        )
{
    CBDSCode44 msg;
    msg.setFOMSource(_FOMSource);
    msg.setWindSpeednDirectionStatus(_WindSpeednDirectionStatus);
    msg.setWindSpeed(_WindSpeed);
    msg.setWindDirection(_WindDirection);
    msg.setStaticAirTemperatureSign(_StaticAirTemperatureSign);
    msg.setStaticAirTemperature(_StaticAirTemperature);
    msg.setAverageStaticPressureStatus(_AverageStaticPressureStatus);
    msg.setAverageStaticPressure(_AverageStaticPressure);
    msg.setTurbulenceStatus(_TurbulenceStatus);
    msg.setTurbulence(_Turbulence);
    msg.setHumidityStatus(_HumidityStatus);
    msg.setHumidity(_Humidity);
    return msg.get();
}


Json::Value messageBDSCode45(
        bool _TurbulenceStatus,
        unsigned int _Turbulence,
        bool _WindShearStatus,
        unsigned int _WindShear,
        bool _MicroburstStatus,
        unsigned int _Microburst,
        bool _IcingStatus,
        unsigned int _Icing,
        bool _WakeVortexStatus,
        unsigned int _WakeVortex,
        bool _StaticAirTemperatureStatus,
        bool _StaticAirTemperatureSign,
        float _StaticAirTemperature,
        bool _AverageStaticPressureStatus,
        unsigned int _AverageStaticPressure,
        bool _RadioHeightStatus,
        int _RadioHeight
        )
{
    CBDSCode45 msg;
    msg.setTurbulenceStatus(_TurbulenceStatus);
    msg.setTurbulence(_Turbulence);
    msg.setWindShearStatus(_WindShearStatus);
    msg.setWindShear(_WindShear);
    msg.setMicroburstStatus(_MicroburstStatus);
    msg.setMicroburst(_Microburst);
    msg.setIcingStatus(_IcingStatus);
    msg.setIcing(_Icing);
    msg.setWakeVortexStatus(_WakeVortexStatus);
    msg.setWakeVortex(_WakeVortex);
    msg.setStaticAirTemperatureStatus(_StaticAirTemperatureStatus);
    msg.setStaticAirTemperatureSign(_StaticAirTemperatureSign);
    msg.setStaticAirTemperature(_StaticAirTemperature);
    msg.setAverageStaticPressureStatus(_AverageStaticPressureStatus);
    msg.setAverageStaticPressure(_AverageStaticPressure);
    msg.setRadioHeightStatus(_RadioHeightStatus);
    msg.setRadioHeight(_RadioHeight);
    return msg.get();
}


Json::Value messageBDSCode48(
        float _VHF1,
        bool _VHF1Status,
        unsigned int _VHF1AudioStatus,
        float _VHF2,
        bool _VHF2Status,
        unsigned int _VHF2AudioStatus,
        float _VHF3,
        bool _VHF3Status,
        unsigned int _VHF3AudioStatus,
        unsigned int _121_5MHzAudioStatus
        )
{
    CBDSCode48 msg;
    msg.setVHF1(_VHF1);
    msg.setVHF1Status(_VHF1Status);
    msg.setVHF1AudioStatus(_VHF1AudioStatus);
    msg.setVHF2(_VHF2);
    msg.setVHF2Status(_VHF2Status);
    msg.setVHF2AudioStatus(_VHF2AudioStatus);
    msg.setVHF3(_VHF3);
    msg.setVHF3Status(_VHF3Status);
    msg.setVHF3AudioStatus(_VHF3AudioStatus);
    msg.set121_5MHzAudioStatus(_121_5MHzAudioStatus);
    return msg.get();
}


Json::Value messageBDSCode50(
        bool _RollAngleStatus,
        bool _RollAngleSign,
        float _RollAngle,
        bool _TrueTrackAngleStatus,
        bool _TrueTrackAngleSign,
        float _TrueTrackAngle,
        bool _GroundSpeedStatus,
        float _GroundSpeed,
        bool _TrackAngleRateStatus,
        bool _TrackAngleRateSign,
        float _TrackAngleRate,
        bool _TrueAirspeedStatus,
        float _TrueAirspeed
        )
{
    CBDSCode50 msg;
    msg.setRollAngleStatus(_RollAngleStatus);
    msg.setRollAngleSign(_RollAngleSign);
    msg.setRollAngle(_RollAngle);
    msg.setTrueTrackAngleStatus(_TrueTrackAngleStatus);
    msg.setTrueTrackAngleSign(_TrueTrackAngleSign);
    msg.setTrueTrackAngle(_TrueTrackAngle);
    msg.setGroundSpeedStatus(_GroundSpeedStatus);
    msg.setGroundSpeed(_GroundSpeed);
    msg.setTrackAngleRateStatus(_TrackAngleRateStatus);
    msg.setTrackAngleRateSign(_TrackAngleRateSign);
    msg.setTrackAngleRate(_TrackAngleRate);
    msg.setTrueAirspeedStatus(_TrueAirspeedStatus);
    msg.setTrueAirspeed(_TrueAirspeed);
    return msg.get();
}


Json::Value messageBDSCode51(
        bool _Status,
        bool _LatitudeSign,
        double _Latitude,
        bool _LongitudeSign,
        double _Longitude,
        bool _PressureAltitudeSign,
        int _PressureAltitude
        )
{
    CBDSCode51 msg;
    msg.setStatus(_Status);
    msg.setLatitudeSign(_LatitudeSign);
    msg.setLatitude(_Latitude);
    msg.setLongitudeSign(_LongitudeSign);
    msg.setLongitude(_Longitude);
    msg.setPressureAltitudeSign(_PressureAltitudeSign);
    msg.setPressureAltitude(_PressureAltitude);
    return msg.get();
}


Json::Value messageBDSCode52(
        bool _Status,
        unsigned int _FOMSource,
        double _LatitudeFine,
        double _LongitudeFine,
        bool _PressureAltitudeSign,
        int _PressureAltitude
        )
{
    CBDSCode52 msg;
    msg.setStatus(_Status);
    msg.setFOMSource(_FOMSource);
    msg.setLatitudeFine(_LatitudeFine);
    msg.setLongitudeFine(_LongitudeFine);
    msg.setPressureAltitudeSign(_PressureAltitudeSign);
    msg.setPressureAltitude(_PressureAltitude);
    return msg.get();
}


Json::Value messageBDSCode53(
        bool _MagneticHeadingStatus,
        bool _MagneticHeadingSign,
        float _MagneticHeading,
        bool _IndicatedAirspeedStatus,
        unsigned int _IndicatedAirspeed,
        bool _MachNumberStatus,
        float _MachNumber,
        bool _TrueAirspeedStatus,
        float _TrueAirspeed,
        bool _AltitudeRateStatus,
        bool _AltitudeRateSign,
        int _AltitudeRate
        )
{
    CBDSCode53 msg;
    msg.setMagneticHeadingStatus(_MagneticHeadingStatus);
    msg.setMagneticHeadingSign(_MagneticHeadingSign);
    msg.setMagneticHeading(_MagneticHeading);
    msg.setIndicatedAirspeedStatus(_IndicatedAirspeedStatus);
    msg.setIndicatedAirspeed(_IndicatedAirspeed);
    msg.setMachNumberStatus(_MachNumberStatus);
    msg.setMachNumber(_MachNumber);
    msg.setTrueAirspeedStatus(_TrueAirspeedStatus);
    msg.setTrueAirspeed(_TrueAirspeed);
    msg.setAltitudeRateStatus(_AltitudeRateStatus);
    msg.setAltitudeRateSign(_AltitudeRateSign);
    msg.setAltitudeRate(_AltitudeRate);
    return msg.get();
}


Json::Value messageBDSCode54(
        bool _WaypointNameStatus,
        std::string _WaypointName,
        unsigned int _EstimatedArrivalTime,
        unsigned int _EstimatedFlightLevel,
        double _TimeToGo
        )
{
    CBDSCode54 msg;
    msg.setWaypointNameStatus(_WaypointNameStatus);
    msg.setWaypointName(_WaypointName);
    msg.setEstimatedArrivalTime(_EstimatedArrivalTime);
    msg.setEstimatedFlightLevel(_EstimatedFlightLevel);
    msg.setTimeToGo(_TimeToGo);
    return msg.get();
}


Json::Value messageBDSCode55(
        bool _WaypointNameStatus,
        std::string _WaypointName,
        unsigned int _EstimatedArrivalTime,
        unsigned int _EstimatedFlightLevel,
        double _TimeToGo
        )
{
    CBDSCode55 msg;
    msg.setWaypointNameStatus(_WaypointNameStatus);
    msg.setWaypointName(_WaypointName);
    msg.setEstimatedArrivalTime(_EstimatedArrivalTime);
    msg.setEstimatedFlightLevel(_EstimatedFlightLevel);
    msg.setTimeToGo(_TimeToGo);
    return msg.get();
}


Json::Value messageBDSCode56(
        bool _WaypointNameStatus,
        std::string _WaypointName,
        unsigned int _EstimatedArrivalTime,
        unsigned int _EstimatedFlightLevel,
        double _TimeToGo
        )
{
    CBDSCode56 msg;
    msg.setWaypointNameStatus(_WaypointNameStatus);
    msg.setWaypointName(_WaypointName);
    msg.setEstimatedArrivalTime(_EstimatedArrivalTime);
    msg.setEstimatedFlightLevel(_EstimatedFlightLevel);
    msg.setTimeToGo(_TimeToGo);
    return msg.get();
}


Json::Value messageBDSCode5F(
        bool _MCPnFCUSeletedAltitude,
        bool _NextWaypoint,
        bool _FMSVerticalMode,
        bool _VHFChannelReport,
        bool _MeteorologicalHazards,
        bool _FMSSelectedAltitude,
        bool _BarometricPressureMinus800mb
        )
{
    CBDSCode5F msg;
    msg.setMCPnFCUSeletedAltitude(_MCPnFCUSeletedAltitude);
    msg.setNextWaypoint(_NextWaypoint);
    msg.setFMSVerticalMode(_FMSVerticalMode);
    msg.setVHFChannelReport(_VHFChannelReport);
    msg.setMeteorologicalHazards(_MeteorologicalHazards);
    msg.setFMSSelectedAltitude(_FMSSelectedAltitude);
    msg.setBarometricPressureMinus800mb(_BarometricPressureMinus800mb);
    return msg.get();
}


Json::Value messageBDSCode60(
        bool _MagneticHeadingStatus,
        bool _MagneticHeadingSign,
        float _MagneticHeading,
        bool _IndicatedAirspeedStatus,
        unsigned int _IndicatedAirspeed,
        bool _MachStatus,
        float _Mach,
        bool _BarometricAltitudeRateStatus,
        bool _BarometricAltitudeRateSign,
        int _BarometricAltitudeRate,
        bool _InertialVerticalVelocityStatus,
        bool _InertialVerticalVelocitySign,
        int _InertialVerticalVelocity
        )
{
    CBDSCode60 msg;
    msg.setMagneticHeadingStatus(_MagneticHeadingStatus);
    msg.setMagneticHeadingSign(_MagneticHeadingSign);
    msg.setMagneticHeading(_MagneticHeading);
    msg.setIndicatedAirspeedStatus(_IndicatedAirspeedStatus);
    msg.setIndicatedAirspeed(_IndicatedAirspeed);
    msg.setMachStatus(_MachStatus);
    msg.setMach(_Mach);
    msg.setBarometricAltitudeRateStatus(_BarometricAltitudeRateStatus);
    msg.setBarometricAltitudeRateSign(_BarometricAltitudeRateSign);
    msg.setBarometricAltitudeRate(_BarometricAltitudeRate);
    msg.setInertialVerticalVelocityStatus(_InertialVerticalVelocityStatus);
    msg.setInertialVerticalVelocitySign(_InertialVerticalVelocitySign);
    msg.setInertialVerticalVelocity(_InertialVerticalVelocity);
    return msg.get();
}


Json::Value messageBDSCode61(
        unsigned int _FormatTypeCode,
        unsigned int _SubtypeCode,
        unsigned int _EmergencyState
        )
{
    CBDSCode61 msg;
    msg.setFormatTypeCode(_FormatTypeCode);
    msg.setSubtypeCode(_SubtypeCode);
    msg.setEmergencyState(_EmergencyState);
    return msg.get();
}


Json::Value messageBDSCode65(
        unsigned int _FormatTypeCode,
        unsigned int _SubtypeCode,
        unsigned int _EnRouteOperationalCapabilities,
        unsigned int _TerminalAreaOpertionalCapabilities,
        unsigned int _ApproachLandingOperationalCapabilities,
        unsigned int _SurfaceOperationalCapabilities,
        unsigned int _EnRouteOperationalCapabilityStatus,
        unsigned int _TerminalAreaOpertionalCapabilityStatus,
        unsigned int _ApproachLandingOperationalCapabilityStatus,
        unsigned int _SurfaceOperationalCapabilityStatus
        )
{
    CBDSCode65 msg;
    msg.setFormatTypeCode(_FormatTypeCode);
    msg.setSubtypeCode(_SubtypeCode);
    msg.setEnRouteOperationalCapabilities(_EnRouteOperationalCapabilities);
    msg.setTerminalAreaOpertionalCapabilities(_TerminalAreaOpertionalCapabilities);
    msg.setApproachLandingOperationalCapabilities(_ApproachLandingOperationalCapabilities);
    msg.setSurfaceOperationalCapabilities(_SurfaceOperationalCapabilities);
    msg.setEnRouteOperationalCapabilityStatus(_EnRouteOperationalCapabilityStatus);
    msg.setTerminalAreaOpertionalCapabilityStatus(_TerminalAreaOpertionalCapabilityStatus);
    msg.setApproachLandingOperationalCapabilityStatus(_ApproachLandingOperationalCapabilityStatus);
    msg.setSurfaceOperationalCapabilityStatus(_SurfaceOperationalCapabilityStatus);
    return msg.get();
}


Json::Value messageBDSCodeE3(
        bool _Status,
        unsigned int _FormatType,
        std::string _PartNumber
        )
{
    CBDSCodeE3 msg;
    msg.setStatus(_Status);
    msg.setFormatType(_FormatType);
    msg.setPartNumber(_PartNumber);
    return msg.get();
}


Json::Value messageBDSCodeE4(
        bool _Status,
        unsigned int _FormatType,
        std::string _PartNumber
        )
{
    CBDSCodeE4 msg;
    msg.setStatus(_Status);
    msg.setFormatType(_FormatType);
    msg.setPartNumber(_PartNumber);
    return msg.get();
}


Json::Value messageBDSCodeE5(
        bool _Status,
        unsigned int _FormatType,
        std::string _PartNumber
        )
{
    CBDSCodeE5 msg;
    msg.setStatus(_Status);
    msg.setFormatType(_FormatType);
    msg.setPartNumber(_PartNumber);
    return msg.get();
}


Json::Value messageBDSCodeE6(
        bool _Status,
        unsigned int _FormatType,
        std::string _PartNumber
        )
{
    CBDSCodeE6 msg;
    msg.setStatus(_Status);
    msg.setFormatType(_FormatType);
    msg.setPartNumber(_PartNumber);
    return msg.get();
}


Json::Value messageBDSCodeE7(
        std::string _BDSRegisteNumber,
        unsigned int _SDICode,
        bool _NonDiversityTransponder,
        bool _DiversityFailure,
        bool _UpperReceiverFailure,
        bool _LowerReceiverFailure,
        bool _UpperSquitterFailure,
        bool _LowerSquitterFailure,
        bool _AirGround1InputStatus,
        bool _AirGround2InputStatus,
        bool _GPSTimeMark1Status,
        bool _GPSTimeMark2Status,
        bool _ModeSLimitingDuringPowerOnCycle,
        bool _ModeSLimiting,
        bool _ExtendedSquitterDisableStatus,
        bool _ACASInputInactive,
        bool _ADSBOutStatus,
        unsigned int _SelectedControlInactiveStatus,
        unsigned int _ControlInputSelection,
        unsigned int _MultipleAirDataSourceReportingSelection,
        bool _AltitudeAlternatePortSelection,
        unsigned int _AltitudePortAStatus,
        unsigned int _AltitudePortBStatus,
        bool _FMCnGNSSSourceSelect,
        unsigned int _FMCnGNSS1BusStatus,
        unsigned int _FMCnGNSS2BusStatus,
        unsigned int _MultipleIRSnAHRSDataSourceReportingSelection,
        bool _IRSnFMSSourceSelect,
        unsigned int _IRSnFMSnDataConcentratorIn1,
        unsigned int _IRSnFMSnDataConcentratorIn2,
        bool _FMCSelect,
        unsigned int _FMC1nGenInBusStatus,
        unsigned int _FMC2nGenInBusStatus,
        unsigned int _MSPnATSUnCMUIn1Status,
        unsigned int _MSPnATSUnCMUIn2Status
        )
{
    CBDSCodeE7 msg;
    msg.setBDSRegisteNumber(_BDSRegisteNumber);
    msg.setSDICode(_SDICode);
    msg.setNonDiversityTransponder(_NonDiversityTransponder);
    msg.setDiversityFailure(_DiversityFailure);
    msg.setUpperReceiverFailure(_UpperReceiverFailure);
    msg.setLowerReceiverFailure(_LowerReceiverFailure);
    msg.setUpperSquitterFailure(_UpperSquitterFailure);
    msg.setLowerSquitterFailure(_LowerSquitterFailure);
    msg.setAirGround1InputStatus(_AirGround1InputStatus);
    msg.setAirGround2InputStatus(_AirGround2InputStatus);
    msg.setGPSTimeMark1Status(_GPSTimeMark1Status);
    msg.setGPSTimeMark2Status(_GPSTimeMark2Status);
    msg.setModeSLimitingDuringPowerOnCycle(_ModeSLimitingDuringPowerOnCycle);
    msg.setModeSLimiting(_ModeSLimiting);
    msg.setExtendedSquitterDisableStatus(_ExtendedSquitterDisableStatus);
    msg.setACASInputInactive(_ACASInputInactive);
    msg.setADSBOutStatus(_ADSBOutStatus);
    msg.setSelectedControlInactiveStatus(_SelectedControlInactiveStatus);
    msg.setControlInputSelection(_ControlInputSelection);
    msg.setMultipleAirDataSourceReportingSelection(_MultipleAirDataSourceReportingSelection);
    msg.setAltitudeAlternatePortSelection(_AltitudeAlternatePortSelection);
    msg.setAltitudePortAStatus(_AltitudePortAStatus);
    msg.setAltitudePortBStatus(_AltitudePortBStatus);
    msg.setFMCnGNSSSourceSelect(_FMCnGNSSSourceSelect);
    msg.setFMCnGNSS1BusStatus(_FMCnGNSS1BusStatus);
    msg.setFMCnGNSS2BusStatus(_FMCnGNSS2BusStatus);
    msg.setMultipleIRSnAHRSDataSourceReportingSelection(_MultipleIRSnAHRSDataSourceReportingSelection);
    msg.setIRSnFMSSourceSelect(_IRSnFMSSourceSelect);
    msg.setIRSnFMSnDataConcentratorIn1(_IRSnFMSnDataConcentratorIn1);
    msg.setIRSnFMSnDataConcentratorIn2(_IRSnFMSnDataConcentratorIn2);
    msg.setFMCSelect(_FMCSelect);
    msg.setFMC1nGenInBusStatus(_FMC1nGenInBusStatus);
    msg.setFMC2nGenInBusStatus(_FMC2nGenInBusStatus);
    msg.setMSPnATSUnCMUIn1Status(_MSPnATSUnCMUIn1Status);
    msg.setMSPnATSUnCMUIn2Status(_MSPnATSUnCMUIn2Status);
    return msg.get();
}


Json::Value messageBDSCodeEA(
        std::string _BDSRegisterNumber,
        std::string _ManufacturerDefinedDiagnosticField9_16,
        std::string _ManufacturerDefinedDiagnosticField17_24,
        std::string _ManufacturerDefinedDiagnosticField25_32,
        std::string _ManufacturerDefinedDiagnosticField33_40,
        std::string _ManufacturerDefinedDiagnosticField41_48,
        std::string _ManufacturerDefinedDiagnosticField49_56
        )
{
    CBDSCodeEA msg;
    msg.setBDSRegisterNumber(_BDSRegisterNumber);
    msg.setManufacturerDefinedDiagnosticField9_16(_ManufacturerDefinedDiagnosticField9_16);
    msg.setManufacturerDefinedDiagnosticField17_24(_ManufacturerDefinedDiagnosticField17_24);
    msg.setManufacturerDefinedDiagnosticField25_32(_ManufacturerDefinedDiagnosticField25_32);
    msg.setManufacturerDefinedDiagnosticField33_40(_ManufacturerDefinedDiagnosticField33_40);
    msg.setManufacturerDefinedDiagnosticField41_48(_ManufacturerDefinedDiagnosticField41_48);
    msg.setManufacturerDefinedDiagnosticField49_56(_ManufacturerDefinedDiagnosticField49_56);
    return msg.get();
}
