#ifndef __SetRXListenInterval_h
#define __SetRXListenInterval_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CSetRXListenInterval:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xc;
    CSetRXListenInterval(void)
    {
        setCmdID(mCmdID);
    }
    CSetRXListenInterval(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setEnabled(bool value)
    {
        write("Enabled",value);
    }

    bool getEnabled(void)

    {
        return getBool("Enabled");
    }

    bool isEnabledValid(void)
    {
        return isValid("Enabled");

    }

    void setStartuS(unsigned int value)
    {
        write("StartuS",value);
    }

    unsigned int getStartuS(void)

    {
        return getUInt("StartuS");
    }

    bool isStartuSValid(void)
    {
        return isValid("StartuS");

    }

    void setStopuS(unsigned int value)
    {
        write("StopuS",value);
    }

    unsigned int getStopuS(void)

    {
        return getUInt("StopuS");
    }

    bool isStopuSValid(void)
    {
        return isValid("StopuS");

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