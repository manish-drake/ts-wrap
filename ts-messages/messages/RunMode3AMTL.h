#ifndef __RunMode3AMTL_h
#define __RunMode3AMTL_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CRunMode3AMTL:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x12;
    CRunMode3AMTL(void)
    {
        setCmdID(mCmdID);
    }
    CRunMode3AMTL(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setInterNum(unsigned int value)
    {
        write("InterNum",value);
    }

    unsigned int getInterNum(void)

    {
        return getUInt("InterNum");
    }

    bool isInterNumValid(void)
    {
        return isValid("InterNum");

    }

    void setInterRate(unsigned int value)
    {
        write("InterRate",value);
    }

    unsigned int getInterRate(void)

    {
        return getUInt("InterRate");
    }

    bool isInterRateValid(void)
    {
        return isValid("InterRate");

    }

    void setPort(unsigned int value)
    {
        write("Port",value);
    }

    unsigned int getPort(void)

    {
        return getUInt("Port");
    }

    bool isPortValid(void)
    {
        return isValid("Port");

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