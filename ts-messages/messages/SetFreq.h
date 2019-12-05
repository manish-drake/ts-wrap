#ifndef __SetFreq_h
#define __SetFreq_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CSetFreq:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x6;
    CSetFreq(void)
    {
        setCmdID(mCmdID);
    }
    CSetFreq(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setFreqFilename(std::string value)
    {
        write("FreqFilename",value);
    }

    std::string getFreqFilename(void)

    {
        return getString("FreqFilename");
    }

    bool isFreqFilenameValid(void)
    {
        return isValid("FreqFilename");

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