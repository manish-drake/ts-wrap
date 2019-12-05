#ifndef __PulseMeasurements_h
#define __PulseMeasurements_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPulseMeasurements:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x20;
    CPulseMeasurements(void)
    {
        setCmdID(mCmdID);
    }
    CPulseMeasurements(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setModeAWidth(float value)
    {
        write("ModeAWidth",value);
    }

    float getModeAWidth(void)

    {
        return getFloat("ModeAWidth");
    }

    bool isModeAWidthValid(void)
    {
        return isValid("ModeAWidth");

    }

    void setModeASpacing(float value)
    {
        write("ModeASpacing",value);
    }

    float getModeASpacing(void)

    {
        return getFloat("ModeASpacing");
    }

    bool isModeASpacingValid(void)
    {
        return isValid("ModeASpacing");

    }

    void setModeADroop(float value)
    {
        write("ModeADroop",value);
    }

    float getModeADroop(void)

    {
        return getFloat("ModeADroop");
    }

    bool isModeADroopValid(void)
    {
        return isValid("ModeADroop");

    }

    void setModeAJitter(float value)
    {
        write("ModeAJitter",value);
    }

    float getModeAJitter(void)

    {
        return getFloat("ModeAJitter");
    }

    bool isModeAJitterValid(void)
    {
        return isValid("ModeAJitter");

    }

    void setModeAResult(bool value)
    {
        write("ModeAResult",value);
    }

    bool getModeAResult(void)

    {
        return getBool("ModeAResult");
    }

    bool isModeAResultValid(void)
    {
        return isValid("ModeAResult");

    }

    void setModeCWidth(float value)
    {
        write("ModeCWidth",value);
    }

    float getModeCWidth(void)

    {
        return getFloat("ModeCWidth");
    }

    bool isModeCWidthValid(void)
    {
        return isValid("ModeCWidth");

    }

    void setModeCSpacing(float value)
    {
        write("ModeCSpacing",value);
    }

    float getModeCSpacing(void)

    {
        return getFloat("ModeCSpacing");
    }

    bool isModeCSpacingValid(void)
    {
        return isValid("ModeCSpacing");

    }

    void setModeCDroop(float value)
    {
        write("ModeCDroop",value);
    }

    float getModeCDroop(void)

    {
        return getFloat("ModeCDroop");
    }

    bool isModeCDroopValid(void)
    {
        return isValid("ModeCDroop");

    }

    void setModeCJitter(float value)
    {
        write("ModeCJitter",value);
    }

    float getModeCJitter(void)

    {
        return getFloat("ModeCJitter");
    }

    bool isModeCJitterValid(void)
    {
        return isValid("ModeCJitter");

    }

    void setModeCResult(bool value)
    {
        write("ModeCResult",value);
    }

    bool getModeCResult(void)

    {
        return getBool("ModeCResult");
    }

    bool isModeCResultValid(void)
    {
        return isValid("ModeCResult");

    }

    void setModeSWidth(float value)
    {
        write("ModeSWidth",value);
    }

    float getModeSWidth(void)

    {
        return getFloat("ModeSWidth");
    }

    bool isModeSWidthValid(void)
    {
        return isValid("ModeSWidth");

    }

    void setModeSSpacing(float value)
    {
        write("ModeSSpacing",value);
    }

    float getModeSSpacing(void)

    {
        return getFloat("ModeSSpacing");
    }

    bool isModeSSpacingValid(void)
    {
        return isValid("ModeSSpacing");

    }

    void setModeSDroop(float value)
    {
        write("ModeSDroop",value);
    }

    float getModeSDroop(void)

    {
        return getFloat("ModeSDroop");
    }

    bool isModeSDroopValid(void)
    {
        return isValid("ModeSDroop");

    }

    void setModeSJitter(float value)
    {
        write("ModeSJitter",value);
    }

    float getModeSJitter(void)

    {
        return getFloat("ModeSJitter");
    }

    bool isModeSJitterValid(void)
    {
        return isValid("ModeSJitter");

    }

    void setModeSResult(bool value)
    {
        write("ModeSResult",value);
    }

    bool getModeSResult(void)

    {
        return getBool("ModeSResult");
    }

    bool isModeSResultValid(void)
    {
        return isValid("ModeSResult");

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