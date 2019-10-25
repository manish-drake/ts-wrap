#ifndef __BDSCode09Subtypes1n2_h
#define __BDSCode09Subtypes1n2_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode09Subtypes1n2:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x5;
    CBDSCode09Subtypes1n2(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode09Subtypes1n2(Json::Value obj):TServerMessage(obj)
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

    void setintentChangeFlag(unsigned int value)
    {
        write("intentChangeFlag",value);
    }

    unsigned int getintentChangeFlag(void)

    {
        return getUInt("intentChangeFlag");
    }

    bool isintentChangeFlagValid(void)
    {
        return isValid("intentChangeFlag");

    }

    void setiFRCapabilityFlag(unsigned int value)
    {
        write("iFRCapabilityFlag",value);
    }

    unsigned int getiFRCapabilityFlag(void)

    {
        return getUInt("iFRCapabilityFlag");
    }

    bool isiFRCapabilityFlagValid(void)
    {
        return isValid("iFRCapabilityFlag");

    }

    void setNavigationUncertaintyCategoryForVelocity(unsigned int value)
    {
        write("NavigationUncertaintyCategoryForVelocity",value);
    }

    unsigned int getNavigationUncertaintyCategoryForVelocity(void)

    {
        return getUInt("NavigationUncertaintyCategoryForVelocity");
    }

    bool isNavigationUncertaintyCategoryForVelocityValid(void)
    {
        return isValid("NavigationUncertaintyCategoryForVelocity");

    }

    void setEastWestVelocityDirection(unsigned int value)
    {
        write("EastWestVelocityDirection",value);
    }

    unsigned int getEastWestVelocityDirection(void)

    {
        return getUInt("EastWestVelocityDirection");
    }

    bool isEastWestVelocityDirectionValid(void)
    {
        return isValid("EastWestVelocityDirection");

    }

    void setEastWestVelocity(unsigned int value)
    {
        write("EastWestVelocity",value);
    }

    unsigned int getEastWestVelocity(void)

    {
        return getUInt("EastWestVelocity");
    }

    bool isEastWestVelocityValid(void)
    {
        return isValid("EastWestVelocity");

    }

    void setNorthSouthVelocityDirection(unsigned int value)
    {
        write("NorthSouthVelocityDirection",value);
    }

    unsigned int getNorthSouthVelocityDirection(void)

    {
        return getUInt("NorthSouthVelocityDirection");
    }

    bool isNorthSouthVelocityDirectionValid(void)
    {
        return isValid("NorthSouthVelocityDirection");

    }

    void setNorthSouthVelocity(unsigned int value)
    {
        write("NorthSouthVelocity",value);
    }

    unsigned int getNorthSouthVelocity(void)

    {
        return getUInt("NorthSouthVelocity");
    }

    bool isNorthSouthVelocityValid(void)
    {
        return isValid("NorthSouthVelocity");

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

    void setVerticalRateSign(unsigned int value)
    {
        write("VerticalRateSign",value);
    }

    unsigned int getVerticalRateSign(void)

    {
        return getUInt("VerticalRateSign");
    }

    bool isVerticalRateSignValid(void)
    {
        return isValid("VerticalRateSign");

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

    void setGNSSAltSign(unsigned int value)
    {
        write("GNSSAltSign",value);
    }

    unsigned int getGNSSAltSign(void)

    {
        return getUInt("GNSSAltSign");
    }

    bool isGNSSAltSignValid(void)
    {
        return isValid("GNSSAltSign");

    }

    void setGNSSAltDifferenceFromBaroAlt(unsigned int value)
    {
        write("GNSSAltDifferenceFromBaroAlt",value);
    }

    unsigned int getGNSSAltDifferenceFromBaroAlt(void)

    {
        return getUInt("GNSSAltDifferenceFromBaroAlt");
    }

    bool isGNSSAltDifferenceFromBaroAltValid(void)
    {
        return isValid("GNSSAltDifferenceFromBaroAlt");

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