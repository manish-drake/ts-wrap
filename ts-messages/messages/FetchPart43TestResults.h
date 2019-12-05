#ifndef __FetchPart43TestResults_h
#define __FetchPart43TestResults_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CFetchPart43TestResults:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x8;
    CFetchPart43TestResults(void)
    {
        setCmdID(mCmdID);
    }
    CFetchPart43TestResults(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setTestNo(unsigned int value)
    {
        write("TestNo",value);
    }

    unsigned int getTestNo(void)

    {
        return getUInt("TestNo");
    }

    bool isTestNoValid(void)
    {
        return isValid("TestNo");

    }

    void setReRun(bool value)
    {
        write("ReRun",value);
    }

    bool getReRun(void)

    {
        return getBool("ReRun");
    }

    bool isReRunValid(void)
    {
        return isValid("ReRun");

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