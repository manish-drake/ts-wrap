#ifndef __Part43ShortP4AllCall_h
#define __Part43ShortP4AllCall_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43ShortP4AllCall:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x10;
    CPart43ShortP4AllCall(void)
    {
        setCmdID(mCmdID);
    }
    CPart43ShortP4AllCall(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setTestNum(unsigned int value)
    {
        write("TestNum",value);
    }

    unsigned int getTestNum(void)

    {
        return getUInt("TestNum");
    }

    bool isTestNumValid(void)
    {
        return isValid("TestNum");

    }

    void setATCRBS_P4_ShortReplyPct(float value)
    {
        write("ATCRBS_P4_ShortReplyPct",value);
    }

    float getATCRBS_P4_ShortReplyPct(void)

    {
        return getFloat("ATCRBS_P4_ShortReplyPct");
    }

    bool isATCRBS_P4_ShortReplyPctValid(void)
    {
        return isValid("ATCRBS_P4_ShortReplyPct");

    }

    void setATCRBS_P4_ShortReplyPctPass(float value)
    {
        write("ATCRBS_P4_ShortReplyPctPass",value);
    }

    float getATCRBS_P4_ShortReplyPctPass(void)

    {
        return getFloat("ATCRBS_P4_ShortReplyPctPass");
    }

    bool isATCRBS_P4_ShortReplyPctPassValid(void)
    {
        return isValid("ATCRBS_P4_ShortReplyPctPass");

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