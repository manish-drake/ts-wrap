#ifndef __UATShort_h
#define __UATShort_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CUATShort:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x8;
    CUATShort(void)
    {
        setCmdID(mCmdID);
    }
    CUATShort(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setShort(unsigned int value)
    {
        write("Short",value);
    }

    unsigned int getShort(void)

    {
        return getUInt("Short");
    }

    bool isShortValid(void)
    {
        return isValid("Short");

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