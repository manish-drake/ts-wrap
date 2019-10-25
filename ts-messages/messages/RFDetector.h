#ifndef __RFDetector_h
#define __RFDetector_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CRFDetector:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x19;
    CRFDetector(void)
    {
        setCmdID(mCmdID);
    }
    CRFDetector(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setDetector(unsigned int value)
    {
        write("Detector",value);
    }

    unsigned int getDetector(void)

    {
        return getUInt("Detector");
    }

    bool isDetectorValid(void)
    {
        return isValid("Detector");

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