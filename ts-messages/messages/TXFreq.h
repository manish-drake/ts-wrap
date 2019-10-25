#ifndef __TXFreq_h
#define __TXFreq_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CTXFreq:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x4;
    CTXFreq(void)
    {
        setCmdID(mCmdID);
    }
    CTXFreq(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setFreq(float value)
    {
        write("Freq",value);
    }

    float getFreq(void)

    {
        return getFloat("Freq");
    }

    bool isFreqValid(void)
    {
        return isValid("Freq");

    }

    void setMod(unsigned int value)
    {
        write("Mod",value);
    }

    unsigned int getMod(void)

    {
        return getUInt("Mod");
    }

    bool isModValid(void)
    {
        return isValid("Mod");

    }

    void setA(unsigned int value)
    {
        write("A",value);
    }

    unsigned int getA(void)

    {
        return getUInt("A");
    }

    bool isAValid(void)
    {
        return isValid("A");

    }

    void setB(unsigned int value)
    {
        write("B",value);
    }

    unsigned int getB(void)

    {
        return getUInt("B");
    }

    bool isBValid(void)
    {
        return isValid("B");

    }

    void setDisableRetry(bool value)
    {
        write("DisableRetry",value);
    }

    bool getDisableRetry(void)

    {
        return getBool("DisableRetry");
    }

    bool isDisableRetryValid(void)
    {
        return isValid("DisableRetry");

    }

    void setSync(bool value)
    {
        write("Sync",value);
    }

    bool getSync(void)

    {
        return getBool("Sync");
    }

    bool isSyncValid(void)
    {
        return isValid("Sync");

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