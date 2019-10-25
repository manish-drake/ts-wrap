#ifndef __ReplyRXBWTest_h
#define __ReplyRXBWTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyRXBWTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1010;
    CReplyRXBWTest(void)
    {
        setCmdID(mCmdID);
    }
    CReplyRXBWTest(Json::Value obj):TServerMessage(obj)
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

    void setFreqOfsVals(std::vector<double>& value)
    {
        write("FreqOfsVals",value);
    }

    std::vector<double> getFreqOfsVals(std::vector<double> arr)

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

    void setMinRXBW(std::vector<double>& value)
    {
        write("MinRXBW",value);
    }

    std::vector<double> getMinRXBW(std::vector<double> arr)

    {
        return getArray("MinRXBW",arr);
    }

    bool isMinRXBWValid(void)
    {
        return isValid("MinRXBW");

    }

    void setMaxRXBW(std::vector<double>& value)
    {
        write("MaxRXBW",value);
    }

    std::vector<double> getMaxRXBW(std::vector<double> arr)

    {
        return getArray("MaxRXBW",arr);
    }

    bool isMaxRXBWValid(void)
    {
        return isValid("MaxRXBW");

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