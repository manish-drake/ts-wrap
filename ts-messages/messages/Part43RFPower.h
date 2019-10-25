#ifndef __Part43RFPower_h
#define __Part43RFPower_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43RFPower:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x6;
    CPart43RFPower(void)
    {
        setCmdID(mCmdID);
    }
    CPart43RFPower(Json::Value obj):TServerMessage(obj)
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

    void setModeAPower(float value)
    {
        write("ModeAPower",value);
    }

    float getModeAPower(void)

    {
        return getFloat("ModeAPower");
    }

    bool isModeAPowerValid(void)
    {
        return isValid("ModeAPower");

    }

    void setModeAPowerPass(bool value)
    {
        write("ModeAPowerPass",value);
    }

    bool getModeAPowerPass(void)

    {
        return getBool("ModeAPowerPass");
    }

    bool isModeAPowerPassValid(void)
    {
        return isValid("ModeAPowerPass");

    }

    void setModeCPower(float value)
    {
        write("ModeCPower",value);
    }

    float getModeCPower(void)

    {
        return getFloat("ModeCPower");
    }

    bool isModeCPowerValid(void)
    {
        return isValid("ModeCPower");

    }

    void setModeCPowerPass(bool value)
    {
        write("ModeCPowerPass",value);
    }

    bool getModeCPowerPass(void)

    {
        return getBool("ModeCPowerPass");
    }

    bool isModeCPowerPassValid(void)
    {
        return isValid("ModeCPowerPass");

    }

    void setModeSPower(float value)
    {
        write("ModeSPower",value);
    }

    float getModeSPower(void)

    {
        return getFloat("ModeSPower");
    }

    bool isModeSPowerValid(void)
    {
        return isValid("ModeSPower");

    }

    void setModeSPowerPass(bool value)
    {
        write("ModeSPowerPass",value);
    }

    bool getModeSPowerPass(void)

    {
        return getBool("ModeSPowerPass");
    }

    bool isModeSPowerPassValid(void)
    {
        return isValid("ModeSPowerPass");

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