#ifndef __SIFADSBData_h
#define __SIFADSBData_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CSIFADSBData:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x5;
    CSIFADSBData(void)
    {
        setCmdID(mCmdID);
    }
    CSIFADSBData(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setAddress(unsigned int value)
    {
        write("Address",value);
    }

    unsigned int getAddress(void)

    {
        return getUInt("Address");
    }

    bool isAddressValid(void)
    {
        return isValid("Address");

    }

    void setAddressType(unsigned int value)
    {
        write("AddressType",value);
    }

    unsigned int getAddressType(void)

    {
        return getUInt("AddressType");
    }

    bool isAddressTypeValid(void)
    {
        return isValid("AddressType");

    }

    void setLatitude(float value)
    {
        write("Latitude",value);
    }

    float getLatitude(void)

    {
        return getFloat("Latitude");
    }

    bool isLatitudeValid(void)
    {
        return isValid("Latitude");

    }

    void setLongitude(float value)
    {
        write("Longitude",value);
    }

    float getLongitude(void)

    {
        return getFloat("Longitude");
    }

    bool isLongitudeValid(void)
    {
        return isValid("Longitude");

    }

    void setAltitude(int value)
    {
        write("Altitude",value);
    }

    int getAltitude(void)

    {
        return getInt("Altitude");
    }

    bool isAltitudeValid(void)
    {
        return isValid("Altitude");

    }

    void setAltitudeType(unsigned int value)
    {
        write("AltitudeType",value);
    }

    unsigned int getAltitudeType(void)

    {
        return getUInt("AltitudeType");
    }

    bool isAltitudeTypeValid(void)
    {
        return isValid("AltitudeType");

    }

    void setAltitudeBaro(int value)
    {
        write("AltitudeBaro",value);
    }

    int getAltitudeBaro(void)

    {
        return getInt("AltitudeBaro");
    }

    bool isAltitudeBaroValid(void)
    {
        return isValid("AltitudeBaro");

    }

    void setAltitudeGNS(int value)
    {
        write("AltitudeGNS",value);
    }

    int getAltitudeGNS(void)

    {
        return getInt("AltitudeGNS");
    }

    bool isAltitudeGNSValid(void)
    {
        return isValid("AltitudeGNS");

    }

    void setNIC(unsigned int value)
    {
        write("NIC",value);
    }

    unsigned int getNIC(void)

    {
        return getUInt("NIC");
    }

    bool isNICValid(void)
    {
        return isValid("NIC");

    }

    void setAirborne(unsigned int value)
    {
        write("Airborne",value);
    }

    unsigned int getAirborne(void)

    {
        return getUInt("Airborne");
    }

    bool isAirborneValid(void)
    {
        return isValid("Airborne");

    }

    void setNorthVel(int value)
    {
        write("NorthVel",value);
    }

    int getNorthVel(void)

    {
        return getInt("NorthVel");
    }

    bool isNorthVelValid(void)
    {
        return isValid("NorthVel");

    }

    void setEastVel(int value)
    {
        write("EastVel",value);
    }

    int getEastVel(void)

    {
        return getInt("EastVel");
    }

    bool isEastVelValid(void)
    {
        return isValid("EastVel");

    }

    void setGroundspeed(unsigned int value)
    {
        write("Groundspeed",value);
    }

    unsigned int getGroundspeed(void)

    {
        return getUInt("Groundspeed");
    }

    bool isGroundspeedValid(void)
    {
        return isValid("Groundspeed");

    }

    void setHeadingTrack(float value)
    {
        write("HeadingTrack",value);
    }

    float getHeadingTrack(void)

    {
        return getFloat("HeadingTrack");
    }

    bool isHeadingTrackValid(void)
    {
        return isValid("HeadingTrack");

    }

    void setAngleType(unsigned int value)
    {
        write("AngleType",value);
    }

    unsigned int getAngleType(void)

    {
        return getUInt("AngleType");
    }

    bool isAngleTypeValid(void)
    {
        return isValid("AngleType");

    }

    void setVerticalVelocity(int value)
    {
        write("VerticalVelocity",value);
    }

    int getVerticalVelocity(void)

    {
        return getInt("VerticalVelocity");
    }

    bool isVerticalVelocityValid(void)
    {
        return isValid("VerticalVelocity");

    }

    void setVerticalVelocitySource(unsigned int value)
    {
        write("VerticalVelocitySource",value);
    }

    unsigned int getVerticalVelocitySource(void)

    {
        return getUInt("VerticalVelocitySource");
    }

    bool isVerticalVelocitySourceValid(void)
    {
        return isValid("VerticalVelocitySource");

    }

    void setAVSize(unsigned int value)
    {
        write("AVSize",value);
    }

    unsigned int getAVSize(void)

    {
        return getUInt("AVSize");
    }

    bool isAVSizeValid(void)
    {
        return isValid("AVSize");

    }

    void setGPSOffsetLateral(int value)
    {
        write("GPSOffsetLateral",value);
    }

    int getGPSOffsetLateral(void)

    {
        return getInt("GPSOffsetLateral");
    }

    bool isGPSOffsetLateralValid(void)
    {
        return isValid("GPSOffsetLateral");

    }

    void setGPSOffsetLongitudinal(unsigned int value)
    {
        write("GPSOffsetLongitudinal",value);
    }

    unsigned int getGPSOffsetLongitudinal(void)

    {
        return getUInt("GPSOffsetLongitudinal");
    }

    bool isGPSOffsetLongitudinalValid(void)
    {
        return isValid("GPSOffsetLongitudinal");

    }

    void setGPSOffsetSensorApplied(unsigned int value)
    {
        write("GPSOffsetSensorApplied",value);
    }

    unsigned int getGPSOffsetSensorApplied(void)

    {
        return getUInt("GPSOffsetSensorApplied");
    }

    bool isGPSOffsetSensorAppliedValid(void)
    {
        return isValid("GPSOffsetSensorApplied");

    }

    void setUTCCoupling(unsigned int value)
    {
        write("UTCCoupling",value);
    }

    unsigned int getUTCCoupling(void)

    {
        return getUInt("UTCCoupling");
    }

    bool isUTCCouplingValid(void)
    {
        return isValid("UTCCoupling");

    }

    void setUplinkFeedback(unsigned int value)
    {
        write("UplinkFeedback",value);
    }

    unsigned int getUplinkFeedback(void)

    {
        return getUInt("UplinkFeedback");
    }

    bool isUplinkFeedbackValid(void)
    {
        return isValid("UplinkFeedback");

    }

    void setEmitterCategory(unsigned int value)
    {
        write("EmitterCategory",value);
    }

    unsigned int getEmitterCategory(void)

    {
        return getUInt("EmitterCategory");
    }

    bool isEmitterCategoryValid(void)
    {
        return isValid("EmitterCategory");

    }

    void setCallsign(std::string value)
    {
        write("Callsign",value);
    }

    std::string getCallsign(void)

    {
        return getString("Callsign");
    }

    bool isCallsignValid(void)
    {
        return isValid("Callsign");

    }

    void setFlightID(std::string value)
    {
        write("FlightID",value);
    }

    std::string getFlightID(void)

    {
        return getString("FlightID");
    }

    bool isFlightIDValid(void)
    {
        return isValid("FlightID");

    }

    void setEmergencyStatus(unsigned int value)
    {
        write("EmergencyStatus",value);
    }

    unsigned int getEmergencyStatus(void)

    {
        return getUInt("EmergencyStatus");
    }

    bool isEmergencyStatusValid(void)
    {
        return isValid("EmergencyStatus");

    }

    void setMOPSVersion(unsigned int value)
    {
        write("MOPSVersion",value);
    }

    unsigned int getMOPSVersion(void)

    {
        return getUInt("MOPSVersion");
    }

    bool isMOPSVersionValid(void)
    {
        return isValid("MOPSVersion");

    }

    void setSIL(unsigned int value)
    {
        write("SIL",value);
    }

    unsigned int getSIL(void)

    {
        return getUInt("SIL");
    }

    bool isSILValid(void)
    {
        return isValid("SIL");

    }

    void setTXMSO(unsigned int value)
    {
        write("TXMSO",value);
    }

    unsigned int getTXMSO(void)

    {
        return getUInt("TXMSO");
    }

    bool isTXMSOValid(void)
    {
        return isValid("TXMSO");

    }

    void setSDA(unsigned int value)
    {
        write("SDA",value);
    }

    unsigned int getSDA(void)

    {
        return getUInt("SDA");
    }

    bool isSDAValid(void)
    {
        return isValid("SDA");

    }

    void setNACp(unsigned int value)
    {
        write("NACp",value);
    }

    unsigned int getNACp(void)

    {
        return getUInt("NACp");
    }

    bool isNACpValid(void)
    {
        return isValid("NACp");

    }

    void setNACv(unsigned int value)
    {
        write("NACv",value);
    }

    unsigned int getNACv(void)

    {
        return getUInt("NACv");
    }

    bool isNACvValid(void)
    {
        return isValid("NACv");

    }

    void setNICBaro(unsigned int value)
    {
        write("NICBaro",value);
    }

    unsigned int getNICBaro(void)

    {
        return getUInt("NICBaro");
    }

    bool isNICBaroValid(void)
    {
        return isValid("NICBaro");

    }

    void setUATIn(bool value)
    {
        write("UATIn",value);
    }

    bool getUATIn(void)

    {
        return getBool("UATIn");
    }

    bool isUATInValid(void)
    {
        return isValid("UATIn");

    }

    void setES1090In(bool value)
    {
        write("ES1090In",value);
    }

    bool getES1090In(void)

    {
        return getBool("ES1090In");
    }

    bool isES1090InValid(void)
    {
        return isValid("ES1090In");

    }

    void setTCASOperational(bool value)
    {
        write("TCASOperational",value);
    }

    bool getTCASOperational(void)

    {
        return getBool("TCASOperational");
    }

    bool isTCASOperationalValid(void)
    {
        return isValid("TCASOperational");

    }

    void setOperationalModes(unsigned int value)
    {
        write("OperationalModes",value);
    }

    unsigned int getOperationalModes(void)

    {
        return getUInt("OperationalModes");
    }

    bool isOperationalModesValid(void)
    {
        return isValid("OperationalModes");

    }

    void setTCASResolutionAdvisory(bool value)
    {
        write("TCASResolutionAdvisory",value);
    }

    bool getTCASResolutionAdvisory(void)

    {
        return getBool("TCASResolutionAdvisory");
    }

    bool isTCASResolutionAdvisoryValid(void)
    {
        return isValid("TCASResolutionAdvisory");

    }

    void setIdentActive(bool value)
    {
        write("IdentActive",value);
    }

    bool getIdentActive(void)

    {
        return getBool("IdentActive");
    }

    bool isIdentActiveValid(void)
    {
        return isValid("IdentActive");

    }

    void setATCServices(bool value)
    {
        write("ATCServices",value);
    }

    bool getATCServices(void)

    {
        return getBool("ATCServices");
    }

    bool isATCServicesValid(void)
    {
        return isValid("ATCServices");

    }

    void setCallsignID(unsigned int value)
    {
        write("CallsignID",value);
    }

    unsigned int getCallsignID(void)

    {
        return getUInt("CallsignID");
    }

    bool isCallsignIDValid(void)
    {
        return isValid("CallsignID");

    }

    void setSILSupplement(unsigned int value)
    {
        write("SILSupplement",value);
    }

    unsigned int getSILSupplement(void)

    {
        return getUInt("SILSupplement");
    }

    bool isSILSupplementValid(void)
    {
        return isValid("SILSupplement");

    }

    void setGeometricVerticalAccuracy(unsigned int value)
    {
        write("GeometricVerticalAccuracy",value);
    }

    unsigned int getGeometricVerticalAccuracy(void)

    {
        return getUInt("GeometricVerticalAccuracy");
    }

    bool isGeometricVerticalAccuracyValid(void)
    {
        return isValid("GeometricVerticalAccuracy");

    }

    void setSingleAntenna(unsigned int value)
    {
        write("SingleAntenna",value);
    }

    unsigned int getSingleAntenna(void)

    {
        return getUInt("SingleAntenna");
    }

    bool isSingleAntennaValid(void)
    {
        return isValid("SingleAntenna");

    }

    void setNICSupp(unsigned int value)
    {
        write("NICSupp",value);
    }

    unsigned int getNICSupp(void)

    {
        return getUInt("NICSupp");
    }

    bool isNICSuppValid(void)
    {
        return isValid("NICSupp");

    }

    void setSecondaryAltitude(int value)
    {
        write("SecondaryAltitude",value);
    }

    int getSecondaryAltitude(void)

    {
        return getInt("SecondaryAltitude");
    }

    bool isSecondaryAltitudeValid(void)
    {
        return isValid("SecondaryAltitude");

    }

    void setSelectedAltitude(unsigned int value)
    {
        write("SelectedAltitude",value);
    }

    unsigned int getSelectedAltitude(void)

    {
        return getUInt("SelectedAltitude");
    }

    bool isSelectedAltitudeValid(void)
    {
        return isValid("SelectedAltitude");

    }

    void setSelectedAltitudeType(unsigned int value)
    {
        write("SelectedAltitudeType",value);
    }

    unsigned int getSelectedAltitudeType(void)

    {
        return getUInt("SelectedAltitudeType");
    }

    bool isSelectedAltitudeTypeValid(void)
    {
        return isValid("SelectedAltitudeType");

    }

    void setBaroSetting(float value)
    {
        write("BaroSetting",value);
    }

    float getBaroSetting(void)

    {
        return getFloat("BaroSetting");
    }

    bool isBaroSettingValid(void)
    {
        return isValid("BaroSetting");

    }

    void setSelectedHeading(float value)
    {
        write("SelectedHeading",value);
    }

    float getSelectedHeading(void)

    {
        return getFloat("SelectedHeading");
    }

    bool isSelectedHeadingValid(void)
    {
        return isValid("SelectedHeading");

    }

    void setMCPFCUStatus(bool value)
    {
        write("MCPFCUStatus",value);
    }

    bool getMCPFCUStatus(void)

    {
        return getBool("MCPFCUStatus");
    }

    bool isMCPFCUStatusValid(void)
    {
        return isValid("MCPFCUStatus");

    }

    void setModeAutoPilotEngaged(bool value)
    {
        write("ModeAutoPilotEngaged",value);
    }

    bool getModeAutoPilotEngaged(void)

    {
        return getBool("ModeAutoPilotEngaged");
    }

    bool isModeAutoPilotEngagedValid(void)
    {
        return isValid("ModeAutoPilotEngaged");

    }

    void setModeVNAV(bool value)
    {
        write("ModeVNAV",value);
    }

    bool getModeVNAV(void)

    {
        return getBool("ModeVNAV");
    }

    bool isModeVNAVValid(void)
    {
        return isValid("ModeVNAV");

    }

    void setModeAltitudeHold(bool value)
    {
        write("ModeAltitudeHold",value);
    }

    bool getModeAltitudeHold(void)

    {
        return getBool("ModeAltitudeHold");
    }

    bool isModeAltitudeHoldValid(void)
    {
        return isValid("ModeAltitudeHold");

    }

    void setModeApproach(bool value)
    {
        write("ModeApproach",value);
    }

    bool getModeApproach(void)

    {
        return getBool("ModeApproach");
    }

    bool isModeApproachValid(void)
    {
        return isValid("ModeApproach");

    }

    void setModeLNAV(bool value)
    {
        write("ModeLNAV",value);
    }

    bool getModeLNAV(void)

    {
        return getBool("ModeLNAV");
    }

    bool isModeLNAVValid(void)
    {
        return isValid("ModeLNAV");

    }

    void setMessage(std::string jsonstring)
    {

        TServerMessage::setMessage(jsonstring);

    }

    void set(Json::Value obj)
    {

        TServerMessage::set(obj);

    }

    std::string getMessage(void)
    {
        return TServerMessage::getMessage();
    }

    Json::Value get(void)
    {
        return TServerMessage::get();
    }

};




#endif