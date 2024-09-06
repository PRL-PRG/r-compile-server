#include "client.hpp"
#include "xxhash.hpp"
#include "serialize.hpp"

#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <iostream>

namespace rsh {


Client::Client(std::shared_ptr<grpc::Channel> channel, std::vector<std::string> installed_packages) : stub_(protocol::CompileService::NewStub(channel)) {
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
    request.set_platform(CHAR(STRING_ELT(VECTOR_ELT(r_platform, 0), 0))); // or R_PLATFORM?

    // TODO: compute hashes of package contents (maybe rdb/rdx and so on)
    // instead of just writing package names here.
    for(auto const& package : installed_packages) {
      request.add_package_hash(package);
    }


    InitResponse response;
    grpc::ClientContext context;
    grpc::Status status = stub_->Init(&context, request, &response);
    if(!status.ok()) {
      Rf_error("Failed to connect to the server: %d %s\n", status.error_code(), status.error_message().c_str());
    }
    else {
      Rprintf("Connected to the server\n");
    }
  }

std::variant<protocol::CompileResponse, std::string> Client::remote_compile(std::vector<uint8_t> const &rds_closure,
                        CompilerOptions const& options) {
  using namespace protocol;

  CompileRequest request;
  request.set_tier(options.tier);
  request.set_bc_opt(options.bc_opt);
  request.mutable_function()->set_name(options.name);
  request.set_cc_opt(options.cc_opt);
  request.mutable_function()->set_body(rds_closure.data(), rds_closure.size());

  // We replace the body of a function with its compiled version so it would not make
  //sense to compute its hash again, except if its body has changed.
  auto hash = xxh::xxhash3<64>(rds_closure.data(), rds_closure.size());
  if(compiled_functions.find(options.name) != compiled_functions.end() && compiled_functions[options.name].second == hash) {
    request.mutable_function()->set_hash(compiled_functions[options.name].first);
  }
  else {
    request.mutable_function()->set_hash(hash);
    compiled_functions[options.name] = std::make_pair(hash, 0);
  }

  grpc::ClientContext context;
  CompileResponse response;
  grpc::Status status = stub_->Compile(&context, request, &response);
  if(!status.ok()) {
    std::cerr << status.error_code() << ": " << status.error_message()
              << std::endl;
    return status.error_message();
  }
  else {
    return response;
  }
}

SEXP Client::make_client(SEXP address, SEXP port, SEXP installed_packages) {
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


  SEXP ptr =  PROTECT(R_MakeExternalPtr(client, Rf_install("RSH_CLIENT"), R_NilValue));
  R_RegisterCFinalizerEx(ptr, &Client::remove_client, TRUE);// TRUE because we want to shutdown the client when R quits

  UNPROTECT(1);
  return ptr;
}

void Client::remove_client(SEXP ptr) {
  if(ptr == nullptr) {
    Rf_warning("Client already removed");
  }
  auto client = static_cast<Client*>(R_ExternalPtrAddr(ptr));
  delete client;
}

Client* Client::get_client() {
  if(Client::CLIENT_INSTANCE != nullptr) {
    return static_cast<Client*>(R_ExternalPtrAddr(CLIENT_INSTANCE));
  }
  else {
    Rf_error("Client not initialized");
  }
}

SEXP init_client(SEXP address, SEXP port, SEXP installed_packages) {
  if(Client::CLIENT_INSTANCE != nullptr) {
    Rf_warning("Client already initialized, replacing it");
  }

  Client::CLIENT_INSTANCE = Client::make_client(address, port, installed_packages);

  return R_NilValue;
}

void Client::mark_compiled_function(const std::string& name, SEXP closure) {
  auto bytes = rsh::serialize(closure);
  Client::get_client()->compiled_functions[name].second = xxh::xxhash3<64>(bytes);
}


} // namespace rsh
