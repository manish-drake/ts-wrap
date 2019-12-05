#ifndef __ReplyTXCoarseAttenTest_h
#define __ReplyTXCoarseAttenTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyTXCoarseAttenTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x100e;
    CReplyTXCoarseAttenTest(void)
    {
        setCmdID(mCmdID);
    }
    CReplyTXCoarseAttenTest(Json::Value obj):TServerMessage(obj)
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

    void setTxCoarseVal(std::vector<double>& value)
    {
        write("TxCoarseVal",value);
    }

    std::vector<double> getTxCoarseVal(std::vector<double> arr)

    {
        return getArray("TxCoarseVal",arr);
    }

    bool isTxCoarseValValid(void)
    {
        return isValid("TxCoarseVal");

    }

    void setMinTxCoarseVal(std::vector<double>& value)
    {
        write("MinTxCoarseVal",value);
    }

    std::vector<double> getMinTxCoarseVal(std::vector<double> arr)

    {
        return getArray("MinTxCoarseVal",arr);
    }

    bool isMinTxCoarseValValid(void)
    {
        return isValid("MinTxCoarseVal");

    }

    void setMaxTxCoarseVal(std::vector<double>& value)
    {
        write("MaxTxCoarseVal",value);
    }

    std::vector<double> getMaxTxCoarseVal(std::vector<double> arr)

    {
        return getArray("MaxTxCoarseVal",arr);
    }

    bool isMaxTxCoarseValValid(void)
    {
        return isValid("MaxTxCoarseVal");

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