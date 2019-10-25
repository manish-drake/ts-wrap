#ifndef __ReplyTXBWTest_h
#define __ReplyTXBWTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyTXBWTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1012;
    CReplyTXBWTest(void)
    {
        setCmdID(mCmdID);
    }
    CReplyTXBWTest(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
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

    void setFreqOfsVals(std::vector<int>& value)
    {
        write("FreqOfsVals",value);
    }

    std::vector<int> getFreqOfsVals(std::vector<int> arr)

    {
        return getArray("FreqOfsVals",arr);
    }

    bool isFreqOfsValsValid(void)
    {
        return isValid("FreqOfsVals");

    }

    void setLPFloss(std::vector<double>& value)
    {
        write("LPFloss",value);
    }

    std::vector<double> getLPFloss(std::vector<double> arr)

    {
        return getArray("LPFloss",arr);
    }

    bool isLPFlossValid(void)
    {
        return isValid("LPFloss");

    }

    void setMinTXBW(std::vector<double>& value)
    {
        write("MinTXBW",value);
    }

    std::vector<double> getMinTXBW(std::vector<double> arr)

    {
        return getArray("MinTXBW",arr);
    }

    bool isMinTXBWValid(void)
    {
        return isValid("MinTXBW");

    }

    void setMaxTXBW(std::vector<double>& value)
    {
        write("MaxTXBW",value);
    }

    std::vector<double> getMaxTXBW(std::vector<double> arr)

    {
        return getArray("MaxTXBW",arr);
    }

    bool isMaxTXBWValid(void)
    {
        return isValid("MaxTXBW");

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