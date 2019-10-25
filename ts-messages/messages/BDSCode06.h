#ifndef __BDSCode06_h
#define __BDSCode06_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode06:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x2;
    CBDSCode06(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode06(Json::Value obj):TServerMessage(obj)
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

    void setMovement(unsigned int value)
    {
        write("Movement",value);
    }

    unsigned int getMovement(void)

    {
        return getUInt("Movement");
    }

    bool isMovementValid(void)
    {
        return isValid("Movement");

    }

    void setMovementKnts(float value)
    {
        write("MovementKnts",value);
    }

    float getMovementKnts(void)

    {
        return getFloat("MovementKnts");
    }

    bool isMovementKntsValid(void)
    {
        return isValid("MovementKnts");

    }

    void setGroundTrackStatus(unsigned int value)
    {
        write("GroundTrackStatus",value);
    }

    unsigned int getGroundTrackStatus(void)

    {
        return getUInt("GroundTrackStatus");
    }

    bool isGroundTrackStatusValid(void)
    {
        return isValid("GroundTrackStatus");

    }

    void setGroundTrack(unsigned int value)
    {
        write("GroundTrack",value);
    }

    unsigned int getGroundTrack(void)

    {
        return getUInt("GroundTrack");
    }

    bool isGroundTrackValid(void)
    {
        return isValid("GroundTrack");

    }

    void setUTCTimeSync(unsigned int value)
    {
        write("UTCTimeSync",value);
    }

    unsigned int getUTCTimeSync(void)

    {
        return getUInt("UTCTimeSync");
    }

    bool isUTCTimeSyncValid(void)
    {
        return isValid("UTCTimeSync");

    }

    void setCPRFormat(bool value)
    {
        write("CPRFormat",value);
    }

    bool getCPRFormat(void)

    {
        return getBool("CPRFormat");
    }

    bool isCPRFormatValid(void)
    {
        return isValid("CPRFormat");

    }

    void setEncodedLatitude(float value)
    {
        write("EncodedLatitude",value);
    }

    float getEncodedLatitude(void)

    {
        return getFloat("EncodedLatitude");
    }

    bool isEncodedLatitudeValid(void)
    {
        return isValid("EncodedLatitude");

    }

    void setEncodedLongitude(float value)
    {
        write("EncodedLongitude",value);
    }

    float getEncodedLongitude(void)

    {
        return getFloat("EncodedLongitude");
    }

    bool isEncodedLongitudeValid(void)
    {
        return isValid("EncodedLongitude");

    }

    void setradContainment(unsigned int value)
    {
        write("radContainment",value);
    }

    unsigned int getradContainment(void)

    {
        return getUInt("radContainment");
    }

    bool isradContainmentValid(void)
    {
        return isValid("radContainment");

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