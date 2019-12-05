#ifndef __TXBWTest_h
#define __TXBWTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CTXBWTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x17;
    CTXBWTest(void)
    {
        setCmdID(mCmdID);
    }
    CTXBWTest(Json::Value obj):TServerMessage(obj)
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