#ifndef __LogModule_h
#define __LogModule_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CLogModule:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x6;
    CLogModule(void)
    {
        setCmdID(mCmdID);
    }
    CLogModule(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setSetBits(unsigned int value)
    {
        write("SetBits",value);
    }

    unsigned int getSetBits(void)

    {
        return getUInt("SetBits");
    }

    bool isSetBitsValid(void)
    {
        return isValid("SetBits");

    }

    void setClearBits(unsigned int value)
    {
        write("ClearBits",value);
    }

    unsigned int getClearBits(void)

    {
        return getUInt("ClearBits");
    }

    bool isClearBitsValid(void)
    {
        return isValid("ClearBits");

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