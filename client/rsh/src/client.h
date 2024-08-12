#pragma once
#include "protocol.pb.h"
#include "rsh.h"
#include <R.h>
#include <Rinternals.h>
#include <Rversion.h>
#include <cstdint>
#include <string>
#include <vector>
#include <zmq.hpp>

namespace rsh {

using namespace server::protocol;

// TODO: compiler a CLOSXP
CompileResponse remote_compile(std::string const &name,
                               std::vector<uint8_t> const &rds_closure,
                               u32 opt_level);

class Client {
private:
  std::unique_ptr<RouteGuide::Stub> stub_;

public:
  Client(std::shared_ptr<Channel> channel) : stub_(Routes::NewStub(channel));

  CompileResponse remote_compile(std::string const& name, 
                                std::vector<uint8_t> const &rds_closure,
                                Tier tier,
                                int32_t optimization_level);
};

SEXP init_client(SEXP address, SEXP port, SEXP installed_packages);

} // namespace rsh
