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

Client::Client(std::shared_ptr<Channel> channel, vector<string> installed_packages) : stub_(Routes::NewStub(channel)) {

    InitRequest request;
    // Rsh version
    request.mutable_rsh_version()->set_major(0);
    request.mutable_rsh_version()->set_minor(1);
    request.mutable_rsh_version()->set_patch(0);

    // R version (see Rversion.h)
    request.mutable_r_version()->set_major(R_VERSION / 65536);
    request.mutable_r_version()->set_minor(R_VERSION % 65536 / 256);
    request.mutable_r_version()->set_patch(R_VERSION % 256);

    request.set_platform(R_PLATFORM); // Or get it from the R side? R.version would have it for instance
    // We could also get the OS and so on

    // TODO: compute hashes of package contents (maybe rdb/rdx and so on)
    // instead of just writing package names here.
    for(auto const& package : installed_packages) {
      request.add_package_hash(package);
    }


    InitResponse response;
    ClientContext context;
    Status status = _stub->Init(&context, request, &response);
    if(!status.ok()) {
      std::err << status.error_code() << ": " << status.error_message()
                << std::endl;
      exit(1);
    }
    else {
      std::cout << "Connected to server" << std::endl;
    }
  }

CompileResponse Client::remote_compile(std::string const& name, 
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

SEXP init_client(SEXP address, SEXP port, SEXP installed_packages) {
  auto addr = CHAR(STRING_ELT(address, 0));
  auto p = INTEGER(port)[0];
  std::string address_str(addr);
  address_str += ":" + std::to_string(p);

  std::vector<std::string> packages;
  for(int i = 0; i < LENGTH(installed_packages); ++i) {
    packages.push_back(CHAR(STRING_ELT(installed_packages, i)));
  }

  auto channel = grpc::CreateChannel(address_str, grpc::InsecureChannelCredentials());
  auto client = new Client(channel, packages);
  // TODO: we should also store that in a global variable as for CMP_FUN
  return R_MakeExternalPtr(client, Rf_install("RSH_CLIENT"), R_NilValue);
}

} // namespace rsh
