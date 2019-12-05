#ifndef __TXAttenuation_h
#define __TXAttenuation_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CTXAttenuation:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1e;
    CTXAttenuation(void)
    {
        setCmdID(mCmdID);
    }
    CTXAttenuation(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setCoarse(unsigned int value)
    {
        write("Coarse",value);
    }

    unsigned int getCoarse(void)

    {
        return getUInt("Coarse");
    }

    bool isCoarseValid(void)
    {
        return isValid("Coarse");

    }

    void setStep(unsigned int value)
    {
        write("Step",value);
    }

    unsigned int getStep(void)

    {
        return getUInt("Step");
    }

    bool isStepValid(void)
    {
        return isValid("Step");

    }

    void setFine(float value)
    {
        write("Fine",value);
    }

    float getFine(void)

    {
        return getFloat("Fine");
    }

    bool isFineValid(void)
    {
        return isValid("Fine");

    }

    void setIndex(int value)
    {
        write("Index",value);
    }

    int getIndex(void)

    {
        return getInt("Index");
    }

    bool isIndexValid(void)
    {
        return isValid("Index");

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