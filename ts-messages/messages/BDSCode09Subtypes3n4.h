#ifndef __BDSCode09Subtypes3n4_h
#define __BDSCode09Subtypes3n4_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode09Subtypes3n4:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x2c;
    CBDSCode09Subtypes3n4(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode09Subtypes3n4(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setFormatTypeCode(unsigned int value)
    {
        write("FormatTypeCode",value);
    }

    unsigned int getFormatTypeCode(void)

    {
        return getUInt("FormatTypeCode");
    }

    bool isFormatTypeCodeValid(void)
    {
        return isValid("FormatTypeCode");

    }

    void setSubtype(unsigned int value)
    {
        write("Subtype",value);
    }

    unsigned int getSubtype(void)

    {
        return getUInt("Subtype");
    }

    bool isSubtypeValid(void)
    {
        return isValid("Subtype");

    }

    void setHeading(unsigned int value)
    {
        write("Heading",value);
    }

    unsigned int getHeading(void)

    {
        return getUInt("Heading");
    }

    bool isHeadingValid(void)
    {
        return isValid("Heading");

    }

    void setAirspeed(unsigned int value)
    {
        write("Airspeed",value);
    }

    unsigned int getAirspeed(void)

    {
        return getUInt("Airspeed");
    }

    bool isAirspeedValid(void)
    {
        return isValid("Airspeed");

    }

    void setVerticalRate(unsigned int value)
    {
        write("VerticalRate",value);
    }

    unsigned int getVerticalRate(void)

    {
        return getUInt("VerticalRate");
    }

    bool isVerticalRateValid(void)
    {
        return isValid("VerticalRate");

    }

    void setGeoHBaroAltDiff(unsigned int value)
    {
        write("GeoHBaroAltDiff",value);
    }

    unsigned int getGeoHBaroAltDiff(void)

    {
        return getUInt("GeoHBaroAltDiff");
    }

    bool isGeoHBaroAltDiffValid(void)
    {
        return isValid("GeoHBaroAltDiff");

    }

    void setIntentChangeFlag(unsigned int value)
    {
        write("IntentChangeFlag",value);
    }

    unsigned int getIntentChangeFlag(void)

    {
        return getUInt("IntentChangeFlag");
    }

    bool isIntentChangeFlagValid(void)
    {
        return isValid("IntentChangeFlag");

    }

    void setAirspeedType(unsigned int value)
    {
        write("AirspeedType",value);
    }

    unsigned int getAirspeedType(void)

    {
        return getUInt("AirspeedType");
    }

    bool isAirspeedTypeValid(void)
    {
        return isValid("AirspeedType");

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

    void setVerticalRateSource(unsigned int value)
    {
        write("VerticalRateSource",value);
    }

    unsigned int getVerticalRateSource(void)

    {
        return getUInt("VerticalRateSource");
    }

    bool isVerticalRateSourceValid(void)
    {
        return isValid("VerticalRateSource");

    }

    void setHeadingStatus(bool value)
    {
        write("HeadingStatus",value);
    }

    bool getHeadingStatus(void)

    {
        return getBool("HeadingStatus");
    }

    bool isHeadingStatusValid(void)
    {
        return isValid("HeadingStatus");

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