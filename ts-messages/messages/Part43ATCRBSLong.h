#ifndef __Part43ATCRBSLong_h
#define __Part43ATCRBSLong_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CPart43ATCRBSLong:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x11;
    CPart43ATCRBSLong(void)
    {
        setCmdID(mCmdID);
    }
    CPart43ATCRBSLong(Json::Value obj):TServerMessage(obj)
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

    void setATCRBS_ModeSAddress(unsigned int value)
    {
        write("ATCRBS_ModeSAddress",value);
    }

    unsigned int getATCRBS_ModeSAddress(void)

    {
        return getUInt("ATCRBS_ModeSAddress");
    }

    bool isATCRBS_ModeSAddressValid(void)
    {
        return isValid("ATCRBS_ModeSAddress");

    }

    void setATCRBS_CA(unsigned int value)
    {
        write("ATCRBS_CA",value);
    }

    unsigned int getATCRBS_CA(void)

    {
        return getUInt("ATCRBS_CA");
    }

    bool isATCRBS_CAValid(void)
    {
        return isValid("ATCRBS_CA");

    }

    void setATCRBS_P4_LongReplyPct(float value)
    {
        write("ATCRBS_P4_LongReplyPct",value);
    }

    float getATCRBS_P4_LongReplyPct(void)

    {
        return getFloat("ATCRBS_P4_LongReplyPct");
    }

    bool isATCRBS_P4_LongReplyPctValid(void)
    {
        return isValid("ATCRBS_P4_LongReplyPct");

    }

    void setATCRBS_P4_LongReplyPctPass(bool value)
    {
        write("ATCRBS_P4_LongReplyPctPass",value);
    }

    bool getATCRBS_P4_LongReplyPctPass(void)

    {
        return getBool("ATCRBS_P4_LongReplyPctPass");
    }

    bool isATCRBS_P4_LongReplyPctPassValid(void)
    {
        return isValid("ATCRBS_P4_LongReplyPctPass");

    }

    void setATCRBSAirborne(bool value)
    {
        write("ATCRBSAirborne",value);
    }

    bool getATCRBSAirborne(void)

    {
        return getBool("ATCRBSAirborne");
    }

    bool isATCRBSAirborneValid(void)
    {
        return isValid("ATCRBSAirborne");

    }

    void setATCRBSReplyFormat(unsigned int value)
    {
        write("ATCRBSReplyFormat",value);
    }

    unsigned int getATCRBSReplyFormat(void)

    {
        return getUInt("ATCRBSReplyFormat");
    }

    bool isATCRBSReplyFormatValid(void)
    {
        return isValid("ATCRBSReplyFormat");

    }

    void setATCRBSCommCap(unsigned int value)
    {
        write("ATCRBSCommCap",value);
    }

    unsigned int getATCRBSCommCap(void)

    {
        return getUInt("ATCRBSCommCap");
    }

    bool isATCRBSCommCapValid(void)
    {
        return isValid("ATCRBSCommCap");

    }

    void setATCRBSPass(bool value)
    {
        write("ATCRBSPass",value);
    }

    bool getATCRBSPass(void)

    {
        return getBool("ATCRBSPass");
    }

    bool isATCRBSPassValid(void)
    {
        return isValid("ATCRBSPass");

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