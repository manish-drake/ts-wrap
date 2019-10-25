#ifndef __BDSCode61_Subtype2_h
#define __BDSCode61_Subtype2_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode61_Subtype2:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x2d;
    CBDSCode61_Subtype2(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode61_Subtype2(Json::Value obj):TServerMessage(obj)
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

    void setSubtypeCode(unsigned int value)
    {
        write("SubtypeCode",value);
    }

    unsigned int getSubtypeCode(void)

    {
        return getUInt("SubtypeCode");
    }

    bool isSubtypeCodeValid(void)
    {
        return isValid("SubtypeCode");

    }

    void setActiveResolutionAdv(unsigned int value)
    {
        write("ActiveResolutionAdv",value);
    }

    unsigned int getActiveResolutionAdv(void)

    {
        return getUInt("ActiveResolutionAdv");
    }

    bool isActiveResolutionAdvValid(void)
    {
        return isValid("ActiveResolutionAdv");

    }

    void setRACRecord(int value)
    {
        write("RACRecord",value);
    }

    int getRACRecord(void)

    {
        return getInt("RACRecord");
    }

    bool isRACRecordValid(void)
    {
        return isValid("RACRecord");

    }

    void setRATerminated(bool value)
    {
        write("RATerminated",value);
    }

    bool getRATerminated(void)

    {
        return getBool("RATerminated");
    }

    bool isRATerminatedValid(void)
    {
        return isValid("RATerminated");

    }

    void setMultipleThreatENC(bool value)
    {
        write("MultipleThreatENC",value);
    }

    bool getMultipleThreatENC(void)

    {
        return getBool("MultipleThreatENC");
    }

    bool isMultipleThreatENCValid(void)
    {
        return isValid("MultipleThreatENC");

    }

    void setThreatTypeInd(unsigned int value)
    {
        write("ThreatTypeInd",value);
    }

    unsigned int getThreatTypeInd(void)

    {
        return getUInt("ThreatTypeInd");
    }

    bool isThreatTypeIndValid(void)
    {
        return isValid("ThreatTypeInd");

    }

    void setThreatIdData(int value)
    {
        write("ThreatIdData",value);
    }

    int getThreatIdData(void)

    {
        return getInt("ThreatIdData");
    }

    bool isThreatIdDataValid(void)
    {
        return isValid("ThreatIdData");

    }

    void setThModeSAddr(int value)
    {
        write("ThModeSAddr",value);
    }

    int getThModeSAddr(void)

    {
        return getInt("ThModeSAddr");
    }

    bool isThModeSAddrValid(void)
    {
        return isValid("ThModeSAddr");

    }

    void setThAltitude(int value)
    {
        write("ThAltitude",value);
    }

    int getThAltitude(void)

    {
        return getInt("ThAltitude");
    }

    bool isThAltitudeValid(void)
    {
        return isValid("ThAltitude");

    }

    void setThRange(float value)
    {
        write("ThRange",value);
    }

    float getThRange(void)

    {
        return getFloat("ThRange");
    }

    bool isThRangeValid(void)
    {
        return isValid("ThRange");

    }

    void setThRangeState(int value)
    {
        write("ThRangeState",value);
    }

    int getThRangeState(void)

    {
        return getInt("ThRangeState");
    }

    bool isThRangeStateValid(void)
    {
        return isValid("ThRangeState");

    }

    void setThBearing(int value)
    {
        write("ThBearing",value);
    }

    int getThBearing(void)

    {
        return getInt("ThBearing");
    }

    bool isThBearingValid(void)
    {
        return isValid("ThBearing");

    }

    void setThBearingState(int value)
    {
        write("ThBearingState",value);
    }

    int getThBearingState(void)

    {
        return getInt("ThBearingState");
    }

    bool isThBearingStateValid(void)
    {
        return isValid("ThBearingState");

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