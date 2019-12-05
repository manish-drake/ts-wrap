#ifndef __ReplyRXAttenTest_h
#define __ReplyRXAttenTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyRXAttenTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x100f;
    CReplyRXAttenTest(void)
    {
        setCmdID(mCmdID);
    }
    CReplyRXAttenTest(Json::Value obj):TServerMessage(obj)
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

    void setRXAttnVal(std::vector<double>& value)
    {
        write("RXAttnVal",value);
    }

    std::vector<double> getRXAttnVal(std::vector<double> arr)

    {
        return getArray("RXAttnVal",arr);
    }

    bool isRXAttnValValid(void)
    {
        return isValid("RXAttnVal");

    }

    void setMinRxAttnVal(std::vector<double>& value)
    {
        write("MinRxAttnVal",value);
    }

    std::vector<double> getMinRxAttnVal(std::vector<double> arr)

    {
        return getArray("MinRxAttnVal",arr);
    }

    bool isMinRxAttnValValid(void)
    {
        return isValid("MinRxAttnVal");

    }

    void setMaxRxAttnVal(std::vector<double>& value)
    {
        write("MaxRxAttnVal",value);
    }

    std::vector<double> getMaxRxAttnVal(std::vector<double> arr)

    {
        return getArray("MaxRxAttnVal",arr);
    }

    bool isMaxRxAttnValValid(void)
    {
        return isValid("MaxRxAttnVal");

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