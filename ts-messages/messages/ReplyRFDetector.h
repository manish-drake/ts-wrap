#ifndef __ReplyRFDetector_h
#define __ReplyRFDetector_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyRFDetector:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1004;
    CReplyRFDetector(void)
    {
        setCmdID(mCmdID);
    }
    CReplyRFDetector(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
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