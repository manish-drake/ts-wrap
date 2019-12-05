#ifndef __ReplyRFADC_h
#define __ReplyRFADC_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyRFADC:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1003;
    CReplyRFADC(void)
    {
        setCmdID(mCmdID);
    }
    CReplyRFADC(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setRaw(unsigned int value)
    {
        write("Raw",value);
    }

    unsigned int getRaw(void)

    {
        return getUInt("Raw");
    }

    bool isRawValid(void)
    {
        return isValid("Raw");

    }

    void setVoltage(unsigned int value)
    {
        write("Voltage",value);
    }

    unsigned int getVoltage(void)

    {
        return getUInt("Voltage");
    }

    bool isVoltageValid(void)
    {
        return isValid("Voltage");

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