#ifndef __Part43MTL_h
#define __Part43MTL_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43MTL:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x7;
    CPart43MTL(void)
    {
        setCmdID(mCmdID);
    }
    CPart43MTL(Json::Value obj):TServerMessage(obj)
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

    void setModeAMTL(float value)
    {
        write("ModeAMTL",value);
    }

    float getModeAMTL(void)

    {
        return getFloat("ModeAMTL");
    }

    bool isModeAMTLValid(void)
    {
        return isValid("ModeAMTL");

    }

    void setModeAMTLPass(bool value)
    {
        write("ModeAMTLPass",value);
    }

    bool getModeAMTLPass(void)

    {
        return getBool("ModeAMTLPass");
    }

    bool isModeAMTLPassValid(void)
    {
        return isValid("ModeAMTLPass");

    }

    void setModeCMTL(float value)
    {
        write("ModeCMTL",value);
    }

    float getModeCMTL(void)

    {
        return getFloat("ModeCMTL");
    }

    bool isModeCMTLValid(void)
    {
        return isValid("ModeCMTL");

    }

    void setModeCMTLPass(bool value)
    {
        write("ModeCMTLPass",value);
    }

    bool getModeCMTLPass(void)

    {
        return getBool("ModeCMTLPass");
    }

    bool isModeCMTLPassValid(void)
    {
        return isValid("ModeCMTLPass");

    }

    void setModeSMTL(float value)
    {
        write("ModeSMTL",value);
    }

    float getModeSMTL(void)

    {
        return getFloat("ModeSMTL");
    }

    bool isModeSMTLValid(void)
    {
        return isValid("ModeSMTL");

    }

    void setModeSMTLPass(bool value)
    {
        write("ModeSMTLPass",value);
    }

    bool getModeSMTLPass(void)

    {
        return getBool("ModeSMTLPass");
    }

    bool isModeSMTLPassValid(void)
    {
        return isValid("ModeSMTLPass");

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