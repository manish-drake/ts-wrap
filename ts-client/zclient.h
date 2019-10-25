#ifndef ZCLIENT_H
#define ZCLIENT_H

#include <iostream>
#include <zmq.hpp>
#include <memory>
#include "socketpool.h"
#include "logger.h"

class ZClient;

using std::string;
using up_client = std::unique_ptr<ZClient>;
using up_socket = std::unique_ptr<zmq::socket_t>;

/*!
  @class Functions Connect, Send Sends the zclient message request, SendAsync Returns zmq message, Close Closes the socket.
*/
class ZClient
{
private:
  ZClient(zmq::socket_t *socket) : m_socket{socket} {}
  up_socket m_socket;

public:
  static up_client Connect(const char *serverEndpoint)
  {
    Logger::Instance()->Log(Level::Info, "zclient", "@@@Trying to make connection");
    up_client client(new ZClient(new zmq::socket_t(*context, ZMQ_REQ)));
    client->m_socket->connect(serverEndpoint);
    return std::move(client);
  }
  string Send(const string &message);
  string SendAsync(const char *serverEndpoint, const string &msg);
  void Close();
};

#endif // ZCLIENT_H
