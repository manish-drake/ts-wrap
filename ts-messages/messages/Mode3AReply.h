#ifndef __Mode3AReply_h
#define __Mode3AReply_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CMode3AReply:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1d;
    CMode3AReply(void)
    {
        setCmdID(mCmdID);
    }
    CMode3AReply(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setMode3AFineMTL(float value)
    {
        write("Mode3AFineMTL",value);
    }

    float getMode3AFineMTL(void)

    {
        return getFloat("Mode3AFineMTL");
    }

    bool isMode3AFineMTLValid(void)
    {
        return isValid("Mode3AFineMTL");

    }

    void setMode3APercentReply(unsigned int value)
    {
        write("Mode3APercentReply",value);
    }

    unsigned int getMode3APercentReply(void)

    {
        return getUInt("Mode3APercentReply");
    }

    bool isMode3APercentReplyValid(void)
    {
        return isValid("Mode3APercentReply");

    }

    void setMode3AReplyPass(bool value)
    {
        write("Mode3AReplyPass",value);
    }

    bool getMode3AReplyPass(void)

    {
        return getBool("Mode3AReplyPass");
    }

    bool isMode3AReplyPassValid(void)
    {
        return isValid("Mode3AReplyPass");

    }

    void setMode3ACode(unsigned int value)
    {
        write("Mode3ACode",value);
    }

    unsigned int getMode3ACode(void)

    {
        return getUInt("Mode3ACode");
    }

    bool isMode3ACodeValid(void)
    {
        return isValid("Mode3ACode");

    }

    void setMode3AIdent(bool value)
    {
        write("Mode3AIdent",value);
    }

    bool getMode3AIdent(void)

    {
        return getBool("Mode3AIdent");
    }

    bool isMode3AIdentValid(void)
    {
        return isValid("Mode3AIdent");

    }

    void setMode3AXPulse(bool value)
    {
        write("Mode3AXPulse",value);
    }

    bool getMode3AXPulse(void)

    {
        return getBool("Mode3AXPulse");
    }

    bool isMode3AXPulseValid(void)
    {
        return isValid("Mode3AXPulse");

    }

    void setMode3APercentageMustReply(unsigned int value)
    {
        write("Mode3APercentageMustReply",value);
    }

    unsigned int getMode3APercentageMustReply(void)

    {
        return getUInt("Mode3APercentageMustReply");
    }

    bool isMode3APercentageMustReplyValid(void)
    {
        return isValid("Mode3APercentageMustReply");

    }

    void setMode3AMustReplyPass(bool value)
    {
        write("Mode3AMustReplyPass",value);
    }

    bool getMode3AMustReplyPass(void)

    {
        return getBool("Mode3AMustReplyPass");
    }

    bool isMode3AMustReplyPassValid(void)
    {
        return isValid("Mode3AMustReplyPass");

    }

    void setMode3ASLSReply(unsigned int value)
    {
        write("Mode3ASLSReply",value);
    }

    unsigned int getMode3ASLSReply(void)

    {
        return getUInt("Mode3ASLSReply");
    }

    bool isMode3ASLSReplyValid(void)
    {
        return isValid("Mode3ASLSReply");

    }

    void setMode3ASLSReplyPass(bool value)
    {
        write("Mode3ASLSReplyPass",value);
    }

    bool getMode3ASLSReplyPass(void)

    {
        return getBool("Mode3ASLSReplyPass");
    }

    bool isMode3ASLSReplyPassValid(void)
    {
        return isValid("Mode3ASLSReplyPass");

    }

    void setMode3AFreq(float value)
    {
        write("Mode3AFreq",value);
    }

    float getMode3AFreq(void)

    {
        return getFloat("Mode3AFreq");
    }

    bool isMode3AFreqValid(void)
    {
        return isValid("Mode3AFreq");

    }

    void setMode3AFreqPass(bool value)
    {
        write("Mode3AFreqPass",value);
    }

    bool getMode3AFreqPass(void)

    {
        return getBool("Mode3AFreqPass");
    }

    bool isMode3AFreqPassValid(void)
    {
        return isValid("Mode3AFreqPass");

    }

    void setMode3APower(float value)
    {
        write("Mode3APower",value);
    }

    float getMode3APower(void)

    {
        return getFloat("Mode3APower");
    }

    bool isMode3APowerValid(void)
    {
        return isValid("Mode3APower");

    }

    void setMode3APowerPass(bool value)
    {
        write("Mode3APowerPass",value);
    }

    bool getMode3APowerPass(void)

    {
        return getBool("Mode3APowerPass");
    }

    bool isMode3APowerPassValid(void)
    {
        return isValid("Mode3APowerPass");

    }

    void setMode3ADroop(float value)
    {
        write("Mode3ADroop",value);
    }

    float getMode3ADroop(void)

    {
        return getFloat("Mode3ADroop");
    }

    bool isMode3ADroopValid(void)
    {
        return isValid("Mode3ADroop");

    }

    void setMode3ADroopPass(bool value)
    {
        write("Mode3ADroopPass",value);
    }

    bool getMode3ADroopPass(void)

    {
        return getBool("Mode3ADroopPass");
    }

    bool isMode3ADroopPassValid(void)
    {
        return isValid("Mode3ADroopPass");

    }

    void setMode3AReplyDelay(float value)
    {
        write("Mode3AReplyDelay",value);
    }

    float getMode3AReplyDelay(void)

    {
        return getFloat("Mode3AReplyDelay");
    }

    bool isMode3AReplyDelayValid(void)
    {
        return isValid("Mode3AReplyDelay");

    }

    void setMode3AReplyDelayPass(bool value)
    {
        write("Mode3AReplyDelayPass",value);
    }

    bool getMode3AReplyDelayPass(void)

    {
        return getBool("Mode3AReplyDelayPass");
    }

    bool isMode3AReplyDelayPassValid(void)
    {
        return isValid("Mode3AReplyDelayPass");

    }

    void setMode3AJitter(float value)
    {
        write("Mode3AJitter",value);
    }

    float getMode3AJitter(void)

    {
        return getFloat("Mode3AJitter");
    }

    bool isMode3AJitterValid(void)
    {
        return isValid("Mode3AJitter");

    }

    void setMode3AJitterPass(bool value)
    {
        write("Mode3AJitterPass",value);
    }

    bool getMode3AJitterPass(void)

    {
        return getBool("Mode3AJitterPass");
    }

    bool isMode3AJitterPassValid(void)
    {
        return isValid("Mode3AJitterPass");

    }

    void setMode3APulseWidth(std::vector<float>& value)
    {
        write("Mode3APulseWidth",value);
    }

    std::vector<float> getMode3APulseWidth(std::vector<float> arr)

    {
        return getArray("Mode3APulseWidth",arr);
    }

    bool isMode3APulseWidthValid(void)
    {
        return isValid("Mode3APulseWidth");

    }

    void setMode3APulseWidthPass(bool value)
    {
        write("Mode3APulseWidthPass",value);
    }

    bool getMode3APulseWidthPass(void)

    {
        return getBool("Mode3APulseWidthPass");
    }

    bool isMode3APulseWidthPassValid(void)
    {
        return isValid("Mode3APulseWidthPass");

    }

    void setMode3APulseSpacing(std::vector<float>& value)
    {
        write("Mode3APulseSpacing",value);
    }

    std::vector<float> getMode3APulseSpacing(std::vector<float> arr)

    {
        return getArray("Mode3APulseSpacing",arr);
    }

    bool isMode3APulseSpacingValid(void)
    {
        return isValid("Mode3APulseSpacing");

    }

    void setMode3APulseSpacingPass(bool value)
    {
        write("Mode3APulseSpacingPass",value);
    }

    bool getMode3APulseSpacingPass(void)

    {
        return getBool("Mode3APulseSpacingPass");
    }

    bool isMode3APulseSpacingPassValid(void)
    {
        return isValid("Mode3APulseSpacingPass");

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