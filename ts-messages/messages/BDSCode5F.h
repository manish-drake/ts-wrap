#ifndef __BDSCode5F_h
#define __BDSCode5F_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode5F:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x26;
    CBDSCode5F(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode5F(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setMCPnFCUSeletedAltitude(bool value)
    {
        write("MCPnFCUSeletedAltitude",value);
    }

    bool getMCPnFCUSeletedAltitude(void)

    {
        return getBool("MCPnFCUSeletedAltitude");
    }

    bool isMCPnFCUSeletedAltitudeValid(void)
    {
        return isValid("MCPnFCUSeletedAltitude");

    }

    void setNextWaypoint(bool value)
    {
        write("NextWaypoint",value);
    }

    bool getNextWaypoint(void)

    {
        return getBool("NextWaypoint");
    }

    bool isNextWaypointValid(void)
    {
        return isValid("NextWaypoint");

    }

    void setFMSVerticalMode(bool value)
    {
        write("FMSVerticalMode",value);
    }

    bool getFMSVerticalMode(void)

    {
        return getBool("FMSVerticalMode");
    }

    bool isFMSVerticalModeValid(void)
    {
        return isValid("FMSVerticalMode");

    }

    void setVHFChannelReport(bool value)
    {
        write("VHFChannelReport",value);
    }

    bool getVHFChannelReport(void)

    {
        return getBool("VHFChannelReport");
    }

    bool isVHFChannelReportValid(void)
    {
        return isValid("VHFChannelReport");

    }

    void setMeteorologicalHazards(bool value)
    {
        write("MeteorologicalHazards",value);
    }

    bool getMeteorologicalHazards(void)

    {
        return getBool("MeteorologicalHazards");
    }

    bool isMeteorologicalHazardsValid(void)
    {
        return isValid("MeteorologicalHazards");

    }

    void setFMSSelectedAltitude(bool value)
    {
        write("FMSSelectedAltitude",value);
    }

    bool getFMSSelectedAltitude(void)

    {
        return getBool("FMSSelectedAltitude");
    }

    bool isFMSSelectedAltitudeValid(void)
    {
        return isValid("FMSSelectedAltitude");

    }

    void setBarometricPressureMinus800mb(bool value)
    {
        write("BarometricPressureMinus800mb",value);
    }

    bool getBarometricPressureMinus800mb(void)

    {
        return getBool("BarometricPressureMinus800mb");
    }

    bool isBarometricPressureMinus800mbValid(void)
    {
        return isValid("BarometricPressureMinus800mb");

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