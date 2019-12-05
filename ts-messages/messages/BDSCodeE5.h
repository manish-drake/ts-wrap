#ifndef __BDSCodeE5_h
#define __BDSCodeE5_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCodeE5:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x2c;
    CBDSCodeE5(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCodeE5(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setStatus(bool value)
    {
        write("Status",value);
    }

    bool getStatus(void)

    {
        return getBool("Status");
    }

    bool isStatusValid(void)
    {
        return isValid("Status");

    }

    void setFormatType(unsigned int value)
    {
        write("FormatType",value);
    }

    unsigned int getFormatType(void)

    {
        return getUInt("FormatType");
    }

    bool isFormatTypeValid(void)
    {
        return isValid("FormatType");

    }

    void setPartNumber(std::string value)
    {
        write("PartNumber",value);
    }

    std::string getPartNumber(void)

    {
        return getString("PartNumber");
    }

    bool isPartNumberValid(void)
    {
        return isValid("PartNumber");

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