#ifndef __StartVSWRTest_h
#define __StartVSWRTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CStartVSWRTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x3;
    CStartVSWRTest(void)
    {
        setCmdID(mCmdID);
    }
    CStartVSWRTest(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setStartFreq(float value)
    {
        write("StartFreq",value);
    }

    float getStartFreq(void)

    {
        return getFloat("StartFreq");
    }

    bool isStartFreqValid(void)
    {
        return isValid("StartFreq");

    }

    void setStopFreq(float value)
    {
        write("StopFreq",value);
    }

    float getStopFreq(void)

    {
        return getFloat("StopFreq");
    }

    bool isStopFreqValid(void)
    {
        return isValid("StopFreq");

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