#ifndef __TXRefTuningTest_h
#define __TXRefTuningTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CTXRefTuningTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x9;
    CTXRefTuningTest(void)
    {
        setCmdID(mCmdID);
    }
    CTXRefTuningTest(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
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