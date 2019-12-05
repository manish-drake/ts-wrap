#ifndef __BDSCode1C_h
#define __BDSCode1C_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode1C:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xf;
    CBDSCode1C(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode1C(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDS_FF(bool value)
    {
        write("BDS_FF",value);
    }

    bool getBDS_FF(void)

    {
        return getBool("BDS_FF");
    }

    bool isBDS_FFValid(void)
    {
        return isValid("BDS_FF");

    }

    void setBDS_FE(bool value)
    {
        write("BDS_FE",value);
    }

    bool getBDS_FE(void)

    {
        return getBool("BDS_FE");
    }

    bool isBDS_FEValid(void)
    {
        return isValid("BDS_FE");

    }

    void setBDS_FD(bool value)
    {
        write("BDS_FD",value);
    }

    bool getBDS_FD(void)

    {
        return getBool("BDS_FD");
    }

    bool isBDS_FDValid(void)
    {
        return isValid("BDS_FD");

    }

    void setBDS_FC(bool value)
    {
        write("BDS_FC",value);
    }

    bool getBDS_FC(void)

    {
        return getBool("BDS_FC");
    }

    bool isBDS_FCValid(void)
    {
        return isValid("BDS_FC");

    }

    void setBDS_FB(bool value)
    {
        write("BDS_FB",value);
    }

    bool getBDS_FB(void)

    {
        return getBool("BDS_FB");
    }

    bool isBDS_FBValid(void)
    {
        return isValid("BDS_FB");

    }

    void setBDS_FA(bool value)
    {
        write("BDS_FA",value);
    }

    bool getBDS_FA(void)

    {
        return getBool("BDS_FA");
    }

    bool isBDS_FAValid(void)
    {
        return isValid("BDS_FA");

    }

    void setBDS_F9(bool value)
    {
        write("BDS_F9",value);
    }

    bool getBDS_F9(void)

    {
        return getBool("BDS_F9");
    }

    bool isBDS_F9Valid(void)
    {
        return isValid("BDS_F9");

    }

    void setBDS_F8(bool value)
    {
        write("BDS_F8",value);
    }

    bool getBDS_F8(void)

    {
        return getBool("BDS_F8");
    }

    bool isBDS_F8Valid(void)
    {
        return isValid("BDS_F8");

    }

    void setBDS_F7(bool value)
    {
        write("BDS_F7",value);
    }

    bool getBDS_F7(void)

    {
        return getBool("BDS_F7");
    }

    bool isBDS_F7Valid(void)
    {
        return isValid("BDS_F7");

    }

    void setBDS_F6(bool value)
    {
        write("BDS_F6",value);
    }

    bool getBDS_F6(void)

    {
        return getBool("BDS_F6");
    }

    bool isBDS_F6Valid(void)
    {
        return isValid("BDS_F6");

    }

    void setBDS_F5(bool value)
    {
        write("BDS_F5",value);
    }

    bool getBDS_F5(void)

    {
        return getBool("BDS_F5");
    }

    bool isBDS_F5Valid(void)
    {
        return isValid("BDS_F5");

    }

    void setBDS_F4(bool value)
    {
        write("BDS_F4",value);
    }

    bool getBDS_F4(void)

    {
        return getBool("BDS_F4");
    }

    bool isBDS_F4Valid(void)
    {
        return isValid("BDS_F4");

    }

    void setBDS_F3(bool value)
    {
        write("BDS_F3",value);
    }

    bool getBDS_F3(void)

    {
        return getBool("BDS_F3");
    }

    bool isBDS_F3Valid(void)
    {
        return isValid("BDS_F3");

    }

    void setBDS_F2(bool value)
    {
        write("BDS_F2",value);
    }

    bool getBDS_F2(void)

    {
        return getBool("BDS_F2");
    }

    bool isBDS_F2Valid(void)
    {
        return isValid("BDS_F2");

    }

    void setBDS_F1(bool value)
    {
        write("BDS_F1",value);
    }

    bool getBDS_F1(void)

    {
        return getBool("BDS_F1");
    }

    bool isBDS_F1Valid(void)
    {
        return isValid("BDS_F1");

    }

    void setBDS_F0(bool value)
    {
        write("BDS_F0",value);
    }

    bool getBDS_F0(void)

    {
        return getBool("BDS_F0");
    }

    bool isBDS_F0Valid(void)
    {
        return isValid("BDS_F0");

    }

    void setBDS_EF(bool value)
    {
        write("BDS_EF",value);
    }

    bool getBDS_EF(void)

    {
        return getBool("BDS_EF");
    }

    bool isBDS_EFValid(void)
    {
        return isValid("BDS_EF");

    }

    void setBDS_EE(bool value)
    {
        write("BDS_EE",value);
    }

    bool getBDS_EE(void)

    {
        return getBool("BDS_EE");
    }

    bool isBDS_EEValid(void)
    {
        return isValid("BDS_EE");

    }

    void setBDS_ED(bool value)
    {
        write("BDS_ED",value);
    }

    bool getBDS_ED(void)

    {
        return getBool("BDS_ED");
    }

    bool isBDS_EDValid(void)
    {
        return isValid("BDS_ED");

    }

    void setBDS_EC(bool value)
    {
        write("BDS_EC",value);
    }

    bool getBDS_EC(void)

    {
        return getBool("BDS_EC");
    }

    bool isBDS_ECValid(void)
    {
        return isValid("BDS_EC");

    }

    void setBDS_EB(bool value)
    {
        write("BDS_EB",value);
    }

    bool getBDS_EB(void)

    {
        return getBool("BDS_EB");
    }

    bool isBDS_EBValid(void)
    {
        return isValid("BDS_EB");

    }

    void setBDS_EA(bool value)
    {
        write("BDS_EA",value);
    }

    bool getBDS_EA(void)

    {
        return getBool("BDS_EA");
    }

    bool isBDS_EAValid(void)
    {
        return isValid("BDS_EA");

    }

    void setBDS_E9(bool value)
    {
        write("BDS_E9",value);
    }

    bool getBDS_E9(void)

    {
        return getBool("BDS_E9");
    }

    bool isBDS_E9Valid(void)
    {
        return isValid("BDS_E9");

    }

    void setBDS_E8(bool value)
    {
        write("BDS_E8",value);
    }

    bool getBDS_E8(void)

    {
        return getBool("BDS_E8");
    }

    bool isBDS_E8Valid(void)
    {
        return isValid("BDS_E8");

    }

    void setBDS_E7(bool value)
    {
        write("BDS_E7",value);
    }

    bool getBDS_E7(void)

    {
        return getBool("BDS_E7");
    }

    bool isBDS_E7Valid(void)
    {
        return isValid("BDS_E7");

    }

    void setBDS_E6(bool value)
    {
        write("BDS_E6",value);
    }

    bool getBDS_E6(void)

    {
        return getBool("BDS_E6");
    }

    bool isBDS_E6Valid(void)
    {
        return isValid("BDS_E6");

    }

    void setBDS_E5(bool value)
    {
        write("BDS_E5",value);
    }

    bool getBDS_E5(void)

    {
        return getBool("BDS_E5");
    }

    bool isBDS_E5Valid(void)
    {
        return isValid("BDS_E5");

    }

    void setBDS_E4(bool value)
    {
        write("BDS_E4",value);
    }

    bool getBDS_E4(void)

    {
        return getBool("BDS_E4");
    }

    bool isBDS_E4Valid(void)
    {
        return isValid("BDS_E4");

    }

    void setBDS_E3(bool value)
    {
        write("BDS_E3",value);
    }

    bool getBDS_E3(void)

    {
        return getBool("BDS_E3");
    }

    bool isBDS_E3Valid(void)
    {
        return isValid("BDS_E3");

    }

    void setBDS_E2(bool value)
    {
        write("BDS_E2",value);
    }

    bool getBDS_E2(void)

    {
        return getBool("BDS_E2");
    }

    bool isBDS_E2Valid(void)
    {
        return isValid("BDS_E2");

    }

    void setBDS_E1(bool value)
    {
        write("BDS_E1",value);
    }

    bool getBDS_E1(void)

    {
        return getBool("BDS_E1");
    }

    bool isBDS_E1Valid(void)
    {
        return isValid("BDS_E1");

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