#ifndef __ReplySystemInfo_h
#define __ReplySystemInfo_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplySystemInfo:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1000;
    CReplySystemInfo(void)
    {
        setCmdID(mCmdID);
    }
    CReplySystemInfo(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setVersion(std::string value)
    {
        write("Version",value);
    }

    std::string getVersion(void)

    {
        return getString("Version");
    }

    bool isVersionValid(void)
    {
        return isValid("Version");

    }

    void setLogLevel(unsigned int value)
    {
        write("LogLevel",value);
    }

    unsigned int getLogLevel(void)

    {
        return getUInt("LogLevel");
    }

    bool isLogLevelValid(void)
    {
        return isValid("LogLevel");

    }

    void setLogModuleBits(unsigned int value)
    {
        write("LogModuleBits",value);
    }

    unsigned int getLogModuleBits(void)

    {
        return getUInt("LogModuleBits");
    }

    bool isLogModuleBitsValid(void)
    {
        return isValid("LogModuleBits");

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