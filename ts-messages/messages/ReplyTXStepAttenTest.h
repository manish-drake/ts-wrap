#ifndef __ReplyTXStepAttenTest_h
#define __ReplyTXStepAttenTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyTXStepAttenTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x100d;
    CReplyTXStepAttenTest(void)
    {
        setCmdID(mCmdID);
    }
    CReplyTXStepAttenTest(Json::Value obj):TServerMessage(obj)
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

    void setTxStepVal(std::vector<double>& value)
    {
        write("TxStepVal",value);
    }

    std::vector<double> getTxStepVal(std::vector<double> arr)

    {
        return getArray("TxStepVal",arr);
    }

    bool isTxStepValValid(void)
    {
        return isValid("TxStepVal");

    }

    void setMinTxStepVal(std::vector<double>& value)
    {
        write("MinTxStepVal",value);
    }

    std::vector<double> getMinTxStepVal(std::vector<double> arr)

    {
        return getArray("MinTxStepVal",arr);
    }

    bool isMinTxStepValValid(void)
    {
        return isValid("MinTxStepVal");

    }

    void setMaxTxStepVal(std::vector<double>& value)
    {
        write("MaxTxStepVal",value);
    }

    std::vector<double> getMaxTxStepVal(std::vector<double> arr)

    {
        return getArray("MaxTxStepVal",arr);
    }

    bool isMaxTxStepValValid(void)
    {
        return isValid("MaxTxStepVal");

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