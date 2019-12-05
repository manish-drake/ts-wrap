#ifndef __Interrogate_h
#define __Interrogate_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CInterrogate:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1d;
    CInterrogate(void)
    {
        setCmdID(mCmdID);
    }
    CInterrogate(Json::Value obj):TServerMessage(obj)
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

    void setRate(unsigned int value)
    {
        write("Rate",value);
    }

    unsigned int getRate(void)

    {
        return getUInt("Rate");
    }

    bool isRateValid(void)
    {
        return isValid("Rate");

    }

    void setCount(unsigned int value)
    {
        write("Count",value);
    }

    unsigned int getCount(void)

    {
        return getUInt("Count");
    }

    bool isCountValid(void)
    {
        return isValid("Count");

    }

    void setCycles(unsigned int value)
    {
        write("Cycles",value);
    }

    unsigned int getCycles(void)

    {
        return getUInt("Cycles");
    }

    bool isCyclesValid(void)
    {
        return isValid("Cycles");

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