#ifndef __DACGainBalance_h
#define __DACGainBalance_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CDACGainBalance:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x9;
    CDACGainBalance(void)
    {
        setCmdID(mCmdID);
    }
    CDACGainBalance(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setChannel(unsigned int value)
    {
        write("Channel",value);
    }

    unsigned int getChannel(void)

    {
        return getUInt("Channel");
    }

    bool isChannelValid(void)
    {
        return isValid("Channel");

    }

    void setIGain(float value)
    {
        write("IGain",value);
    }

    float getIGain(void)

    {
        return getFloat("IGain");
    }

    bool isIGainValid(void)
    {
        return isValid("IGain");

    }

    void setQGain(float value)
    {
        write("QGain",value);
    }

    float getQGain(void)

    {
        return getFloat("QGain");
    }

    bool isQGainValid(void)
    {
        return isValid("QGain");

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