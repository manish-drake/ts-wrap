/*
 * RouterRegisterMessage.cpp
 *
 *  Created on: Oct 31, 2017
 *      Author: qt
 */

#include "routerregistermessage.h"

static const char* NAME_TAG="name";
static const char* ID_TAG="address";
static const char* ADDRESS_URI_TAG="address-uri";
static const char* DYNAMIC_TAG="dynamic";


RouterRegisterMessage::RouterRegisterMessage():Message(MESSAGE_ID) {

}
RouterRegisterMessage::RouterRegisterMessage(Json::Value value):Message(value){

}

RouterRegisterMessage::~RouterRegisterMessage() {

}

/*!
  @brief Returns json data NAME TAG as String.
*/
std::string	RouterRegisterMessage::getEndPointName(){
    return mjsonData[NAME_TAG].asString();
}


/*!
  @brief Assigns name value to NAME Data Tag.
  @param[in] name holds end point name.
*/
void RouterRegisterMessage::setEndPointName(std::string name){
    mjsonData[NAME_TAG]=name;
}

/*!
  @brief Returns ID TAG as integer.
  @param[in] .
*/
int RouterRegisterMessage::getEndPointID(){
    return mjsonData[ID_TAG].asInt();
}

/*!
  @brief Assigns Id value to NAME Data Tag.
  @param[in] id holds end point id.
*/
void RouterRegisterMessage::setEndPointID(int id){
    mjsonData[ID_TAG]=id;
}

/*!
  @brief Returns ADDRESS URI TAG as string.
*/
std::string RouterRegisterMessage::getEndPointURI(){
    return mjsonData[ADDRESS_URI_TAG].asString();
}


/*!
  @brief Assigns uri value to ADDRESS URI TAG.
  @param[in] uri is the end point uri.
*/
void RouterRegisterMessage::setEndPointURI(std::string uri){
    mjsonData[ADDRESS_URI_TAG]=uri;
}

/*!
  @brief
  @param[in] b holds true/false value.
*/
void RouterRegisterMessage::setDynamic(bool b){
    mjsonData[DYNAMIC_TAG]=b;
}

/*!
  @brief Returns DYNAMIC TAG as boolean.
*/
bool RouterRegisterMessage::isDynamic(){
    return mjsonData[DYNAMIC_TAG].asBool();
}
