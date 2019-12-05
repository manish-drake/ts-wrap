#include "zclient.h"
#include <thread>
#include <exception>

/*!
  @brief Sends the zclient message request.
  @param[in] msg .
  @details
*/
string ZClient::Send(const string &msg)
{
    try {
        zmq::message_t message(msg.size());
        memcpy(message.data(), msg.c_str(), msg.size());
        m_socket->send(message);

        zmq::message_t reply;
        m_socket->recv(&reply);
        std::string smessage(static_cast<char *>(reply.data()), reply.size());
        Logger::Instance()->Log(Level::Info, "zclient", smessage);
        return smessage;
    }
    catch(const zmq::error_t  &e)
    {
        Logger::Instance()->Log(Level::Err, "ZMQ Client", "Error sending message: %s", e.what());
        char err[255] = {0};
        sprintf(err, "zmq_err:%s", e.what());
        return err;
    }
}

/*!
  @brief Returns zmq message.
  @param[in] msg, [out] serverEndpoint .
  @details
*/
string ZClient::SendAsync(const char *serverEndpoint, const string &msg)
{
    std::string smessage = "";
    std::thread th_send([&smessage](const char *serverEndpoint, const string &msg) {
        try {
            zmq::socket_t sock(*context, ZMQ_REQ);
            sock.connect(serverEndpoint);
            zmq::message_t message(msg.size());
            memcpy(message.data(), msg.c_str(), msg.size());
            Logger::Instance()->Log(Level::Info, "zclient", "Sending:%s", msg.c_str());
            sock.send(message);

            zmq::message_t reply;
            sock.recv(&reply);
            smessage = static_cast<char *>(reply.data()); //, reply.size());
            Logger::Instance()->Log(Level::Info, "zclient", "Received:%s", smessage.c_str());
            sock.close();
        }
        catch(const zmq::error_t  &e)
        {
            Logger::Instance()->Log(Level::Err, "ZMQ Client", "Error sending message async: %s", e.what());
            if(e.num() == ETERM)
            {
                throw;
            }
        }
    },
    serverEndpoint, msg);
    th_send.join();
    return smessage;
}

/*!
  @brief Closes the socket.
*/
void ZClient::Close()
{
    m_socket->close();
}
