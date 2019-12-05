#ifndef __ReplyAssemblyRevTest_h
#define __ReplyAssemblyRevTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyAssemblyRevTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1005;
    CReplyAssemblyRevTest(void)
    {
        setCmdID(mCmdID);
    }
    CReplyAssemblyRevTest(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setChannel(unsigned int value)
    {
        write("Channel",value);
    }

    unsigned int getChannel(void)

    {
        return getUInt("Channel");
    }

    bool isChannelValid(void)
    {
        return isValid("Channel");

    }

    void setADC(unsigned int value)
    {
        write("ADC",value);
    }

    unsigned int getADC(void)

    {
        return getUInt("ADC");
    }

    bool isADCValid(void)
    {
        return isValid("ADC");

    }

    void setAssmRev(int value)
    {
        write("AssmRev",value);
    }

    int getAssmRev(void)

    {
        return getInt("AssmRev");
    }

    bool isAssmRevValid(void)
    {
        return isValid("AssmRev");

    }

    void setTestResult(int value)
    {
        write("TestResult",value);
    }

    int getTestResult(void)

    {
        return getInt("TestResult");
    }

    bool isTestResultValid(void)
    {
        return isValid("TestResult");

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