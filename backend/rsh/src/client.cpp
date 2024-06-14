#include "client.h"
#include <iostream>

compile_result compile(std::vector<uint8_t> rds_closure) {
  zmq::context_t context(1);
  zmq::socket_t socket(context, zmq::socket_type::req);

  std::cout << "Connecting to hello world server..." << std::endl;
  socket.connect("tcp://localhost:5555");

  zmq::message_t request(rds_closure.size() + 1);
  request.data<uint8_t>()[0] = 1;
  std::copy(rds_closure.begin(), rds_closure.end(),
            request.data<uint8_t>() + 1);
  socket.send(request, zmq::send_flags::none);

  //  Get the reply.
  zmq::message_t reply;
  auto res = socket.recv(reply, zmq::recv_flags::none);
  if (!res.has_value()) {
    return std::string("Error receiving reply");
  }

  uint8_t *data = reply.data<uint8_t>();

  if (*data != 0) {
    return reply.to_string();
  }
  data++;

  std::vector<uint8_t> payload;
  for (size_t i = 1; i < reply.size(); i++, data++) {
    payload.push_back(*data);
  }
  // payload.reserve(reply.size() - 1);
  payload.resize(reply.size() - 1);
  memcpy(payload.data(), (void *)(reply.data<uint8_t>() + 1), reply.size() - 1);

  return payload;
}
