#ifndef __BDSCode1B_h
#define __BDSCode1B_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode1B:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xe;
    CBDSCode1B(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode1B(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDS_E0(bool value)
    {
        write("BDS_E0",value);
    }

    bool getBDS_E0(void)

    {
        return getBool("BDS_E0");
    }

    bool isBDS_E0Valid(void)
    {
        return isValid("BDS_E0");

    }

    void setBDS_DF(bool value)
    {
        write("BDS_DF",value);
    }

    bool getBDS_DF(void)

    {
        return getBool("BDS_DF");
    }

    bool isBDS_DFValid(void)
    {
        return isValid("BDS_DF");

    }

    void setBDS_DE(bool value)
    {
        write("BDS_DE",value);
    }

    bool getBDS_DE(void)

    {
        return getBool("BDS_DE");
    }

    bool isBDS_DEValid(void)
    {
        return isValid("BDS_DE");

    }

    void setBDS_DD(bool value)
    {
        write("BDS_DD",value);
    }

    bool getBDS_DD(void)

    {
        return getBool("BDS_DD");
    }

    bool isBDS_DDValid(void)
    {
        return isValid("BDS_DD");

    }

    void setBDS_DC(bool value)
    {
        write("BDS_DC",value);
    }

    bool getBDS_DC(void)

    {
        return getBool("BDS_DC");
    }

    bool isBDS_DCValid(void)
    {
        return isValid("BDS_DC");

    }

    void setBDS_DB(bool value)
    {
        write("BDS_DB",value);
    }

    bool getBDS_DB(void)

    {
        return getBool("BDS_DB");
    }

    bool isBDS_DBValid(void)
    {
        return isValid("BDS_DB");

    }

    void setBDS_DA(bool value)
    {
        write("BDS_DA",value);
    }

    bool getBDS_DA(void)

    {
        return getBool("BDS_DA");
    }

    bool isBDS_DAValid(void)
    {
        return isValid("BDS_DA");

    }

    void setBDS_D9(bool value)
    {
        write("BDS_D9",value);
    }

    bool getBDS_D9(void)

    {
        return getBool("BDS_D9");
    }

    bool isBDS_D9Valid(void)
    {
        return isValid("BDS_D9");

    }

    void setBDS_D8(bool value)
    {
        write("BDS_D8",value);
    }

    bool getBDS_D8(void)

    {
        return getBool("BDS_D8");
    }

    bool isBDS_D8Valid(void)
    {
        return isValid("BDS_D8");

    }

    void setBDS_D7(bool value)
    {
        write("BDS_D7",value);
    }

    bool getBDS_D7(void)

    {
        return getBool("BDS_D7");
    }

    bool isBDS_D7Valid(void)
    {
        return isValid("BDS_D7");

    }

    void setBDS_D6(bool value)
    {
        write("BDS_D6",value);
    }

    bool getBDS_D6(void)

    {
        return getBool("BDS_D6");
    }

    bool isBDS_D6Valid(void)
    {
        return isValid("BDS_D6");

    }

    void setBDS_D5(bool value)
    {
        write("BDS_D5",value);
    }

    bool getBDS_D5(void)

    {
        return getBool("BDS_D5");
    }

    bool isBDS_D5Valid(void)
    {
        return isValid("BDS_D5");

    }

    void setBDS_D4(bool value)
    {
        write("BDS_D4",value);
    }

    bool getBDS_D4(void)

    {
        return getBool("BDS_D4");
    }

    bool isBDS_D4Valid(void)
    {
        return isValid("BDS_D4");

    }

    void setBDS_D3(bool value)
    {
        write("BDS_D3",value);
    }

    bool getBDS_D3(void)

    {
        return getBool("BDS_D3");
    }

    bool isBDS_D3Valid(void)
    {
        return isValid("BDS_D3");

    }

    void setBDS_D2(bool value)
    {
        write("BDS_D2",value);
    }

    bool getBDS_D2(void)

    {
        return getBool("BDS_D2");
    }

    bool isBDS_D2Valid(void)
    {
        return isValid("BDS_D2");

    }

    void setBDS_D1(bool value)
    {
        write("BDS_D1",value);
    }

    bool getBDS_D1(void)

    {
        return getBool("BDS_D1");
    }

    bool isBDS_D1Valid(void)
    {
        return isValid("BDS_D1");

    }

    void setBDS_D0(bool value)
    {
        write("BDS_D0",value);
    }

    bool getBDS_D0(void)

    {
        return getBool("BDS_D0");
    }

    bool isBDS_D0Valid(void)
    {
        return isValid("BDS_D0");

    }

    void setBDS_CF(bool value)
    {
        write("BDS_CF",value);
    }

    bool getBDS_CF(void)

    {
        return getBool("BDS_CF");
    }

    bool isBDS_CFValid(void)
    {
        return isValid("BDS_CF");

    }

    void setBDS_CE(bool value)
    {
        write("BDS_CE",value);
    }

    bool getBDS_CE(void)

    {
        return getBool("BDS_CE");
    }

    bool isBDS_CEValid(void)
    {
        return isValid("BDS_CE");

    }

    void setBDS_CD(bool value)
    {
        write("BDS_CD",value);
    }

    bool getBDS_CD(void)

    {
        return getBool("BDS_CD");
    }

    bool isBDS_CDValid(void)
    {
        return isValid("BDS_CD");

    }

    void setBDS_CC(bool value)
    {
        write("BDS_CC",value);
    }

    bool getBDS_CC(void)

    {
        return getBool("BDS_CC");
    }

    bool isBDS_CCValid(void)
    {
        return isValid("BDS_CC");

    }

    void setBDS_CB(bool value)
    {
        write("BDS_CB",value);
    }

    bool getBDS_CB(void)

    {
        return getBool("BDS_CB");
    }

    bool isBDS_CBValid(void)
    {
        return isValid("BDS_CB");

    }

    void setBDS_CA(bool value)
    {
        write("BDS_CA",value);
    }

    bool getBDS_CA(void)

    {
        return getBool("BDS_CA");
    }

    bool isBDS_CAValid(void)
    {
        return isValid("BDS_CA");

    }

    void setBDS_C9(bool value)
    {
        write("BDS_C9",value);
    }

    bool getBDS_C9(void)

    {
        return getBool("BDS_C9");
    }

    bool isBDS_C9Valid(void)
    {
        return isValid("BDS_C9");

    }

    void setBDS_C8(bool value)
    {
        write("BDS_C8",value);
    }

    bool getBDS_C8(void)

    {
        return getBool("BDS_C8");
    }

    bool isBDS_C8Valid(void)
    {
        return isValid("BDS_C8");

    }

    void setBDS_C7(bool value)
    {
        write("BDS_C7",value);
    }

    bool getBDS_C7(void)

    {
        return getBool("BDS_C7");
    }

    bool isBDS_C7Valid(void)
    {
        return isValid("BDS_C7");

    }

    void setBDS_C6(bool value)
    {
        write("BDS_C6",value);
    }

    bool getBDS_C6(void)

    {
        return getBool("BDS_C6");
    }

    bool isBDS_C6Valid(void)
    {
        return isValid("BDS_C6");

    }

    void setBDS_C5(bool value)
    {
        write("BDS_C5",value);
    }

    bool getBDS_C5(void)

    {
        return getBool("BDS_C5");
    }

    bool isBDS_C5Valid(void)
    {
        return isValid("BDS_C5");

    }

    void setBDS_C4(bool value)
    {
        write("BDS_C4",value);
    }

    bool getBDS_C4(void)

    {
        return getBool("BDS_C4");
    }

    bool isBDS_C4Valid(void)
    {
        return isValid("BDS_C4");

    }

    void setBDS_C3(bool value)
    {
        write("BDS_C3",value);
    }

    bool getBDS_C3(void)

    {
        return getBool("BDS_C3");
    }

    bool isBDS_C3Valid(void)
    {
        return isValid("BDS_C3");

    }

    void setBDS_C2(bool value)
    {
        write("BDS_C2",value);
    }

    bool getBDS_C2(void)

    {
        return getBool("BDS_C2");
    }

    bool isBDS_C2Valid(void)
    {
        return isValid("BDS_C2");

    }

    void setBDS_C1(bool value)
    {
        write("BDS_C1",value);
    }

    bool getBDS_C1(void)

    {
        return getBool("BDS_C1");
    }

    bool isBDS_C1Valid(void)
    {
        return isValid("BDS_C1");

    }

    void setBDS_C0(bool value)
    {
        write("BDS_C0",value);
    }

    bool getBDS_C0(void)

    {
        return getBool("BDS_C0");
    }

    bool isBDS_C0Valid(void)
    {
        return isValid("BDS_C0");

    }

    void setBDS_BF(bool value)
    {
        write("BDS_BF",value);
    }

    bool getBDS_BF(void)

    {
        return getBool("BDS_BF");
    }

    bool isBDS_BFValid(void)
    {
        return isValid("BDS_BF");

    }

    void setBDS_BE(bool value)
    {
        write("BDS_BE",value);
    }

    bool getBDS_BE(void)

    {
        return getBool("BDS_BE");
    }

    bool isBDS_BEValid(void)
    {
        return isValid("BDS_BE");

    }

    void setBDS_BD(bool value)
    {
        write("BDS_BD",value);
    }

    bool getBDS_BD(void)

    {
        return getBool("BDS_BD");
    }

    bool isBDS_BDValid(void)
    {
        return isValid("BDS_BD");

    }

    void setBDS_BC(bool value)
    {
        write("BDS_BC",value);
    }

    bool getBDS_BC(void)

    {
        return getBool("BDS_BC");
    }

    bool isBDS_BCValid(void)
    {
        return isValid("BDS_BC");

    }

    void setBDS_BB(bool value)
    {
        write("BDS_BB",value);
    }

    bool getBDS_BB(void)

    {
        return getBool("BDS_BB");
    }

    bool isBDS_BBValid(void)
    {
        return isValid("BDS_BB");

    }

    void setBDS_BA(bool value)
    {
        write("BDS_BA",value);
    }

    bool getBDS_BA(void)

    {
        return getBool("BDS_BA");
    }

    bool isBDS_BAValid(void)
    {
        return isValid("BDS_BA");

    }

    void setBDS_B9(bool value)
    {
        write("BDS_B9",value);
    }

    bool getBDS_B9(void)

    {
        return getBool("BDS_B9");
    }

    bool isBDS_B9Valid(void)
    {
        return isValid("BDS_B9");

    }

    void setBDS_B8(bool value)
    {
        write("BDS_B8",value);
    }

    bool getBDS_B8(void)

    {
        return getBool("BDS_B8");
    }

    bool isBDS_B8Valid(void)
    {
        return isValid("BDS_B8");

    }

    void setBDS_B7(bool value)
    {
        write("BDS_B7",value);
    }

    bool getBDS_B7(void)

    {
        return getBool("BDS_B7");
    }

    bool isBDS_B7Valid(void)
    {
        return isValid("BDS_B7");

    }

    void setBDS_B6(bool value)
    {
        write("BDS_B6",value);
    }

    bool getBDS_B6(void)

    {
        return getBool("BDS_B6");
    }

    bool isBDS_B6Valid(void)
    {
        return isValid("BDS_B6");

    }

    void setBDS_B5(bool value)
    {
        write("BDS_B5",value);
    }

    bool getBDS_B5(void)

    {
        return getBool("BDS_B5");
    }

    bool isBDS_B5Valid(void)
    {
        return isValid("BDS_B5");

    }

    void setBDS_B4(bool value)
    {
        write("BDS_B4",value);
    }

    bool getBDS_B4(void)

    {
        return getBool("BDS_B4");
    }

    bool isBDS_B4Valid(void)
    {
        return isValid("BDS_B4");

    }

    void setBDS_B3(bool value)
    {
        write("BDS_B3",value);
    }

    bool getBDS_B3(void)

    {
        return getBool("BDS_B3");
    }

    bool isBDS_B3Valid(void)
    {
        return isValid("BDS_B3");

    }

    void setBDS_B2(bool value)
    {
        write("BDS_B2",value);
    }

    bool getBDS_B2(void)

    {
        return getBool("BDS_B2");
    }

    bool isBDS_B2Valid(void)
    {
        return isValid("BDS_B2");

    }

    void setBDS_B1(bool value)
    {
        write("BDS_B1",value);
    }

    bool getBDS_B1(void)

    {
        return getBool("BDS_B1");
    }

    bool isBDS_B1Valid(void)
    {
        return isValid("BDS_B1");

    }

    void setBDS_B0(bool value)
    {
        write("BDS_B0",value);
    }

    bool getBDS_B0(void)

    {
        return getBool("BDS_B0");
    }

    bool isBDS_B0Valid(void)
    {
        return isValid("BDS_B0");

    }

    void setBDS_AF(bool value)
    {
        write("BDS_AF",value);
    }

    bool getBDS_AF(void)

    {
        return getBool("BDS_AF");
    }

    bool isBDS_AFValid(void)
    {
        return isValid("BDS_AF");

    }

    void setBDS_AE(bool value)
    {
        write("BDS_AE",value);
    }

    bool getBDS_AE(void)

    {
        return getBool("BDS_AE");
    }

    bool isBDS_AEValid(void)
    {
        return isValid("BDS_AE");

    }

    void setBDS_AD(bool value)
    {
        write("BDS_AD",value);
    }

    bool getBDS_AD(void)

    {
        return getBool("BDS_AD");
    }

    bool isBDS_ADValid(void)
    {
        return isValid("BDS_AD");

    }

    void setBDS_AC(bool value)
    {
        write("BDS_AC",value);
    }

    bool getBDS_AC(void)

    {
        return getBool("BDS_AC");
    }

    bool isBDS_ACValid(void)
    {
        return isValid("BDS_AC");

    }

    void setBDS_AB(bool value)
    {
        write("BDS_AB",value);
    }

    bool getBDS_AB(void)

    {
        return getBool("BDS_AB");
    }

    bool isBDS_ABValid(void)
    {
        return isValid("BDS_AB");

    }

    void setBDS_AA(bool value)
    {
        write("BDS_AA",value);
    }

    bool getBDS_AA(void)

    {
        return getBool("BDS_AA");
    }

    bool isBDS_AAValid(void)
    {
        return isValid("BDS_AA");

    }

    void setBDS_A9(bool value)
    {
        write("BDS_A9",value);
    }

    bool getBDS_A9(void)

    {
        return getBool("BDS_A9");
    }

    bool isBDS_A9Valid(void)
    {
        return isValid("BDS_A9");

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