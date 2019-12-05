#ifndef __ReplyThldDetTest_h
#define __ReplyThldDetTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyThldDetTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1009;
    CReplyThldDetTest(void)
    {
        setCmdID(mCmdID);
    }
    CReplyThldDetTest(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setChannel(unsigned int value)
    {
        write("Channel",value);
    }

    unsigned int getChannel(void)

    {
        return getUInt("Channel");
    }

    bool isChannelValid(void)
    {
        return isValid("Channel");

    }

    void setADC(unsigned int value)
    {
        write("ADC",value);
    }

    unsigned int getADC(void)

    {
        return getUInt("ADC");
    }

    bool isADCValid(void)
    {
        return isValid("ADC");

    }

    void setDirDetThld_L(int value)
    {
        write("DirDetThld_L",value);
    }

    int getDirDetThld_L(void)

    {
        return getInt("DirDetThld_L");
    }

    bool isDirDetThld_LValid(void)
    {
        return isValid("DirDetThld_L");

    }

    void setDirDetThld_H(int value)
    {
        write("DirDetThld_H",value);
    }

    int getDirDetThld_H(void)

    {
        return getInt("DirDetThld_H");
    }

    bool isDirDetThld_HValid(void)
    {
        return isValid("DirDetThld_H");

    }

    void setDirThldLow(int value)
    {
        write("DirThldLow",value);
    }

    int getDirThldLow(void)

    {
        return getInt("DirThldLow");
    }

    bool isDirThldLowValid(void)
    {
        return isValid("DirThldLow");

    }

    void setDirThldHigh(int value)
    {
        write("DirThldHigh",value);
    }

    int getDirThldHigh(void)

    {
        return getInt("DirThldHigh");
    }

    bool isDirThldHighValid(void)
    {
        return isValid("DirThldHigh");

    }

    void setFreq(float value)
    {
        write("Freq",value);
    }

    float getFreq(void)

    {
        return getFloat("Freq");
    }

    bool isFreqValid(void)
    {
        return isValid("Freq");

    }

    void setTestResult(int value)
    {
        write("TestResult",value);
    }

    int getTestResult(void)

    {
        return getInt("TestResult");
    }

    bool isTestResultValid(void)
    {
        return isValid("TestResult");

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