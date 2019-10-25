#ifndef __Part43CoarseMTLReply_h
#define __Part43CoarseMTLReply_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43CoarseMTLReply:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1;
    CPart43CoarseMTLReply(void)
    {
        setCmdID(mCmdID);
    }
    CPart43CoarseMTLReply(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setMTL(float value)
    {
        write("MTL",value);
    }

    float getMTL(void)

    {
        return getFloat("MTL");
    }

    bool isMTLValid(void)
    {
        return isValid("MTL");

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