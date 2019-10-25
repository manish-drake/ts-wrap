#ifndef __SetVerbose_h
#define __SetVerbose_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CSetVerbose:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x8;
    CSetVerbose(void)
    {
        setCmdID(mCmdID);
    }
    CSetVerbose(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setVerbose(bool value)
    {
        write("Verbose",value);
    }

    bool getVerbose(void)

    {
        return getBool("Verbose");
    }

    bool isVerboseValid(void)
    {
        return isValid("Verbose");

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