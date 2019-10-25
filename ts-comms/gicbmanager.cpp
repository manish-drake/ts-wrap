#include "gicbmanager.h"
#include "messages/BDSCode05.h"
#include "messages/BDSCode06.h"
#include "messages/BDSCode07.h"
#include "messages/BDSCode08.h"
#include "messages/BDSCode09Subtypes1n2.h"
#include "messages/BDSCode09Subtypes3n4.h"
#include "messages/BDSCode0B.h"
#include "messages/BDSCode0C.h"
#include "messages/BDSCode10.h"
#include "messages/BDSCode17.h"
#include "messages/BDSCode18.h"
#include "messages/BDSCode19.h"
#include "messages/BDSCode1A.h"
#include "messages/BDSCode1B.h"
#include "messages/BDSCode1C.h"
#include "messages/BDSCode1D.h"
#include "messages/BDSCode1E.h"
#include "messages/BDSCode1F.h"
#include "messages/BDSCode20.h"
#include "messages/BDSCode21.h"
#include "messages/BDSCode22.h"
#include "messages/BDSCode25.h"
#include "messages/BDSCode30.h"
#include "messages/BDSCode40.h"
#include "messages/BDSCode41.h"
#include "messages/BDSCode42.h"
#include "messages/BDSCode43.h"
#include "messages/BDSCode44.h"
#include "messages/BDSCode45.h"
#include "messages/BDSCode48.h"
#include "messages/BDSCode50.h"
#include "messages/BDSCode51.h"
#include "messages/BDSCode52.h"
#include "messages/BDSCode53.h"
#include "messages/BDSCode54.h"
#include "messages/BDSCode55.h"
#include "messages/BDSCode56.h"
#include "messages/BDSCode5F.h"
#include "messages/BDSCode60.h"
#include "messages/BDSCode61.h"
#include "messages/BDSCode65.h"
#include "messages/BDSCodeE3.h"
#include "messages/BDSCodeE4.h"
#include "messages/BDSCodeE5.h"
#include "messages/BDSCodeE6.h"
#include "messages/BDSCodeE7.h"
#include "messages/BDSCodeEA.h"

GICBManager::GICBManager()
{

}

/*!
  @brief QueryMessage Returns BDS messages.
  @param[in] Index contains the value of the page index .
  @details Returns BDS messages according to the index value. Each index holds different value,
  which represents different messages for different value.
*/
string GICBManager::queryMessage(const int &index)
{
    switch (index) {
    case 0:
        return messageBDS05Data();
    case 1:
        return messageBDS06Data();
    case 2:
        return messageBDS07Data();
    case 3:
        return messageBDS08Data();
    case 4:
        return messageBDSCode09Subtypes1n2Data();
    case 5:
        return messageBDSCode09Subtypes3n4Data();
    case 7:
        return messageBDSCode0BData();
    case 8:
        return messageBDSCode0CData();
    case 9:
        return messageBDSCode10Data();
    case 10:
        return messageBDSCode17Data();
    case 11:
        return messageBDSCode18Data();
    case 12:
        return messageBDSCode19Data();
    case 13:
        return messageBDSCode1AData();
    case 14:
        return messageBDSCode1BData();
    case 15:
        return messageBDSCode1CData();
    case 16:
        return messageBDSCode1DData();
    case 17:
        return messageBDSCode1EData();
    case 18:
        return messageBDSCode1FData();
    case 19:
        return messageBDSCode20Data();
    case 20:
        return messageBDSCode21Data();
    case 21:
        return messageBDSCode22Data();
    case 22:
        return messageBDSCode25Data();
    case 23:
        return messageBDSCode30Data();
    case 24:
        return messageBDSCode40Data();
    case 25:
        return messageBDSCode41Data();
    case 26:
        return messageBDSCode42Data();
    case 27:
        return messageBDSCode43Data();
    case 28:
        return messageBDSCode44Data();
    case 29:
        return messageBDSCode45Data();
    case 30:
        return messageBDSCode48Data();
    case 31:
        return messageBDSCode50Data();
    case 32:
        return messageBDSCode51Data();
    case 33:
        return messageBDSCode52Data();
    case 34:
        return messageBDSCode53Data();
    case 35:
        return messageBDSCode54Data();
    case 36:
        return messageBDSCode55Data();
    case 37:
        return messageBDSCode56Data();
    case 38:
        return messageBDSCode5FData();
    case 39:
        return messageBDSCode60Data();
    case 40:
        return messageBDSCode61Data();
    case 41:
        return messageBDSCode65Data();
    case 42:
        return messageBDSCodeE3Data();
    case 43:
        return messageBDSCodeE4Data();
    case 44:
        return messageBDSCodeE5Data();
    case 45:
        return messageBDSCodeE6Data();
    case 46:
        return messageBDSCodeE7Data();
    case 47:
        return messageBDSCodeEAData();
    default:
        return "";
    }
}

