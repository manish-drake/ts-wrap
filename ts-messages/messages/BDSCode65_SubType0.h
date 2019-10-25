#ifndef __BDSCode65_SubType0_h
#define __BDSCode65_SubType0_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode65_SubType0:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x2a;
    CBDSCode65_SubType0(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode65_SubType0(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setTCASOp(bool value)
    {
        write("TCASOp",value);
    }

    bool getTCASOp(void)

    {
        return getBool("TCASOp");
    }

    bool isTCASOpValid(void)
    {
        return isValid("TCASOp");

    }

    void setAirCanRxES(bool value)
    {
        write("AirCanRxES",value);
    }

    bool getAirCanRxES(void)

    {
        return getBool("AirCanRxES");
    }

    bool isAirCanRxESValid(void)
    {
        return isValid("AirCanRxES");

    }

    void setAirCanSendVelReports(bool value)
    {
        write("AirCanSendVelReports",value);
    }

    bool getAirCanSendVelReports(void)

    {
        return getBool("AirCanSendVelReports");
    }

    bool isAirCanSendVelReportsValid(void)
    {
        return isValid("AirCanSendVelReports");

    }

    void setAirCanSendTargetStateReports(bool value)
    {
        write("AirCanSendTargetStateReports",value);
    }

    bool getAirCanSendTargetStateReports(void)

    {
        return getBool("AirCanSendTargetStateReports");
    }

    bool isAirCanSendTargetStateReportsValid(void)
    {
        return isValid("AirCanSendTargetStateReports");

    }

    void setAirCanSendTargetChangeReports(int value)
    {
        write("AirCanSendTargetChangeReports",value);
    }

    int getAirCanSendTargetChangeReports(void)

    {
        return getInt("AirCanSendTargetChangeReports");
    }

    bool isAirCanSendTargetChangeReportsValid(void)
    {
        return isValid("AirCanSendTargetChangeReports");

    }

    void setAirCanRxUAT(bool value)
    {
        write("AirCanRxUAT",value);
    }

    bool getAirCanRxUAT(void)

    {
        return getBool("AirCanRxUAT");
    }

    bool isAirCanRxUATValid(void)
    {
        return isValid("AirCanRxUAT");

    }

    void setRA_active(bool value)
    {
        write("RA_active",value);
    }

    bool getRA_active(void)

    {
        return getBool("RA_active");
    }

    bool isRA_activeValid(void)
    {
        return isValid("RA_active");

    }

    void setident(bool value)
    {
        write("ident",value);
    }

    bool getident(void)

    {
        return getBool("ident");
    }

    bool isidentValid(void)
    {
        return isValid("ident");

    }

    void setsingleAnt(bool value)
    {
        write("singleAnt",value);
    }

    bool getsingleAnt(void)

    {
        return getBool("singleAnt");
    }

    bool issingleAntValid(void)
    {
        return isValid("singleAnt");

    }

    void setsda(int value)
    {
        write("sda",value);
    }

    int getsda(void)

    {
        return getInt("sda");
    }

    bool issdaValid(void)
    {
        return isValid("sda");

    }

    void setversion(int value)
    {
        write("version",value);
    }

    int getversion(void)

    {
        return getInt("version");
    }

    bool isversionValid(void)
    {
        return isValid("version");

    }

    void setnicSupA(bool value)
    {
        write("nicSupA",value);
    }

    bool getnicSupA(void)

    {
        return getBool("nicSupA");
    }

    bool isnicSupAValid(void)
    {
        return isValid("nicSupA");

    }

    void setnacp(int value)
    {
        write("nacp",value);
    }

    int getnacp(void)

    {
        return getInt("nacp");
    }

    bool isnacpValid(void)
    {
        return isValid("nacp");

    }

    void setGVA(int value)
    {
        write("GVA",value);
    }

    int getGVA(void)

    {
        return getInt("GVA");
    }

    bool isGVAValid(void)
    {
        return isValid("GVA");

    }

    void setsil(int value)
    {
        write("sil",value);
    }

    int getsil(void)

    {
        return getInt("sil");
    }

    bool issilValid(void)
    {
        return isValid("sil");

    }

    void setaltVerified(bool value)
    {
        write("altVerified",value);
    }

    bool getaltVerified(void)

    {
        return getBool("altVerified");
    }

    bool isaltVerifiedValid(void)
    {
        return isValid("altVerified");

    }

    void sethrd(int value)
    {
        write("hrd",value);
    }

    int gethrd(void)

    {
        return getInt("hrd");
    }

    bool ishrdValid(void)
    {
        return isValid("hrd");

    }

    void setsilSup(int value)
    {
        write("silSup",value);
    }

    int getsilSup(void)

    {
        return getInt("silSup");
    }

    bool issilSupValid(void)
    {
        return isValid("silSup");

    }

    void setrawCapability(unsigned int value)
    {
        write("rawCapability",value);
    }

    unsigned int getrawCapability(void)

    {
        return getUInt("rawCapability");
    }

    bool israwCapabilityValid(void)
    {
        return isValid("rawCapability");

    }

    void setrawOpMode(unsigned int value)
    {
        write("rawOpMode",value);
    }

    unsigned int getrawOpMode(void)

    {
        return getUInt("rawOpMode");
    }

    bool israwOpModeValid(void)
    {
        return isValid("rawOpMode");

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