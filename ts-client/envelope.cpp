/*
 * ENVELOPE.cpp
 *
 *  Created on: Oct 12, 2017
 *      Author: qt
 */

#include "envelope.h"

static const char* MESSAGE_TAG="message";
static const char* REQUEST_TAG="request";
static const char* ADDRESS_TAG="address";
static const char* SOURCE_TAG="source";
static const char* DESTINATION_TAG="destination";
static const char* SEQUENCE_TAG="sequence";
static const char* STATUS_TAG="status";
static const char* STATUS_CODE_TAG="status-code";

Envelope::Envelope() {

}

Envelope::~Envelope() {

}

/*!
  @brief Returns Source TAG as integer.
*/
int	 Envelope::getSource(){
    return mjsonData[SOURCE_TAG].asInt();
}

/*!
  @brief Assigns source value to JSON Data Source Tag .
*/
void Envelope::setSource(int source){
    mjsonData[SOURCE_TAG]=source;
}

/*!
  @brief Returns DESTINATION_TAG TAG as integer .
*/
int	 Envelope::getDestination(){
    return mjsonData[DESTINATION_TAG].asInt();
}

/*!
  @brief Assigns destination value to DESTINATION Data Source Tag.
*/
void Envelope::setDestination(int destination){
    mjsonData[DESTINATION_TAG]=destination;
}


/*!
  @brief Returns SEQUENCE TAG as integer.
*/
int	 Envelope::getSequence(){
    return mjsonData[SEQUENCE_TAG].asInt();
}

/*!
  @brief Assigns sequence value to SEQUENCE Data Source Tag.
*/
void Envelope::setSequence(int sequence){
    mjsonData[SEQUENCE_TAG]=sequence;
}

/*!
  @brief Returns message.
*/
Message Envelope::getMessage(){
    Message message;
    message.fromJSON(mjsonData[MESSAGE_TAG]);
    return message ;
}

/*!
  @brief Assigns message value to MESSAGE Data Source Tag  .
*/
void Envelope::setMessage(Message message){
    mjsonData[MESSAGE_TAG]=message.toJSON();
}

/*!
  @brief Returns STATUS TAG as integer.
*/
std::string Envelope::getStatus(){
    return mjsonData[STATUS_TAG].asString();
}

/*!
  @brief Assigns status value to STATUS Data Tag .
*/
void Envelope::setStatus(std::string status){
    mjsonData[STATUS_TAG]=status;
}

/*!
  @brief Returns STATUS CODE TAG as integer.
*/
int Envelope::getStatusCode(){
    return mjsonData[STATUS_CODE_TAG].asInt();
}

/*!
  @brief Assigns integer i value to STATUS CODE Tag.
*/
void Envelope::setStatusCode(int i){
    mjsonData[STATUS_CODE_TAG]=i;
}

/*!
  @brief .
*/
std::string Envelope::getAddress()
{
    return mjsonData[MESSAGE_TAG][REQUEST_TAG][ADDRESS_TAG].asString();
}
