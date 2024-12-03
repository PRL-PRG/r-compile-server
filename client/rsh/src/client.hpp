#pragma once
#include "compiler.hpp"
#include "messages.pb.h"
#include "routes.grpc.pb.h"
#include "routes.pb.h"
#include "rsh.hpp"

#include <R.h>
#include <Rinternals.h>
#include <Rversion.h>
#include <cstdint>
#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <string>
#include <unordered_map>
#include <variant>
#include <vector>

namespace rsh {

class Client {
private:
  std::unique_ptr<protocol::CompileService::Stub> stub_;
  static inline SEXP CLIENT_INSTANCE = nullptr;
  static inline SEXP RSH_CLIENT_PTR = Rf_install("RSH_CLIENT");
  static void remove_client(SEXP ptr);

  size_t total_request_bytes = 0;
  size_t total_response_bytes = 0;

  // For it to be able to access the client instance
  friend SEXP init_client(SEXP address, SEXP port, SEXP installed_packages);

public:
  Client(std::shared_ptr<grpc::Channel> channel,
         std::vector<std::string> installed_packages);

  std::variant<protocol::CompileResponse, std::string>
  remote_compile(std::vector<uint8_t> const &rds_closure,
                 CompilerOptions const &opts);

  // Total size of requests and responses since the start of the client
  std::pair<size_t, size_t> get_total_size() const {
    return {total_request_bytes, total_response_bytes};
  }

  static SEXP make_client(SEXP address, SEXP port, SEXP installed_packages);
  static Client *get_client();
};

SEXP get_total_size();

SEXP init_client(SEXP address, SEXP port, SEXP installed_packages);

} // namespace rsh
