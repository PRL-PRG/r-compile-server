#include "fir_stubs.hpp"
#include "messages.pb.h"
#include "routes.grpc.pb.h"
#include "serialize.hpp"

extern "C" {
#include "fir2c/runtime.h"
}

#include <condition_variable>
#include <deque>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <map>
#include <memory>
#include <mutex>
#include <string>
#include <thread>
#include <unordered_map>

namespace rsh {

namespace {

// A request for a stub's version. `module` and `id` are copies, because the worker thread reads
// them, and the stub may be gone by then (its module unloaded).
struct Request {
  uint64_t ticket;
  std::string module;
  int id;
};

struct Answer {
  Fir_Stub *stub;
  bool ok;
  std::string error;
  protocol::FirVersionResponse response;
};

using InitFun = SEXP (*)(SEXP pool);

// Sends stubs' requests to the compile server and loads what it answers.
//
// Only waiting for the server happens off the R thread, on one worker that sends the requests one
// at a time, in the order they were made (so the server evaluates versions in an order that only
// depends on the program). Everything that touches R or the JIT happens on the R thread, when a
// stub polls.
class FirStubClient {
  std::unique_ptr<protocol::CompileService::Stub> server;

  std::mutex mutex;
  std::condition_variable changed;
  uint64_t next_ticket = 1;
  // Not sent yet.
  std::deque<Request> requests;
  // Whether the worker is waiting for the server.
  bool waiting = false;
  // Received but not loaded yet, in the order they were requested.
  std::map<uint64_t, Answer> answers;
  // Each stub's latest request. A stub is identified by its address, which another stub can
  // reuse after its module is unloaded, so answers are kept by ticket.
  std::unordered_map<Fir_Stub *, uint64_t> tickets;

  void work() {
    for (;;) {
      Request request;
      Fir_Stub *stub;
      {
        std::unique_lock<std::mutex> lock(mutex);
        changed.wait(lock, [&] { return !requests.empty(); });
        request = std::move(requests.front());
        requests.pop_front();
        stub = nullptr;
        for (auto const &[s, ticket] : tickets) {
          if (ticket == request.ticket) {
            stub = s;
          }
        }
        waiting = true;
      }

      protocol::FirVersionRequest message;
      message.set_module(request.module);
      message.set_stub(request.id);

      Answer answer;
      answer.stub = stub;
      grpc::ClientContext context;
      auto status = server->CompileFirVersion(&context, message, &answer.response);
      answer.ok = status.ok();
      answer.error = status.error_message();

      {
        std::lock_guard<std::mutex> lock(mutex);
        // Dropped if the stub was forgotten in the meantime (see `forget`).
        if (stub != nullptr && tickets.count(stub) && tickets[stub] == request.ticket) {
          answers.emplace(request.ticket, std::move(answer));
        }
        waiting = false;
      }
      changed.notify_all();
    }
  }

  // Load an answer: define what the server sent and let it replace the stubs it's for.
  static void load(Answer const &answer) {
    auto stub = answer.stub;
    if (!answer.ok) {
      stub->state = FIR_STUB_FAILED;
      Rf_warning("Compile server failed to compile version %d of FIR module %s: %s",
                 stub->id, stub->module, answer.error.c_str());
      return;
    }

    auto const &response = answer.response;
    if (response.has_code() && !response.code().empty()) {
      GJIT->add_object(response.code());
      auto init = (InitFun)GJIT->lookup(response.init().c_str());

      // The code refers to its constants for as long as it exists, which is forever.
      SEXP pool = rsh::deserialize(response.constants());
      R_PreserveObject(pool);
      init(pool);
    }

    // An answer without code means the version came with an earlier answer.
    if (stub->compiled == nullptr) {
      stub->state = FIR_STUB_FAILED;
      Rf_warning("Compile server didn't send version %d of FIR module %s", stub->id,
                 stub->module);
    }
  }

public:
  explicit FirStubClient(std::shared_ptr<grpc::Channel> channel)
      : server(protocol::CompileService::NewStub(channel)) {
    std::thread([this] { work(); }).detach();
  }

  void request(Fir_Stub *stub) {
    {
      std::lock_guard<std::mutex> lock(mutex);
      auto ticket = next_ticket++;
      tickets[stub] = ticket;
      requests.push_back({ticket, stub->module, stub->id});
    }
    changed.notify_all();
  }

  void poll(Fir_Stub *stub, bool wait) {
    // Everything that has arrived is loaded, not only what `stub` asked for: an answer can come
    // without code because an earlier one had it (see `load`).
    std::map<uint64_t, Answer> arrived;
    {
      std::unique_lock<std::mutex> lock(mutex);
      auto ticket = tickets.find(stub);
      if (ticket == tickets.end()) {
        return;
      }
      if (wait) {
        changed.wait(lock, [&] { return answers.count(ticket->second) > 0; });
      }
      arrived.swap(answers);
    }

    for (auto const &[_, answer] : arrived) {
      load(answer);
    }
  }

  void drain() {
    std::unique_lock<std::mutex> lock(mutex);
    changed.wait(lock, [&] { return requests.empty() && !waiting; });
  }

  // Forget every stub. For when the modules they're in are about to be unloaded: what's still
  // on its way for them is dropped instead of being loaded for whatever replaces them.
  void forget() {
    std::lock_guard<std::mutex> lock(mutex);
    requests.clear();
    answers.clear();
    tickets.clear();
  }
};

// Never freed: the worker thread uses it for as long as the process runs.
FirStubClient *FIR_STUB_CLIENT = nullptr;
std::string FIR_STUB_CLIENT_ADDRESS;

void request(Fir_Stub *stub) { FIR_STUB_CLIENT->request(stub); }

void poll(Fir_Stub *stub, bool wait) { FIR_STUB_CLIENT->poll(stub, wait); }

Fir_StubCompiler FIR_STUB_COMPILER = {&request, &poll, false};

} // namespace

SEXP fir_connect(SEXP address, SEXP port, SEXP deterministic) {

  std::string target(CHAR(STRING_ELT(address, 0)));
  target += ":" + std::to_string(Rf_asInteger(port));

  if (FIR_STUB_CLIENT != nullptr && FIR_STUB_CLIENT_ADDRESS == target) {
    // Reconnecting starts over.
    FIR_STUB_CLIENT->drain();
    FIR_STUB_CLIENT->forget();
  } else {
    // Compiled code is often bigger than the default limit (4 MB).
    auto channel_args = grpc::ChannelArguments();
    channel_args.SetMaxReceiveMessageSize(1024 * 1024 * 100);
    FIR_STUB_CLIENT = new FirStubClient(grpc::CreateCustomChannel(
        target, grpc::InsecureChannelCredentials(), channel_args));
    FIR_STUB_CLIENT_ADDRESS = target;
  }

  FIR_STUB_COMPILER.deterministic = Rf_asLogical(deterministic) == TRUE;
  Fir_set_stub_compiler(&FIR_STUB_COMPILER);
  return R_NilValue;
}

SEXP fir_drain() {
  if (FIR_STUB_CLIENT != nullptr) {
    FIR_STUB_CLIENT->drain();
  }
  return R_NilValue;
}

} // namespace rsh
