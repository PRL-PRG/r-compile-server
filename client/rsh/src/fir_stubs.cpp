#include "fir_stubs.hpp"
#include "messages.pb.h"
#include "routes.grpc.pb.h"
#include "serialize.hpp"

extern "C" {
#include "fir2c/runtime.h"
// Exported by libR, declared in `Defn.h` (`RCNTXT` is in the vendored `Rinternals.h`).
extern RCNTXT *R_GlobalContext;
}

#include <condition_variable>
#include <deque>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <climits>
#include <map>
#include <memory>
#include <mutex>
#include <optional>
#include <string>
#include <thread>
#include <unordered_map>

namespace rsh {

namespace {

// Slots of a counting body's state (see `rsh_tier`), after the ones it shares with a bytecode
// baseline's pool (`FIR_BC_BASELINE_*`), which make `Fir_bc_baseline_code` work on it.
enum {
  // `NULL`, in place of the baseline's `FIR_BC_BASELINE_ID`: the state isn't a baseline's pool.
  TIER_ID = FIR_BC_BASELINE_ID,
  // A `TierRequest`, as a scalar integer.
  TIER_REQUEST = FIR_BC_BASELINE_SIZE,
  // The closure's name, or `NULL` to take it from the call.
  TIER_NAME,
  // The body that runs the compiled FIŘ function, once it's loaded.
  TIER_OPTIMIZED,
  TIER_SIZE,
};

// The tag of the external pointer a counting body holds its state behind.
constexpr char const *TIER_MAGIC = "rsh_tier_state";

enum TierRequest {
  TIER_UNREQUESTED = 0,
  TIER_REQUESTED = 1,
  // The server failed, or loading its answer did: the closure runs the baseline from then on.
  TIER_FAILED = 2,
  // `TIER_OPTIMIZED` is set.
  TIER_LOADED = 3,
};

// A request for a stub's version (if `closure` is empty) or a closure's module. `module` and `id`
// are copies, because the worker thread reads them, and the stub may be gone by then (its module
// unloaded). `state` is only compared, the worker never reads it.
struct Request {
  uint64_t ticket;
  std::string module;
  int id;
  SEXP state;
  std::optional<protocol::FirClosureRequest> closure;
};

// Exactly one of `stub` and `state` is set.
struct Answer {
  Fir_Stub *stub;
  SEXP state;
  bool ok;
  std::string error;
  protocol::FirVersionResponse response;
  protocol::FirClosureResponse closure_response;
};

using InitFun = SEXP (*)(SEXP pool);

// Run `body`, and return the message of the R error it raises, if any (a warning raises one under
// `options(warn = 2)`).
template <typename F> std::optional<std::string> try_r(F body) {
  struct Data {
    F &body;
    std::optional<std::string> error;
  } data{body, std::nullopt};
  R_tryCatchError(
      [](void *data) -> SEXP {
        static_cast<Data *>(data)->body();
        return R_NilValue;
      },
      &data,
      [](SEXP condition, void *data) -> SEXP {
        SEXP message = TYPEOF(condition) == VECSXP && XLENGTH(condition) > 0
                           ? VECTOR_ELT(condition, 0)
                           : R_NilValue;
        static_cast<Data *>(data)->error = TYPEOF(message) == STRSXP && XLENGTH(message) > 0
                                               ? CHAR(STRING_ELT(message, 0))
                                               : "unknown error";
        return R_NilValue;
      },
      &data);
  return data.error;
}

// Add an answer's object to the JIT and call its initializer `init` with its constant pool, which
// it returns. Raises an R error if that fails.
SEXP load_code(std::string const &code, std::string const &init, std::string const &constants) {
  GJIT->add_object(code);
  auto init_fun = (InitFun)GJIT->lookup(init.c_str());
  // The code refers to its constants for as long as it exists, which is forever.
  SEXP pool = rsh::deserialize(constants);
  R_PreserveObject(pool);
  init_fun(pool);
  return pool;
}

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
  // Each requesting closure's request, by its counting body's state, which is preserved until the
  // answer is loaded or forgotten.
  std::unordered_map<SEXP, uint64_t> closure_tickets;

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

