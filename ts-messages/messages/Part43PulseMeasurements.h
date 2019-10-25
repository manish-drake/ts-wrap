#ifndef __Part43PulseMeasurements_h
#define __Part43PulseMeasurements_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43PulseMeasurements:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xb;
    CPart43PulseMeasurements(void)
    {
        setCmdID(mCmdID);
    }
    CPart43PulseMeasurements(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setTestNum(unsigned int value)
    {
        write("TestNum",value);
    }

    unsigned int getTestNum(void)

    {
        return getUInt("TestNum");
    }

    bool isTestNumValid(void)
    {
        return isValid("TestNum");

    }

    void setPulseWidth(std::vector<float>& value)
    {
        write("PulseWidth",value);
    }

    std::vector<float> getPulseWidth(std::vector<float> arr)

    {
        return getArray("PulseWidth",arr);
    }

    bool isPulseWidthValid(void)
    {
        return isValid("PulseWidth");

    }

    void setPulseWidthPass(std::vector<bool>& value)
    {
        write("PulseWidthPass",value);
    }

    std::vector<bool> getPulseWidthPass(std::vector<bool> arr)

    {
        return getArray("PulseWidthPass",arr);
    }

    bool isPulseWidthPassValid(void)
    {
        return isValid("PulseWidthPass");

    }

    void setPulseSpacing(std::vector<float>& value)
    {
        write("PulseSpacing",value);
    }

    std::vector<float> getPulseSpacing(std::vector<float> arr)

    {
        return getArray("PulseSpacing",arr);
    }

    bool isPulseSpacingValid(void)
    {
        return isValid("PulseSpacing");

    }

    void setPulseSpacingPass(std::vector<bool>& value)
    {
        write("PulseSpacingPass",value);
    }

    std::vector<bool> getPulseSpacingPass(std::vector<bool> arr)

    {
        return getArray("PulseSpacingPass",arr);
    }

    bool isPulseSpacingPassValid(void)
    {
        return isValid("PulseSpacingPass");

    }

    void setPulseDroop(std::vector<float>& value)
    {
        write("PulseDroop",value);
    }

    std::vector<float> getPulseDroop(std::vector<float> arr)

    {
        return getArray("PulseDroop",arr);
    }

    bool isPulseDroopValid(void)
    {
        return isValid("PulseDroop");

    }

    void setPulseDroopPass(std::vector<bool>& value)
    {
        write("PulseDroopPass",value);
    }

    std::vector<bool> getPulseDroopPass(std::vector<bool> arr)

    {
        return getArray("PulseDroopPass",arr);
    }

    bool isPulseDroopPassValid(void)
    {
        return isValid("PulseDroopPass");

    }

    void setPulseJitter(std::vector<float>& value)
    {
        write("PulseJitter",value);
    }

    std::vector<float> getPulseJitter(std::vector<float> arr)

    {
        return getArray("PulseJitter",arr);
    }

    bool isPulseJitterValid(void)
    {
        return isValid("PulseJitter");

    }

    void setPulseJitterPass(std::vector<bool>& value)
    {
        write("PulseJitterPass",value);
    }

    std::vector<bool> getPulseJitterPass(std::vector<bool> arr)

    {
        return getArray("PulseJitterPass",arr);
    }

    bool isPulseJitterPassValid(void)
    {
        return isValid("PulseJitterPass");

    }

    void setPulseResult(std::vector<bool>& value)
    {
        write("PulseResult",value);
    }

    std::vector<bool> getPulseResult(std::vector<bool> arr)

    {
        return getArray("PulseResult",arr);
    }

    bool isPulseResultValid(void)
    {
        return isValid("PulseResult");

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