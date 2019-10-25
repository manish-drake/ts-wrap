#ifndef __AtcrbsModeSIdAltitudeMatch_h
#define __AtcrbsModeSIdAltitudeMatch_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CAtcrbsModeSIdAltitudeMatch:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1c;
    CAtcrbsModeSIdAltitudeMatch(void)
    {
        setCmdID(mCmdID);
    }
    CAtcrbsModeSIdAltitudeMatch(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setModeAId(unsigned int value)
    {
        write("ModeAId",value);
    }

    unsigned int getModeAId(void)

    {
        return getUInt("ModeAId");
    }

    bool isModeAIdValid(void)
    {
        return isValid("ModeAId");

    }

    void setModeSUf5Df5Id(unsigned int value)
    {
        write("ModeSUf5Df5Id",value);
    }

    unsigned int getModeSUf5Df5Id(void)

    {
        return getUInt("ModeSUf5Df5Id");
    }

    bool isModeSUf5Df5IdValid(void)
    {
        return isValid("ModeSUf5Df5Id");

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

    void setModeSUf5Df5Altitude(unsigned int value)
    {
        write("ModeSUf5Df5Altitude",value);
    }

    unsigned int getModeSUf5Df5Altitude(void)

    {
        return getUInt("ModeSUf5Df5Altitude");
    }

    bool isModeSUf5Df5AltitudeValid(void)
    {
        return isValid("ModeSUf5Df5Altitude");

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