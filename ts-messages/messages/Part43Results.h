#ifndef __Part43Results_h
#define __Part43Results_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43Results:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x2;
    CPart43Results(void)
    {
        setCmdID(mCmdID);
    }
    CPart43Results(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setMTL_ModeA(float value)
    {
        write("MTL_ModeA",value);
    }

    float getMTL_ModeA(void)

    {
        return getFloat("MTL_ModeA");
    }

    bool isMTL_ModeAValid(void)
    {
        return isValid("MTL_ModeA");

    }

    void setMTL_ModeC(float value)
    {
        write("MTL_ModeC",value);
    }

    float getMTL_ModeC(void)

    {
        return getFloat("MTL_ModeC");
    }

    bool isMTL_ModeCValid(void)
    {
        return isValid("MTL_ModeC");

    }

    void setMustReply_ModeA(bool value)
    {
        write("MustReply_ModeA",value);
    }

    bool getMustReply_ModeA(void)

    {
        return getBool("MustReply_ModeA");
    }

    bool isMustReply_ModeAValid(void)
    {
        return isValid("MustReply_ModeA");

    }

    void setMustReply_ModeA_Pct(unsigned int value)
    {
        write("MustReply_ModeA_Pct",value);
    }

    unsigned int getMustReply_ModeA_Pct(void)

    {
        return getUInt("MustReply_ModeA_Pct");
    }

    bool isMustReply_ModeA_PctValid(void)
    {
        return isValid("MustReply_ModeA_Pct");

    }

    void setMustReply_ModeC(bool value)
    {
        write("MustReply_ModeC",value);
    }

    bool getMustReply_ModeC(void)

    {
        return getBool("MustReply_ModeC");
    }

    bool isMustReply_ModeCValid(void)
    {
        return isValid("MustReply_ModeC");

    }

    void setMTL_DifferencePass(bool value)
    {
        write("MTL_DifferencePass",value);
    }

    bool getMTL_DifferencePass(void)

    {
        return getBool("MTL_DifferencePass");
    }

    bool isMTL_DifferencePassValid(void)
    {
        return isValid("MTL_DifferencePass");

    }

    void setMTL_Difference(float value)
    {
        write("MTL_Difference",value);
    }

    float getMTL_Difference(void)

    {
        return getFloat("MTL_Difference");
    }

    bool isMTL_DifferenceValid(void)
    {
        return isValid("MTL_Difference");

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