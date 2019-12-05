#ifndef __ReplyRunBITTest_h
#define __ReplyRunBITTest_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyRunBITTest:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1011;
    CReplyRunBITTest(void)
    {
        setCmdID(mCmdID);
    }
    CReplyRunBITTest(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setRxlevel(std::vector<int>& value)
    {
        write("Rxlevel",value);
    }

    std::vector<int> getRxlevel(std::vector<int> arr)

    {
        return getArray("Rxlevel",arr);
    }

    bool isRxlevelValid(void)
    {
        return isValid("Rxlevel");

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