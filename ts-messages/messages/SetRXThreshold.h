#ifndef __SetRXThreshold_h
#define __SetRXThreshold_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CSetRXThreshold:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x15;
    CSetRXThreshold(void)
    {
        setCmdID(mCmdID);
    }
    CSetRXThreshold(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setThreshold(float value)
    {
        write("Threshold",value);
    }

    float getThreshold(void)

    {
        return getFloat("Threshold");
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