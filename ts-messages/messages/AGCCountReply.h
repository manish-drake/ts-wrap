#ifndef __AGCCountReply_h
#define __AGCCountReply_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CAGCCountReply:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x10005;
    CAGCCountReply(void)
    {
        setCmdID(mCmdID);
    }
    CAGCCountReply(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setCount(unsigned int value)
    {
        write("Count",value);
    }

    unsigned int getCount(void)

    {
        return getUInt("Count");
    }

    bool isCountValid(void)
    {
        return isValid("Count");

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