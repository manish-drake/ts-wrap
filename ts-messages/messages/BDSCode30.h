#ifndef __BDSCode30_h
#define __BDSCode30_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode30:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x17;
    CBDSCode30(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode30(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDSCode(std::string value)
    {
        write("BDSCode",value);
    }

    std::string getBDSCode(void)

    {
        return getString("BDSCode");
    }

    bool isBDSCodeValid(void)
    {
        return isValid("BDSCode");

    }

    void setARABit41(bool value)
    {
        write("ARABit41",value);
    }

    bool getARABit41(void)

    {
        return getBool("ARABit41");
    }

    bool isARABit41Valid(void)
    {
        return isValid("ARABit41");

    }

    void setARABit42(bool value)
    {
        write("ARABit42",value);
    }

    bool getARABit42(void)

    {
        return getBool("ARABit42");
    }

    bool isARABit42Valid(void)
    {
        return isValid("ARABit42");

    }

    void setARABit43(bool value)
    {
        write("ARABit43",value);
    }

    bool getARABit43(void)

    {
        return getBool("ARABit43");
    }

    bool isARABit43Valid(void)
    {
        return isValid("ARABit43");

    }

    void setARABit44(bool value)
    {
        write("ARABit44",value);
    }

    bool getARABit44(void)

    {
        return getBool("ARABit44");
    }

    bool isARABit44Valid(void)
    {
        return isValid("ARABit44");

    }

    void setARABit45(bool value)
    {
        write("ARABit45",value);
    }

    bool getARABit45(void)

    {
        return getBool("ARABit45");
    }

    bool isARABit45Valid(void)
    {
        return isValid("ARABit45");

    }

    void setARABit46(bool value)
    {
        write("ARABit46",value);
    }

    bool getARABit46(void)

    {
        return getBool("ARABit46");
    }

    bool isARABit46Valid(void)
    {
        return isValid("ARABit46");

    }

    void setARABit47(bool value)
    {
        write("ARABit47",value);
    }

    bool getARABit47(void)

    {
        return getBool("ARABit47");
    }

    bool isARABit47Valid(void)
    {
        return isValid("ARABit47");

    }

    void setRACBit55(bool value)
    {
        write("RACBit55",value);
    }

    bool getRACBit55(void)

    {
        return getBool("RACBit55");
    }

    bool isRACBit55Valid(void)
    {
        return isValid("RACBit55");

    }

    void setRACBit56(bool value)
    {
        write("RACBit56",value);
    }

    bool getRACBit56(void)

    {
        return getBool("RACBit56");
    }

    bool isRACBit56Valid(void)
    {
        return isValid("RACBit56");

    }

    void setRACBit57(bool value)
    {
        write("RACBit57",value);
    }

    bool getRACBit57(void)

    {
        return getBool("RACBit57");
    }

    bool isRACBit57Valid(void)
    {
        return isValid("RACBit57");

    }

    void setRACBit58(bool value)
    {
        write("RACBit58",value);
    }

    bool getRACBit58(void)

    {
        return getBool("RACBit58");
    }

    bool isRACBit58Valid(void)
    {
        return isValid("RACBit58");

    }

    void setRATerminated(bool value)
    {
        write("RATerminated",value);
    }

    bool getRATerminated(void)

    {
        return getBool("RATerminated");
    }

    bool isRATerminatedValid(void)
    {
        return isValid("RATerminated");

    }

    void setMultipleThreatEncouter(bool value)
    {
        write("MultipleThreatEncouter",value);
    }

    bool getMultipleThreatEncouter(void)

    {
        return getBool("MultipleThreatEncouter");
    }

    bool isMultipleThreatEncouterValid(void)
    {
        return isValid("MultipleThreatEncouter");

    }

    void setThreatTypeIndicator(unsigned int value)
    {
        write("ThreatTypeIndicator",value);
    }

    unsigned int getThreatTypeIndicator(void)

    {
        return getUInt("ThreatTypeIndicator");
    }

    bool isThreatTypeIndicatorValid(void)
    {
        return isValid("ThreatTypeIndicator");

    }

    void setTID(std::string value)
    {
        write("TID",value);
    }

    std::string getTID(void)

    {
        return getString("TID");
    }

    bool isTIDValid(void)
    {
        return isValid("TID");

    }

    void setTIDA(std::string value)
    {
        write("TIDA",value);
    }

    std::string getTIDA(void)

    {
        return getString("TIDA");
    }

    bool isTIDAValid(void)
    {
        return isValid("TIDA");

    }

    void setTIDR(unsigned int value)
    {
        write("TIDR",value);
    }

    unsigned int getTIDR(void)

    {
        return getUInt("TIDR");
    }

    bool isTIDRValid(void)
    {
        return isValid("TIDR");

    }

    void setTIDB(unsigned int value)
    {
        write("TIDB",value);
    }

    unsigned int getTIDB(void)

    {
        return getUInt("TIDB");
    }

    bool isTIDBValid(void)
    {
        return isValid("TIDB");

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