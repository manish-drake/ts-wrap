#ifndef __ReplyVersionsSummary_h
#define __ReplyVersionsSummary_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CReplyVersionsSummary:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1003;
    CReplyVersionsSummary(void)
    {
        setCmdID(mCmdID);
    }
    CReplyVersionsSummary(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setSummary(std::string value)
    {
        write("Summary",value);
    }

    std::string getSummary(void)

    {
        return getString("Summary");
    }

    bool isSummaryValid(void)
    {
        return isValid("Summary");

    }

    void setBSP(std::string value)
    {
        write("BSP",value);
    }

    std::string getBSP(void)

    {
        return getString("BSP");
    }

    bool isBSPValid(void)
    {
        return isValid("BSP");

    }

    void setTestserver(std::string value)
    {
        write("Testserver",value);
    }

    std::string getTestserver(void)

    {
        return getString("Testserver");
    }

    bool isTestserverValid(void)
    {
        return isValid("Testserver");

    }

    void setFPGA(unsigned int value)
    {
        write("FPGA",value);
    }

    unsigned int getFPGA(void)

    {
        return getUInt("FPGA");
    }

    bool isFPGAValid(void)
    {
        return isValid("FPGA");

    }

    void setMax10(unsigned int value)
    {
        write("Max10",value);
    }

    unsigned int getMax10(void)

    {
        return getUInt("Max10");
    }

    bool isMax10Valid(void)
    {
        return isValid("Max10");

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