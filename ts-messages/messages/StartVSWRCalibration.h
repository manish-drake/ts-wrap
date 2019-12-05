#ifndef __StartVSWRCalibration_h
#define __StartVSWRCalibration_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CStartVSWRCalibration:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x2;
    CStartVSWRCalibration(void)
    {
        setCmdID(mCmdID);
    }
    CStartVSWRCalibration(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setCalAction(unsigned int value)
    {
        write("CalAction",value);
    }

    unsigned int getCalAction(void)

    {
        return getUInt("CalAction");
    }

    bool isCalActionValid(void)
    {
        return isValid("CalAction");

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