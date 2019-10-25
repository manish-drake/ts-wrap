#ifndef __Part43ATCRBS_h
#define __Part43ATCRBS_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43ATCRBS:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xc;
    CPart43ATCRBS(void)
    {
        setCmdID(mCmdID);
    }
    CPart43ATCRBS(Json::Value obj):TServerMessage(obj)
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

    void setModeACode(unsigned int value)
    {
        write("ModeACode",value);
    }

    unsigned int getModeACode(void)

    {
        return getUInt("ModeACode");
    }

    bool isModeACodeValid(void)
    {
        return isValid("ModeACode");

    }

    void setModeACodeReplyPass(bool value)
    {
        write("ModeACodeReplyPass",value);
    }

    bool getModeACodeReplyPass(void)

    {
        return getBool("ModeACodeReplyPass");
    }

    bool isModeACodeReplyPassValid(void)
    {
        return isValid("ModeACodeReplyPass");

    }

    void setModeACodeReplyPct(float value)
    {
        write("ModeACodeReplyPct",value);
    }

    float getModeACodeReplyPct(void)

    {
        return getFloat("ModeACodeReplyPct");
    }

    bool isModeACodeReplyPctValid(void)
    {
        return isValid("ModeACodeReplyPct");

    }

    void setModeAIdent(bool value)
    {
        write("ModeAIdent",value);
    }

    bool getModeAIdent(void)

    {
        return getBool("ModeAIdent");
    }

    bool isModeAIdentValid(void)
    {
        return isValid("ModeAIdent");

    }

    void setModeCAltitude(unsigned int value)
    {
        write("ModeCAltitude",value);
    }

    unsigned int getModeCAltitude(void)

    {
        return getUInt("ModeCAltitude");
    }

    bool isModeCAltitudeValid(void)
    {
        return isValid("ModeCAltitude");

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

    void setModeCReplyPct(float value)
    {
        write("ModeCReplyPct",value);
    }

    float getModeCReplyPct(void)

    {
        return getFloat("ModeCReplyPct");
    }

    bool isModeCReplyPctValid(void)
    {
        return isValid("ModeCReplyPct");

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