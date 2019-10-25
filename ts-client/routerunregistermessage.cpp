/*
 * RouterRegisterMessage.cpp
 *
 *  Created on: Oct 31, 2017
 *      Author: qt
 */

#include "routerunregistermessage.h"

static const char* NAME_TAG="name";
static const char* ID_TAG="address";
//static const char* ADDRESS_URI_TAG="address-uri";     //ADDRESS_URI_TAG defined but not used


RouterUnregisterMessage::RouterUnregisterMessage():Message(MESSAGE_ID) {

}

RouterUnregisterMessage::RouterUnregisterMessage(Json::Value value):Message(value){

}

RouterUnregisterMessage::~RouterUnregisterMessage() {

}

/*!
  @brief Returns Name tag as integer.
*/
std::string	RouterUnregisterMessage::getEndPointName(){
    return mjsonData[NAME_TAG].asString();
}

/*!
  @brief Assigns name value to NAME Data Tag.
  @param[in] name contains point name.
*/
void RouterUnregisterMessage::setEndPointName(std::string name){
    mjsonData[NAME_TAG]=name;
}

/*!
  @brief Returns ID tag as integer.
*/
int RouterUnregisterMessage::getEndPointID(){
    return mjsonData[ID_TAG].asInt();
}

/*!
  @brief Assigns Id value to ID TAG Tag.
  @param[in] Id contains point id.
*/
void RouterUnregisterMessage::setEndPointID(int id){
    mjsonData[ID_TAG]=id;
}

