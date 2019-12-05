#ifndef __WriteSPI2_h
#define __WriteSPI2_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CWriteSPI2:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x7;
    CWriteSPI2(void)
    {
        setCmdID(mCmdID);
    }
    CWriteSPI2(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setAddress(unsigned int value)
    {
        write("Address",value);
    }

    unsigned int getAddress(void)

    {
        return getUInt("Address");
    }

    bool isAddressValid(void)
    {
        return isValid("Address");

    }

    void setValue(unsigned int value)
    {
        write("Value",value);
    }

    unsigned int getValue(void)

    {
        return getUInt("Value");
    }

    bool isValueValid(void)
    {
        return isValid("Value");

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