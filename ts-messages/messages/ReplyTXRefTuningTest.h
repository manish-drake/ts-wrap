#ifndef __ReplyTXRefTuningTest_h
#define __ReplyTXRefTuningTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyTXRefTuningTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x100c;
    CReplyTXRefTuningTest(void)
    {
        setCmdID(mCmdID);
    }
    CReplyTXRefTuningTest(Json::Value obj):TServerMessage(obj)
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

    void setRefAttn(std::vector<float>& value)
    {
        write("RefAttn",value);
    }

    std::vector<float> getRefAttn(std::vector<float> arr)

    {
        return getArray("RefAttn",arr);
    }

    bool isRefAttnValid(void)
    {
        return isValid("RefAttn");

    }

    void setRefAmpl(std::vector<int>& value)
    {
        write("RefAmpl",value);
    }

    std::vector<int> getRefAmpl(std::vector<int> arr)

    {
        return getArray("RefAmpl",arr);
    }

    bool isRefAmplValid(void)
    {
        return isValid("RefAmpl");

    }

    void setCalDetTemp(std::vector<double>& value)
    {
        write("CalDetTemp",value);
    }

    std::vector<double> getCalDetTemp(std::vector<double> arr)

    {
        return getArray("CalDetTemp",arr);
    }

    bool isCalDetTempValid(void)
    {
        return isValid("CalDetTemp");

    }

    void setMinRefAmpl(int value)
    {
        write("MinRefAmpl",value);
    }

    int getMinRefAmpl(void)

    {
        return getInt("MinRefAmpl");
    }

    bool isMinRefAmplValid(void)
    {
        return isValid("MinRefAmpl");

    }

    void setMaxRefAmpl(int value)
    {
        write("MaxRefAmpl",value);
    }

    int getMaxRefAmpl(void)

    {
        return getInt("MaxRefAmpl");
    }

    bool isMaxRefAmplValid(void)
    {
        return isValid("MaxRefAmpl");

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