/*!
  @brief Sets dummy data for BDS05 fields and Returns it.
*/
string GICBManager::messageBDS05Data()
{
    CBDSCode05 bdsCode;
    bdsCode.setFormatTypeCode(0);
    bdsCode.setSureveillanceStatus(0);
    bdsCode.setsingleAntennaFlag(1);
    bdsCode.setUTCTimeSync(1);
    bdsCode.setAltitude(10000);
    bdsCode.setCPRFormat(1);
    bdsCode.setEncodedLatitude(-73.8765);
    bdsCode.setEncodedLongitude(81.4567);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS06 fields and Returns it .
*/
string GICBManager::messageBDS06Data()
{
    CBDSCode06 bdsCode;
    bdsCode.setFormatTypeCode(0);
    bdsCode.setMovement(40);
    bdsCode.setGroundTrackStatus(1);
    bdsCode.setGroundTrack(10);
    bdsCode.setUTCTimeSync(1);
    bdsCode.setCPRFormat(1);
    bdsCode.setEncodedLatitude(-73.8765);
    bdsCode.setEncodedLongitude(81.4567);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS07 fields and Returns it .
*/
string GICBManager::messageBDS07Data()
{
    CBDSCode07 bdsCode;
    bdsCode.setTransmissionRateSubfield(0);
    bdsCode.setAltitudeTypeSubfield(0);
    return bdsCode.getMessage();
}


/*!
  @brief Sets dummy data for BDS08 fields and Returns it .
*/
string GICBManager::messageBDS08Data()
{
    CBDSCode08 bdsCode;
    bdsCode.setCategoryGroup(0);
    bdsCode.setAircraftCategory(0);
    bdsCode.setAircraftID("01234ABC");
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDSCode09Subtypes1n2 fields and Returns it .
*/
string GICBManager::messageBDSCode09Subtypes1n2Data()
{
    CBDSCode09Subtypes1n2 bdsCode;
    bdsCode.setFormatTypeCode(19);
    bdsCode.setSubtype(1);
    bdsCode.setintentChangeFlag(0);
    bdsCode.setiFRCapabilityFlag(0);
    bdsCode.setNavigationUncertaintyCategoryForVelocity(1);
    bdsCode.setEastWestVelocityDirection(0);
    bdsCode.setEastWestVelocity(7);
    bdsCode.setNorthSouthVelocityDirection(0);
    bdsCode.setNorthSouthVelocity(5);
    bdsCode.setVerticalRateSource(0);
    bdsCode.setVerticalRateSign(0);
    bdsCode.setVerticalRate(0);
    bdsCode.setGNSSAltSign(0);
    bdsCode.setGNSSAltDifferenceFromBaroAlt(0);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Subtypes3n4 fields and Returns it .
*/
string GICBManager::messageBDSCode09Subtypes3n4Data()
{
    CBDSCode09Subtypes3n4 bdsCode;
    bdsCode.setFormatTypeCode(19);
    bdsCode.setSubtype(3);
    bdsCode.setIntentChangeFlag(0);
    bdsCode.setNACv(1);
    bdsCode.setHeadingStatus(1);
    bdsCode.setHeading(95);
    bdsCode.setAirspeedType(0);
    bdsCode.setAirspeed(1021);
    bdsCode.setVerticalRateSource(0);
    bdsCode.setVerticalRate(64);
    bdsCode.setGeoHBaroAltDiff(25);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code0B fields and Returns it .
*/
string GICBManager::messageBDSCode0BData()
{
    CBDSCode0B bdsCode;
    bdsCode.setTrueAirspeedStatus(1);
    bdsCode.setTrueAirspeed(800);
    bdsCode.setHeadingSwitch(0);
    bdsCode.setHeadingStatus(1);
    bdsCode.setHeadingSign(1);
    bdsCode.setHeading(120);
    bdsCode.setTrueTrackAngleStatus(1);
    bdsCode.setTrueTrackAngleSign(0);
    bdsCode.setTrueTrackAngle(82);
    bdsCode.setGroundSpeedStatus(1);
    bdsCode.setGroundSpeed(900);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code0C fields and Returns it .
*/
string GICBManager::messageBDSCode0CData()
{
    CBDSCode0C bdsCode;
    bdsCode.setAltitudeLevelStatus(1);
    bdsCode.setAltitudeLevel(31000);
    bdsCode.setNextCourseStatus(1);
    bdsCode.setNextCourseSign(0);
    bdsCode.setNextCourse(130);
    bdsCode.setWaypointStatus(1);
    bdsCode.setNextWaypointTime(64);
    bdsCode.setVerticalVelocityStatus(1);
    bdsCode.setVerticalVelocitySign(0);
    bdsCode.setVerticalVelocity(12000);
    bdsCode.setRollAngleStatus(1);
    bdsCode.setRollAngleSign(0);
    bdsCode.setRollAngle(72);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code10 fields and Returns it .
*/
string GICBManager::messageBDSCode10Data()
{
    CBDSCode10 bdsCode;
    bdsCode.setBDSCode("10");
    bdsCode.setcontinuationFlag(1);
    bdsCode.setOverlayCommandCapability(0);
    bdsCode.setACASStatus(1);
    bdsCode.setModeSSubnetworkVersion(4);
    bdsCode.setTransponderEnhancedProtocolIndicator(1);
    bdsCode.setModeSSpecificServicesCapability(1);
    bdsCode.setUplinkELM(0);
    bdsCode.setDownlinkELM(1);
    bdsCode.setAircraftIDCapability(1);
    bdsCode.setSquitterCapabilitySubfield(1);
    bdsCode.setSurveillanceIdentifierCode(0);
    bdsCode.setCommonUsageGICBCapabilityReport(1);
    bdsCode.setHybridSurveillanceCapability(1);
    bdsCode.setACASTAsRAsGeneration(1);
    bdsCode.setMOPSDocument(2);
    bdsCode.setDTESubAddrStatus0(1);
    bdsCode.setDTESubAddrStatus1(1);
    bdsCode.setDTESubAddrStatus2(1);
    bdsCode.setDTESubAddrStatus3(1);
    bdsCode.setDTESubAddrStatus4(1);
    bdsCode.setDTESubAddrStatus5(1);
    bdsCode.setDTESubAddrStatus6(1);
    bdsCode.setDTESubAddrStatus7(1);
    bdsCode.setDTESubAddrStatus8(1);
    bdsCode.setDTESubAddrStatus9(1);
    bdsCode.setDTESubAddrStatus10(1);
    bdsCode.setDTESubAddrStatus11(1);
    bdsCode.setDTESubAddrStatus12(1);
    bdsCode.setDTESubAddrStatus13(1);
    bdsCode.setDTESubAddrStatus14(1);
    bdsCode.setDTESubAddrStatus15(1);
    return bdsCode.getMessage();
}


/*!
  @brief Sets dummy data for BDS09Code17 fields and Returns it .
*/
string GICBManager::messageBDSCode17Data()
{
    CBDSCode17 bdsCode;
    bdsCode.set05_ExtendedSquitterAirbornePosition(1);
    bdsCode.set06_ExtendedSquitterSurfacePosition(1);
    bdsCode.set07_ExtendedSquitterStatus(1);
    bdsCode.set08_ExtendedSquitterIDnAndCategory(1);
    bdsCode.set09_ExtendedSquitterAirborneVelocityInfo(1);
    bdsCode.set0A_ExtendedSquitterEventDrivenInfo(1);
    bdsCode.set20_AircraftID(1);
    bdsCode.set2l_AircraftRegistrationNumber(1);
    bdsCode.set40_SelectedVerticalIntention(1);
    bdsCode.set4l_NextWaypointIdentifier(1);
    bdsCode.set42_NextWaypointPosition(1);
    bdsCode.set43_NextWaypointInfo(1);
    bdsCode.set44_MeteorologicalRoutineReport(1);
    bdsCode.set45_MeteorologicalHazardReport(1);
    bdsCode.set48_VHFChannelReport(1);
    bdsCode.set50_TrackAndTurnReport(1);
    bdsCode.set51_PositionCoarse(1);
    bdsCode.set52_PositionFine(1);
    bdsCode.set53_AirReferencedStateVector(1);
    bdsCode.set54_Waypoint1(1);
    bdsCode.set55_Waypoint2(1);
    bdsCode.set56_Waypoint3(1);
    bdsCode.set5F_QuasiStaticParameterMonitoring(1);
    bdsCode.set60_HeadingAndSpeedReport(1);
    return bdsCode.getMessage();
}


/*!
  @brief Sets dummy data for BDS09Code18 fields and Returns it .
*/
string GICBManager::messageBDSCode18Data()
{
    CBDSCode18 bdsCode;
    bdsCode.setBDS_38(1);
    bdsCode.setBDS_37(1);
    bdsCode.setBDS_36(1);
    bdsCode.setBDS_35(1);
    bdsCode.setBDS_34(1);
    bdsCode.setBDS_33(1);
    bdsCode.setBDS_32(1);
    bdsCode.setBDS_31(1);
    bdsCode.setBDS_30(1);
    bdsCode.setBDS_2F(1);
    bdsCode.setBDS_2E(1);
    bdsCode.setBDS_2D(1);
    bdsCode.setBDS_2C(1);
    bdsCode.setBDS_2B(1);
    bdsCode.setBDS_2A(1);
    bdsCode.setBDS_29(1);
    bdsCode.setBDS_28(1);
    bdsCode.setBDS_27(1);
    bdsCode.setBDS_26(1);
    bdsCode.setBDS_25(1);
    bdsCode.setBDS_24(1);
    bdsCode.setBDS_23(1);
    bdsCode.setBDS_22(1);
    bdsCode.setBDS_21(1);
    bdsCode.setBDS_20(1);
    bdsCode.setBDS_1F(1);
    bdsCode.setBDS_1E(1);
    bdsCode.setBDS_1D(1);
    bdsCode.setBDS_1C(1);
    bdsCode.setBDS_1B(1);
    bdsCode.setBDS_1A(1);
    bdsCode.setBDS_19(1);
    bdsCode.setBDS_18(1);
    bdsCode.setBDS_17(1);
    bdsCode.setBDS_16(1);
    bdsCode.setBDS_15(1);
    bdsCode.setBDS_14(1);
    bdsCode.setBDS_13(1);
    bdsCode.setBDS_12(1);
    bdsCode.setBDS_11(1);
    bdsCode.setBDS_10(1);
    bdsCode.setBDS_0F(1);
    bdsCode.setBDS_0E(1);
    bdsCode.setBDS_0D(1);
    bdsCode.setBDS_0C(1);
    bdsCode.setBDS_0B(1);
    bdsCode.setBDS_0A(1);
    bdsCode.setBDS_09(1);
    bdsCode.setBDS_08(1);
    bdsCode.setBDS_07(1);
    bdsCode.setBDS_06(1);
    bdsCode.setBDS_05(1);
    bdsCode.setBDS_04(1);
    bdsCode.setBDS_03(1);
    bdsCode.setBDS_02(1);
    bdsCode.setBDS_01(1);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code19 fields and Returns it .
*/
string GICBManager::messageBDSCode19Data()
{
    CBDSCode19 bdsCode;
    bdsCode.setBDS_70(1);
    bdsCode.setBDS_6F(1);
    bdsCode.setBDS_6E(1);
    bdsCode.setBDS_6D(1);
    bdsCode.setBDS_6C(1);
    bdsCode.setBDS_6B(1);
    bdsCode.setBDS_6A(1);
    bdsCode.setBDS_69(1);
    bdsCode.setBDS_68(1);
    bdsCode.setBDS_67(1);
    bdsCode.setBDS_66(1);
    bdsCode.setBDS_65(1);
    bdsCode.setBDS_64(1);
    bdsCode.setBDS_63(1);
    bdsCode.setBDS_62(1);
    bdsCode.setBDS_61(1);
    bdsCode.setBDS_60(1);
    bdsCode.setBDS_5F(1);
    bdsCode.setBDS_5E(1);
    bdsCode.setBDS_5D(1);
    bdsCode.setBDS_5C(1);
    bdsCode.setBDS_5B(1);
    bdsCode.setBDS_5A(1);
    bdsCode.setBDS_59(1);
    bdsCode.setBDS_58(1);
    bdsCode.setBDS_57(1);
    bdsCode.setBDS_56(1);
    bdsCode.setBDS_55(1);
    bdsCode.setBDS_54(1);
    bdsCode.setBDS_53(1);
    bdsCode.setBDS_52(1);
    bdsCode.setBDS_51(1);
    bdsCode.setBDS_50(1);
    bdsCode.setBDS_4F(1);
    bdsCode.setBDS_4E(1);
    bdsCode.setBDS_4D(1);
    bdsCode.setBDS_4C(1);
    bdsCode.setBDS_4B(1);
    bdsCode.setBDS_4A(1);
    bdsCode.setBDS_49(1);
    bdsCode.setBDS_48(1);
    bdsCode.setBDS_47(1);
    bdsCode.setBDS_46(1);
    bdsCode.setBDS_45(1);
    bdsCode.setBDS_44(1);
    bdsCode.setBDS_43(1);
    bdsCode.setBDS_42(1);
    bdsCode.setBDS_41(1);
    bdsCode.setBDS_40(1);
    bdsCode.setBDS_3F(1);
    bdsCode.setBDS_3E(1);
    bdsCode.setBDS_3D(1);
    bdsCode.setBDS_3C(1);
    bdsCode.setBDS_3B(1);
    bdsCode.setBDS_3A(1);
    bdsCode.setBDS_39(1);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code1A fields and Returns it .
*/
string GICBManager::messageBDSCode1AData()
{
    CBDSCode1A bdsCode;
    bdsCode.setBDS_A8(1);
    bdsCode.setBDS_A7(1);
    bdsCode.setBDS_A6(1);
    bdsCode.setBDS_A5(1);
    bdsCode.setBDS_A4(1);
    bdsCode.setBDS_A3(1);
    bdsCode.setBDS_A2(1);
    bdsCode.setBDS_A1(1);
    bdsCode.setBDS_A0(1);
    bdsCode.setBDS_9F(1);
    bdsCode.setBDS_9E(1);
    bdsCode.setBDS_9D(1);
    bdsCode.setBDS_9C(1);
    bdsCode.setBDS_9B(1);
    bdsCode.setBDS_9A(1);
    bdsCode.setBDS_99(1);
    bdsCode.setBDS_98(1);
    bdsCode.setBDS_97(1);
    bdsCode.setBDS_96(1);
    bdsCode.setBDS_95(1);
    bdsCode.setBDS_94(1);
    bdsCode.setBDS_93(1);
    bdsCode.setBDS_92(1);
    bdsCode.setBDS_91(1);
    bdsCode.setBDS_90(1);
    bdsCode.setBDS_8F(1);
    bdsCode.setBDS_8E(1);
    bdsCode.setBDS_8D(1);
    bdsCode.setBDS_8C(1);
    bdsCode.setBDS_8B(1);
    bdsCode.setBDS_8A(1);
    bdsCode.setBDS_89(1);
    bdsCode.setBDS_88(1);
    bdsCode.setBDS_87(1);
    bdsCode.setBDS_86(1);
    bdsCode.setBDS_85(1);
    bdsCode.setBDS_84(1);
    bdsCode.setBDS_83(1);
    bdsCode.setBDS_82(1);
    bdsCode.setBDS_81(1);
    bdsCode.setBDS_80(1);
    bdsCode.setBDS_7F(1);
    bdsCode.setBDS_7E(1);
    bdsCode.setBDS_7D(1);
    bdsCode.setBDS_7C(1);
    bdsCode.setBDS_7B(1);
    bdsCode.setBDS_7A(1);
    bdsCode.setBDS_79(1);
    bdsCode.setBDS_78(1);
    bdsCode.setBDS_77(1);
    bdsCode.setBDS_76(1);
    bdsCode.setBDS_75(1);
    bdsCode.setBDS_74(1);
    bdsCode.setBDS_73(1);
    bdsCode.setBDS_72(1);
    bdsCode.setBDS_71(1);
    return bdsCode.getMessage();
}


/*!
  @brief Sets dummy data for BDS09Code1B fields and Returns it .
*/
string GICBManager::messageBDSCode1BData()
{
    CBDSCode1B bdsCode;
    bdsCode.setBDS_E0(1);
    bdsCode.setBDS_DF(1);
    bdsCode.setBDS_DE(1);
    bdsCode.setBDS_DD(1);
    bdsCode.setBDS_DC(1);
    bdsCode.setBDS_DB(1);
    bdsCode.setBDS_DA(1);
    bdsCode.setBDS_D9(1);
    bdsCode.setBDS_D8(1);
    bdsCode.setBDS_D7(1);
    bdsCode.setBDS_D6(1);
    bdsCode.setBDS_D5(1);
    bdsCode.setBDS_D4(1);
    bdsCode.setBDS_D3(1);
    bdsCode.setBDS_D2(1);
    bdsCode.setBDS_D1(1);
    bdsCode.setBDS_D0(1);
    bdsCode.setBDS_CF(1);
    bdsCode.setBDS_CE(1);
    bdsCode.setBDS_CD(1);
    bdsCode.setBDS_CC(1);
    bdsCode.setBDS_CB(1);
    bdsCode.setBDS_CA(1);
    bdsCode.setBDS_C9(1);
    bdsCode.setBDS_C8(1);
    bdsCode.setBDS_C7(1);
    bdsCode.setBDS_C6(1);
    bdsCode.setBDS_C5(1);
    bdsCode.setBDS_C4(1);
    bdsCode.setBDS_C3(1);
    bdsCode.setBDS_C2(1);
    bdsCode.setBDS_C1(1);
    bdsCode.setBDS_C0(1);
    bdsCode.setBDS_BF(1);
    bdsCode.setBDS_BE(1);
    bdsCode.setBDS_BD(1);
    bdsCode.setBDS_BC(1);
    bdsCode.setBDS_BB(1);
    bdsCode.setBDS_BA(1);
    bdsCode.setBDS_B9(1);
    bdsCode.setBDS_B8(1);
    bdsCode.setBDS_B7(1);
    bdsCode.setBDS_B6(1);
    bdsCode.setBDS_B5(1);
    bdsCode.setBDS_B4(1);
    bdsCode.setBDS_B3(1);
    bdsCode.setBDS_B2(1);
    bdsCode.setBDS_B1(1);
    bdsCode.setBDS_B0(1);
    bdsCode.setBDS_AF(1);
    bdsCode.setBDS_AE(1);
    bdsCode.setBDS_AD(1);
    bdsCode.setBDS_AC(1);
    bdsCode.setBDS_AB(1);
    bdsCode.setBDS_AA(1);
    bdsCode.setBDS_A9(1);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code1C fields and Returns it .
*/
string GICBManager::messageBDSCode1CData()
{
    CBDSCode1C bdsCode;
    bdsCode.setBDS_FF(1);
    bdsCode.setBDS_FE(1);
    bdsCode.setBDS_FD(1);
    bdsCode.setBDS_FC(1);
    bdsCode.setBDS_FB(1);
    bdsCode.setBDS_FA(1);
    bdsCode.setBDS_F9(1);
    bdsCode.setBDS_F8(1);
    bdsCode.setBDS_F7(1);
    bdsCode.setBDS_F6(1);
    bdsCode.setBDS_F5(1);
    bdsCode.setBDS_F4(1);
    bdsCode.setBDS_F3(1);
    bdsCode.setBDS_F2(1);
    bdsCode.setBDS_F1(1);
    bdsCode.setBDS_F0(1);
    bdsCode.setBDS_EF(1);
    bdsCode.setBDS_EE(1);
    bdsCode.setBDS_ED(1);
    bdsCode.setBDS_EC(1);
    bdsCode.setBDS_EB(1);
    bdsCode.setBDS_EA(1);
    bdsCode.setBDS_E9(1);
    bdsCode.setBDS_E8(1);
    bdsCode.setBDS_E7(1);
    bdsCode.setBDS_E6(1);
    bdsCode.setBDS_E5(1);
    bdsCode.setBDS_E4(1);
    bdsCode.setBDS_E3(1);
    bdsCode.setBDS_E2(1);
    bdsCode.setBDS_E1(1);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code1D fields and Returns it .
*/
string GICBManager::messageBDSCode1DData()
{
    CBDSCode1D bdsCode;
    bdsCode.setUplinkMSPChannel1(1);
    bdsCode.setUplinkMSPChannel2(1);
    bdsCode.setUplinkMSPChannel3(1);
    bdsCode.setUplinkMSPChannel4(1);
    bdsCode.setUplinkMSPChannel5(1);
    bdsCode.setUplinkMSPChannel6(1);
    bdsCode.setUplinkMSPChannel7(1);
    bdsCode.setUplinkMSPChannel8(1);
    bdsCode.setUplinkMSPChannel9(1);
    bdsCode.setUplinkMSPChannel10(1);
    bdsCode.setUplinkMSPChannel11(1);
    bdsCode.setUplinkMSPChannel12(1);
    bdsCode.setUplinkMSPChannel13(1);
    bdsCode.setUplinkMSPChannel14(1);
    bdsCode.setUplinkMSPChannel15(1);
    bdsCode.setUplinkMSPChannel16(1);
    bdsCode.setUplinkMSPChannel17(1);
    bdsCode.setUplinkMSPChannel18(1);
    bdsCode.setUplinkMSPChannel19(1);
    bdsCode.setUplinkMSPChannel20(1);
    bdsCode.setUplinkMSPChannel21(1);
    bdsCode.setUplinkMSPChannel22(1);
    bdsCode.setUplinkMSPChannel23(1);
    bdsCode.setUplinkMSPChannel24(1);
    bdsCode.setUplinkMSPChannel25(1);
    bdsCode.setUplinkMSPChannel26(1);
    bdsCode.setUplinkMSPChannel27(1);
    bdsCode.setUplinkMSPChannel28(1);
    bdsCode.setDownlinkMSPChannel1(1);
    bdsCode.setDownlinkMSPChannel2(1);
    bdsCode.setDownlinkMSPChannel3(1);
    bdsCode.setDownlinkMSPChannel4(1);
    bdsCode.setDownlinkMSPChannel5(1);
    bdsCode.setDownlinkMSPChannel6(1);
    bdsCode.setDownlinkMSPChannel7(1);
    bdsCode.setDownlinkMSPChannel8(1);
    bdsCode.setDownlinkMSPChannel9(1);
    bdsCode.setDownlinkMSPChannel10(1);
    bdsCode.setDownlinkMSPChannel11(1);
    bdsCode.setDownlinkMSPChannel12(1);
    bdsCode.setDownlinkMSPChannel13(1);
    bdsCode.setDownlinkMSPChannel14(1);
    bdsCode.setDownlinkMSPChannel15(1);
    bdsCode.setDownlinkMSPChannel16(1);
    bdsCode.setDownlinkMSPChannel17(1);
    bdsCode.setDownlinkMSPChannel18(1);
    bdsCode.setDownlinkMSPChannel19(1);
    bdsCode.setDownlinkMSPChannel20(1);
    bdsCode.setDownlinkMSPChannel21(1);
    bdsCode.setDownlinkMSPChannel22(1);
    bdsCode.setDownlinkMSPChannel23(1);
    bdsCode.setDownlinkMSPChannel24(1);
    bdsCode.setDownlinkMSPChannel25(1);
    bdsCode.setDownlinkMSPChannel26(1);
    bdsCode.setDownlinkMSPChannel27(1);
    bdsCode.setDownlinkMSPChannel28(1);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code1E fields and Returns it .
*/
string GICBManager::messageBDSCode1EData()
{
    CBDSCode1E bdsCode;
    bdsCode.setUplinkMSPChannel29(1);
    bdsCode.setUplinkMSPChannel30(1);
    bdsCode.setUplinkMSPChannel31(1);
    bdsCode.setUplinkMSPChannel32(1);
    bdsCode.setUplinkMSPChannel33(1);
    bdsCode.setUplinkMSPChannel34(1);
    bdsCode.setUplinkMSPChannel35(1);
    bdsCode.setUplinkMSPChannel36(1);
    bdsCode.setUplinkMSPChannel37(1);
    bdsCode.setUplinkMSPChannel38(1);
    bdsCode.setUplinkMSPChannel39(1);
    bdsCode.setUplinkMSPChannel40(1);
    bdsCode.setUplinkMSPChannel41(1);
    bdsCode.setUplinkMSPChannel42(1);
    bdsCode.setUplinkMSPChannel43(1);
    bdsCode.setUplinkMSPChannel44(1);
    bdsCode.setUplinkMSPChannel45(1);
    bdsCode.setUplinkMSPChannel46(1);
    bdsCode.setUplinkMSPChannel47(1);
    bdsCode.setUplinkMSPChannel48(1);
    bdsCode.setUplinkMSPChannel49(1);
    bdsCode.setUplinkMSPChannel50(1);
    bdsCode.setUplinkMSPChannel51(1);
    bdsCode.setUplinkMSPChannel52(1);
    bdsCode.setUplinkMSPChannel53(1);
    bdsCode.setUplinkMSPChannel54(1);
    bdsCode.setUplinkMSPChannel55(1);
    bdsCode.setUplinkMSPChannel56(1);
    bdsCode.setDownlinkMSPChannel29(1);
    bdsCode.setDownlinkMSPChannel30(1);
    bdsCode.setDownlinkMSPChannel31(1);
    bdsCode.setDownlinkMSPChannel32(1);
    bdsCode.setDownlinkMSPChannel33(1);
    bdsCode.setDownlinkMSPChannel34(1);
    bdsCode.setDownlinkMSPChannel35(1);
    bdsCode.setDownlinkMSPChannel36(1);
    bdsCode.setDownlinkMSPChannel37(1);
    bdsCode.setDownlinkMSPChannel38(1);
    bdsCode.setDownlinkMSPChannel39(1);
    bdsCode.setDownlinkMSPChannel40(1);
    bdsCode.setDownlinkMSPChannel41(1);
    bdsCode.setDownlinkMSPChannel42(1);
    bdsCode.setDownlinkMSPChannel43(1);
    bdsCode.setDownlinkMSPChannel44(1);
    bdsCode.setDownlinkMSPChannel45(1);
    bdsCode.setDownlinkMSPChannel46(1);
    bdsCode.setDownlinkMSPChannel47(1);
    bdsCode.setDownlinkMSPChannel48(1);
    bdsCode.setDownlinkMSPChannel49(1);
    bdsCode.setDownlinkMSPChannel50(1);
    bdsCode.setDownlinkMSPChannel51(1);
    bdsCode.setDownlinkMSPChannel52(1);
    bdsCode.setDownlinkMSPChannel53(1);
    bdsCode.setDownlinkMSPChannel54(1);
    bdsCode.setDownlinkMSPChannel55(1);
    bdsCode.setDownlinkMSPChannel56(1);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code1F fields and Returns it .
*/
string GICBManager::messageBDSCode1FData()
{
    CBDSCode1F bdsCode;
    bdsCode.setUplinkMSPChannel57(1);
    bdsCode.setUplinkMSPChannel58(1);
    bdsCode.setUplinkMSPChannel59(1);
    bdsCode.setUplinkMSPChannel60(1);
    bdsCode.setUplinkMSPChannel61(1);
    bdsCode.setUplinkMSPChannel62(1);
    bdsCode.setUplinkMSPChannel63(1);
    bdsCode.setDownlinkMSPChannel57(1);
    bdsCode.setDownlinkMSPChannel58(1);
    bdsCode.setDownlinkMSPChannel59(1);
    bdsCode.setDownlinkMSPChannel60(1);
    bdsCode.setDownlinkMSPChannel61(1);
    bdsCode.setDownlinkMSPChannel62(1);
    bdsCode.setDownlinkMSPChannel63(1);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code20 fields and Returns it .
*/
string GICBManager::messageBDSCode20Data()
{
    CBDSCode20 bdsCode;
    bdsCode.setBDSCode("20");
    bdsCode.setAircraftID("01234ABC");
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code21 fields and Returns it .
*/
string GICBManager::messageBDSCode21Data()
{
    CBDSCode21 bdsCode;
    bdsCode.setAircraftRegistrationStatus(1);
    bdsCode.setAircraftRegistrationNumber("0123456");
    bdsCode.setICAOAirlineRegistrationStatus(1);
    bdsCode.setICAOAirlineRegistrationMarking("01");
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code22 fields and Returns it .
*/
string GICBManager::messageBDSCode22Data()
{
    CBDSCode22 bdsCode;
    bdsCode.setAntenna1AntennaType(1);
    bdsCode.setAntenna1XPostion(28);
    bdsCode.setAntenna1ZPostion(14);
    bdsCode.setAntenna2AntennaType(1);
    bdsCode.setAntenna2XPostion(27);
    bdsCode.setAntenna2ZPostion(15);
    bdsCode.setAntenna3AntennaType(1);
    bdsCode.setAntenna3XPostion(24);
    bdsCode.setAntenna3ZPostion(11);
    bdsCode.setAntenna4AntennaType(1);
    bdsCode.setAntenna4XPostion(25);
    bdsCode.setAntenna4ZPostion(14);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code25 fields and Returns it .
*/
string GICBManager::messageBDSCode25Data()
{
    CBDSCode25 bdsCode;
    bdsCode.setAircraftType("A");
    bdsCode.setEngines(2);
    bdsCode.setEngineType("B");
    bdsCode.setModelDesignation(10234);
    bdsCode.setWakeTurbulenceCategory("C");
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code30 fields and Returns it .
*/
string GICBManager::messageBDSCode30Data()
{
    CBDSCode30 bdsCode;
    bdsCode.setBDSCode("30");
    bdsCode.setARABit41(0);
    bdsCode.setARABit42(0);
    bdsCode.setARABit43(0);
    bdsCode.setARABit44(0);
    bdsCode.setARABit45(0);
    bdsCode.setARABit46(0);
    bdsCode.setARABit47(0);
    bdsCode.setRACBit55(0);
    bdsCode.setRACBit56(0);
    bdsCode.setRACBit57(0);
    bdsCode.setRACBit58(0);
    bdsCode.setRATerminated(0);
    bdsCode.setMultipleThreatEncouter(0);
    bdsCode.setThreatTypeIndicator(2);
    bdsCode.setTID("01234ABC");
    bdsCode.setTIDA("0123ABC");
    bdsCode.setTIDR(1);
    bdsCode.setTIDB(0);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code40 fields and Returns it .
*/
string GICBManager::messageBDSCode40Data()
{
    CBDSCode40 bdsCode;
    bdsCode.setMCPnFCUSelectedAltitudeStatus(1);
    bdsCode.setMCPnFCUSelectedAltitude(28000);
    bdsCode.setFMSSelectedAltitudeStatus(1);
    bdsCode.setFMSSelectedAltitude(27000);
    bdsCode.setBarometricPressureStatus(1);
    bdsCode.setBarometricPressureMinus800mb(135);
    bdsCode.setMCPnFCUModeStatus(1);
    bdsCode.setVNAVMode(1);
    bdsCode.setAltHoldMode(1);
    bdsCode.setApproachMode(1);
    bdsCode.setTargetAltSourceStatus(1);
    bdsCode.setTargetAltSource(1);
    return bdsCode.getMessage();
}
/*!
  @brief Sets dummy data for BDS09Code41 fields and Returns it .
*/
string GICBManager::messageBDSCode41Data()
{
    CBDSCode41 bdsCode;
    bdsCode.setWaypointNameStatus(1);
    bdsCode.setWaypointName("01234ABCD");
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code42 fields and Returns it .
*/
string GICBManager::messageBDSCode42Data()
{
    CBDSCode42 bdsCode;
    bdsCode.setWaypointLatitudeStatus(1);
    bdsCode.setWaypointLatitudeSign(0);
    bdsCode.setWaypointLatitude(71);
    bdsCode.setWaypointLongitudeStatus(1);
    bdsCode.setWaypointLongitudeSign(0);
    bdsCode.setWaypointLongitude(78);
    bdsCode.setWaypointCrossingAltitudeStatus(1);
    bdsCode.setWaypointCrossingAltitudeSign(1);
    bdsCode.setWaypointCrossingAltitude(28160);
    return bdsCode.getMessage();
}


/*!
  @brief Sets dummy data for BDS09Code43 fields and Returns it .
*/
string GICBManager::messageBDSCode43Data()
{
    CBDSCode43 bdsCode;
    bdsCode.setBearingToWaypointStatus(1);
    bdsCode.setBearingToWaypointSign(0);
    bdsCode.setBearingToWaypoint(83);
    bdsCode.setTimeToGoStatus(1);
    bdsCode.setTimeToGo(176);
    bdsCode.setDistanceToGoStatus(1);
    bdsCode.setDistanceToGo(2698);
    return bdsCode.getMessage();
}


/*!
  @brief Sets dummy data for BDS09Code44 fields and Returns it .
*/
string GICBManager::messageBDSCode44Data()
{
    CBDSCode44 bdsCode;
    bdsCode.setFOMSource(1);
    bdsCode.setWindSpeednDirectionStatus(1);
    bdsCode.setWindSpeed(218);
    bdsCode.setWindDirection(167);
    bdsCode.setStaticAirTemperatureSign(0);
    bdsCode.setStaticAirTemperature(63);
    bdsCode.setAverageStaticPressureStatus(1);
    bdsCode.setAverageStaticPressure(59);
    bdsCode.setTurbulenceStatus(1);
    bdsCode.setTurbulence(0);
    bdsCode.setHumidityStatus(1);
    bdsCode.setHumidity(62);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code45 fields and Returns it .
*/
string GICBManager::messageBDSCode45Data()
{
    CBDSCode45 bdsCode;
    bdsCode.setTurbulenceStatus(1);
    bdsCode.setTurbulence(0);
    bdsCode.setWindShearStatus(1);
    bdsCode.setWindShear(1);
    bdsCode.setMicroburstStatus(1);
    bdsCode.setMicroburst(0);
    bdsCode.setIcingStatus(1);
    bdsCode.setIcing(0);
    bdsCode.setWakeVortexStatus(1);
    bdsCode.setWakeVortex(1);
    bdsCode.setStaticAirTemperatureStatus(1);
    bdsCode.setStaticAirTemperatureSign(0);
    bdsCode.setStaticAirTemperature(58);
    bdsCode.setAverageStaticPressureStatus(1);
    bdsCode.setAverageStaticPressure(1027);
    bdsCode.setRadioHeightStatus(1);
    bdsCode.setRadioHeight(27680);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code48 fields and Returns it .
*/
string GICBManager::messageBDSCode48Data()
{
    CBDSCode48 bdsCode;
    bdsCode.setVHF1(119.2);
    bdsCode.setVHF1Status(1);
    bdsCode.setVHF1AudioStatus(1);
    bdsCode.setVHF2(121.6);
    bdsCode.setVHF2Status(1);
    bdsCode.setVHF2AudioStatus(1);
    bdsCode.setVHF3(120.6);
    bdsCode.setVHF3Status(1);
    bdsCode.setVHF3AudioStatus(1);
    bdsCode.set121_5MHzAudioStatus(1);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code50 fields and Returns it .
*/
string GICBManager::messageBDSCode50Data()
{
    CBDSCode50 bdsCode;
    bdsCode.setRollAngleStatus(1);
    bdsCode.setRollAngleSign(0);
    bdsCode.setRollAngle(43);
    bdsCode.setTrueTrackAngleStatus(1);
    bdsCode.setTrueTrackAngleSign(0);
    bdsCode.setTrueTrackAngle(89);
    bdsCode.setGroundSpeedStatus(1);
    bdsCode.setGroundSpeed(1034);
    bdsCode.setTrackAngleRateStatus(1);
    bdsCode.setTrackAngleRateSign(0);
    bdsCode.setTrackAngleRate(7);
    bdsCode.setTrueAirspeedStatus(1);
    bdsCode.setTrueAirspeed(1015);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code51 fields and Returns it .
*/
string GICBManager::messageBDSCode51Data()
{
    CBDSCode51 bdsCode;
    bdsCode.setStatus(1);
    bdsCode.setLatitudeSign(1);
    bdsCode.setLatitude(87);
    bdsCode.setLongitudeSign(1);
    bdsCode.setLongitude(88);
    bdsCode.setPressureAltitudeSign(1);
    bdsCode.setPressureAltitude(64300);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code44 fields and Returns it .
*/
string GICBManager::messageBDSCode52Data()
{
    CBDSCode52 bdsCode;
    bdsCode.setStatus(1);
    bdsCode.setFOMSource(1);
    bdsCode.setLatitudeFine(79);
    bdsCode.setLongitudeFine(56);
    bdsCode.setPressureAltitudeSign(1);
    bdsCode.setPressureAltitude(61458);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code53 fields and Returns it .
*/
string GICBManager::messageBDSCode53Data()
{
    CBDSCode53 bdsCode;
    bdsCode.setMagneticHeadingStatus(1);
    bdsCode.setMagneticHeadingSign(0);
    bdsCode.setMagneticHeading(76);
    bdsCode.setIndicatedAirspeedStatus(1);
    bdsCode.setIndicatedAirspeed(486);
    bdsCode.setMachNumberStatus(1);
    bdsCode.setMachNumber(2018);
    bdsCode.setTrueAirspeedStatus(1);
    bdsCode.setTrueAirspeed(998);
    bdsCode.setAltitudeRateStatus(1);
    bdsCode.setAltitudeRateSign(0);
    bdsCode.setAltitudeRate(7896);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code54 fields and Returns it .
*/
string GICBManager::messageBDSCode54Data()
{
    CBDSCode54 bdsCode;
    bdsCode.setWaypointNameStatus(1);
    bdsCode.setWaypointName("01234");
    bdsCode.setEstimatedArrivalTime(28);
    bdsCode.setEstimatedFlightLevel(276);
    bdsCode.setTimeToGo(29);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code55 fields and Returns it .
*/
string GICBManager::messageBDSCode55Data()
{
    CBDSCode55 bdsCode;
    bdsCode.setWaypointNameStatus(1);
    bdsCode.setWaypointName("01234");
    bdsCode.setEstimatedArrivalTime(29);
    bdsCode.setEstimatedFlightLevel(272);
    bdsCode.setTimeToGo(27);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code56 fields and Returns it .
*/
string GICBManager::messageBDSCode56Data()
{
    CBDSCode56 bdsCode;
    bdsCode.setWaypointNameStatus(1);
    bdsCode.setWaypointName("01234");
    bdsCode.setEstimatedArrivalTime(26);
    bdsCode.setEstimatedFlightLevel(269);
    bdsCode.setTimeToGo(29);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code5F fields and Returns it .
*/
string GICBManager::messageBDSCode5FData()
{
    CBDSCode5F bdsCode;
    bdsCode.setMCPnFCUSeletedAltitude(1);
    bdsCode.setNextWaypoint(1);
    bdsCode.setFMSVerticalMode(1);
    bdsCode.setVHFChannelReport(1);
    bdsCode.setMeteorologicalHazards(1);
    bdsCode.setFMSSelectedAltitude(1);
    bdsCode.setBarometricPressureMinus800mb(1);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code60 fields and Returns it .
*/
string GICBManager::messageBDSCode60Data()
{
    CBDSCode60 bdsCode;
    bdsCode.setMagneticHeadingStatus(1);
    bdsCode.setMagneticHeadingSign(0);
    bdsCode.setMagneticHeading(83);
    bdsCode.setIndicatedAirspeedStatus(1);
    bdsCode.setIndicatedAirspeed(457);
    bdsCode.setMachStatus(1);
    bdsCode.setMach(2);
    bdsCode.setBarometricAltitudeRateStatus(1);
    bdsCode.setBarometricAltitudeRateSign(0);
    bdsCode.setBarometricAltitudeRate(7368);
    bdsCode.setInertialVerticalVelocityStatus(1);
    bdsCode.setInertialVerticalVelocitySign(0);
    bdsCode.setInertialVerticalVelocity(7591);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code61 fields and Returns it .
*/
string GICBManager::messageBDSCode61Data()
{
    CBDSCode61 bdsCode;
    bdsCode.setFormatTypeCode(28);
    bdsCode.setSubtypeCode(1);
    bdsCode.setEmergencyState(0);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09Code65 fields and Returns it .
*/
string GICBManager::messageBDSCode65Data()
{
    CBDSCode65 bdsCode;
    bdsCode.setFormatTypeCode(31);
    bdsCode.setSubtypeCode(0);
    bdsCode.setEnRouteOperationalCapabilities(0);
    bdsCode.setTerminalAreaOpertionalCapabilities(0);
    bdsCode.setApproachLandingOperationalCapabilities(0);
    bdsCode.setSurfaceOperationalCapabilities(0);
    bdsCode.setEnRouteOperationalCapabilityStatus(1);
    bdsCode.setTerminalAreaOpertionalCapabilityStatus(1);
    bdsCode.setApproachLandingOperationalCapabilityStatus(1);
    bdsCode.setSurfaceOperationalCapabilityStatus(1);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09CodeE3 fields and Returns it .
*/
string GICBManager::messageBDSCodeE3Data()
{
    CBDSCodeE3 bdsCode;
    bdsCode.setStatus(1);
    bdsCode.setFormatType(0);
    bdsCode.setPartNumber("102345678901");
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09CodeE4 fields and Returns it .
*/
string GICBManager::messageBDSCodeE4Data()
{
    CBDSCodeE4 bdsCode;
    bdsCode.setStatus(1);
    bdsCode.setFormatType(1);
    bdsCode.setPartNumber("01234ABC");
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09CodeE5 fields and Returns it .
*/
string GICBManager::messageBDSCodeE5Data()
{
    CBDSCodeE5 bdsCode;
    bdsCode.setStatus(1);
    bdsCode.setFormatType(0);
    bdsCode.setPartNumber("102345678901");
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09CodeE6 fields and Returns it .
*/
string GICBManager::messageBDSCodeE6Data()
{
    CBDSCodeE6 bdsCode;
    bdsCode.setStatus(1);
    bdsCode.setFormatType(1);
    bdsCode.setPartNumber("01234ABC");
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09CodeE7 fields and Returns it .
*/
string GICBManager::messageBDSCodeE7Data()
{
    CBDSCodeE7 bdsCode;
    bdsCode.setBDSRegisteNumber("E7");
    bdsCode.setSDICode(0);
    bdsCode.setNonDiversityTransponder(0);
    bdsCode.setDiversityFailure(0);
    bdsCode.setUpperReceiverFailure(0);
    bdsCode.setLowerReceiverFailure(0);
    bdsCode.setUpperSquitterFailure(0);
    bdsCode.setLowerSquitterFailure(0);
    bdsCode.setAirGround1InputStatus(1);
    bdsCode.setMSPnATSUnCMUIn2Status(1);
    bdsCode.setAirGround2InputStatus(1);
    bdsCode.setGPSTimeMark1Status(1);
    bdsCode.setGPSTimeMark2Status(1);
    bdsCode.setModeSLimitingDuringPowerOnCycle(0);
    bdsCode.setModeSLimiting(0);
    bdsCode.setExtendedSquitterDisableStatus(1);
    bdsCode.setACASInputInactive(0);
    bdsCode.setADSBOutStatus(1);
    bdsCode.setSelectedControlInactiveStatus(1);
    bdsCode.setControlInputSelection(0);
    bdsCode.setMultipleAirDataSourceReportingSelection(0);
    bdsCode.setAltitudeAlternatePortSelection(1);
    bdsCode.setAltitudePortAStatus(1);
    bdsCode.setAltitudePortBStatus(1);
    bdsCode.setFMCnGNSSSourceSelect(1);
    bdsCode.setFMCnGNSS1BusStatus(1);
    bdsCode.setFMCnGNSS2BusStatus(1);
    bdsCode.setMultipleIRSnAHRSDataSourceReportingSelection(0);
    bdsCode.setIRSnFMSSourceSelect(0);
    bdsCode.setIRSnFMSnDataConcentratorIn1(0);
    bdsCode.setIRSnFMSnDataConcentratorIn2(0);
    bdsCode.setFMCSelect(1);
    bdsCode.setFMC1nGenInBusStatus(1);
    bdsCode.setFMC2nGenInBusStatus(1);
    bdsCode.setMSPnATSUnCMUIn1Status(1);
    return bdsCode.getMessage();
}

/*!
  @brief Sets dummy data for BDS09CodeEA fields and Returns it .
*/
string GICBManager::messageBDSCodeEAData()
{
    CBDSCodeEA bdsCode;
    bdsCode.setBDSRegisterNumber("EA");
    bdsCode.setManufacturerDefinedDiagnosticField9_16("0 1 0 1 0 1 0 1");
    bdsCode.setManufacturerDefinedDiagnosticField17_24("0 1 0 1 0 1 0 1");
    bdsCode.setManufacturerDefinedDiagnosticField25_32("0 1 0 1 0 1 0 1");
    bdsCode.setManufacturerDefinedDiagnosticField33_40("0 1 0 1 0 1 0 1");
    bdsCode.setManufacturerDefinedDiagnosticField41_48("0 1 0 1 0 1 0 1");
    bdsCode.setManufacturerDefinedDiagnosticField49_56("0 1 0 1 0 1 0 1");
    return bdsCode.getMessage();
}
