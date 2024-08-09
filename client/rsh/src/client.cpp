#include "client.h"
#include "messages.pb.h"
#include "routes.pb.h"
#include <iostream>

namespace rsh {

using namespace server::protocol;

CompileResponse remote_compile(std::string const &name,
                               std::vector<uint8_t> const &rds_closure,
                               u32 opt_level) {
  zmq::context_t context(1);
  zmq::socket_t socket(context, zmq::socket_type::req);

  std::cout << "Connecting to compile server..." << std::endl;
  socket.connect("tcp://localhost:5555");

  Request request;
  request.mutable_compile()->set_name(name);
  request.mutable_compile()->set_bc_optimization(3);
  request.mutable_compile()->set_cc_optimization(opt_level);
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

class Client {
private:
  std::unique_ptr<RouteGuide::Stub> stub_;

public:
  Client(std::shared_ptr<Channel> channel) : stub_(Routes::NewStub(channel)) {

    // TODO: send handshake here?
  }

  CompileResponse remote_compile(std::string const& name, 
                                std::vector<uint8_t> const &rds_closure,
                                Tier tier,
                                int32_t optimization_level) {

    CompileRequest request;
    request.set_tier(tier);
    request.set_optimization_level(optimization_level);
    request.mutable_function().set_name(name);
    request.mutable_function().set_body(rds_closure.data(), rds_closure.size());

    // TODO: Actually compile the hash
    std::array<uint8_t,64> hash = {0};
    request.mutable_function().set_hash(hash.data(), hash.size());

    ClientContext context;
    CompileResponse response;
    Status status = _stub->Compile(&context, request, &response);
    if(!status.ok()) {
      std::err << status.error_code() << ": " << status.error_message()
                << std::endl;
      exit(1);//TODO: rather return an optional?
    }
    else {
      return response;
    }
  }
};

} // namespace rsh
