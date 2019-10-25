/*
 * messsage.cpp
 *
 *  Created on: Oct 13, 2017
 *      Author: qt
 */

#include "message.h"

static const char* ID_TAG="id";


Message::Message(){ }

/*!
  @brief Sets Message Id.
  @param[in] id.
*/
Message::Message(int id){
    setMessageID(id);
}

/*!
  @brief
  @param[in] value.
*/
Message::Message(Json::Value& value){
    fromJSON(value);
}

Message::~Message() { }

/*!
  @brief Returns jsondata as integer.
*/
int	Message::getMessageID(){
    return mjsonData[ID_TAG].asInt();
}

/*!
  @brief Assigns id to the json data ID_TAG.
  @param[in] id contains message Id.
*/
void Message::setMessageID(int id){
    mjsonData[ID_TAG]=id;
}


