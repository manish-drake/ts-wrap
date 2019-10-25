#ifndef __ReplyRXIQDemOffsetTest_h
#define __ReplyRXIQDemOffsetTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyRXIQDemOffsetTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1002;
    CReplyRXIQDemOffsetTest(void)
    {
        setCmdID(mCmdID);
    }
    CReplyRXIQDemOffsetTest(Json::Value obj):TServerMessage(obj)
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

    void setFrequency(std::vector<float>& value)
    {
        write("Frequency",value);
    }

    std::vector<float> getFrequency(std::vector<float> arr)

    {
        return getArray("Frequency",arr);
    }

    bool isFrequencyValid(void)
    {
        return isValid("Frequency");

    }

    void setFreqResult(std::vector<unsigned int>& value)
    {
        write("FreqResult",value);
    }

    std::vector<unsigned int> getFreqResult(std::vector<unsigned int> arr)

    {
        return getArray("FreqResult",arr);
    }

    bool isFreqResultValid(void)
    {
        return isValid("FreqResult");

    }

    void setLimitMin(int value)
    {
        write("LimitMin",value);
    }

    int getLimitMin(void)

    {
        return getInt("LimitMin");
    }

    bool isLimitMinValid(void)
    {
        return isValid("LimitMin");

    }

    void setLimitMax(int value)
    {
        write("LimitMax",value);
    }

    int getLimitMax(void)

    {
        return getInt("LimitMax");
    }

    bool isLimitMaxValid(void)
    {
        return isValid("LimitMax");

    }

    void setIResult(std::vector<int>& value)
    {
        write("IResult",value);
    }

    std::vector<int> getIResult(std::vector<int> arr)

    {
        return getArray("IResult",arr);
    }

    bool isIResultValid(void)
    {
        return isValid("IResult");

    }

    void setQResult(std::vector<int>& value)
    {
        write("QResult",value);
    }

    std::vector<int> getQResult(std::vector<int> arr)

    {
        return getArray("QResult",arr);
    }

    bool isQResultValid(void)
    {
        return isValid("QResult");

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