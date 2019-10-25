#ifndef __StartPart43Test_h
#define __StartPart43Test_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CStartPart43Test:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xe;
    CStartPart43Test(void)
    {
        setCmdID(mCmdID);
    }
    CStartPart43Test(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setAntenna(unsigned int value)
    {
        write("Antenna",value);
    }

    unsigned int getAntenna(void)

    {
        return getUInt("Antenna");
    }

    bool isAntennaValid(void)
    {
        return isValid("Antenna");

    }

    void setDistance(unsigned int value)
    {
        write("Distance",value);
    }

    unsigned int getDistance(void)

    {
        return getUInt("Distance");
    }

    bool isDistanceValid(void)
    {
        return isValid("Distance");

    }

    void setPort(unsigned int value)
    {
        write("Port",value);
    }

    unsigned int getPort(void)

    {
        return getUInt("Port");
    }

    bool isPortValid(void)
    {
        return isValid("Port");

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