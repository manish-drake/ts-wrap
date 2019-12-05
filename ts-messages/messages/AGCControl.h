#ifndef __AGCControl_h
#define __AGCControl_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CAGCControl:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1f;
    CAGCControl(void)
    {
        setCmdID(mCmdID);
    }
    CAGCControl(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setMode(unsigned int value)
    {
        write("Mode",value);
    }

    unsigned int getMode(void)

    {
        return getUInt("Mode");
    }

    bool isModeValid(void)
    {
        return isValid("Mode");

    }

    void setSamples(unsigned int value)
    {
        write("Samples",value);
    }

    unsigned int getSamples(void)

    {
        return getUInt("Samples");
    }

    bool isSamplesValid(void)
    {
        return isValid("Samples");

    }

    void setDelay(unsigned int value)
    {
        write("Delay",value);
    }

    unsigned int getDelay(void)

    {
        return getUInt("Delay");
    }

    bool isDelayValid(void)
    {
        return isValid("Delay");

    }

    void setThreshold(unsigned int value)
    {
        write("Threshold",value);
    }

    unsigned int getThreshold(void)

    {
        return getUInt("Threshold");
    }

    bool isThresholdValid(void)
    {
        return isValid("Threshold");

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