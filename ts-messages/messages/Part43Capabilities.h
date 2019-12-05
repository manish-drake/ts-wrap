#ifndef __Part43Capabilities_h
#define __Part43Capabilities_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43Capabilities:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xf;
    CPart43Capabilities(void)
    {
        setCmdID(mCmdID);
    }
    CPart43Capabilities(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setTestNum(unsigned int value)
    {
        write("TestNum",value);
    }

    unsigned int getTestNum(void)

    {
        return getUInt("TestNum");
    }

    bool isTestNumValid(void)
    {
        return isValid("TestNum");

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

    void setCA(unsigned int value)
    {
        write("CA",value);
    }

    unsigned int getCA(void)

    {
        return getUInt("CA");
    }

    bool isCAValid(void)
    {
        return isValid("CA");

    }

    void setUELM(unsigned int value)
    {
        write("UELM",value);
    }

    unsigned int getUELM(void)

    {
        return getUInt("UELM");
    }

    bool isUELMValid(void)
    {
        return isValid("UELM");

    }

    void setDELM(unsigned int value)
    {
        write("DELM",value);
    }

    unsigned int getDELM(void)

    {
        return getUInt("DELM");
    }

    bool isDELMValid(void)
    {
        return isValid("DELM");

    }

    void setTL(unsigned int value)
    {
        write("TL",value);
    }

    unsigned int getTL(void)

    {
        return getUInt("TL");
    }

    bool isTLValid(void)
    {
        return isValid("TL");

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