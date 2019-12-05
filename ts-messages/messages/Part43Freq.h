#ifndef __Part43Freq_h
#define __Part43Freq_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43Freq:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x5;
    CPart43Freq(void)
    {
        setCmdID(mCmdID);
    }
    CPart43Freq(Json::Value obj):TServerMessage(obj)
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

    void setModeAFreq(float value)
    {
        write("ModeAFreq",value);
    }

    float getModeAFreq(void)

    {
        return getFloat("ModeAFreq");
    }

    bool isModeAFreqValid(void)
    {
        return isValid("ModeAFreq");

    }

    void setModeAFreqPass(bool value)
    {
        write("ModeAFreqPass",value);
    }

    bool getModeAFreqPass(void)

    {
        return getBool("ModeAFreqPass");
    }

    bool isModeAFreqPassValid(void)
    {
        return isValid("ModeAFreqPass");

    }

    void setModeCFreq(float value)
    {
        write("ModeCFreq",value);
    }

    float getModeCFreq(void)

    {
        return getFloat("ModeCFreq");
    }

    bool isModeCFreqValid(void)
    {
        return isValid("ModeCFreq");

    }

    void setModeCFreqPass(bool value)
    {
        write("ModeCFreqPass",value);
    }

    bool getModeCFreqPass(void)

    {
        return getBool("ModeCFreqPass");
    }

    bool isModeCFreqPassValid(void)
    {
        return isValid("ModeCFreqPass");

    }

    void setModeSFreq(float value)
    {
        write("ModeSFreq",value);
    }

    float getModeSFreq(void)

    {
        return getFloat("ModeSFreq");
    }

    bool isModeSFreqValid(void)
    {
        return isValid("ModeSFreq");

    }

    void setModeSFreqPass(bool value)
    {
        write("ModeSFreqPass",value);
    }

    bool getModeSFreqPass(void)

    {
        return getBool("ModeSFreqPass");
    }

    bool isModeSFreqPassValid(void)
    {
        return isValid("ModeSFreqPass");

    }

    void setPass(bool value)
    {
        write("Pass",value);
    }

    bool getPass(void)

    {
        return getBool("Pass");
    }

    bool isPassValid(void)
    {
        return isValid("Pass");

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