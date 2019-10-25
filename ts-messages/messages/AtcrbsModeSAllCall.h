#ifndef __AtcrbsModeSAllCall_h
#define __AtcrbsModeSAllCall_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CAtcrbsModeSAllCall:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x23;
    CAtcrbsModeSAllCall(void)
    {
        setCmdID(mCmdID);
    }
    CAtcrbsModeSAllCall(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setAtcrbsResult(bool value)
    {
        write("AtcrbsResult",value);
    }

    bool getAtcrbsResult(void)

    {
        return getBool("AtcrbsResult");
    }

    bool isAtcrbsResultValid(void)
    {
        return isValid("AtcrbsResult");

    }

    void setAtcrbsReplies(float value)
    {
        write("AtcrbsReplies",value);
    }

    float getAtcrbsReplies(void)

    {
        return getFloat("AtcrbsReplies");
    }

    bool isAtcrbsRepliesValid(void)
    {
        return isValid("AtcrbsReplies");

    }

    void setAtcrbsModeSResult(bool value)
    {
        write("AtcrbsModeSResult",value);
    }

    bool getAtcrbsModeSResult(void)

    {
        return getBool("AtcrbsModeSResult");
    }

    bool isAtcrbsModeSResultValid(void)
    {
        return isValid("AtcrbsModeSResult");

    }

    void setAtcrbsModeSAddress(std::string value)
    {
        write("AtcrbsModeSAddress",value);
    }

    std::string getAtcrbsModeSAddress(void)

    {
        return getString("AtcrbsModeSAddress");
    }

    bool isAtcrbsModeSAddressValid(void)
    {
        return isValid("AtcrbsModeSAddress");

    }

    void setAtcrbsModeSCA(unsigned int value)
    {
        write("AtcrbsModeSCA",value);
    }

    unsigned int getAtcrbsModeSCA(void)

    {
        return getUInt("AtcrbsModeSCA");
    }

    bool isAtcrbsModeSCAValid(void)
    {
        return isValid("AtcrbsModeSCA");

    }

    void setAtcrbsModeSVerticalStatus(unsigned int value)
    {
        write("AtcrbsModeSVerticalStatus",value);
    }

    unsigned int getAtcrbsModeSVerticalStatus(void)

    {
        return getUInt("AtcrbsModeSVerticalStatus");
    }

    bool isAtcrbsModeSVerticalStatusValid(void)
    {
        return isValid("AtcrbsModeSVerticalStatus");

    }

    void setAtcrbsModeSComm(unsigned int value)
    {
        write("AtcrbsModeSComm",value);
    }

    unsigned int getAtcrbsModeSComm(void)

    {
        return getUInt("AtcrbsModeSComm");
    }

    bool isAtcrbsModeSCommValid(void)
    {
        return isValid("AtcrbsModeSComm");

    }

    void setAtcrbsModeSReplyFormat(unsigned int value)
    {
        write("AtcrbsModeSReplyFormat",value);
    }

    unsigned int getAtcrbsModeSReplyFormat(void)

    {
        return getUInt("AtcrbsModeSReplyFormat");
    }

    bool isAtcrbsModeSReplyFormatValid(void)
    {
        return isValid("AtcrbsModeSReplyFormat");

    }

    void setAtcrbsModeSReplies(float value)
    {
        write("AtcrbsModeSReplies",value);
    }

    float getAtcrbsModeSReplies(void)

    {
        return getFloat("AtcrbsModeSReplies");
    }

    bool isAtcrbsModeSRepliesValid(void)
    {
        return isValid("AtcrbsModeSReplies");

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

    void setModeSAddress(std::string value)
    {
        write("ModeSAddress",value);
    }

    std::string getModeSAddress(void)

    {
        return getString("ModeSAddress");
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

    void setModeSVerticalStatus(unsigned int value)
    {
        write("ModeSVerticalStatus",value);
    }

    unsigned int getModeSVerticalStatus(void)

    {
        return getUInt("ModeSVerticalStatus");
    }

    bool isModeSVerticalStatusValid(void)
    {
        return isValid("ModeSVerticalStatus");

    }

    void setModeSComm(unsigned int value)
    {
        write("ModeSComm",value);
    }

    unsigned int getModeSComm(void)

    {
        return getUInt("ModeSComm");
    }

    bool isModeSCommValid(void)
    {
        return isValid("ModeSComm");

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

    void setModeSModeSReplies(float value)
    {
        write("ModeSModeSReplies",value);
    }

    float getModeSModeSReplies(void)

    {
        return getFloat("ModeSModeSReplies");
    }

    bool isModeSModeSRepliesValid(void)
    {
        return isValid("ModeSModeSReplies");

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