      Answer answer;
      answer.stub = stub;
      answer.state = request.state;
      grpc::ClientContext context;
      grpc::Status status;
      if (request.closure) {
        status = server->CompileFirClosure(&context, *request.closure, &answer.closure_response);
      } else {
        protocol::FirVersionRequest message;
        message.set_module(request.module);
        message.set_stub(request.id);
        status = server->CompileFirVersion(&context, message, &answer.response);
      }
      answer.ok = status.ok();
      answer.error = status.error_message();

      {
        std::lock_guard<std::mutex> lock(mutex);
        // Dropped if the requester was forgotten in the meantime (see `forget`).
        bool current = request.closure
                           ? closure_tickets.count(request.state) &&
                                 closure_tickets[request.state] == request.ticket
                           : stub != nullptr && tickets.count(stub) &&
                                 tickets[stub] == request.ticket;
        if (current) {
          answers.emplace(request.ticket, std::move(answer));
        }
        waiting = false;
      }
      changed.notify_all();
    }
  }

  // Load a closure's answer: define the module and store the body that runs it in the state.
  // Returns the warning to give, if any.
  //
  // The request's bookkeeping is done first, so that it's done even if loading raises an R error.
  std::string load_closure(Answer const &answer) {
    SEXP state = PROTECT(answer.state);
    {
      std::lock_guard<std::mutex> lock(mutex);
      closure_tickets.erase(state);
    }
    R_ReleaseObject(state);
    int *request = INTEGER(VECTOR_ELT(state, TIER_REQUEST));
    *request = TIER_FAILED;

    auto const &response = answer.closure_response;
    std::string error = !answer.ok                ? "the server failed: " + answer.error
                        : response.code().empty() ? std::string("no code in the answer")
                                                  : "";
    if (error.empty()) {
      auto load_error = try_r([&] {
        SEXP pool = load_code(response.code(), response.init(), response.constants());
        auto from_r = GJIT->lookup(response.from_r().c_str());
        SET_VECTOR_ELT(state, TIER_OPTIMIZED, R_MakeExternalPtr(from_r, Rsh_CodeTag, pool));
      });
      if (load_error) {
        error = "loading the answer failed: " + *load_error;
      } else {
        *request = TIER_LOADED;
      }
    }

    std::string warning;
    if (!error.empty()) {
      warning = std::string("Compile server failed to compile closure ") +
                CHAR(STRING_ELT(VECTOR_ELT(state, TIER_NAME), 0)) + ": " + error;
    }
    UNPROTECT(1);
    return warning;
  }

  // Load an answer: define what the server sent and let it replace the stubs it's for. Returns the
  // warning to give, if any.
  std::string load(uint64_t ticket, Answer const &answer) {
    if (answer.state != nullptr) {
      return load_closure(answer);
    }

    auto stub = answer.stub;
    {
      std::lock_guard<std::mutex> lock(mutex);
      auto current = tickets.find(stub);
      if (current != tickets.end() && current->second == ticket) {
        tickets.erase(current);
      }
    }
    // Until it's loaded, so that an R error while loading leaves the stub on its fallback.
    stub->state = FIR_STUB_FAILED;
    auto prefix = "version " + std::to_string(stub->id) + " of FIR module " + stub->module;
    if (!answer.ok) {
      return "Compile server failed to compile " + prefix + ": " + answer.error;
    }

    auto const &response = answer.response;
    std::optional<std::string> load_error;
    if (response.has_code() && !response.code().empty()) {
      load_error = try_r([&] { load_code(response.code(), response.init(), response.constants()); });
    }

    // An answer without code means the version came with an earlier answer, or (`fallback`) that
    // it's the same as the fallback.
    if (stub->compiled != nullptr) {
      stub->state = FIR_STUB_COMPILED;
    } else if (!load_error && response.fallback()) {
      Fir_stub_fallback(stub);
    }
    if (load_error) {
      return "Failed to load " + prefix + ": " + *load_error;
    }
    if (stub->state == FIR_STUB_FAILED) {
      return "Compile server didn't send " + prefix;
    }
    return "";
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

  // Ask for the module of the closure whose counting body has `state`. Preserves `state` until
  // the answer is loaded.
  void request(SEXP state, protocol::FirClosureRequest message) {
    R_PreserveObject(state);
    {
      std::lock_guard<std::mutex> lock(mutex);
      auto ticket = next_ticket++;
      closure_tickets[state] = ticket;
      requests.push_back({ticket, "", 0, state, std::move(message)});
    }
    changed.notify_all();
  }

  void poll(Fir_Stub *stub, bool wait) {
    std::unique_lock<std::mutex> lock(mutex);
    auto ticket = tickets.find(stub);
    if (ticket != tickets.end()) {
      load_arrived(lock, ticket->second, wait);
    }
  }

  void poll(SEXP state, bool wait) {
    std::unique_lock<std::mutex> lock(mutex);
    auto ticket = closure_tickets.find(state);
    if (ticket != closure_tickets.end()) {
      load_arrived(lock, ticket->second, wait);
    }
  }

  // Load everything that has arrived, after waiting for `ticket`'s answer if `wait`. Not only
  // what one requester asked for: an answer can come without code because an earlier one had it
  // (see `load`). Unlocks `lock`.
  //
  // Answers are taken one at a time, so that if a warning raises an R error, the ones after it
  // stay for the next poll.
  void load_arrived(std::unique_lock<std::mutex> &lock, uint64_t ticket, bool wait) {
    if (wait) {
      changed.wait(lock, [&] { return answers.count(ticket) > 0; });
    }
    while (!answers.empty()) {
      std::string warning;
      {
        auto arrived = answers.extract(answers.begin());
        lock.unlock();
        warning = load(arrived.key(), arrived.mapped());
      }
      if (!warning.empty()) {
        Rf_warning("%s", warning.c_str());
      }
      lock.lock();
    }
    lock.unlock();
  }

  void drain() {
    std::unique_lock<std::mutex> lock(mutex);
    changed.wait(lock, [&] { return requests.empty() && !waiting; });
  }

  // Forget every stub and closure request. For when the modules the stubs are in are about to be
  // unloaded: what's still on its way for them is dropped instead of being loaded for whatever
  // replaces them. The closures ask again.
  void forget() {
    std::lock_guard<std::mutex> lock(mutex);
    requests.clear();
    answers.clear();
    tickets.clear();
    for (auto const &[state, _] : closure_tickets) {
      INTEGER(VECTOR_ELT(state, TIER_REQUEST))[0] = TIER_UNREQUESTED;
      R_ReleaseObject(state);
    }
    closure_tickets.clear();
  }
};

