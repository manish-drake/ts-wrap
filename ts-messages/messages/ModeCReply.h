#ifndef __ModeCReply_h
#define __ModeCReply_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CModeCReply:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1e;
    CModeCReply(void)
    {
        setCmdID(mCmdID);
    }
    CModeCReply(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setModeCFineMTL(float value)
    {
        write("ModeCFineMTL",value);
    }

    float getModeCFineMTL(void)

    {
        return getFloat("ModeCFineMTL");
    }

    bool isModeCFineMTLValid(void)
    {
        return isValid("ModeCFineMTL");

    }

    void setModeCPercentReply(unsigned int value)
    {
        write("ModeCPercentReply",value);
    }

    unsigned int getModeCPercentReply(void)

    {
        return getUInt("ModeCPercentReply");
    }

    bool isModeCPercentReplyValid(void)
    {
        return isValid("ModeCPercentReply");

    }

    void setModeCReplyPass(bool value)
    {
        write("ModeCReplyPass",value);
    }

    bool getModeCReplyPass(void)

    {
        return getBool("ModeCReplyPass");
    }

    bool isModeCReplyPassValid(void)
    {
        return isValid("ModeCReplyPass");

    }

    void setModeCCode(unsigned int value)
    {
        write("ModeCCode",value);
    }

    unsigned int getModeCCode(void)

    {
        return getUInt("ModeCCode");
    }

    bool isModeCCodeValid(void)
    {
        return isValid("ModeCCode");

    }

    void setModeCPercentageMustReply(unsigned int value)
    {
        write("ModeCPercentageMustReply",value);
    }

    unsigned int getModeCPercentageMustReply(void)

    {
        return getUInt("ModeCPercentageMustReply");
    }

    bool isModeCPercentageMustReplyValid(void)
    {
        return isValid("ModeCPercentageMustReply");

    }

    void setModeCMustReplyPass(bool value)
    {
        write("ModeCMustReplyPass",value);
    }

    bool getModeCMustReplyPass(void)

    {
        return getBool("ModeCMustReplyPass");
    }

    bool isModeCMustReplyPassValid(void)
    {
        return isValid("ModeCMustReplyPass");

    }

    void setModeCSLSReply(unsigned int value)
    {
        write("ModeCSLSReply",value);
    }

    unsigned int getModeCSLSReply(void)

    {
        return getUInt("ModeCSLSReply");
    }

    bool isModeCSLSReplyValid(void)
    {
        return isValid("ModeCSLSReply");

    }

    void setModeCSLSReplyPass(bool value)
    {
        write("ModeCSLSReplyPass",value);
    }

    bool getModeCSLSReplyPass(void)

    {
        return getBool("ModeCSLSReplyPass");
    }

    bool isModeCSLSReplyPassValid(void)
    {
        return isValid("ModeCSLSReplyPass");

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

    void setModeCDroopPass(bool value)
    {
        write("ModeCDroopPass",value);
    }

    bool getModeCDroopPass(void)

    {
        return getBool("ModeCDroopPass");
    }

    bool isModeCDroopPassValid(void)
    {
        return isValid("ModeCDroopPass");

    }

    void setModeCReplyDelay(float value)
    {
        write("ModeCReplyDelay",value);
    }

    float getModeCReplyDelay(void)

    {
        return getFloat("ModeCReplyDelay");
    }

    bool isModeCReplyDelayValid(void)
    {
        return isValid("ModeCReplyDelay");

    }

    void setModeCReplyDelayPass(bool value)
    {
        write("ModeCReplyDelayPass",value);
    }

    bool getModeCReplyDelayPass(void)

    {
        return getBool("ModeCReplyDelayPass");
    }

    bool isModeCReplyDelayPassValid(void)
    {
        return isValid("ModeCReplyDelayPass");

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

    void setModeCJitterPass(bool value)
    {
        write("ModeCJitterPass",value);
    }

    bool getModeCJitterPass(void)

    {
        return getBool("ModeCJitterPass");
    }

    bool isModeCJitterPassValid(void)
    {
        return isValid("ModeCJitterPass");

    }

    void setModeCPulseWidth(std::vector<float>& value)
    {
        write("ModeCPulseWidth",value);
    }

    std::vector<float> getModeCPulseWidth(std::vector<float> arr)

    {
        return getArray("ModeCPulseWidth",arr);
    }

    bool isModeCPulseWidthValid(void)
    {
        return isValid("ModeCPulseWidth");

    }

    void setModeCPulseWidthPass(bool value)
    {
        write("ModeCPulseWidthPass",value);
    }

    bool getModeCPulseWidthPass(void)

    {
        return getBool("ModeCPulseWidthPass");
    }

    bool isModeCPulseWidthPassValid(void)
    {
        return isValid("ModeCPulseWidthPass");

    }

    void setModeCPulseSpacing(std::vector<float>& value)
    {
        write("ModeCPulseSpacing",value);
    }

    std::vector<float> getModeCPulseSpacing(std::vector<float> arr)

    {
        return getArray("ModeCPulseSpacing",arr);
    }

    bool isModeCPulseSpacingValid(void)
    {
        return isValid("ModeCPulseSpacing");

    }

    void setModeCPulseSpacingPass(bool value)
    {
        write("ModeCPulseSpacingPass",value);
    }

    bool getModeCPulseSpacingPass(void)

    {
        return getBool("ModeCPulseSpacingPass");
    }

    bool isModeCPulseSpacingPassValid(void)
    {
        return isValid("ModeCPulseSpacingPass");

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