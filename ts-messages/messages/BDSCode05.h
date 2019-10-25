#ifndef __BDSCode05_h
#define __BDSCode05_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode05:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1;
    CBDSCode05(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode05(Json::Value obj):TServerMessage(obj)
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

    void setSureveillanceStatus(unsigned int value)
    {
        write("SureveillanceStatus",value);
    }

    unsigned int getSureveillanceStatus(void)

    {
        return getUInt("SureveillanceStatus");
    }

    bool isSureveillanceStatusValid(void)
    {
        return isValid("SureveillanceStatus");

    }

    void setsingleAntennaFlag(bool value)
    {
        write("singleAntennaFlag",value);
    }

    bool getsingleAntennaFlag(void)

    {
        return getBool("singleAntennaFlag");
    }

    bool issingleAntennaFlagValid(void)
    {
        return isValid("singleAntennaFlag");

    }

    void setAltitude(unsigned int value)
    {
        write("Altitude",value);
    }

    unsigned int getAltitude(void)

    {
        return getUInt("Altitude");
    }

    bool isAltitudeValid(void)
    {
        return isValid("Altitude");

    }

    void setUTCTimeSync(bool value)
    {
        write("UTCTimeSync",value);
    }

    bool getUTCTimeSync(void)

    {
        return getBool("UTCTimeSync");
    }

    bool isUTCTimeSyncValid(void)
    {
        return isValid("UTCTimeSync");

    }

    void setCPRFormat(unsigned int value)
    {
        write("CPRFormat",value);
    }

    unsigned int getCPRFormat(void)

    {
        return getUInt("CPRFormat");
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

    void setpositionOK(bool value)
    {
        write("positionOK",value);
    }

    bool getpositionOK(void)

    {
        return getBool("positionOK");
    }

    bool ispositionOKValid(void)
    {
        return isValid("positionOK");

    }

    void setaltSource(unsigned int value)
    {
        write("altSource",value);
    }

    unsigned int getaltSource(void)

    {
        return getUInt("altSource");
    }

    bool isaltSourceValid(void)
    {
        return isValid("altSource");

    }

    void setNICb(unsigned int value)
    {
        write("NICb",value);
    }

    unsigned int getNICb(void)

    {
        return getUInt("NICb");
    }

    bool isNICbValid(void)
    {
        return isValid("NICb");

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