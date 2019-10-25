#ifndef __Part43SummaryResults_h
#define __Part43SummaryResults_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43SummaryResults:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x14;
    CPart43SummaryResults(void)
    {
        setCmdID(mCmdID);
    }
    CPart43SummaryResults(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setUutType(std::string value)
    {
        write("UutType",value);
    }

    std::string getUutType(void)

    {
        return getString("UutType");
    }

    bool isUutTypeValid(void)
    {
        return isValid("UutType");

    }

    void setReplyFrequency(float value)
    {
        write("ReplyFrequency",value);
    }

    float getReplyFrequency(void)

    {
        return getFloat("ReplyFrequency");
    }

    bool isReplyFrequencyValid(void)
    {
        return isValid("ReplyFrequency");

    }

    void setRfPeakOutputPower(float value)
    {
        write("RfPeakOutputPower",value);
    }

    float getRfPeakOutputPower(void)

    {
        return getFloat("RfPeakOutputPower");
    }

    bool isRfPeakOutputPowerValid(void)
    {
        return isValid("RfPeakOutputPower");

    }

    void setReceiverSensitivity(float value)
    {
        write("ReceiverSensitivity",value);
    }

    float getReceiverSensitivity(void)

    {
        return getFloat("ReceiverSensitivity");
    }

    bool isReceiverSensitivityValid(void)
    {
        return isValid("ReceiverSensitivity");

    }

    void setSuppression(bool value)
    {
        write("Suppression",value);
    }

    bool getSuppression(void)

    {
        return getBool("Suppression");
    }

    bool isSuppressionValid(void)
    {
        return isValid("Suppression");

    }

    void setDiversityIsolation(bool value)
    {
        write("DiversityIsolation",value);
    }

    bool getDiversityIsolation(void)

    {
        return getBool("DiversityIsolation");
    }

    bool isDiversityIsolationValid(void)
    {
        return isValid("DiversityIsolation");

    }

    void setPulseMeasurements(bool value)
    {
        write("PulseMeasurements",value);
    }

    bool getPulseMeasurements(void)

    {
        return getBool("PulseMeasurements");
    }

    bool isPulseMeasurementsValid(void)
    {
        return isValid("PulseMeasurements");

    }

    void setModeACode(unsigned int value)
    {
        write("ModeACode",value);
    }

    unsigned int getModeACode(void)

    {
        return getUInt("ModeACode");
    }

    bool isModeACodeValid(void)
    {
        return isValid("ModeACode");

    }

    void setModeCAltitude(unsigned int value)
    {
        write("ModeCAltitude",value);
    }

    unsigned int getModeCAltitude(void)

    {
        return getUInt("ModeCAltitude");
    }

    bool isModeCAltitudeValid(void)
    {
        return isValid("ModeCAltitude");

    }

    void setModeSAddress(unsigned int value)
    {
        write("ModeSAddress",value);
    }

    unsigned int getModeSAddress(void)

    {
        return getUInt("ModeSAddress");
    }

    bool isModeSAddressValid(void)
    {
        return isValid("ModeSAddress");

    }

    void setCommCapability(std::string value)
    {
        write("CommCapability",value);
    }

    std::string getCommCapability(void)

    {
        return getString("CommCapability");
    }

    bool isCommCapabilityValid(void)
    {
        return isValid("CommCapability");

    }

    void setModeSOnlyAllCall(bool value)
    {
        write("ModeSOnlyAllCall",value);
    }

    bool getModeSOnlyAllCall(void)

    {
        return getBool("ModeSOnlyAllCall");
    }

    bool isModeSOnlyAllCallValid(void)
    {
        return isValid("ModeSOnlyAllCall");

    }

    void setAtcrbsMsAllCall(bool value)
    {
        write("AtcrbsMsAllCall",value);
    }

    bool getAtcrbsMsAllCall(void)

    {
        return getBool("AtcrbsMsAllCall");
    }

    bool isAtcrbsMsAllCallValid(void)
    {
        return isValid("AtcrbsMsAllCall");

    }

    void setAtcrbsOnlyAllCall(bool value)
    {
        write("AtcrbsOnlyAllCall",value);
    }

    bool getAtcrbsOnlyAllCall(void)

    {
        return getBool("AtcrbsOnlyAllCall");
    }

    bool isAtcrbsOnlyAllCallValid(void)
    {
        return isValid("AtcrbsOnlyAllCall");

    }

    void setModeSSquitter(bool value)
    {
        write("ModeSSquitter",value);
    }

    bool getModeSSquitter(void)

    {
        return getBool("ModeSSquitter");
    }

    bool isModeSSquitterValid(void)
    {
        return isValid("ModeSSquitter");

    }

    void setModeSFormats(bool value)
    {
        write("ModeSFormats",value);
    }

    bool getModeSFormats(void)

    {
        return getBool("ModeSFormats");
    }

    bool isModeSFormatsValid(void)
    {
        return isValid("ModeSFormats");

    }

    void setIdAndAltitudeMatch(bool value)
    {
        write("IdAndAltitudeMatch",value);
    }

    bool getIdAndAltitudeMatch(void)

    {
        return getBool("IdAndAltitudeMatch");
    }

    bool isIdAndAltitudeMatchValid(void)
    {
        return isValid("IdAndAltitudeMatch");

    }

    void setFlightId(std::string value)
    {
        write("FlightId",value);
    }

    std::string getFlightId(void)

    {
        return getString("FlightId");
    }

    bool isFlightIdValid(void)
    {
        return isValid("FlightId");

    }

    void setIcao24BitAddress(std::string value)
    {
        write("Icao24BitAddress",value);
    }

    std::string getIcao24BitAddress(void)

    {
        return getString("Icao24BitAddress");
    }

    bool isIcao24BitAddressValid(void)
    {
        return isValid("Icao24BitAddress");

    }

    void setVerticalStatus(unsigned int value)
    {
        write("VerticalStatus",value);
    }

    unsigned int getVerticalStatus(void)

    {
        return getUInt("VerticalStatus");
    }

    bool isVerticalStatusValid(void)
    {
        return isValid("VerticalStatus");

    }

    void setFlightStatus(unsigned int value)
    {
        write("FlightStatus",value);
    }

    unsigned int getFlightStatus(void)

    {
        return getUInt("FlightStatus");
    }

    bool isFlightStatusValid(void)
    {
        return isValid("FlightStatus");

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