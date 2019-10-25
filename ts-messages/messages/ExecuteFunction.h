#ifndef __ExecuteFunction_h
#define __ExecuteFunction_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CExecuteFunction:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x6;
    CExecuteFunction(void)
    {
        setCmdID(mCmdID);
    }
    CExecuteFunction(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setFunctionID(unsigned int value)
    {
        write("FunctionID",value);
    }

    unsigned int getFunctionID(void)

    {
        return getUInt("FunctionID");
    }

    bool isFunctionIDValid(void)
    {
        return isValid("FunctionID");

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