#ifndef __BDSCode65_SubType1_h
#define __BDSCode65_SubType1_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode65_SubType1:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x2b;
    CBDSCode65_SubType1(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode65_SubType1(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setSurfCanRxES(bool value)
    {
        write("SurfCanRxES",value);
    }

    bool getSurfCanRxES(void)

    {
        return getBool("SurfCanRxES");
    }

    bool isSurfCanRxESValid(void)
    {
        return isValid("SurfCanRxES");

    }

    void setSurfLT70WTx(bool value)
    {
        write("SurfLT70WTx",value);
    }

    bool getSurfLT70WTx(void)

    {
        return getBool("SurfLT70WTx");
    }

    bool isSurfLT70WTxValid(void)
    {
        return isValid("SurfLT70WTx");

    }

    void setSurfCanRxUAT(bool value)
    {
        write("SurfCanRxUAT",value);
    }

    bool getSurfCanRxUAT(void)

    {
        return getBool("SurfCanRxUAT");
    }

    bool isSurfCanRxUATValid(void)
    {
        return isValid("SurfCanRxUAT");

    }

    void setnacv(int value)
    {
        write("nacv",value);
    }

    int getnacv(void)

    {
        return getInt("nacv");
    }

    bool isnacvValid(void)
    {
        return isValid("nacv");

    }

    void setnicSupC(bool value)
    {
        write("nicSupC",value);
    }

    bool getnicSupC(void)

    {
        return getBool("nicSupC");
    }

    bool isnicSupCValid(void)
    {
        return isValid("nicSupC");

    }

    void setlenWidthOK(bool value)
    {
        write("lenWidthOK",value);
    }

    bool getlenWidthOK(void)

    {
        return getBool("lenWidthOK");
    }

    bool islenWidthOKValid(void)
    {
        return isValid("lenWidthOK");

    }

    void setlength(float value)
    {
        write("length",value);
    }

    float getlength(void)

    {
        return getFloat("length");
    }

    bool islengthValid(void)
    {
        return isValid("length");

    }

    void setwidth(float value)
    {
        write("width",value);
    }

    float getwidth(void)

    {
        return getFloat("width");
    }

    bool iswidthValid(void)
    {
        return isValid("width");

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

    void setheadingOrTrack(int value)
    {
        write("headingOrTrack",value);
    }

    int getheadingOrTrack(void)

    {
        return getInt("headingOrTrack");
    }

    bool isheadingOrTrackValid(void)
    {
        return isValid("headingOrTrack");

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

    void setlenWidthCode(unsigned int value)
    {
        write("lenWidthCode",value);
    }

    unsigned int getlenWidthCode(void)

    {
        return getUInt("lenWidthCode");
    }

    bool islenWidthCodeValid(void)
    {
        return isValid("lenWidthCode");

    }

    void setlatOffset(int value)
    {
        write("latOffset",value);
    }

    int getlatOffset(void)

    {
        return getInt("latOffset");
    }

    bool islatOffsetValid(void)
    {
        return isValid("latOffset");

    }

    void setlongOffset(bool value)
    {
        write("longOffset",value);
    }

    bool getlongOffset(void)

    {
        return getBool("longOffset");
    }

    bool islongOffsetValid(void)
    {
        return isValid("longOffset");

    }

    void setsensorComp(bool value)
    {
        write("sensorComp",value);
    }

    bool getsensorComp(void)

    {
        return getBool("sensorComp");
    }

    bool issensorCompValid(void)
    {
        return isValid("sensorComp");

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