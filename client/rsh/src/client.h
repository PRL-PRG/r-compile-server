#pragma once
#include "messages.pb.h"
#include "routes.pb.h"
#include "routes.grpc.pb.h"
#include "rsh.h"
#include <R.h>
#include <Rinternals.h>
#include <Rversion.h>
#include <cstdint>
#include <string>
#include <vector>
#include <zmq.hpp>
#include <grpc/grpc.h>
#include <grpcpp/channel.h>

namespace rsh {

class Client {
private:
  std::unique_ptr<protocol::CompileService::Stub> stub_;

public:
  Client(std::shared_ptr<grpc::Channel> channel, std::vector<std::string> installed_packages);

  protocol::CompileResponse remote_compile(std::string const& name, 
                                std::vector<uint8_t> const &rds_closure,
                                protocol::Tier tier,
                                int32_t optimization_level);
};

SEXP init_client(SEXP address, SEXP port, SEXP installed_packages);

} // namespace rsh
