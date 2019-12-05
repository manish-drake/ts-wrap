#ifndef __BDSCode52_h
#define __BDSCode52_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode52:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x21;
    CBDSCode52(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode52(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setStatus(bool value)
    {
        write("Status",value);
    }

    bool getStatus(void)

    {
        return getBool("Status");
    }

    bool isStatusValid(void)
    {
        return isValid("Status");

    }

    void setFOMSource(unsigned int value)
    {
        write("FOMSource",value);
    }

    unsigned int getFOMSource(void)

    {
        return getUInt("FOMSource");
    }

    bool isFOMSourceValid(void)
    {
        return isValid("FOMSource");

    }

    void setLatitudeFine(double value)
    {
        write("LatitudeFine",value);
    }

    double getLatitudeFine(void)

    {
        return getDouble("LatitudeFine");
    }

    bool isLatitudeFineValid(void)
    {
        return isValid("LatitudeFine");

    }

    void setLongitudeFine(double value)
    {
        write("LongitudeFine",value);
    }

    double getLongitudeFine(void)

    {
        return getDouble("LongitudeFine");
    }

    bool isLongitudeFineValid(void)
    {
        return isValid("LongitudeFine");

    }

    void setPressureAltitudeSign(bool value)
    {
        write("PressureAltitudeSign",value);
    }

    bool getPressureAltitudeSign(void)

    {
        return getBool("PressureAltitudeSign");
    }

    bool isPressureAltitudeSignValid(void)
    {
        return isValid("PressureAltitudeSign");

    }

    void setPressureAltitude(int value)
    {
        write("PressureAltitude",value);
    }

    int getPressureAltitude(void)

    {
        return getInt("PressureAltitude");
    }

    bool isPressureAltitudeValid(void)
    {
        return isValid("PressureAltitude");

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