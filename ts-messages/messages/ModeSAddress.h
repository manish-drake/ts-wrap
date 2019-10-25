#ifndef __ModeSAddress_h
#define __ModeSAddress_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CModeSAddress:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x21;
    CModeSAddress(void)
    {
        setCmdID(mCmdID);
    }
    CModeSAddress(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setCorrectAddress(std::string value)
    {
        write("CorrectAddress",value);
    }

    std::string getCorrectAddress(void)

    {
        return getString("CorrectAddress");
    }

    bool isCorrectAddressValid(void)
    {
        return isValid("CorrectAddress");

    }

    void setCorrectAddressReplies(float value)
    {
        write("CorrectAddressReplies",value);
    }

    float getCorrectAddressReplies(void)

    {
        return getFloat("CorrectAddressReplies");
    }

    bool isCorrectAddressRepliesValid(void)
    {
        return isValid("CorrectAddressReplies");

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