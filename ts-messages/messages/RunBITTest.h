#ifndef __RunBITTest_h
#define __RunBITTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CRunBITTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x16;
    CRunBITTest(void)
    {
        setCmdID(mCmdID);
    }
    CRunBITTest(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setRunAlignment(bool value)
    {
        write("RunAlignment",value);
    }

    bool getRunAlignment(void)

    {
        return getBool("RunAlignment");
    }

    bool isRunAlignmentValid(void)
    {
        return isValid("RunAlignment");

    }

    void setFreq(double value)
    {
        write("Freq",value);
    }

    double getFreq(void)

    {
        return getDouble("Freq");
    }

    bool isFreqValid(void)
    {
        return isValid("Freq");

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