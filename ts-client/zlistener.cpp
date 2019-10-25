#include "zlistener.h"
#include <zmq.hpp>
#include <exception>
#include "socketpool.h"

/*!
  @brief Sends the Zlistener message.
  @param[in] func .
  @details
*/
void ZListener::RunAsync(lsn_callback func)
{
    m_callback = func;
    std::thread([](ZListener *listener) {
        zmq::socket_t socket(*context, ZMQ_REP);
        socket.bind(listener->m_localEndpoint.c_str());
        zmq::pollitem_t items[] = {
            {socket, 0, ZMQ_POLLIN, 0}
        };
        listener->m_run = 1;
        while (listener->m_run)
        {
            zmq::message_t message;
            zmq::poll(&items[0], 1, 500);

            if (items[0].revents & ZMQ_POLLIN)
            {
                socket.recv(&message);
                std::string smessage(static_cast<char *>(message.data()), message.size());
                string response = listener->m_callback(smessage);
                if (response.size() > 0)
                {
                    zmq::message_t responseMsg(response.size());
                    memcpy(responseMsg.data(), response.c_str(), response.size());
                    socket.send(responseMsg);
                }
            }
        }
        socket.unbind(listener->m_localEndpoint.c_str());
        socket.close();
    }, this)
    .detach();
}

/*!
  @brief Sets the z_run to zero.
*/
void ZListener::Stop()
{
    m_run = 0;
}
ZListener::ZListener(std::string localEndpoint) :
    m_localEndpoint{localEndpoint},
    m_run{0}
{
}
