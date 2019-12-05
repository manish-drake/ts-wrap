#ifndef __TXPower_h
#define __TXPower_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CTXPower:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x24;
    CTXPower(void)
    {
        setCmdID(mCmdID);
    }
    CTXPower(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
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