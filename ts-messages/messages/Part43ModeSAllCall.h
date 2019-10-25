#ifndef __Part43ModeSAllCall_h
#define __Part43ModeSAllCall_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43ModeSAllCall:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x12;
    CPart43ModeSAllCall(void)
    {
        setCmdID(mCmdID);
    }
    CPart43ModeSAllCall(Json::Value obj):TServerMessage(obj)
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

    void setModeSAddress(unsigned int value)
    {
        write("ModeSAddress",value);
    }

    unsigned int getModeSAddress(void)

    {
        return getUInt("ModeSAddress");
    }

    bool isModeSAddressValid(void)
    {
        return isValid("ModeSAddress");

    }

    void setModeSCA(unsigned int value)
    {
        write("ModeSCA",value);
    }

    unsigned int getModeSCA(void)

    {
        return getUInt("ModeSCA");
    }

    bool isModeSCAValid(void)
    {
        return isValid("ModeSCA");

    }

    void setModeSAirborne(bool value)
    {
        write("ModeSAirborne",value);
    }

    bool getModeSAirborne(void)

    {
        return getBool("ModeSAirborne");
    }

    bool isModeSAirborneValid(void)
    {
        return isValid("ModeSAirborne");

    }

    void setModeSReplyFormat(unsigned int value)
    {
        write("ModeSReplyFormat",value);
    }

    unsigned int getModeSReplyFormat(void)

    {
        return getUInt("ModeSReplyFormat");
    }

    bool isModeSReplyFormatValid(void)
    {
        return isValid("ModeSReplyFormat");

    }

    void setModeSReplyPct(float value)
    {
        write("ModeSReplyPct",value);
    }

    float getModeSReplyPct(void)

    {
        return getFloat("ModeSReplyPct");
    }

    bool isModeSReplyPctValid(void)
    {
        return isValid("ModeSReplyPct");

    }

    void setModeSReplyPctPass(bool value)
    {
        write("ModeSReplyPctPass",value);
    }

    bool getModeSReplyPctPass(void)

    {
        return getBool("ModeSReplyPctPass");
    }

    bool isModeSReplyPctPassValid(void)
    {
        return isValid("ModeSReplyPctPass");

    }

    void setModeSCommCap(unsigned int value)
    {
        write("ModeSCommCap",value);
    }

    unsigned int getModeSCommCap(void)

    {
        return getUInt("ModeSCommCap");
    }

    bool isModeSCommCapValid(void)
    {
        return isValid("ModeSCommCap");

    }

    void setModeSPass(bool value)
    {
        write("ModeSPass",value);
    }

    bool getModeSPass(void)

    {
        return getBool("ModeSPass");
    }

    bool isModeSPassValid(void)
    {
        return isValid("ModeSPass");

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