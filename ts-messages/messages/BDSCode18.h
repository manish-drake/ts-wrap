#ifndef __BDSCode18_h
#define __BDSCode18_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode18:public TServerMessage
{
    const int mFormatVersion = 0;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xb;
    CBDSCode18(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode18(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDS_38(bool value)
    {
        write("BDS_38",value);
    }

    bool getBDS_38(void)

    {
        return getBool("BDS_38");
    }

    bool isBDS_38Valid(void)
    {
        return isValid("BDS_38");

    }

    void setBDS_37(bool value)
    {
        write("BDS_37",value);
    }

    bool getBDS_37(void)

    {
        return getBool("BDS_37");
    }

    bool isBDS_37Valid(void)
    {
        return isValid("BDS_37");

    }

    void setBDS_36(bool value)
    {
        write("BDS_36",value);
    }

    bool getBDS_36(void)

    {
        return getBool("BDS_36");
    }

    bool isBDS_36Valid(void)
    {
        return isValid("BDS_36");

    }

    void setBDS_35(bool value)
    {
        write("BDS_35",value);
    }

    bool getBDS_35(void)

    {
        return getBool("BDS_35");
    }

    bool isBDS_35Valid(void)
    {
        return isValid("BDS_35");

    }

    void setBDS_34(bool value)
    {
        write("BDS_34",value);
    }

    bool getBDS_34(void)

    {
        return getBool("BDS_34");
    }

    bool isBDS_34Valid(void)
    {
        return isValid("BDS_34");

    }

    void setBDS_33(bool value)
    {
        write("BDS_33",value);
    }

    bool getBDS_33(void)

    {
        return getBool("BDS_33");
    }

    bool isBDS_33Valid(void)
    {
        return isValid("BDS_33");

    }

    void setBDS_32(bool value)
    {
        write("BDS_32",value);
    }

    bool getBDS_32(void)

    {
        return getBool("BDS_32");
    }

    bool isBDS_32Valid(void)
    {
        return isValid("BDS_32");

    }

    void setBDS_31(bool value)
    {
        write("BDS_31",value);
    }

    bool getBDS_31(void)

    {
        return getBool("BDS_31");
    }

    bool isBDS_31Valid(void)
    {
        return isValid("BDS_31");

    }

    void setBDS_30(bool value)
    {
        write("BDS_30",value);
    }

    bool getBDS_30(void)

    {
        return getBool("BDS_30");
    }

    bool isBDS_30Valid(void)
    {
        return isValid("BDS_30");

    }

    void setBDS_2F(bool value)
    {
        write("BDS_2F",value);
    }

    bool getBDS_2F(void)

    {
        return getBool("BDS_2F");
    }

    bool isBDS_2FValid(void)
    {
        return isValid("BDS_2F");

    }

    void setBDS_2E(bool value)
    {
        write("BDS_2E",value);
    }

    bool getBDS_2E(void)

    {
        return getBool("BDS_2E");
    }

    bool isBDS_2EValid(void)
    {
        return isValid("BDS_2E");

    }

    void setBDS_2D(bool value)
    {
        write("BDS_2D",value);
    }

    bool getBDS_2D(void)

    {
        return getBool("BDS_2D");
    }

    bool isBDS_2DValid(void)
    {
        return isValid("BDS_2D");

    }

    void setBDS_2C(bool value)
    {
        write("BDS_2C",value);
    }

    bool getBDS_2C(void)

    {
        return getBool("BDS_2C");
    }

    bool isBDS_2CValid(void)
    {
        return isValid("BDS_2C");

    }

    void setBDS_2B(bool value)
    {
        write("BDS_2B",value);
    }

    bool getBDS_2B(void)

    {
        return getBool("BDS_2B");
    }

    bool isBDS_2BValid(void)
    {
        return isValid("BDS_2B");

    }

    void setBDS_2A(bool value)
    {
        write("BDS_2A",value);
    }

    bool getBDS_2A(void)

    {
        return getBool("BDS_2A");
    }

    bool isBDS_2AValid(void)
    {
        return isValid("BDS_2A");

    }

    void setBDS_29(bool value)
    {
        write("BDS_29",value);
    }

    bool getBDS_29(void)

    {
        return getBool("BDS_29");
    }

    bool isBDS_29Valid(void)
    {
        return isValid("BDS_29");

    }

    void setBDS_28(bool value)
    {
        write("BDS_28",value);
    }

    bool getBDS_28(void)

    {
        return getBool("BDS_28");
    }

    bool isBDS_28Valid(void)
    {
        return isValid("BDS_28");

    }

    void setBDS_27(bool value)
    {
        write("BDS_27",value);
    }

    bool getBDS_27(void)

    {
        return getBool("BDS_27");
    }

    bool isBDS_27Valid(void)
    {
        return isValid("BDS_27");

    }

    void setBDS_26(bool value)
    {
        write("BDS_26",value);
    }

    bool getBDS_26(void)

    {
        return getBool("BDS_26");
    }

    bool isBDS_26Valid(void)
    {
        return isValid("BDS_26");

    }

    void setBDS_25(bool value)
    {
        write("BDS_25",value);
    }

    bool getBDS_25(void)

    {
        return getBool("BDS_25");
    }

    bool isBDS_25Valid(void)
    {
        return isValid("BDS_25");

    }

    void setBDS_24(bool value)
    {
        write("BDS_24",value);
    }

    bool getBDS_24(void)

    {
        return getBool("BDS_24");
    }

    bool isBDS_24Valid(void)
    {
        return isValid("BDS_24");

    }

    void setBDS_23(bool value)
    {
        write("BDS_23",value);
    }

    bool getBDS_23(void)

    {
        return getBool("BDS_23");
    }

    bool isBDS_23Valid(void)
    {
        return isValid("BDS_23");

    }

    void setBDS_22(bool value)
    {
        write("BDS_22",value);
    }

    bool getBDS_22(void)

    {
        return getBool("BDS_22");
    }

    bool isBDS_22Valid(void)
    {
        return isValid("BDS_22");

    }

    void setBDS_21(bool value)
    {
        write("BDS_21",value);
    }

    bool getBDS_21(void)

    {
        return getBool("BDS_21");
    }

    bool isBDS_21Valid(void)
    {
        return isValid("BDS_21");

    }

    void setBDS_20(bool value)
    {
        write("BDS_20",value);
    }

    bool getBDS_20(void)

    {
        return getBool("BDS_20");
    }

    bool isBDS_20Valid(void)
    {
        return isValid("BDS_20");

    }

    void setBDS_1F(bool value)
    {
        write("BDS_1F",value);
    }

    bool getBDS_1F(void)

    {
        return getBool("BDS_1F");
    }

    bool isBDS_1FValid(void)
    {
        return isValid("BDS_1F");

    }

    void setBDS_1E(bool value)
    {
        write("BDS_1E",value);
    }

    bool getBDS_1E(void)

    {
        return getBool("BDS_1E");
    }

    bool isBDS_1EValid(void)
    {
        return isValid("BDS_1E");

    }

    void setBDS_1D(bool value)
    {
        write("BDS_1D",value);
    }

    bool getBDS_1D(void)

    {
        return getBool("BDS_1D");
    }

    bool isBDS_1DValid(void)
    {
        return isValid("BDS_1D");

    }

    void setBDS_1C(bool value)
    {
        write("BDS_1C",value);
    }

    bool getBDS_1C(void)

    {
        return getBool("BDS_1C");
    }

    bool isBDS_1CValid(void)
    {
        return isValid("BDS_1C");

    }

    void setBDS_1B(bool value)
    {
        write("BDS_1B",value);
    }

    bool getBDS_1B(void)

    {
        return getBool("BDS_1B");
    }

    bool isBDS_1BValid(void)
    {
        return isValid("BDS_1B");

    }

    void setBDS_1A(bool value)
    {
        write("BDS_1A",value);
    }

    bool getBDS_1A(void)

    {
        return getBool("BDS_1A");
    }

    bool isBDS_1AValid(void)
    {
        return isValid("BDS_1A");

    }

    void setBDS_19(bool value)
    {
        write("BDS_19",value);
    }

    bool getBDS_19(void)

    {
        return getBool("BDS_19");
    }

    bool isBDS_19Valid(void)
    {
        return isValid("BDS_19");

    }

    void setBDS_18(bool value)
    {
        write("BDS_18",value);
    }

    bool getBDS_18(void)

    {
        return getBool("BDS_18");
    }

    bool isBDS_18Valid(void)
    {
        return isValid("BDS_18");

    }

    void setBDS_17(bool value)
    {
        write("BDS_17",value);
    }

    bool getBDS_17(void)

    {
        return getBool("BDS_17");
    }

    bool isBDS_17Valid(void)
    {
        return isValid("BDS_17");

    }

    void setBDS_16(bool value)
    {
        write("BDS_16",value);
    }

    bool getBDS_16(void)

    {
        return getBool("BDS_16");
    }

    bool isBDS_16Valid(void)
    {
        return isValid("BDS_16");

    }

    void setBDS_15(bool value)
    {
        write("BDS_15",value);
    }

    bool getBDS_15(void)

    {
        return getBool("BDS_15");
    }

    bool isBDS_15Valid(void)
    {
        return isValid("BDS_15");

    }

    void setBDS_14(bool value)
    {
        write("BDS_14",value);
    }

    bool getBDS_14(void)

    {
        return getBool("BDS_14");
    }

    bool isBDS_14Valid(void)
    {
        return isValid("BDS_14");

    }

    void setBDS_13(bool value)
    {
        write("BDS_13",value);
    }

    bool getBDS_13(void)

    {
        return getBool("BDS_13");
    }

    bool isBDS_13Valid(void)
    {
        return isValid("BDS_13");

    }

    void setBDS_12(bool value)
    {
        write("BDS_12",value);
    }

    bool getBDS_12(void)

    {
        return getBool("BDS_12");
    }

    bool isBDS_12Valid(void)
    {
        return isValid("BDS_12");

    }

    void setBDS_11(bool value)
    {
        write("BDS_11",value);
    }

    bool getBDS_11(void)

    {
        return getBool("BDS_11");
    }

    bool isBDS_11Valid(void)
    {
        return isValid("BDS_11");

    }

    void setBDS_10(bool value)
    {
        write("BDS_10",value);
    }

    bool getBDS_10(void)

    {
        return getBool("BDS_10");
    }

    bool isBDS_10Valid(void)
    {
        return isValid("BDS_10");

    }

    void setBDS_0F(bool value)
    {
        write("BDS_0F",value);
    }

    bool getBDS_0F(void)

    {
        return getBool("BDS_0F");
    }

    bool isBDS_0FValid(void)
    {
        return isValid("BDS_0F");

    }

    void setBDS_0E(bool value)
    {
        write("BDS_0E",value);
    }

    bool getBDS_0E(void)

    {
        return getBool("BDS_0E");
    }

    bool isBDS_0EValid(void)
    {
        return isValid("BDS_0E");

    }

    void setBDS_0D(bool value)
    {
        write("BDS_0D",value);
    }

    bool getBDS_0D(void)

    {
        return getBool("BDS_0D");
    }

    bool isBDS_0DValid(void)
    {
        return isValid("BDS_0D");

    }

    void setBDS_0C(bool value)
    {
        write("BDS_0C",value);
    }

    bool getBDS_0C(void)

    {
        return getBool("BDS_0C");
    }

    bool isBDS_0CValid(void)
    {
        return isValid("BDS_0C");

    }

    void setBDS_0B(bool value)
    {
        write("BDS_0B",value);
    }

    bool getBDS_0B(void)

    {
        return getBool("BDS_0B");
    }

    bool isBDS_0BValid(void)
    {
        return isValid("BDS_0B");

    }

    void setBDS_0A(bool value)
    {
        write("BDS_0A",value);
    }

    bool getBDS_0A(void)

    {
        return getBool("BDS_0A");
    }

    bool isBDS_0AValid(void)
    {
        return isValid("BDS_0A");

    }

    void setBDS_09(bool value)
    {
        write("BDS_09",value);
    }

    bool getBDS_09(void)

    {
        return getBool("BDS_09");
    }

    bool isBDS_09Valid(void)
    {
        return isValid("BDS_09");

    }

    void setBDS_08(bool value)
    {
        write("BDS_08",value);
    }

    bool getBDS_08(void)

    {
        return getBool("BDS_08");
    }

    bool isBDS_08Valid(void)
    {
        return isValid("BDS_08");

    }

    void setBDS_07(bool value)
    {
        write("BDS_07",value);
    }

    bool getBDS_07(void)

    {
        return getBool("BDS_07");
    }

    bool isBDS_07Valid(void)
    {
        return isValid("BDS_07");

    }

    void setBDS_06(bool value)
    {
        write("BDS_06",value);
    }

    bool getBDS_06(void)

    {
        return getBool("BDS_06");
    }

    bool isBDS_06Valid(void)
    {
        return isValid("BDS_06");

    }

    void setBDS_05(bool value)
    {
        write("BDS_05",value);
    }

    bool getBDS_05(void)

    {
        return getBool("BDS_05");
    }

    bool isBDS_05Valid(void)
    {
        return isValid("BDS_05");

    }

    void setBDS_04(bool value)
    {
        write("BDS_04",value);
    }

    bool getBDS_04(void)

    {
        return getBool("BDS_04");
    }

    bool isBDS_04Valid(void)
    {
        return isValid("BDS_04");

    }

    void setBDS_03(bool value)
    {
        write("BDS_03",value);
    }

    bool getBDS_03(void)

    {
        return getBool("BDS_03");
    }

    bool isBDS_03Valid(void)
    {
        return isValid("BDS_03");

    }

    void setBDS_02(bool value)
    {
        write("BDS_02",value);
    }

    bool getBDS_02(void)

    {
        return getBool("BDS_02");
    }

    bool isBDS_02Valid(void)
    {
        return isValid("BDS_02");

    }

    void setBDS_01(bool value)
    {
        write("BDS_01",value);
    }

    bool getBDS_01(void)

    {
        return getBool("BDS_01");
    }

    bool isBDS_01Valid(void)
    {
        return isValid("BDS_01");

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