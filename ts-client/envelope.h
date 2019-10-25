/*
 * ENVELOPE.h
 *
 *  Created on: Oct 12, 2017
 *      Author: qt
 */

#ifndef ENVELOPE_H_
#define ENVELOPE_H_

#include "jsonmessagebase.h"
#include "message.h"

/*!
  @class Functions getSource returns Source TAG as integer, setSource Assigns source value to JSON Data Source Tag ,
  getDestination, setDestination Returns DESTINATION_TAG TAG as integer, getSequence Returns SEQUENCE TAG as integer,
  setSequence Returns SEQUENCE TAG as integer, getMessage Returns message, setMessage Assigns message value to MESSAGE Data Source Tag,
  getStatus Returns STATUS TAG as integer, setStatus Assigns status value to STATUS Data Tag, getStatusCode Returns STATUS CODE TAG as integer,
  setStatusCode Assigns integer i value to STATUS CODE Tag.
*/
class Envelope:public JsonMessageBase {

public:
    static const int REPLY_OK=0;
    static const int BAD_DESTINATION=1;
    static const int MISSING_DESTINATION=2;
    static const int INTERNAL_ERROR=3;
    static const int UNREACHABLE=4;
    static const int TRANSPORT_ERROR=5;
    static const int NO_REPLY=6;
    static const int REPLY_ERROR=7;


public:
                            Envelope();
    virtual 				~Envelope();
    int						getSource();
    void					setSource(int source);
    int						getDestination();
    void					setDestination(int destination);
    int						getSequence();
    void					setSequence(int sequence);
    Message					getMessage();
    void					setMessage(Message message);
    std::string				getStatus();
    void					setStatus(std::string status);
    int						getStatusCode();
    void					setStatusCode(int code);
    static inline Envelope  fromString(const std::string& jsonString)
    {
        Json::Reader reader;
        Json::Value root;
        Envelope envelope;
        bool okay = reader.parse(jsonString, root);
        if(okay)
        {
            envelope.fromJSON(root);
        }
        return envelope;
    }

    std::string getAddress();

};

#endif /* ENVELOPE_H_ */