// Never freed: the worker thread uses it for as long as the process runs.
FirStubClient *FIR_STUB_CLIENT = nullptr;
std::string FIR_STUB_CLIENT_ADDRESS;

void request(Fir_Stub *stub) { FIR_STUB_CLIENT->request(stub); }

void poll(Fir_Stub *stub, bool wait) { FIR_STUB_CLIENT->poll(stub, wait); }

Fir_StubCompiler FIR_STUB_COMPILER = {&request, &poll, false};

// An external pointer to a new counting body's state. The state is mutable, so it's behind the
// pointer: GNU-R treats bytecode constants as immutable (`R_CHECK_CONSTANTS`), but neither
// duplicates nor compares what an external pointer protects. The address is the state's, so that
// `identical` tells two apart.
SEXP mk_tier(SEXP bytecode, SEXP formals, SEXP name) {
  SEXP state = PROTECT(Rf_allocVector(VECSXP, TIER_SIZE));
  SET_VECTOR_ELT(state, FIR_BC_BASELINE_CODE, bytecode);
  SET_VECTOR_ELT(state, FIR_BC_BASELINE_FORMALS, formals);
  SET_VECTOR_ELT(state, FIR_BC_BASELINE_CALLS, Rf_ScalarInteger(0));
  SET_VECTOR_ELT(state, TIER_REQUEST, Rf_ScalarInteger(TIER_UNREQUESTED));
  SET_VECTOR_ELT(state, TIER_NAME, name);
  SEXP tier = R_MakeExternalPtr(state, Rf_install(TIER_MAGIC), state);
  UNPROTECT(1);
  return tier;
}

