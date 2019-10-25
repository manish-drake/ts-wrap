#ifndef __ReplyTempSensorTest_h
#define __ReplyTempSensorTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyTempSensorTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1004;
    CReplyTempSensorTest(void)
    {
        setCmdID(mCmdID);
    }
    CReplyTempSensorTest(Json::Value obj):TServerMessage(obj)
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

    void setDetVolt(std::vector<unsigned int>& value)
    {
        write("DetVolt",value);
    }

    std::vector<unsigned int> getDetVolt(std::vector<unsigned int> arr)

    {
        return getArray("DetVolt",arr);
    }

    bool isDetVoltValid(void)
    {
        return isValid("DetVolt");

    }

    void setAvgDetVolt(unsigned int value)
    {
        write("AvgDetVolt",value);
    }

    unsigned int getAvgDetVolt(void)

    {
        return getUInt("AvgDetVolt");
    }

    bool isAvgDetVoltValid(void)
    {
        return isValid("AvgDetVolt");

    }

    void setDetTemp(float value)
    {
        write("DetTemp",value);
    }

    float getDetTemp(void)

    {
        return getFloat("DetTemp");
    }

    bool isDetTempValid(void)
    {
        return isValid("DetTemp");

    }

    void setModVolt(std::vector<unsigned int>& value)
    {
        write("ModVolt",value);
    }

    std::vector<unsigned int> getModVolt(std::vector<unsigned int> arr)

    {
        return getArray("ModVolt",arr);
    }

    bool isModVoltValid(void)
    {
        return isValid("ModVolt");

    }

    void setAvgModVolt(unsigned int value)
    {
        write("AvgModVolt",value);
    }

    unsigned int getAvgModVolt(void)

    {
        return getUInt("AvgModVolt");
    }

    bool isAvgModVoltValid(void)
    {
        return isValid("AvgModVolt");

    }

    void setModTemp(float value)
    {
        write("ModTemp",value);
    }

    float getModTemp(void)

    {
        return getFloat("ModTemp");
    }

    bool isModTempValid(void)
    {
        return isValid("ModTemp");

    }

    void setLimitTempMin(float value)
    {
        write("LimitTempMin",value);
    }

    float getLimitTempMin(void)

    {
        return getFloat("LimitTempMin");
    }

    bool isLimitTempMinValid(void)
    {
        return isValid("LimitTempMin");

    }

    void setLimitTempMax(float value)
    {
        write("LimitTempMax",value);
    }

    float getLimitTempMax(void)

    {
        return getFloat("LimitTempMax");
    }

    bool isLimitTempMaxValid(void)
    {
        return isValid("LimitTempMax");

    }

    void setLimitTempDiff(float value)
    {
        write("LimitTempDiff",value);
    }

    float getLimitTempDiff(void)

    {
        return getFloat("LimitTempDiff");
    }

    bool isLimitTempDiffValid(void)
    {
        return isValid("LimitTempDiff");

    }

    void setFrequency(float value)
    {
        write("Frequency",value);
    }

    float getFrequency(void)

    {
        return getFloat("Frequency");
    }

    bool isFrequencyValid(void)
    {
        return isValid("Frequency");

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