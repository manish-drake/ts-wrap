#ifndef __BDSCode19_h
#define __BDSCode19_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode19:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xc;
    CBDSCode19(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode19(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDS_70(bool value)
    {
        write("BDS_70",value);
    }

    bool getBDS_70(void)

    {
        return getBool("BDS_70");
    }

    bool isBDS_70Valid(void)
    {
        return isValid("BDS_70");

    }

    void setBDS_6F(bool value)
    {
        write("BDS_6F",value);
    }

    bool getBDS_6F(void)

    {
        return getBool("BDS_6F");
    }

    bool isBDS_6FValid(void)
    {
        return isValid("BDS_6F");

    }

    void setBDS_6E(bool value)
    {
        write("BDS_6E",value);
    }

    bool getBDS_6E(void)

    {
        return getBool("BDS_6E");
    }

    bool isBDS_6EValid(void)
    {
        return isValid("BDS_6E");

    }

    void setBDS_6D(bool value)
    {
        write("BDS_6D",value);
    }

    bool getBDS_6D(void)

    {
        return getBool("BDS_6D");
    }

    bool isBDS_6DValid(void)
    {
        return isValid("BDS_6D");

    }

    void setBDS_6C(bool value)
    {
        write("BDS_6C",value);
    }

    bool getBDS_6C(void)

    {
        return getBool("BDS_6C");
    }

    bool isBDS_6CValid(void)
    {
        return isValid("BDS_6C");

    }

    void setBDS_6B(bool value)
    {
        write("BDS_6B",value);
    }

    bool getBDS_6B(void)

    {
        return getBool("BDS_6B");
    }

    bool isBDS_6BValid(void)
    {
        return isValid("BDS_6B");

    }

    void setBDS_6A(bool value)
    {
        write("BDS_6A",value);
    }

    bool getBDS_6A(void)

    {
        return getBool("BDS_6A");
    }

    bool isBDS_6AValid(void)
    {
        return isValid("BDS_6A");

    }

    void setBDS_69(bool value)
    {
        write("BDS_69",value);
    }

    bool getBDS_69(void)

    {
        return getBool("BDS_69");
    }

    bool isBDS_69Valid(void)
    {
        return isValid("BDS_69");

    }

    void setBDS_68(bool value)
    {
        write("BDS_68",value);
    }

    bool getBDS_68(void)

    {
        return getBool("BDS_68");
    }

    bool isBDS_68Valid(void)
    {
        return isValid("BDS_68");

    }

    void setBDS_67(bool value)
    {
        write("BDS_67",value);
    }

    bool getBDS_67(void)

    {
        return getBool("BDS_67");
    }

    bool isBDS_67Valid(void)
    {
        return isValid("BDS_67");

    }

    void setBDS_66(bool value)
    {
        write("BDS_66",value);
    }

    bool getBDS_66(void)

    {
        return getBool("BDS_66");
    }

    bool isBDS_66Valid(void)
    {
        return isValid("BDS_66");

    }

    void setBDS_65(bool value)
    {
        write("BDS_65",value);
    }

    bool getBDS_65(void)

    {
        return getBool("BDS_65");
    }

    bool isBDS_65Valid(void)
    {
        return isValid("BDS_65");

    }

    void setBDS_64(bool value)
    {
        write("BDS_64",value);
    }

    bool getBDS_64(void)

    {
        return getBool("BDS_64");
    }

    bool isBDS_64Valid(void)
    {
        return isValid("BDS_64");

    }

    void setBDS_63(bool value)
    {
        write("BDS_63",value);
    }

    bool getBDS_63(void)

    {
        return getBool("BDS_63");
    }

    bool isBDS_63Valid(void)
    {
        return isValid("BDS_63");

    }

    void setBDS_62(bool value)
    {
        write("BDS_62",value);
    }

    bool getBDS_62(void)

    {
        return getBool("BDS_62");
    }

    bool isBDS_62Valid(void)
    {
        return isValid("BDS_62");

    }

    void setBDS_61(bool value)
    {
        write("BDS_61",value);
    }

    bool getBDS_61(void)

    {
        return getBool("BDS_61");
    }

    bool isBDS_61Valid(void)
    {
        return isValid("BDS_61");

    }

    void setBDS_60(bool value)
    {
        write("BDS_60",value);
    }

    bool getBDS_60(void)

    {
        return getBool("BDS_60");
    }

    bool isBDS_60Valid(void)
    {
        return isValid("BDS_60");

    }

    void setBDS_5F(bool value)
    {
        write("BDS_5F",value);
    }

    bool getBDS_5F(void)

    {
        return getBool("BDS_5F");
    }

    bool isBDS_5FValid(void)
    {
        return isValid("BDS_5F");

    }

    void setBDS_5E(bool value)
    {
        write("BDS_5E",value);
    }

    bool getBDS_5E(void)

    {
        return getBool("BDS_5E");
    }

    bool isBDS_5EValid(void)
    {
        return isValid("BDS_5E");

    }

    void setBDS_5D(bool value)
    {
        write("BDS_5D",value);
    }

    bool getBDS_5D(void)

    {
        return getBool("BDS_5D");
    }

    bool isBDS_5DValid(void)
    {
        return isValid("BDS_5D");

    }

    void setBDS_5C(bool value)
    {
        write("BDS_5C",value);
    }

    bool getBDS_5C(void)

    {
        return getBool("BDS_5C");
    }

    bool isBDS_5CValid(void)
    {
        return isValid("BDS_5C");

    }

    void setBDS_5B(bool value)
    {
        write("BDS_5B",value);
    }

    bool getBDS_5B(void)

    {
        return getBool("BDS_5B");
    }

    bool isBDS_5BValid(void)
    {
        return isValid("BDS_5B");

    }

    void setBDS_5A(bool value)
    {
        write("BDS_5A",value);
    }

    bool getBDS_5A(void)

    {
        return getBool("BDS_5A");
    }

    bool isBDS_5AValid(void)
    {
        return isValid("BDS_5A");

    }

    void setBDS_59(bool value)
    {
        write("BDS_59",value);
    }

    bool getBDS_59(void)

    {
        return getBool("BDS_59");
    }

    bool isBDS_59Valid(void)
    {
        return isValid("BDS_59");

    }

    void setBDS_58(bool value)
    {
        write("BDS_58",value);
    }

    bool getBDS_58(void)

    {
        return getBool("BDS_58");
    }

    bool isBDS_58Valid(void)
    {
        return isValid("BDS_58");

    }

    void setBDS_57(bool value)
    {
        write("BDS_57",value);
    }

    bool getBDS_57(void)

    {
        return getBool("BDS_57");
    }

    bool isBDS_57Valid(void)
    {
        return isValid("BDS_57");

    }

    void setBDS_56(bool value)
    {
        write("BDS_56",value);
    }

    bool getBDS_56(void)

    {
        return getBool("BDS_56");
    }

    bool isBDS_56Valid(void)
    {
        return isValid("BDS_56");

    }

    void setBDS_55(bool value)
    {
        write("BDS_55",value);
    }

    bool getBDS_55(void)

    {
        return getBool("BDS_55");
    }

    bool isBDS_55Valid(void)
    {
        return isValid("BDS_55");

    }

    void setBDS_54(bool value)
    {
        write("BDS_54",value);
    }

    bool getBDS_54(void)

    {
        return getBool("BDS_54");
    }

    bool isBDS_54Valid(void)
    {
        return isValid("BDS_54");

    }

    void setBDS_53(bool value)
    {
        write("BDS_53",value);
    }

    bool getBDS_53(void)

    {
        return getBool("BDS_53");
    }

    bool isBDS_53Valid(void)
    {
        return isValid("BDS_53");

    }

    void setBDS_52(bool value)
    {
        write("BDS_52",value);
    }

    bool getBDS_52(void)

    {
        return getBool("BDS_52");
    }

    bool isBDS_52Valid(void)
    {
        return isValid("BDS_52");

    }

    void setBDS_51(bool value)
    {
        write("BDS_51",value);
    }

    bool getBDS_51(void)

    {
        return getBool("BDS_51");
    }

    bool isBDS_51Valid(void)
    {
        return isValid("BDS_51");

    }

    void setBDS_50(bool value)
    {
        write("BDS_50",value);
    }

    bool getBDS_50(void)

    {
        return getBool("BDS_50");
    }

    bool isBDS_50Valid(void)
    {
        return isValid("BDS_50");

    }

    void setBDS_4F(bool value)
    {
        write("BDS_4F",value);
    }

    bool getBDS_4F(void)

    {
        return getBool("BDS_4F");
    }

    bool isBDS_4FValid(void)
    {
        return isValid("BDS_4F");

    }

    void setBDS_4E(bool value)
    {
        write("BDS_4E",value);
    }

    bool getBDS_4E(void)

    {
        return getBool("BDS_4E");
    }

    bool isBDS_4EValid(void)
    {
        return isValid("BDS_4E");

    }

    void setBDS_4D(bool value)
    {
        write("BDS_4D",value);
    }

    bool getBDS_4D(void)

    {
        return getBool("BDS_4D");
    }

    bool isBDS_4DValid(void)
    {
        return isValid("BDS_4D");

    }

    void setBDS_4C(bool value)
    {
        write("BDS_4C",value);
    }

    bool getBDS_4C(void)

    {
        return getBool("BDS_4C");
    }

    bool isBDS_4CValid(void)
    {
        return isValid("BDS_4C");

    }

    void setBDS_4B(bool value)
    {
        write("BDS_4B",value);
    }

    bool getBDS_4B(void)

    {
        return getBool("BDS_4B");
    }

    bool isBDS_4BValid(void)
    {
        return isValid("BDS_4B");

    }

    void setBDS_4A(bool value)
    {
        write("BDS_4A",value);
    }

    bool getBDS_4A(void)

    {
        return getBool("BDS_4A");
    }

    bool isBDS_4AValid(void)
    {
        return isValid("BDS_4A");

    }

    void setBDS_49(bool value)
    {
        write("BDS_49",value);
    }

    bool getBDS_49(void)

    {
        return getBool("BDS_49");
    }

    bool isBDS_49Valid(void)
    {
        return isValid("BDS_49");

    }

    void setBDS_48(bool value)
    {
        write("BDS_48",value);
    }

    bool getBDS_48(void)

    {
        return getBool("BDS_48");
    }

    bool isBDS_48Valid(void)
    {
        return isValid("BDS_48");

    }

    void setBDS_47(bool value)
    {
        write("BDS_47",value);
    }

    bool getBDS_47(void)

    {
        return getBool("BDS_47");
    }

    bool isBDS_47Valid(void)
    {
        return isValid("BDS_47");

    }

    void setBDS_46(bool value)
    {
        write("BDS_46",value);
    }

    bool getBDS_46(void)

    {
        return getBool("BDS_46");
    }

    bool isBDS_46Valid(void)
    {
        return isValid("BDS_46");

    }

    void setBDS_45(bool value)
    {
        write("BDS_45",value);
    }

    bool getBDS_45(void)

    {
        return getBool("BDS_45");
    }

    bool isBDS_45Valid(void)
    {
        return isValid("BDS_45");

    }

    void setBDS_44(bool value)
    {
        write("BDS_44",value);
    }

    bool getBDS_44(void)

    {
        return getBool("BDS_44");
    }

    bool isBDS_44Valid(void)
    {
        return isValid("BDS_44");

    }

    void setBDS_43(bool value)
    {
        write("BDS_43",value);
    }

    bool getBDS_43(void)

    {
        return getBool("BDS_43");
    }

    bool isBDS_43Valid(void)
    {
        return isValid("BDS_43");

    }

    void setBDS_42(bool value)
    {
        write("BDS_42",value);
    }

    bool getBDS_42(void)

    {
        return getBool("BDS_42");
    }

    bool isBDS_42Valid(void)
    {
        return isValid("BDS_42");

    }

    void setBDS_41(bool value)
    {
        write("BDS_41",value);
    }

    bool getBDS_41(void)

    {
        return getBool("BDS_41");
    }

    bool isBDS_41Valid(void)
    {
        return isValid("BDS_41");

    }

    void setBDS_40(bool value)
    {
        write("BDS_40",value);
    }

    bool getBDS_40(void)

    {
        return getBool("BDS_40");
    }

    bool isBDS_40Valid(void)
    {
        return isValid("BDS_40");

    }

    void setBDS_3F(bool value)
    {
        write("BDS_3F",value);
    }

    bool getBDS_3F(void)

    {
        return getBool("BDS_3F");
    }

    bool isBDS_3FValid(void)
    {
        return isValid("BDS_3F");

    }

    void setBDS_3E(bool value)
    {
        write("BDS_3E",value);
    }

    bool getBDS_3E(void)

    {
        return getBool("BDS_3E");
    }

    bool isBDS_3EValid(void)
    {
        return isValid("BDS_3E");

    }

    void setBDS_3D(bool value)
    {
        write("BDS_3D",value);
    }

    bool getBDS_3D(void)

    {
        return getBool("BDS_3D");
    }

    bool isBDS_3DValid(void)
    {
        return isValid("BDS_3D");

    }

    void setBDS_3C(bool value)
    {
        write("BDS_3C",value);
    }

    bool getBDS_3C(void)

    {
        return getBool("BDS_3C");
    }

    bool isBDS_3CValid(void)
    {
        return isValid("BDS_3C");

    }

    void setBDS_3B(bool value)
    {
        write("BDS_3B",value);
    }

    bool getBDS_3B(void)

    {
        return getBool("BDS_3B");
    }

    bool isBDS_3BValid(void)
    {
        return isValid("BDS_3B");

    }

    void setBDS_3A(bool value)
    {
        write("BDS_3A",value);
    }

    bool getBDS_3A(void)

    {
        return getBool("BDS_3A");
    }

    bool isBDS_3AValid(void)
    {
        return isValid("BDS_3A");

    }

    void setBDS_39(bool value)
    {
        write("BDS_39",value);
    }

    bool getBDS_39(void)

    {
        return getBool("BDS_39");
    }

    bool isBDS_39Valid(void)
    {
        return isValid("BDS_39");

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