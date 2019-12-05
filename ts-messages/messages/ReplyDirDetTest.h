#ifndef __ReplyDirDetTest_h
#define __ReplyDirDetTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyDirDetTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1008;
    CReplyDirDetTest(void)
    {
        setCmdID(mCmdID);
    }
    CReplyDirDetTest(Json::Value obj):TServerMessage(obj)
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

    void setDirDetRef(int value)
    {
        write("DirDetRef",value);
    }

    int getDirDetRef(void)

    {
        return getInt("DirDetRef");
    }

    bool isDirDetRefValid(void)
    {
        return isValid("DirDetRef");

    }

    void setenvRatio(double value)
    {
        write("envRatio",value);
    }

    double getenvRatio(void)

    {
        return getDouble("envRatio");
    }

    bool isenvRatioValid(void)
    {
        return isValid("envRatio");

    }

    void setRmsNF(int value)
    {
        write("RmsNF",value);
    }

    int getRmsNF(void)

    {
        return getInt("RmsNF");
    }

    bool isRmsNFValid(void)
    {
        return isValid("RmsNF");

    }

    void setEnvSIG(int value)
    {
        write("EnvSIG",value);
    }

    int getEnvSIG(void)

    {
        return getInt("EnvSIG");
    }

    bool isEnvSIGValid(void)
    {
        return isValid("EnvSIG");

    }

    void setRmsSIG(int value)
    {
        write("RmsSIG",value);
    }

    int getRmsSIG(void)

    {
        return getInt("RmsSIG");
    }

    bool isRmsSIGValid(void)
    {
        return isValid("RmsSIG");

    }

    void setDirRefMin(int value)
    {
        write("DirRefMin",value);
    }

    int getDirRefMin(void)

    {
        return getInt("DirRefMin");
    }

    bool isDirRefMinValid(void)
    {
        return isValid("DirRefMin");

    }

    void setDirRefMax(int value)
    {
        write("DirRefMax",value);
    }

    int getDirRefMax(void)

    {
        return getInt("DirRefMax");
    }

    bool isDirRefMaxValid(void)
    {
        return isValid("DirRefMax");

    }

    void setEnvSensl(int value)
    {
        write("EnvSensl",value);
    }

    int getEnvSensl(void)

    {
        return getInt("EnvSensl");
    }

    bool isEnvSenslValid(void)
    {
        return isValid("EnvSensl");

    }

    void setRmsSensl(int value)
    {
        write("RmsSensl",value);
    }

    int getRmsSensl(void)

    {
        return getInt("RmsSensl");
    }

    bool isRmsSenslValid(void)
    {
        return isValid("RmsSensl");

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