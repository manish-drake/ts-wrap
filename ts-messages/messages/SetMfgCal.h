#ifndef __SetMfgCal_h
#define __SetMfgCal_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CSetMfgCal:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x5;
    CSetMfgCal(void)
    {
        setCmdID(mCmdID);
    }
    CSetMfgCal(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setMfgCalFilename(std::string value)
    {
        write("MfgCalFilename",value);
    }

    std::string getMfgCalFilename(void)

    {
        return getString("MfgCalFilename");
    }

    bool isMfgCalFilenameValid(void)
    {
        return isValid("MfgCalFilename");

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