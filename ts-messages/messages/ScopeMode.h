#ifndef __ScopeMode_h
#define __ScopeMode_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CScopeMode:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xf;
    CScopeMode(void)
    {
        setCmdID(mCmdID);
    }
    CScopeMode(Json::Value obj):TServerMessage(obj)
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

    void setDecimationCount(unsigned int value)
    {
        write("DecimationCount",value);
    }

    unsigned int getDecimationCount(void)

    {
        return getUInt("DecimationCount");
    }

    bool isDecimationCountValid(void)
    {
        return isValid("DecimationCount");

    }

    void setBufferSize(unsigned int value)
    {
        write("BufferSize",value);
    }

    unsigned int getBufferSize(void)

    {
        return getUInt("BufferSize");
    }

    bool isBufferSizeValid(void)
    {
        return isValid("BufferSize");

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