#ifndef __ReplyTXIQGainBalTest_h
#define __ReplyTXIQGainBalTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyTXIQGainBalTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x100b;
    CReplyTXIQGainBalTest(void)
    {
        setCmdID(mCmdID);
    }
    CReplyTXIQGainBalTest(Json::Value obj):TServerMessage(obj)
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

    void setLimitTxBALmin(float value)
    {
        write("LimitTxBALmin",value);
    }

    float getLimitTxBALmin(void)

    {
        return getFloat("LimitTxBALmin");
    }

    bool isLimitTxBALminValid(void)
    {
        return isValid("LimitTxBALmin");

    }

    void setLimitTxBALmax(float value)
    {
        write("LimitTxBALmax",value);
    }

    float getLimitTxBALmax(void)

    {
        return getFloat("LimitTxBALmax");
    }

    bool isLimitTxBALmaxValid(void)
    {
        return isValid("LimitTxBALmax");

    }

    void setIBal(std::vector<double>& value)
    {
        write("IBal",value);
    }

    std::vector<double> getIBal(std::vector<double> arr)

    {
        return getArray("IBal",arr);
    }

    bool isIBalValid(void)
    {
        return isValid("IBal");

    }

    void setQBal(std::vector<double>& value)
    {
        write("QBal",value);
    }

    std::vector<double> getQBal(std::vector<double> arr)

    {
        return getArray("QBal",arr);
    }

    bool isQBalValid(void)
    {
        return isValid("QBal");

    }

    void setDeltaPWR(std::vector<float>& value)
    {
        write("DeltaPWR",value);
    }

    std::vector<float> getDeltaPWR(std::vector<float> arr)

    {
        return getArray("DeltaPWR",arr);
    }

    bool isDeltaPWRValid(void)
    {
        return isValid("DeltaPWR");

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