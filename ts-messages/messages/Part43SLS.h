#ifndef __Part43SLS_h
#define __Part43SLS_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43SLS:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x8;
    CPart43SLS(void)
    {
        setCmdID(mCmdID);
    }
    CPart43SLS(Json::Value obj):TServerMessage(obj)
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

    void setATCRBSSuppressionOffPct(float value)
    {
        write("ATCRBSSuppressionOffPct",value);
    }

    float getATCRBSSuppressionOffPct(void)

    {
        return getFloat("ATCRBSSuppressionOffPct");
    }

    bool isATCRBSSuppressionOffPctValid(void)
    {
        return isValid("ATCRBSSuppressionOffPct");

    }

    void setATCRBSSupressionOnPct(float value)
    {
        write("ATCRBSSupressionOnPct",value);
    }

    float getATCRBSSupressionOnPct(void)

    {
        return getFloat("ATCRBSSupressionOnPct");
    }

    bool isATCRBSSupressionOnPctValid(void)
    {
        return isValid("ATCRBSSupressionOnPct");

    }

    void setATCRBSSupressionPass(float value)
    {
        write("ATCRBSSupressionPass",value);
    }

    float getATCRBSSupressionPass(void)

    {
        return getFloat("ATCRBSSupressionPass");
    }

    bool isATCRBSSupressionPassValid(void)
    {
        return isValid("ATCRBSSupressionPass");

    }

    void setModeS_SuppressionOffPct(float value)
    {
        write("ModeS_SuppressionOffPct",value);
    }

    float getModeS_SuppressionOffPct(void)

    {
        return getFloat("ModeS_SuppressionOffPct");
    }

    bool isModeS_SuppressionOffPctValid(void)
    {
        return isValid("ModeS_SuppressionOffPct");

    }

    void setModeS_SupressionOnPct(float value)
    {
        write("ModeS_SupressionOnPct",value);
    }

    float getModeS_SupressionOnPct(void)

    {
        return getFloat("ModeS_SupressionOnPct");
    }

    bool isModeS_SupressionOnPctValid(void)
    {
        return isValid("ModeS_SupressionOnPct");

    }

    void setModeS_SupressionPass(float value)
    {
        write("ModeS_SupressionPass",value);
    }

    float getModeS_SupressionPass(void)

    {
        return getFloat("ModeS_SupressionPass");
    }

    bool isModeS_SupressionPassValid(void)
    {
        return isValid("ModeS_SupressionPass");

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