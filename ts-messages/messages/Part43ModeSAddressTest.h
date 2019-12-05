#ifndef __Part43ModeSAddressTest_h
#define __Part43ModeSAddressTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43ModeSAddressTest:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xd;
    CPart43ModeSAddressTest(void)
    {
        setCmdID(mCmdID);
    }
    CPart43ModeSAddressTest(Json::Value obj):TServerMessage(obj)
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

    void setModeSCorrectReplies(float value)
    {
        write("ModeSCorrectReplies",value);
    }

    float getModeSCorrectReplies(void)

    {
        return getFloat("ModeSCorrectReplies");
    }

    bool isModeSCorrectRepliesValid(void)
    {
        return isValid("ModeSCorrectReplies");

    }

    void setModeSCorrectRepliesPass(float value)
    {
        write("ModeSCorrectRepliesPass",value);
    }

    float getModeSCorrectRepliesPass(void)

    {
        return getFloat("ModeSCorrectRepliesPass");
    }

    bool isModeSCorrectRepliesPassValid(void)
    {
        return isValid("ModeSCorrectRepliesPass");

    }

    void setModeSIncorrectReplies1(float value)
    {
        write("ModeSIncorrectReplies1",value);
    }

    float getModeSIncorrectReplies1(void)

    {
        return getFloat("ModeSIncorrectReplies1");
    }

    bool isModeSIncorrectReplies1Valid(void)
    {
        return isValid("ModeSIncorrectReplies1");

    }

    void setModeSIncorrectReplies1Pass(float value)
    {
        write("ModeSIncorrectReplies1Pass",value);
    }

    float getModeSIncorrectReplies1Pass(void)

    {
        return getFloat("ModeSIncorrectReplies1Pass");
    }

    bool isModeSIncorrectReplies1PassValid(void)
    {
        return isValid("ModeSIncorrectReplies1Pass");

    }

    void setModeSIncorrectReplies2(float value)
    {
        write("ModeSIncorrectReplies2",value);
    }

    float getModeSIncorrectReplies2(void)

    {
        return getFloat("ModeSIncorrectReplies2");
    }

    bool isModeSIncorrectReplies2Valid(void)
    {
        return isValid("ModeSIncorrectReplies2");

    }

    void setModeSIncorrectReplies2Pass(float value)
    {
        write("ModeSIncorrectReplies2Pass",value);
    }

    float getModeSIncorrectReplies2Pass(void)

    {
        return getFloat("ModeSIncorrectReplies2Pass");
    }

    bool isModeSIncorrectReplies2PassValid(void)
    {
        return isValid("ModeSIncorrectReplies2Pass");

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