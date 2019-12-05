#ifndef SOCKETPOOL_H
#define SOCKETPOOL_H

#include <zmq.hpp>
#include <memory>

using up_context = std::unique_ptr<zmq::context_t>;

static up_context context(new zmq::context_t(1));

#endif // SOCKETPOOL_H
