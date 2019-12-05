#ifndef __ReplyCalDetTemp_h
#define __ReplyCalDetTemp_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyCalDetTemp:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x23;
    CReplyCalDetTemp(void)
    {
        setCmdID(mCmdID);
    }
    CReplyCalDetTemp(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setTemp(float value)
    {
        write("Temp",value);
    }

    float getTemp(void)

    {
        return getFloat("Temp");
    }

    bool isTempValid(void)
    {
        return isValid("Temp");

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