#ifndef __ADSBDataReply_h
#define __ADSBDataReply_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CADSBDataReply:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1;
    CADSBDataReply(void)
    {
        setCmdID(mCmdID);
    }
    CADSBDataReply(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setSize(unsigned int value)
    {
        write("Size",value);
    }

    unsigned int getSize(void)

    {
        return getUInt("Size");
    }

    bool isSizeValid(void)
    {
        return isValid("Size");

    }

    void setData(std::vector<int>& value)
    {
        write("Data",value);
    }

    std::vector<int> getData(std::vector<int> arr)

    {
        return getArray("Data",arr);
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