#ifndef __ReplyTXRefTuningOLD_h
#define __ReplyTXRefTuningOLD_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyTXRefTuningOLD:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1003;
    CReplyTXRefTuningOLD(void)
    {
        setCmdID(mCmdID);
    }
    CReplyTXRefTuningOLD(Json::Value obj):TServerMessage(obj)
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

    void setLimitErr05(float value)
    {
        write("LimitErr05",value);
    }

    float getLimitErr05(void)

    {
        return getFloat("LimitErr05");
    }

    bool isLimitErr05Valid(void)
    {
        return isValid("LimitErr05");

    }

    void setLimitErr01(float value)
    {
        write("LimitErr01",value);
    }

    float getLimitErr01(void)

    {
        return getFloat("LimitErr01");
    }

    bool isLimitErr01Valid(void)
    {
        return isValid("LimitErr01");

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