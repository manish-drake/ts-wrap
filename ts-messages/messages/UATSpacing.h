#ifndef __UATSpacing_h
#define __UATSpacing_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CUATSpacing:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x7;
    CUATSpacing(void)
    {
        setCmdID(mCmdID);
    }
    CUATSpacing(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setSpacing(unsigned int value)
    {
        write("Spacing",value);
    }

    unsigned int getSpacing(void)

    {
        return getUInt("Spacing");
    }

    bool isSpacingValid(void)
    {
        return isValid("Spacing");

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