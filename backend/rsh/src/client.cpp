#include "client.h"
#include "protocol.pb.h"
#include <iostream>

namespace rsh {

using namespace server::protocol;

CompileResponse remote_compile(std::string const &name,
                               std::vector<uint8_t> const &rds_closure) {
  zmq::context_t context(1);
  zmq::socket_t socket(context, zmq::socket_type::req);

  std::cout << "Connecting to compile server..." << std::endl;
  socket.connect("tcp://localhost:5555");

  Request request;
  request.mutable_compile()->set_name(name);
  request.mutable_compile()->set_closure(rds_closure.data(),
                                         rds_closure.size());

  zmq::message_t msg(request.ByteSizeLong());
  request.SerializeToArray(msg.data<uint8_t>(), msg.size());
  socket.send(msg, zmq::send_flags::none);

  zmq::message_t reply;
  auto res = socket.recv(reply, zmq::recv_flags::none);
  if (!res.has_value()) {
    CompileResponse response;
    response.set_failure("Error receiving reply");
    return response;
  }

  CompileResponse response;
  response.ParseFromArray(reply.data<uint8_t>(), reply.size());

  return response;
}
} // namespace rsh
