#ifndef __ReplyCalDetTest_h
#define __ReplyCalDetTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyCalDetTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1006;
    CReplyCalDetTest(void)
    {
        setCmdID(mCmdID);
    }
    CReplyCalDetTest(Json::Value obj):TServerMessage(obj)
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

    void setTxPowerMin(int value)
    {
        write("TxPowerMin",value);
    }

    int getTxPowerMin(void)

    {
        return getInt("TxPowerMin");
    }

    bool isTxPowerMinValid(void)
    {
        return isValid("TxPowerMin");

    }

    void setTxPowerMax(int value)
    {
        write("TxPowerMax",value);
    }

    int getTxPowerMax(void)

    {
        return getInt("TxPowerMax");
    }

    bool isTxPowerMaxValid(void)
    {
        return isValid("TxPowerMax");

    }

    void setTXPwr(std::vector<float>& value)
    {
        write("TXPwr",value);
    }

    std::vector<float> getTXPwr(std::vector<float> arr)

    {
        return getArray("TXPwr",arr);
    }

    bool isTXPwrValid(void)
    {
        return isValid("TXPwr");

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