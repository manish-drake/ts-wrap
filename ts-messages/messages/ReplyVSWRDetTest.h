#ifndef __ReplyVSWRDetTest_h
#define __ReplyVSWRDetTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyVSWRDetTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1007;
    CReplyVSWRDetTest(void)
    {
        setCmdID(mCmdID);
    }
    CReplyVSWRDetTest(Json::Value obj):TServerMessage(obj)
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

    void setDetTemp(int value)
    {
        write("DetTemp",value);
    }

    int getDetTemp(void)

    {
        return getInt("DetTemp");
    }

    bool isDetTempValid(void)
    {
        return isValid("DetTemp");

    }

    void setDetFwdPwr(int value)
    {
        write("DetFwdPwr",value);
    }

    int getDetFwdPwr(void)

    {
        return getInt("DetFwdPwr");
    }

    bool isDetFwdPwrValid(void)
    {
        return isValid("DetFwdPwr");

    }

    void setTempMin(int value)
    {
        write("TempMin",value);
    }

    int getTempMin(void)

    {
        return getInt("TempMin");
    }

    bool isTempMinValid(void)
    {
        return isValid("TempMin");

    }

    void setTempMax(int value)
    {
        write("TempMax",value);
    }

    int getTempMax(void)

    {
        return getInt("TempMax");
    }

    bool isTempMaxValid(void)
    {
        return isValid("TempMax");

    }

    void setFwdPwrMin(int value)
    {
        write("FwdPwrMin",value);
    }

    int getFwdPwrMin(void)

    {
        return getInt("FwdPwrMin");
    }

    bool isFwdPwrMinValid(void)
    {
        return isValid("FwdPwrMin");

    }

    void setFwdPwrMax(int value)
    {
        write("FwdPwrMax",value);
    }

    int getFwdPwrMax(void)

    {
        return getInt("FwdPwrMax");
    }

    bool isFwdPwrMaxValid(void)
    {
        return isValid("FwdPwrMax");

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