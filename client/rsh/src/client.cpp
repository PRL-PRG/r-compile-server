#include "client.hpp"
#include "serialize.hpp"
#include "xxhash.h"

#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <iostream>

namespace rsh {

Client::Client(std::shared_ptr<grpc::Channel> channel,
               std::vector<std::string> installed_packages)
    : stub_(protocol::CompileService::NewStub(channel)) {
  using namespace protocol;
  InitRequest request;
  // Rsh version
  request.mutable_rsh_version()->set_major(0);
  request.mutable_rsh_version()->set_minor(1);
  request.mutable_rsh_version()->set_patch(0);

  // R version (see Rversion.h)
  request.mutable_r_version()->set_major(R_VERSION / 65536);
  request.mutable_r_version()->set_minor(R_VERSION % 65536 / 256);
  request.mutable_r_version()->set_patch(R_VERSION % 256);

  SEXP r_platform = Rf_findVar(Rf_install("R.version"), R_BaseEnv);
  // we could also extract the R version from there
  // the platform is R.version$platform and is the st element of the list
  request.set_platform(
      CHAR(STRING_ELT(VECTOR_ELT(r_platform, 0), 0))); // or R_PLATFORM?

  // TODO: compute hashes of package contents (maybe rdb/rdx and so on)
  // instead of just writing package names here.
  for (auto const &package : installed_packages) {
    request.add_package_hash(package);
  }

  InitResponse response;
  grpc::ClientContext context;
  grpc::Status status = stub_->Init(&context, request, &response);
  if (!status.ok()) {
    Rf_error("Failed to connect to the server: %d %s\n", status.error_code(),
             status.error_message().c_str());
  } else {
    Rprintf("Connected to the server\n");
  }
}

std::variant<protocol::CompileResponse, std::string>
Client::remote_compile(std::vector<uint8_t> const &rds_closure,
                       CompilerOptions const &options) {
  using namespace protocol;

  CompileRequest request;
  request.set_tier(options.tier);
  request.set_bc_opt(options.bc_opt);
  request.mutable_function()->set_name(options.name);
  request.set_cc_opt(options.cc_opt);
  request.set_no_cache(!options.cache);
  request.mutable_function()->set_body(rds_closure.data(), rds_closure.size());

  // We replace the body of a function with its compiled version so it would not
  // make
  // sense to compute its hash again, except if its body has changed.
  uint64_t hash = XXH3_64bits(rds_closure.data(), rds_closure.size());
  request.mutable_function()->set_hash(hash);

  total_request_bytes += request.ByteSizeLong();
  Rprintf("Sending request, with serialized size %d\n",
          request.GetCachedSize());

  grpc::ClientContext context;
  CompileResponse response;
  grpc::Status status = stub_->Compile(&context, request, &response);
  total_response_bytes += response.ByteSizeLong();
  if (!status.ok()) {
    std::cerr << status.error_code() << ": " << status.error_message()
              << std::endl;
    return status.error_message();
  } else {
    Rprintf("Received response, with serialized size %d\n",
            response.GetCachedSize());
    return response;
  }
}

void Client::clear_cache() {
  using namespace protocol;
  ClearCacheRequest request;
  ClearCacheResponse response;
  grpc::ClientContext context;
  grpc::Status status = stub_->ClearCache(&context, request, &response);
  if (!status.ok()) {
    Rf_error("Failed to clear the cache: %d %s\n", status.error_code(),
             status.error_message().c_str());
  } else {
    Rprintf("Cache cleared\n");
  }
}

SEXP Client::make_client(SEXP address, SEXP port, SEXP installed_packages) {
  auto addr = CHAR(STRING_ELT(address, 0));
  auto p = INTEGER(port)[0];
  std::string address_str(addr);
  address_str += ":" + std::to_string(p);

  std::vector<std::string> packages;
  for (int i = 0; i < LENGTH(installed_packages); ++i) {
    packages.push_back(CHAR(STRING_ELT(installed_packages, i)));
  }

  // We need to increase the maximum response size (4 MB by default)
  auto channel_args = grpc::ChannelArguments();
  channel_args.SetMaxReceiveMessageSize(1024 * 1024 * 10);
  channel_args.SetMaxSendMessageSize(1024 * 1024 * 10);
  auto channel =
      grpc::CreateCustomChannel(address_str, grpc::InsecureChannelCredentials(), channel_args);
  auto client = new Client(channel, packages);

  SEXP ptr = PROTECT(R_MakeExternalPtr(client, RSH_CLIENT_PTR, R_NilValue));
  // Removed because it was causing a segfault (memory not mapped)
  // R_RegisterCFinalizerEx(ptr, &Client::remove_client, FALSE);// TRUE because
  // we want to shutdown the client when R quits

  UNPROTECT(1);
  return ptr;
}

void Client::remove_client(SEXP ptr) {
  if (ptr == nullptr) {
    Rf_warning("Client already removed");
  }
  auto client = static_cast<Client *>(R_ExternalPtrAddr(ptr));
  delete client;
}

Client *Client::get_client() {
  if (Client::CLIENT_INSTANCE != nullptr) {
    return static_cast<Client *>(R_ExternalPtrAddr(CLIENT_INSTANCE));
  } else {
    Rf_error("Client not initialized");
  }
}

SEXP init_client(SEXP address, SEXP port, SEXP installed_packages) {
  if (Client::CLIENT_INSTANCE != nullptr) {
    Rf_warning("Client already initialized, replacing it");
  }

  Client::CLIENT_INSTANCE =
      Client::make_client(address, port, installed_packages);

  return Client::CLIENT_INSTANCE;
}

SEXP get_total_size() {
  auto client = Client::get_client();
  auto [req, res] = client->get_total_size();
  SEXP out = PROTECT(Rf_allocVector(INTSXP, 2));
  INTEGER(out)[0] = req;
  INTEGER(out)[1] = res;
  // Add names
  SEXP names = PROTECT(Rf_allocVector(STRSXP, 2));
  SET_STRING_ELT(names, 0, Rf_mkChar("request"));
  SET_STRING_ELT(names, 1, Rf_mkChar("response"));
  Rf_setAttrib(out, R_NamesSymbol, names);
  UNPROTECT(2);
  return out;
}

SEXP clear_cache() {
  auto client = Client::get_client();
  client->clear_cache();
  return R_NilValue;
}

} // namespace rsh
