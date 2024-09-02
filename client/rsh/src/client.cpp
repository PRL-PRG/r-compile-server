#include "client.h"

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

    SEXP r_platform = Rf_eval(Rf_lang1(Rf_install("R.version")), R_BaseEnv);
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
      std::cerr << status.error_code() << ": " << status.error_message()
                << std::endl;
      exit(1);
    }
    else {
      std::cout << "Connected to server" << std::endl;
    }
  }

protocol::CompileResponse Client::remote_compile(std::string const& name, 
                              std::vector<uint8_t> const &rds_closure,
                              protocol::Tier tier,
                              int32_t optimization_level) {
  using namespace protocol;

  CompileRequest request;
  request.set_tier(tier);
  request.set_optimization_level(optimization_level);
  request.mutable_function()->set_name(name);
  request.mutable_function()->set_body(rds_closure.data(), rds_closure.size());

  // TODO: Actually compile the hash
  std::array<uint8_t,64> hash = {0};
  request.mutable_function()->set_hash(hash.data(), hash.size());

  grpc::ClientContext context;
  CompileResponse response;
  grpc::Status status = stub_->Compile(&context, request, &response);
  if(!status.ok()) {
    std::cerr << status.error_code() << ": " << status.error_message()
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
