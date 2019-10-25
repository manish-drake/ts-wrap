#ifndef __ReplyRXLevelMeasurement_h
#define __ReplyRXLevelMeasurement_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyRXLevelMeasurement:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1000;
    CReplyRXLevelMeasurement(void)
    {
        setCmdID(mCmdID);
    }
    CReplyRXLevelMeasurement(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setLevel(unsigned int value)
    {
        write("Level",value);
    }

    unsigned int getLevel(void)

    {
        return getUInt("Level");
    }

    bool isLevelValid(void)
    {
        return isValid("Level");

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