// The external pointer to the state of `body` if it's a counting body (see `rsh_tier`),
// otherwise `nullptr`.
SEXP tier_of(SEXP body) {
  if (TYPEOF(body) != BCODESXP) {
    return nullptr;
  }
  SEXP expr = VECTOR_ELT(BCODE_CONSTS(body), 0);
  if (TYPEOF(expr) != LANGSXP || Rf_length(expr) != 3) {
    return nullptr;
  }
  SEXP tier = CADDR(expr);
  if (TYPEOF(tier) != EXTPTRSXP || R_ExternalPtrTag(tier) != Rf_install(TIER_MAGIC)) {
    return nullptr;
  }
  return tier;
}

SEXP tier_state(SEXP tier) { return R_ExternalPtrProtected(tier); }

// The name to send for the closure called by `call`: its state's, or else the function's name in
// the call, or else "f".
std::string tier_name(SEXP state, SEXP call) {
  SEXP name = VECTOR_ELT(state, TIER_NAME);
  if (TYPEOF(name) == STRSXP && XLENGTH(name) == 1 && CHAR(STRING_ELT(name, 0))[0] != '\0') {
    return CHAR(STRING_ELT(name, 0));
  }
  if (TYPEOF(call) == LANGSXP && TYPEOF(CAR(call)) == SYMSXP) {
    return CHAR(PRINTNAME(CAR(call)));
  }
  return "f";
}

void request_closure(SEXP fun, SEXP call, SEXP state, int calls_in_baseline) {
  protocol::FirClosureRequest message;

  SEXP closure = PROTECT(Rf_mkCLOSXP(VECTOR_ELT(state, FIR_BC_BASELINE_FORMALS),
                                     VECTOR_ELT(state, FIR_BC_BASELINE_CODE), CLOENV(fun)));
  auto closure_bytes = rsh::serialize(closure);
  UNPROTECT(1);
  message.set_closure(closure_bytes.data(), closure_bytes.size());

  auto name = tier_name(state, call);
  SET_VECTOR_ELT(state, TIER_NAME, Rf_mkString(name.c_str()));
  message.set_name(name);
  message.set_threshold(Fir_jit_threshold);
  message.set_cc_opt(3);

  SEXP recording = PROTECT(Fir_bc_baseline_recording(state, calls_in_baseline));
  if (recording != R_NilValue) {
    auto recording_bytes = rsh::serialize(recording);
    message.set_recording(recording_bytes.data(), recording_bytes.size());
  }
  UNPROTECT(1);

  INTEGER(VECTOR_ELT(state, TIER_REQUEST))[0] = TIER_REQUESTED;
  FIR_STUB_CLIENT->request(state, std::move(message));
}

// Make `fun` run `body` instead of its counting body, if it still has the one `tier` is from.
void replace_body(SEXP fun, SEXP tier, SEXP body) {
  if (TYPEOF(fun) == CLOSXP && tier_of(BODY(fun)) == tier) {
    SET_BODY(fun, body);
  }
}

} // namespace

