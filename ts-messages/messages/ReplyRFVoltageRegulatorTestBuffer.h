#ifndef __ReplyRFVoltageRegulatorTestBuffer_h
#define __ReplyRFVoltageRegulatorTestBuffer_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyRFVoltageRegulatorTestBuffer:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1000;
    CReplyRFVoltageRegulatorTestBuffer(void)
    {
        setCmdID(mCmdID);
    }
    CReplyRFVoltageRegulatorTestBuffer(Json::Value obj):TServerMessage(obj)
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

    void setVoltage(std::vector<unsigned int>& value)
    {
        write("Voltage",value);
    }

    std::vector<unsigned int> getVoltage(std::vector<unsigned int> arr)

    {
        return getArray("Voltage",arr);
    }

    bool isVoltageValid(void)
    {
        return isValid("Voltage");

    }

    void setAverage(float value)
    {
        write("Average",value);
    }

    float getAverage(void)

    {
        return getFloat("Average");
    }

    bool isAverageValid(void)
    {
        return isValid("Average");

    }

    void setLimitMin(int value)
    {
        write("LimitMin",value);
    }

    int getLimitMin(void)

    {
        return getInt("LimitMin");
    }

    bool isLimitMinValid(void)
    {
        return isValid("LimitMin");

    }

    void setLimitMax(int value)
    {
        write("LimitMax",value);
    }

    int getLimitMax(void)

    {
        return getInt("LimitMax");
    }

    bool isLimitMaxValid(void)
    {
        return isValid("LimitMax");

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