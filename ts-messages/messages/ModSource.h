#ifndef __ModSource_h
#define __ModSource_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CModSource:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xb;
    CModSource(void)
    {
        setCmdID(mCmdID);
    }
    CModSource(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setSource(unsigned int value)
    {
        write("Source",value);
    }

    unsigned int getSource(void)

    {
        return getUInt("Source");
    }

    bool isSourceValid(void)
    {
        return isValid("Source");

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