SEXP rsh_tier(SEXP tier) {
  // The running closure's context: `.Call` makes none, or a builtin one. (`sys.function()` would
  // return a copy of the closure, so setting its body would change nothing.)
  RCNTXT *context = R_GlobalContext;
  while (context->nextcontext != nullptr && !(context->callflag & CTXT_FUNCTION)) {
    context = context->nextcontext;
  }
  if (!(context->callflag & CTXT_FUNCTION) || tier_of(BODY(context->callfun)) != tier) {
    Rf_error("rsh_tier must only be called by the counting body of a closure");
  }
  SEXP fun = context->callfun;
  SEXP env = context->cloenv;
  // Replacing the body can make the state unreachable.
  PROTECT(tier);
  SEXP state = tier_state(tier);

  int *request = INTEGER(VECTOR_ELT(state, TIER_REQUEST));
  if (*request == TIER_REQUESTED && FIR_STUB_CLIENT != nullptr) {
    FIR_STUB_CLIENT->poll(state, FIR_STUB_COMPILER.deterministic);
  }
  if (*request == TIER_LOADED) {
    SEXP optimized = VECTOR_ELT(state, TIER_OPTIMIZED);
    replace_body(fun, tier, optimized);
    UNPROTECT(1);
    return Rf_eval(optimized, env);
  }
  if (*request == TIER_FAILED) {
    SEXP out = Rf_eval(Fir_bc_baseline_code(state), env);
    UNPROTECT(1);
    return out;
  }

  int *calls = INTEGER(VECTOR_ELT(state, FIR_BC_BASELINE_CALLS));
  if (*calls != INT_MAX) {
    ++*calls;
  }
  int threshold = Fir_jit_threshold;

  // The baseline runs from the call after the `threshold`th, so it records `threshold` calls
  // before the request.
  SEXP code = *calls > threshold ? Fir_bc_baseline_code(state)
                                 : VECTOR_ELT(state, FIR_BC_BASELINE_CODE);
  SEXP out = PROTECT(Rf_eval(code, env));

  if (*calls >= 2 * threshold && *request == TIER_UNREQUESTED && FIR_STUB_CLIENT != nullptr) {
    request_closure(fun, context->call, state, *calls - threshold);
  }

  UNPROTECT(2);
  return out;
}

SEXP rsh_jit_closure(SEXP compiled, SEXP name, SEXP tier_entry) {
  SEXP body = BODY(compiled);
  if (TYPEOF(body) != BCODESXP || tier_of(body) != nullptr) {
    return compiled;
  }

  SEXP tier = PROTECT(mk_tier(body, FORMALS(compiled), name));
  SEXP tier_call = PROTECT(Rf_lang3(Rf_install(".Call"), tier_entry, tier));
  SEXP quoted = PROTECT(Rf_lang2(Rf_install("quote"), tier_call));
  SEXP compile = PROTECT(Rf_lang3(R_DoubleColonSymbol, Rf_install("compiler"),
                                  Rf_install("compile")));
  SEXP compile_call = PROTECT(Rf_lang2(compile, quoted));
  SEXP counting_body = PROTECT(Rf_eval(compile_call, R_BaseEnv));
  if (TYPEOF(counting_body) != BCODESXP) {
    Rf_error("Expected the counting body to compile to bytecode");
  }
  SEXP closure = Rf_mkCLOSXP(FORMALS(compiled), counting_body, CLOENV(compiled));
  UNPROTECT(6);
  return closure;
}

SEXP rsh_jit_tier(SEXP fun) {
  if (TYPEOF(fun) != CLOSXP) {
    Rf_error("Expected a closure");
  }
  SEXP body = BODY(fun);
  char const *tier = "interpreted";
  if (IS_RSH_CODE(body)) {
    tier = "optimized";
  } else if (SEXP state = tier_of(body)) {
    state = tier_state(state);
    if (INTEGER(VECTOR_ELT(state, FIR_BC_BASELINE_CALLS))[0] >= Fir_jit_threshold ||
        INTEGER(VECTOR_ELT(state, TIER_REQUEST))[0] == TIER_FAILED) {
      tier = "baseline";
    }
  }
  return Rf_mkString(tier);
}

SEXP set_jit_threshold(SEXP threshold) {
  int value = Rf_asInteger(threshold);
  if (value == NA_INTEGER || value < 1) {
    Rf_error("The JIT threshold must be a positive integer");
  }
  Fir_set_jit_threshold(value);
  return R_NilValue;
}

SEXP fir_connect(SEXP address, SEXP port, SEXP deterministic, SEXP threshold) {
  if (threshold != R_NilValue) {
    set_jit_threshold(threshold);
  }

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
