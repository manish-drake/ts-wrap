#ifndef __IdentifyTransponderReply_h
#define __IdentifyTransponderReply_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CIdentifyTransponderReply:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x3;
    CIdentifyTransponderReply(void)
    {
        setCmdID(mCmdID);
    }
    CIdentifyTransponderReply(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setAddresses(unsigned int value)
    {
        write("Addresses",value);
    }

    unsigned int getAddresses(void)

    {
        return getUInt("Addresses");
    }

    bool isAddressesValid(void)
    {
        return isValid("Addresses");

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

    void setLevel(unsigned int value)
    {
        write("Level",value);
    }

    unsigned int getLevel(void)

    {
        return getUInt("Level");
    }

    bool isLevelValid(void)
    {
        return isValid("Level");

    }

    void setType(unsigned int value)
    {
        write("Type",value);
    }

    unsigned int getType(void)

    {
        return getUInt("Type");
    }

    bool isTypeValid(void)
    {
        return isValid("Type");

    }

    void setClass(unsigned int value)
    {
        write("Class",value);
    }

    unsigned int getClass(void)

    {
        return getUInt("Class");
    }

    bool isClassValid(void)
    {
        return isValid("Class");

    }

    void setPower(float value)
    {
        write("Power",value);
    }

    float getPower(void)

    {
        return getFloat("Power");
    }

    bool isPowerValid(void)
    {
        return isValid("Power");

    }

    void setSingleAntenna(bool value)
    {
        write("SingleAntenna",value);
    }

    bool getSingleAntenna(void)

    {
        return getBool("SingleAntenna");
    }

    bool isSingleAntennaValid(void)
    {
        return isValid("SingleAntenna");

    }

    void setAirGroundState(unsigned int value)
    {
        write("AirGroundState",value);
    }

    unsigned int getAirGroundState(void)

    {
        return getUInt("AirGroundState");
    }

    bool isAirGroundStateValid(void)
    {
        return isValid("AirGroundState");

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