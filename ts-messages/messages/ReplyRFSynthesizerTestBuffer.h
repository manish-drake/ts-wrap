#ifndef __ReplyRFSynthesizerTestBuffer_h
#define __ReplyRFSynthesizerTestBuffer_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyRFSynthesizerTestBuffer:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1001;
    CReplyRFSynthesizerTestBuffer(void)
    {
        setCmdID(mCmdID);
    }
    CReplyRFSynthesizerTestBuffer(Json::Value obj):TServerMessage(obj)
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

    void setModulus(unsigned int value)
    {
        write("Modulus",value);
    }

    unsigned int getModulus(void)

    {
        return getUInt("Modulus");
    }

    bool isModulusValid(void)
    {
        return isValid("Modulus");

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