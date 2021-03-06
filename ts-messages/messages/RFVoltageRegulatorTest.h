#ifndef __RFVoltageRegulatorTest_h
#define __RFVoltageRegulatorTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CRFVoltageRegulatorTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x2;
    CRFVoltageRegulatorTest(void)
    {
        setCmdID(mCmdID);
    }
    CRFVoltageRegulatorTest(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setTestType(unsigned int value)
    {
        write("TestType",value);
    }

    unsigned int getTestType(void)

    {
        return getUInt("TestType");
    }

    bool isTestTypeValid(void)
    {
        return isValid("TestType");

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