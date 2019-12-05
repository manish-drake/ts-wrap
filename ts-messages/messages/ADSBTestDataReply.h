#ifndef __ADSBTestDataReply_h
#define __ADSBTestDataReply_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CADSBTestDataReply:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x2;
    CADSBTestDataReply(void)
    {
        setCmdID(mCmdID);
    }
    CADSBTestDataReply(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setData(std::string value)
    {
        write("Data",value);
    }

    std::string getData(void)

    {
        return getString("Data");
    }

    bool isDataValid(void)
    {
        return isValid("Data");

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