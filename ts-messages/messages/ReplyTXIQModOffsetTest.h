#ifndef __ReplyTXIQModOffsetTest_h
#define __ReplyTXIQModOffsetTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyTXIQModOffsetTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x100a;
    CReplyTXIQModOffsetTest(void)
    {
        setCmdID(mCmdID);
    }
    CReplyTXIQModOffsetTest(Json::Value obj):TServerMessage(obj)
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

    void setLimitTxOFSMin(int value)
    {
        write("LimitTxOFSMin",value);
    }

    int getLimitTxOFSMin(void)

    {
        return getInt("LimitTxOFSMin");
    }

    bool isLimitTxOFSMinValid(void)
    {
        return isValid("LimitTxOFSMin");

    }

    void setLimitTxOFSMax(int value)
    {
        write("LimitTxOFSMax",value);
    }

    int getLimitTxOFSMax(void)

    {
        return getInt("LimitTxOFSMax");
    }

    bool isLimitTxOFSMaxValid(void)
    {
        return isValid("LimitTxOFSMax");

    }

    void setLimitTxCRSMin(int value)
    {
        write("LimitTxCRSMin",value);
    }

    int getLimitTxCRSMin(void)

    {
        return getInt("LimitTxCRSMin");
    }

    bool isLimitTxCRSMinValid(void)
    {
        return isValid("LimitTxCRSMin");

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

    void setCRSResult(std::vector<double>& value)
    {
        write("CRSResult",value);
    }

    std::vector<double> getCRSResult(std::vector<double> arr)

    {
        return getArray("CRSResult",arr);
    }

    bool isCRSResultValid(void)
    {
        return isValid("CRSResult");

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