#pragma once
#include "messages.pb.h"
#include "routes.pb.h"
#include "routes.grpc.pb.h"
#include "rsh.hpp"
#include "compiler.hpp"

#include <R.h>
#include <Rinternals.h>
#include <Rversion.h>
#include <cstdint>
#include <string>
#include <vector>
#include <variant>
#include <unordered_map>
#include <grpc/grpc.h>
#include <grpcpp/channel.h>

namespace rsh {

class Client {
private:
  std::unique_ptr<protocol::CompileService::Stub> stub_;
  static inline SEXP CLIENT_INSTANCE = nullptr;
  static void remove_client(SEXP ptr);

  // For it to be able to access the client instance
  friend SEXP init_client(SEXP address, SEXP port, SEXP installed_packages);
public:
  Client(std::shared_ptr<grpc::Channel> channel, std::vector<std::string> installed_packages);

  std::variant<protocol::CompileResponse, std::string> remote_compile(
                                std::vector<uint8_t> const &rds_closure,
                                CompilerOptions const &opts);

  static SEXP make_client(SEXP address, SEXP port, SEXP installed_packages);
  static Client* get_client();
};

SEXP init_client(SEXP address, SEXP port, SEXP installed_packages);

} // namespace rsh
