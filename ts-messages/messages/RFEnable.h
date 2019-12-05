#ifndef __RFEnable_h
#define __RFEnable_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CRFEnable:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xa;
    CRFEnable(void)
    {
        setCmdID(mCmdID);
    }
    CRFEnable(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setEnable(bool value)
    {
        write("Enable",value);
    }

    bool getEnable(void)

    {
        return getBool("Enable");
    }

    bool isEnableValid(void)
    {
        return isValid("Enable");

    }

    void setFlags(unsigned int value)
    {
        write("Flags",value);
    }

    unsigned int getFlags(void)

    {
        return getUInt("Flags");
    }

    bool isFlagsValid(void)
    {
        return isValid("Flags");

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