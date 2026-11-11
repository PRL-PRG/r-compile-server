#pragma once

// THIS HEADER NEEDS TO BE A C-COMPATIBLE HEADER
// IT IS USED BY THE SERVER COMPILER

#include "../common2c/rsh_utils.h"
#include <stdarg.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// FIXME: use the SCALAR_ macros
#define Fir_const(env, idx) ((SEXP *)STDVEC_DATAPTR((env)))[(idx)]
// With the write barrier: a pool is written to after allocations that may have made it old.
#define Fir_set_const(env, idx, value) SET_VECTOR_ELT((env), (idx), (value))

typedef enum {
  FIR_MKENV_REGULAR,
  FIR_MKENV_NON_REFLECTIVE,
  FIR_MKENV_ELIDED,
} Fir_MkEnvType;

/// Whether a promise (all instances created by a given `prom` instruction) has been observed to
/// escape (be forced after outliving the stack frame it was created in).
///
/// - `DEFAULT`: not speculated local, no escape observed yet.
/// - `ESCAPED`: not speculated local, an escape has been observed (recorded as feedback).
/// - `LOCAL`: speculated local; if it escapes, forcing it afterwards is a runtime error.
typedef enum {
  FIR_GLOBALLY_ESCAPED_DEFAULT = 0,
  FIR_GLOBALLY_ESCAPED_ESCAPED = 1,
  FIR_GLOBALLY_ESCAPED_LOCAL = 2,
} Fir_GloballyEscaped;

typedef enum {
  FIR_PRIMITIVE_LOGICAL = 0,
  FIR_PRIMITIVE_INTEGER = 1,
  FIR_PRIMITIVE_REAL = 2,
  FIR_PRIMITIVE_STRING = 3,
} Fir_PrimitiveKind;

typedef enum {
  FIR_KIND_ANY_VALUE = 0,
  FIR_KIND_PRIMITIVE_SCALAR = 1,
  FIR_KIND_PRIMITIVE_VECTOR = 2,
  FIR_KIND_CLOSURE = 3,
  FIR_KIND_DOTS = 4,
  FIR_KIND_MISSING = 5,
  FIR_KIND_BOOLEAN = 6,
  FIR_KIND_PRIMITIVE_VECTOR1 = 7,
} Fir_KindTag;

typedef enum {
  FIR_FRESH = 0,
  FIR_OWNED = 1,
  FIR_BORROWED = 2,
  FIR_SHARED = 3,
} Fir_Ownership;

typedef enum {
  FIR_EFFECTS_NONE = 0,
  FIR_EFFECTS_IMPURE = 1,
  FIR_EFFECTS_REFLECT = 2,
} Fir_Effects;

typedef struct {
  Fir_KindTag tag;
  union {
    struct {
      int primitive;
    } primitive;
  } as;
} Fir_Kind;

typedef enum {
  FIR_PROMISITY_VALUE = 0,
  FIR_PROMISITY_MAYBE = 1,
  FIR_PROMISITY_PROMISE = 2,
} Fir_PromisityTag;

typedef struct {
  Fir_PromisityTag tag;
  Fir_Effects effects;
} Fir_Promisity;

typedef struct Fir_Type {
  Fir_Kind kind;
  Fir_Promisity promisity;
  Fir_Ownership ownership;
  bool definite;
} Fir_Type;

typedef struct Fir_Signature {
  Fir_Type return_type;
  int param_count;
  Fir_Type const *param_types;
  Fir_Effects effects;
} Fir_Signature;

typedef SEXP (*Fir_DispatchFn)(SEXP env, Fir_Signature signature, ...);
typedef SEXP (*Fir_DispatchImplFn)(SEXP env, Fir_Signature signature, va_list args);
typedef SEXP (*Fir_FromRFn)(SEXP env, SEXP constants);
typedef SEXP (*Fir_VersionFn)(SEXP env, ...);
typedef SEXP (*Fir_PromiseFn)(SEXP env, void **captures);

typedef struct Fir_FunctionData {
  const char* name;
  /// Dispatches a call with runtime-typed arguments to the function's best version. Fixed for the
  /// function's life, and its identity (see `Fir_assume_function`): forwards to `dispatch_impl`.
  Fir_DispatchFn dispatch;
  /// What `dispatch` calls. It's compiled from the versions the function has, so whenever the
  /// function gets more (compiled in a patch, see `Fir_stub_compiled`) it's regenerated and
  /// replaced (`Fir_fun_set_entries`).
  Fir_DispatchImplFn dispatch_impl;
  /// What a call from R (the body of one of the function's closures, which forwards here) runs.
  /// Regenerated and replaced like `dispatch_impl`.
  Fir_FromRFn from_r;
  SEXP formal_names;
  /// Whether a call must run in a closure context for the callee's frame (`@needsContext`), so
  /// `Fir_call_dynamic` calls it through `Rf_applyClosure`, not `dispatch`.
  bool needs_context;
} Fir_FunctionData;

/// The `Fir_FunctionData` of the function whose constant pool is `constants`.
#define Fir_fun_data(constants) ((Fir_FunctionData *)STDVEC_DATAPTR(Fir_const((constants), 0)))

typedef struct Fir_PromiseGlobalData {
  Fir_PromiseFn eval;
  Fir_Type value_type;
  Fir_Effects effects;
  /// Whether promises created by this `prom` instruction have been observed to escape. Shared by
  /// all instances (it lives in the constant pool).
  Fir_GloballyEscaped escaped;
#ifdef FIR_STATS
  /// Whether the server's effect inference says the promise's code may reflect.
  bool may_reflect;
#endif
} Fir_PromiseGlobalData;

typedef struct Fir_PromiseLocalData {
  void **captures;
  /// Whether this specific promise instance has escaped, i.e. the stack frame that created it has
  /// exited. Set to `false` when created, then `true` when the creating frame exits.
  bool escaped;
#ifdef FIR_STATS
  /// Whether this instance was forced (at least started) before.
  bool forced;
  /// Whether this instance was observed to reflect.
  bool reflected;
  /// Whether this instance was created in an elided or non-reflective frame, so it can't reflect.
  bool elided;
#endif
} Fir_PromiseLocalData;

/// `x` in a module compiled with `-DFIR_STATS` (the runtime statistics build), nothing otherwise.
///
/// The statistics build counts copies and promises for the benchmarks (see `Fir_stats_get`). The
/// generated C is the same in both builds: it puts what only that build needs in this macro.
#ifdef FIR_STATS
#define FIR_STATS_ONLY(x) x
#else
#define FIR_STATS_ONLY(x)
#endif

/// `...` in a module compiled with `-DFIR_VERSION_STATS` or `-DFIR_STATS`, nothing otherwise.
///
/// The version statistics count each version's calls (see `Fir_stats_versions_get`). Unlike
/// `FIR_STATS`, they don't change the runtime's layouts, so a module compiled with them runs on
/// the `rsh` package's runtime, which has the counters in every build.
#if defined(FIR_STATS) || defined(FIR_VERSION_STATS)
#define FIR_VERSION_STATS_ONLY(...) __VA_ARGS__
#else
#define FIR_VERSION_STATS_ONLY(...)
#endif

/// The call counter named `name` (a version's, see `Fir2CCompiler#versionCounterName`), created
/// at 0 by the first call with the name. It lives as long as the process, so a module's code can
/// be unloaded and its counters still read.
double *Fir_stats_version_counter(const char *name);
/// Every counter of `Fir_stats_version_counter`, as a named numeric vector.
SEXP Fir_stats_versions_get(void);

/// A version the server hasn't compiled yet (see `server/doc/lazy-versions.md`).
///
/// The generated code defines one of these for the version, and a function with the version's
/// name and signature that calls `Fir_stub_enter`, then either the compiled version it returns or
/// (if it returns `NULL`) the version's fallback, which is compiled into the function.
typedef struct Fir_Stub {
  /// What the server calls the module this is in.
  const char *module;
  /// Which of the module's stubs this is.
  int id;
  /// The compiled version, or `NULL` until it's loaded. Its type is the stub function's.
  void *compiled;
  /// A `Fir_StubState`.
  int state;
  /// How many times the stub was entered before it requested its version.
  int calls;
} Fir_Stub;

typedef enum {
  /// Called fewer than `Fir_jit_threshold` times.
  FIR_STUB_UNREQUESTED = 0,
  /// The server was asked to compile the version, and the answer hasn't been loaded.
  FIR_STUB_REQUESTED = 1,
  /// `compiled` is set.
  FIR_STUB_COMPILED = 2,
  /// The server couldn't compile the version, so the fallback is all there will ever be.
  FIR_STUB_FAILED = 3,
  /// The version is the same as the fallback, so the stub runs the fallback and never requests.
  /// The server can still replace it (`Fir_stub_compiled`) once the version changes.
  FIR_STUB_FALLBACK = 4,
} Fir_StubState;

/// How stubs get their versions compiled. The runtime can't do it itself (it would need the
/// connection to the server, and a way to load code), so whoever can registers one of these: the
/// `rsh` package.
typedef struct Fir_StubCompiler {
  /// Ask for `stub`'s version to be compiled, and return without waiting for it.
  void (*request)(Fir_Stub *stub);
  /// If what `request(stub)` asked for has arrived, load it, which sets `stub->compiled` (and
  /// that of every other stub it replaces) via `Fir_stub_compiled`, or the state to
  /// `FIR_STUB_FAILED`. If `wait`, block until it has.
  void (*poll)(Fir_Stub *stub, bool wait);
  /// Whether the call after a stub's request waits for the answer, so that which calls run the
  /// fallback doesn't depend on how long compiling takes: the first `Fir_jit_threshold` do, no
  /// other. For tests.
  bool deterministic;
} Fir_StubCompiler;

/// Register how stubs get their versions compiled, or unregister with `NULL` (the default),
/// which leaves every stub on its fallback. `compiler` must stay valid.
void Fir_set_stub_compiler(const Fir_StubCompiler *compiler);
/// The compiled version to call in place of `stub`'s fallback, or `NULL` to run the fallback.
///
/// Call `Fir_jit_threshold` asks the server for the version, and later ones load it once it has
/// arrived.
void *Fir_stub_enter(Fir_Stub *stub);
/// Make `stub` call `compiled` from now on. Called by the code the server sends, once loaded.
void Fir_stub_compiled(Fir_Stub *stub, void *compiled);
/// Make `stub` run its fallback from now on, without requesting (`FIR_STUB_FALLBACK`). Called by
/// the code the server sends when the version it had compiled is the same as the fallback, and by
/// the client when the server answers so.
void Fir_stub_fallback(Fir_Stub *stub);

extern Fir_Kind Fir_kind_any_value;
extern Fir_Kind Fir_kind_closure;
extern Fir_Kind Fir_kind_dots;
extern Fir_Kind Fir_kind_missing;
extern Fir_Kind Fir_kind_boolean;

/// How many calls a closure or a stub runs before the JIT moves it to the next tier. The rsh
/// package sets it (`rsh_jit_enable`, `rsh_fir_connect`); the last setter wins.
extern int Fir_jit_threshold;
void Fir_set_jit_threshold(int threshold);

/// Fixed slots of a bytecode baseline's constant pool (mirrored by
/// `Fir2CCompiler#emitBytecodeBaseline` on the server). The rsh JIT's counting body uses the same
/// layout for slots other than `FIR_BC_BASELINE_ID`.
enum {
  /// The GNU-R bytecode.
  FIR_BC_BASELINE_CODE = 0,
  /// The formals (with default-argument expressions).
  FIR_BC_BASELINE_FORMALS = 1,
  /// The code `Fir_bc_baseline_code` returns, or `NULL` until it's first called.
  FIR_BC_BASELINE_JIT = 2,
  /// `c("Fir_bc_baseline_feedback", "<FIŘ function name>")`, which identifies a baseline's pool.
  FIR_BC_BASELINE_ID = 3,
  /// The call counter, a scalar integer the baseline increments.
  FIR_BC_BASELINE_CALLS = 4,
  FIR_BC_BASELINE_SIZE = 5,
};

/// The code a bytecode baseline evaluates: the bytecode compiled by the copy-and-patch JIT (rcp)
/// with feedback recording if rcp is available, the bytecode itself otherwise. Compiled on the
/// first call and cached in the pool.
SEXP Fir_bc_baseline_code(SEXP pool);
/// What the copy-and-patch JIT recorded for the code in `pool` (see `Fir_bc_baseline_code`),
/// with `calls` as the number of calls: the list `server/doc/bytecode-baseline-feedback.md`
/// describes. `R_NilValue` if rcp isn't available or the code wasn't compiled yet.
SEXP Fir_bc_baseline_recording(SEXP pool, int calls);
/// The recordings (`Fir_bc_baseline_recording`) of every bytecode baseline whose constant pool is
/// reachable from `pool` (a module's constant pool, i.e. the one its main function was
/// initialized with), as a list of `list(function = <FIŘ function name>, <recording...>)`.
///
/// Baselines only record feedback when they're compiled by the copy-and-patch JIT, so this
/// returns `R_NilValue` if it isn't available or no baseline ran.
SEXP Fir_serialized_feedback(SEXP pool);

void Fir_print_signature(Fir_Signature signature);
void Fir_print_type(Fir_Type type);
void Fir_print_kind(Fir_Kind kind);
void Fir_print_primitive_kind(Fir_PrimitiveKind primitive);
void Fir_print_promisity(Fir_Promisity promisity);
void Fir_print_ownership(Fir_Ownership ownership);
void Fir_print_concreteness(bool definite);
void Fir_print_effects(Fir_Effects effects);
bool Fir_effects_impure(Fir_Effects effects);
bool Fir_effects_reflect(Fir_Effects effects);
bool Fir_is_subeffects(Fir_Effects a, Fir_Effects b);
Fir_Effects Fir_effects_union(Fir_Effects a, Fir_Effects b);
Fir_Effects Fir_effects_intersect(Fir_Effects a, Fir_Effects b);

bool Fir_is_compiled_closure(SEXP value, Fir_FunctionData **data);
bool Fir_is_compiled_promise(SEXP value, Fir_PromiseGlobalData **global_data,
                             Fir_PromiseLocalData **local_data);

Fir_Kind Fir_kind_primitive_scalar(Fir_PrimitiveKind primitive_kind);
Fir_Kind Fir_kind_primitive_vector(Fir_PrimitiveKind primitive_kind);
Fir_Kind Fir_kind_primitive_vector1(Fir_PrimitiveKind primitive_kind);

extern Fir_Promisity Fir_promisity_value;
Fir_Promisity Fir_promisity_maybe(Fir_Effects effects);
Fir_Promisity Fir_promisity_promise(Fir_Effects effects);

Fir_Type Fir_type(Fir_Kind kind, Fir_Promisity promisity, Fir_Ownership ownership, bool definite);
bool Fir_is_subtype(Fir_Type this_type, Fir_Type other_type);
bool Fir_value_matches(SEXP value, Fir_Type type);

Fir_Signature Fir_signature(Fir_Type return_type, int param_count, Fir_Type const *param_types, Fir_Effects effects);

SEXP Fir_mk_closure(Rsh_code dispatchFromR, SEXP formals, SEXP cp, SEXP env);
/// Replace the dispatch and from-R entries of the function whose constant pool is `constants`
/// (see `Fir_FunctionData`).
void Fir_fun_set_entries(SEXP constants, Fir_DispatchImplFn dispatch_impl, Fir_FromRFn from_r);
/// A compiled promise is a `PROMSXP` whose `PRCODE` is an external pointer with tag `Rsh_CodeTag`,
/// address `evalFromR`, and protected data `[expr, cp, local_data]` (a `VECSXP`):
/// - `expr`: the source expression, or `R_UnboundValue` if unknown. GNU-R's `R_PromiseExpr`
///   (`PREXPR`) returns it, and raises an error when it is `R_UnboundValue`. So read the code with
///   `PRCODE`, never `PREXPR`.
/// - `cp`: the constant pool of the `prom` instruction (slot 0 is the `Fir_PromiseGlobalData`).
/// - `local_data`: a `RAWSXP` holding this instance's `Fir_PromiseLocalData`.
SEXP Fir_mk_promise(Rsh_code evalFromR, SEXP cp, void **captures, SEXP env, SEXP expr);
#define Fir_prom_expr(data) VECTOR_ELT((data), 0)
#define Fir_prom_cp(data) VECTOR_ELT((data), 1)
#define Fir_prom_local(data) ((Fir_PromiseLocalData *)STDVEC_DATAPTR(VECTOR_ELT((data), 2)))
/// An evaluated (GNU-R) promise whose expression and value are `value`, like the promises
/// `do.call` makes for its arguments.
SEXP Fir_mk_value_promise(SEXP value);
/// Prepend `promise` to `tracked_list` (a pairlist of promises created in the current frame),
/// re-protecting it at `idx`, and return `promise`. Used to remember which promises to mark
/// escaped when the frame exits.
SEXP Fir_track_promise(SEXP promise, SEXP *tracked_list, PROTECT_INDEX idx);
/// Mark every promise in `tracked_list` as escaped (its creating frame has exited).
void Fir_mark_promises_escaped(SEXP tracked_list);
/// Given a compiled promise's data (see `Fir_mk_promise`), if it
/// escaped its creating frame, record the escape or crash (if it was speculated local). Called
/// before forcing, including when R itself forces the promise.
void Fir_check_promise_escaped(SEXP data);

#ifdef FIR_STATS
/// Run a compiled promise's code `eval` in `env`, and count the force and whether the code
/// reflected (see `Fir_stats_get`). Both force paths call it: `Fir_force`, and (with `data`, see
/// `Fir_mk_promise`) the from-R entry that R's `forcePromise` calls.
SEXP Fir_stats_eval_promise(Fir_PromiseFn eval, SEXP env, SEXP data);
/// The counters, as a named numeric vector:
/// - `fir.dups`: copies the compiled code made (`Fir_dup`, and the borrowed subassign helpers'
///   shallow copies); `fir.dups.shallow` is the latter alone.
/// - `dups`: every copy GNU-R made (its `duplicate_counter`), or `NA` if R doesn't export it.
/// - `created`, `forced`, `reflected`: compiled promises (`Fir_mk_promise`) that were created,
///   forced (counted once per promise), and observed to reflect while forced.
///   `<counter>.may.reflect` counts only promises whose site the server inferred may reflect.
/// - `elided`: created promises whose frame is elided or non-reflective, so they can't reflect.
SEXP Fir_stats_get(void);
/// Set every counter (including GNU-R's `duplicate_counter`) to 0.
SEXP Fir_stats_reset(void);
#endif

SEXP Fir_cast(SEXP value, Fir_Type type);
SEXP Fir_dup(SEXP value);
SEXP Fir_force(SEXP promise);
SEXP Fir_maybe_force(SEXP valueOrPromise);
/// The value behind `valueOrPromise`, if it can be had without an effect the program could
/// observe: the promise is already forced, or its body is one whose evaluation is invisible (see
/// `Fir_code_is_pure_to_eval`). Returns the promise unchanged otherwise.
SEXP Fir_safe_force(SEXP valueOrPromise);
/// The argument of the parameter `symbol` in the frame `env` that `applyClosure` made for a
/// from-R call: the missing argument if the parameter's argument was missing (even if
/// `applyClosure` bound it to a promise of the parameter's default: FIŘ code computes the
/// default itself), else the binding, safely forced.
SEXP Fir_from_r_arg(SEXP env, SEXP symbol);
SEXP Fir_load(SEXP symbol, SEXP env);
SEXP Fir_load_fun(SEXP symbol, SEXP env);
SEXP Fir_load_dots(int index, SEXP env);
/// The from-R entry also saves the parent of `Rsh_ElidedEnv` (`outer_parent`, which the caller
/// protects), and the exit restores it.
void Fir_set_env_pushed_from_r(
    SEXP env, SEXP* outer_env, bool* push_suppressed, SEXP* outer_parent);
void Fir_unset_env_pushed_from_r(SEXP outer_env, bool push_suppressed, SEXP outer_parent);
/// Returns whether it pushed a new environment (and protected it). Returns false when the
/// environment is the one R made for the current from-R call, which `Fir_pop_env` must not pop.
/// An elided push saves the parent it replaces in `*saved`. A real frame in an elided one gets the
/// elided one's parent, and its push saves `Rsh_ElidedEnv`. Other pushes save `NULL`.
bool Fir_push_env(SEXP *env, Fir_MkEnvType type, SEXP *saved);
/// `pushed` is what the matching `Fir_push_env` returned, and `saved` what it saved. Popping an
/// elided frame restores the parent the push replaced. A non-local exit between them (a caught
/// error) skips the restore. The from-R exit restores the parent. If no from-R exit is between the
/// catch and a live elided frame (a direct call of a compiled closure, a forced promise, GNU-R code
/// that the frame calls), that frame reads a callee's parent, and its pop sets `*env` to it.
void Fir_pop_env(SEXP *env, bool pushed, SEXP saved);
/// If `*env` is the elided environment, replaces it with a new empty one (protected) whose
/// parent is `closure_env`, the environment the version received. A deopt branch calls it:
/// it stores into the frame, and the bytecode the deopt continues in needs a real one.
void Fir_materialize_env(SEXP *env, SEXP closure_env);
SEXP Fir_mk_vector(Fir_Kind kind, int count, void const *values, SEXP const *names);
SEXP Fir_reflective_load(SEXP promise, SEXP symbol);
SEXP Fir_reflective_store(SEXP promise, SEXP symbol, SEXP value);
int Fir_subscript_read_int(SEXP vector, int index);
double Fir_subscript_read_real(SEXP vector, int index);
Rboolean Fir_subscript_read_logical(SEXP vector, int index);
char* Fir_subscript_read_string(SEXP vector, int index);
/// `Fir_subscript_read_*` but an out-of-range index reads as `NA` instead of failing, which is how
/// R's `[` differs from its `[[`.
int Fir_subscript_read_na_int(SEXP vector, int index);
double Fir_subscript_read_na_real(SEXP vector, int index);
Rboolean Fir_subscript_read_na_logical(SEXP vector, int index);
char* Fir_subscript_read_na_string(SEXP vector, int index);
SEXP Fir_subscript_write_int(SEXP vector, int index, int value);
SEXP Fir_subscript_write_real(SEXP vector, int index, double value);
SEXP Fir_subscript_write_logical(SEXP vector, int index, Rboolean value);
SEXP Fir_subscript_write_string(SEXP vector, int index, char* value);
SEXP Fir_super_load(SEXP symbol, SEXP env);
void Fir_super_store(SEXP symbol, SEXP value, SEXP env);
/// `call` is the source call of the FIŘ statement, or `NULL`. The callee gets it as its `call` (for
/// errors, `sys.call()`, and dispatch). If it is `NULL`, or it has a `...` that `env` does not bind,
/// the callee gets a call built from the arguments.
/// `args` has no unsupplied trailing parameters (`Fir2CCompiler` drops them). An argument whose value
/// is the missing argument is passed through, as in GNU-R.
SEXP Fir_call_builtin(int blt_idx, SEXP call, SEXP env, int argc, SEXP *args, SEXP *names);
/// `Fir_call_builtin`, where bit `i` of `values` is set if `args[i]` is a value, not an expression
/// for the callee to evaluate. A special evaluates its arguments, so it gets such a symbol or call
/// in an evaluated promise.
SEXP Fir_call_builtin_values(int blt_idx, SEXP call, SEXP env, int argc, SEXP *args, SEXP *names,
                             uint64_t values);
/// Call the base function `symbol` names, for `builtins.fir` functions with no `R_FunTab` entry.
SEXP Fir_call_base(SEXP symbol, SEXP call, SEXP env, int argc, SEXP *args, SEXP *names);
SEXP Fir_call_dynamic(SEXP callee, SEXP call, SEXP env, int argc, SEXP *args, SEXP *names);

/// A call of a replacement function in GNU-R's assignment protocol (bytecode's `STARTASSIGN`,
/// `SETTER_CALL`, `ENDASSIGN`), for `l = ld x; r = f(l, ...) in <f(*tmp*, ...)>; st x = r`, or
/// `r = f(l, ...) in <f(*tmp*, ...)>` where FIŘ keeps `x` in registers. The
/// protocol lets the callee modify `x`'s value in place when nothing else references it.
///
/// `Fir_setter_begin` reads `x`'s binding. If the protocol applies (`active`), it counts the
/// references in `linked` (every register that outlives the call), sets `x`'s binding as being
/// assigned, and puts in `value` the binding's value, or a shallow copy if that's shared. The
/// call then passes `value` without counting it, and `Fir_setter_end` undoes the rest and returns
/// `result`. An error in between leaves the counts and the flag set, which only causes copies.
typedef struct {
  SEXP cell;
  SEXP value;
  int nlinked;
  SEXP *linked;
  bool active;
} Fir_Setter;

/// `lhs` is the value the `ld` read. The protocol only applies if `x`'s binding still holds it.
void Fir_setter_begin(Fir_Setter *s, SEXP symbol, SEXP env, SEXP lhs, int nlinked, SEXP *linked);
/// `Fir_setter_begin` for a variable that FIŘ keeps in a register instead of a binding: `lhs` is the
/// call's first argument (a value, or a forced promise). `value` is a copy if anything counts a
/// reference to it.
void Fir_setter_begin_value(Fir_Setter *s, SEXP lhs, int nlinked, SEXP *linked);
SEXP Fir_setter_end(Fir_Setter *s, SEXP result);
/// `Fir_dup(value)` for `d = dup value; ...; st x = d`, where `value` is (an assumption of) `lhs =
/// ld x`, and the code between reads neither `x` nor a register of the old value (see
/// `Fir2CCompiler`). It returns `value` itself, as GNU-R's `STARTASSIGN` doesn't copy, if `x`'s
/// binding still holds it, isn't in an assignment, and is its only reference once the `linked`
/// registers count. Then everything that reads the value reads it through `d`, the same as if it
/// were a copy.
SEXP Fir_assign_dup(SEXP symbol, SEXP env, SEXP lhs, SEXP value, int nlinked, SEXP *linked);
/// `Fir_assign_dup` for a variable that FIŘ keeps in a register: `value` itself if nothing counts
/// a reference to it.
SEXP Fir_value_dup(SEXP value, int nlinked, SEXP *linked);
/// `Fir_call_dynamic` in the protocol `s` began; `args[0]` is replaced by `s->value`.
SEXP Fir_call_setter(Fir_Setter *s, SEXP callee, SEXP call, SEXP env, int argc, SEXP *args,
                     SEXP *names);
/// `Fir_call_builtin_values` in the protocol `s` began; `args[0]` is replaced by `s->value`.
SEXP Fir_call_setter_builtin(Fir_Setter *s, int blt_idx, SEXP call, SEXP env, int argc, SEXP *args,
                             SEXP *names, uint64_t values);
/// Run a baseline version that is the function's original GNU-R bytecode.
SEXP Fir_bc_baseline_call(SEXP pool, SEXP env, int argc, SEXP const *args);
void Fir_deopt(int pc, int stack_size, SEXP const *stack_values, SEXP env);
bool Fir_assume_function(SEXP value, Fir_DispatchFn dispatch);
bool Fir_assume_builtin_function(SEXP value, int blt_idx);
bool Fir_assume_base_function(SEXP value, SEXP symbol);
bool Fir_assume_load_fun(SEXP symbol, SEXP env, Fir_DispatchFn dispatch, SEXP* found_ref);
bool Fir_assume_load_builtin_fun(SEXP symbol, SEXP env, int blt_idx, SEXP* found_ref);
bool Fir_assume_load_base_fun(SEXP symbol, SEXP env, SEXP base_symbol, SEXP* found_ref);
bool Fir_assume_load_var(SEXP symbol, SEXP env, SEXP constant);
bool Fir_assume_type(SEXP value, Fir_Type type);

void Fir_dbg_comment(const char* comment);
void Fir_dbg_sexp(const char* name, SEXP value);
void Fir_dbg_logical(const char* name, Rboolean value);
void Fir_dbg_int(const char* name, int value);
void Fir_dbg_float(const char* name, double value);
void Fir_dbg_string(const char* name, char* value);
void Fir_dbg_boolean(const char* name, bool value);
void Fir_dbg_signature(Fir_Signature signature);

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgnu-zero-variadic-macro-arguments"

// Native-type-returning versions (for scalar types, bool)
#define DEFINE_INTRINSIC(ret, X, sig, ...)\
  ret Fir_ver_call_ ## X ## _ ## sig(SEXP env, ##__VA_ARGS__)

#define DEFINE_OVERRIDDEN_BUILTIN(ret, X, sig, ...)\
  ret Fir_ver_call_ ## X ## _ ## sig(SEXP env, ##__VA_ARGS__)

#pragma clang diagnostic pop

DEFINE_INTRINSIC(SEXP, checkFun, value_fx_impure_ret_value, SEXP value);
// Raises if a variable's binding is the missing argument. `GETVAR` calls it before the force, as
// GNU-R's `getvar` does: the value of a forced promise may be the missing argument.
DEFINE_INTRINSIC(SEXP, checkMissing, any_fx_impure_ret_value, SEXP value);
DEFINE_INTRINSIC(SEXP, missing, any_fx_none_ret_vec1_logical, SEXP value);
DEFINE_INTRINSIC(bool, missing, any_fx_none_ret_bool, SEXP value);
DEFINE_INTRINSIC(SEXP, toForSeq, value_fx_none_ret_value, SEXP value);
DEFINE_INTRINSIC(SEXP, toForSeq, vec_logical_fx_none_ret_vec_logical, SEXP value);
DEFINE_INTRINSIC(SEXP, toForSeq, vec_int_fx_none_ret_vec_int, SEXP value);
DEFINE_INTRINSIC(SEXP, toForSeq, vec_real_fx_none_ret_vec_real, SEXP value);
DEFINE_INTRINSIC(SEXP, toForSeq, vec_string_fx_none_ret_vec_string, SEXP value);
DEFINE_INTRINSIC(SEXP, setInvisible, fx_none_ret_value);
DEFINE_INTRINSIC(SEXP, setVisible, fx_none_ret_value);
DEFINE_INTRINSIC(bool, naToFalse, vec1_logical_fx_none_ret_bool, SEXP value);
DEFINE_INTRINSIC(bool, naToFalse, scalar_logical_fx_none_ret_bool, Rboolean value);
DEFINE_INTRINSIC(bool, naToTrue, vec1_logical_fx_none_ret_bool, SEXP value);
DEFINE_INTRINSIC(bool, naToTrue, scalar_logical_fx_none_ret_bool, Rboolean value);

// box: scalar → vector (length-1 SEXP)
DEFINE_INTRINSIC(SEXP, box, scalar_logical_fx_none_ret_vec1_logical, Rboolean value);
DEFINE_INTRINSIC(SEXP, box, scalar_int_fx_none_ret_vec1_int, int value);
DEFINE_INTRINSIC(SEXP, box, scalar_real_fx_none_ret_vec1_real, double value);
DEFINE_INTRINSIC(SEXP, box, scalar_string_fx_none_ret_vec1_string, char* value);

// unbox: vector (length-1 SEXP) → scalar
DEFINE_INTRINSIC(Rboolean, unbox, vec1_logical_borrowed_fx_none_ret_scalar_logical, SEXP value);
DEFINE_INTRINSIC(int, unbox, vec1_int_borrowed_fx_none_ret_scalar_int, SEXP value);
DEFINE_INTRINSIC(double, unbox, vec1_real_borrowed_fx_none_ret_scalar_real, SEXP value);
DEFINE_INTRINSIC(char*, unbox, vec1_string_borrowed_fx_none_ret_scalar_string, SEXP value);

// +: I+I→I, R+R→R, I+R→R, R+I→R
DEFINE_OVERRIDDEN_BUILTIN(int, _u2b, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b);
// +: unary versions
DEFINE_OVERRIDDEN_BUILTIN(int, _u2b, scalar_int_missing_fx_none_ret_scalar_int, int a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2b, scalar_real_missing_fx_none_ret_scalar_real, double a, SEXP b);
// -: same layout as +
DEFINE_OVERRIDDEN_BUILTIN(int, _u2d, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b);
// -: unary versions
DEFINE_OVERRIDDEN_BUILTIN(int, _u2d, scalar_int_missing_fx_none_ret_scalar_int, int a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2d, scalar_real_missing_fx_none_ret_scalar_real, double a, SEXP b);
// *: same layout as + (no unary)
DEFINE_OVERRIDDEN_BUILTIN(int, _u2a, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2a, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2a, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2a, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b);
// /: I/I→R, R/R→R, I/R→R, R/I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_int_scalar_int_fx_none_ret_scalar_real, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u2f, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b);
// :: I:I→vI, I:R→vI, R:R→V
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, scalar_int_scalar_int_fx_none_ret_vec_int, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, scalar_int_scalar_real_fx_none_ret_vec_int, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u3a, scalar_real_scalar_real_fx_none_ret_value, double a, double b);
// <: I<I→L, R<R→L, I<R→L, R<I→L,
//    I<I→B, R<R→B, I<R→B, R<I→B
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c, scalar_int_scalar_int_fx_none_ret_bool, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c, scalar_real_scalar_real_fx_none_ret_bool, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c, scalar_int_scalar_real_fx_none_ret_bool, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c, scalar_real_scalar_int_fx_none_ret_bool, double a, int b);
// <=: same layout as <
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3c_u3d, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c_u3d, scalar_int_scalar_int_fx_none_ret_bool, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c_u3d, scalar_real_scalar_real_fx_none_ret_bool, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c_u3d, scalar_int_scalar_real_fx_none_ret_bool, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3c_u3d, scalar_real_scalar_int_fx_none_ret_bool, double a, int b);
// ==: .->L, .->B
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, any_any_fx_none_ret_scalar_logical, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, scalar_logical_scalar_logical_fx_none_ret_scalar_logical, Rboolean a, Rboolean b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3d_u3d, scalar_string_scalar_string_fx_none_ret_scalar_logical, char* a, char* b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, any_any_fx_none_ret_bool, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, scalar_logical_scalar_logical_fx_none_ret_bool, Rboolean a, Rboolean b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, scalar_int_scalar_int_fx_none_ret_bool, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, scalar_real_scalar_real_fx_none_ret_bool, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u3d_u3d, scalar_string_scalar_string_fx_none_ret_bool, char* a, char* b);

// log: I,R→R, R,R→R, I,miss→R, R,miss→R
DEFINE_OVERRIDDEN_BUILTIN(double, log, scalar_int_scalar_real_fx_none_ret_scalar_real, int value, double base);
DEFINE_OVERRIDDEN_BUILTIN(double, log, scalar_real_scalar_real_fx_none_ret_scalar_real, double value, double base);
DEFINE_OVERRIDDEN_BUILTIN(double, log, scalar_int_missing_fx_none_ret_scalar_real, int value, SEXP base);
DEFINE_OVERRIDDEN_BUILTIN(double, log, scalar_real_missing_fx_none_ret_scalar_real, double value, SEXP base);
// abs: I→I, R→R
DEFINE_OVERRIDDEN_BUILTIN(int, abs, scalar_int_fx_none_ret_scalar_int, int value);
DEFINE_OVERRIDDEN_BUILTIN(double, abs, scalar_real_fx_none_ret_scalar_real, double value);

#define DEFINE_MATH1_BUILTINS(V)\
  V(sqrt, sqrt)\
  V(exp, exp)\
  V(floor, floor)\
  V(ceiling, ceil)\
  V(sign, Fir_sign)\
  V(expm1, expm1)\
  V(log1p, log1p)\
  V(cos, cos)\
  V(sin, sin)\
  V(tan, tan)\
  V(acos, acos)\
  V(asin, asin)\
  V(atan, atan)\
  V(cosh, cosh)\
  V(sinh, sinh)\
  V(tanh, tanh)\
  V(acosh, acosh)\
  V(asinh, asinh)\
  V(atanh, atanh)\
  V(lgamma, lgamma)
// TODO: import from Rmath.h
//  V(gamma, gammaf)\
//  V(digamma, digamma)\
//  V(trigamma, trigamma)\
//  V(cospi, cospi)\
//  V(sinpi, sinpi)\
//  V(tanpi, tanpi)

// math1: I→R, R→R
#define V(name, func)\
  DEFINE_OVERRIDDEN_BUILTIN(double, name, scalar_int_fx_none_ret_scalar_real, int value);\
  DEFINE_OVERRIDDEN_BUILTIN(double, name, scalar_real_fx_none_ret_scalar_real, double value);
DEFINE_MATH1_BUILTINS(V)
#undef V

DEFINE_OVERRIDDEN_BUILTIN(int, length, value_fx_none_ret_scalar_int, SEXP value);
// as.integer
DEFINE_OVERRIDDEN_BUILTIN(int, as_u2einteger, value_missing_fx_none_ret_scalar_int, SEXP value, SEXP missing);
// as.logical: V,miss→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, as_u2elogical, value_missing_fx_none_ret_scalar_logical, SEXP value, SEXP missing);
// as.logical: V,miss→B
DEFINE_OVERRIDDEN_BUILTIN(bool, as_u2elogical, value_missing_fx_none_ret_bool, SEXP value, SEXP missing);
// as.logical: L,miss→B
DEFINE_OVERRIDDEN_BUILTIN(bool, as_u2elogical, scalar_logical_missing_fx_none_ret_bool, Rboolean value, SEXP missing);
// as.character
DEFINE_OVERRIDDEN_BUILTIN(char*, as_u2echaracter, value_missing_fx_none_ret_scalar_string, SEXP value, SEXP missing);

// inherits(x, what, which): V,S,B→B
DEFINE_OVERRIDDEN_BUILTIN(bool, inherits, value_scalar_string_bool_fx_none_ret_bool, SEXP value, char* what, bool which);

// ^: I^I→R, R^R→R, I^R→R, R^I→R
DEFINE_OVERRIDDEN_BUILTIN(double, _u5e, scalar_int_scalar_int_fx_none_ret_scalar_real, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u5e, scalar_real_scalar_real_fx_none_ret_scalar_real, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u5e, scalar_int_scalar_real_fx_none_ret_scalar_real, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(double, _u5e, scalar_real_scalar_int_fx_none_ret_scalar_real, double a, int b);

// >: I>I→L, R>R→L, I>R→L, R>I→L
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b);

// >=: same layout as >
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e_u3d, scalar_int_scalar_real_fx_none_ret_scalar_logical, int a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u3e_u3d, scalar_real_scalar_int_fx_none_ret_scalar_logical, double a, int b);

// !=: .->L, .->B
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, any_any_fx_none_ret_scalar_logical, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, scalar_logical_scalar_logical_fx_none_ret_scalar_logical, Rboolean a, Rboolean b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, scalar_int_scalar_int_fx_none_ret_scalar_logical, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, scalar_real_scalar_real_fx_none_ret_scalar_logical, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21_u3d, scalar_string_scalar_string_fx_none_ret_scalar_logical, char* a, char* b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21_u3d, any_any_fx_none_ret_bool, SEXP a, SEXP b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21_u3d, scalar_logical_scalar_logical_fx_none_ret_bool, Rboolean a, Rboolean b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21_u3d, scalar_int_scalar_int_fx_none_ret_bool, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21_u3d, scalar_real_scalar_real_fx_none_ret_bool, double a, double b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21_u3d, scalar_string_scalar_string_fx_none_ret_bool, char* a, char* b);

// &, &&, |, ||, xor: B,B→B
DEFINE_OVERRIDDEN_BUILTIN(bool, _u26, bool_bool_fx_none_ret_bool, bool a, bool b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u26_u26, bool_bool_fx_none_ret_bool, bool a, bool b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u7c, bool_bool_fx_none_ret_bool, bool a, bool b);
DEFINE_OVERRIDDEN_BUILTIN(bool, _u7c_u7c, bool_bool_fx_none_ret_bool, bool a, bool b);
DEFINE_OVERRIDDEN_BUILTIN(bool, xor, bool_bool_fx_none_ret_bool, bool a, bool b);

// !: B→B, I→L, R→L
DEFINE_OVERRIDDEN_BUILTIN(bool, _u21, bool_fx_none_ret_bool, bool a);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21, scalar_int_fx_none_ret_scalar_logical, int a);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u21, scalar_real_fx_none_ret_scalar_logical, double a);

// bitwNot: I→I
DEFINE_OVERRIDDEN_BUILTIN(int, bitwNot, scalar_int_fx_none_ret_scalar_int, int a);
// bitwAnd, bitwOr, bitwXor: I,I→I
DEFINE_OVERRIDDEN_BUILTIN(int, bitwAnd, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(int, bitwOr, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b);
DEFINE_OVERRIDDEN_BUILTIN(int, bitwXor, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int b);
// bitwShiftL, bitwShiftR: I,I→I
DEFINE_OVERRIDDEN_BUILTIN(int, bitwShiftL, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int n);
DEFINE_OVERRIDDEN_BUILTIN(int, bitwShiftR, scalar_int_scalar_int_fx_none_ret_scalar_int, int a, int n);

// [ (scalar index read): v(T),I,miss,miss → T
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u5b, vec_logical_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_logical, SEXP x, int i, SEXP ddd, SEXP drop);
DEFINE_OVERRIDDEN_BUILTIN(int, _u5b, vec_int_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_int, SEXP x, int i, SEXP ddd, SEXP drop);
DEFINE_OVERRIDDEN_BUILTIN(double, _u5b, vec_real_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_real, SEXP x, int i, SEXP ddd, SEXP drop);
DEFINE_OVERRIDDEN_BUILTIN(char*, _u5b, vec_string_borrowed_scalar_int_missing_missing_fx_none_ret_scalar_string, SEXP x, int i, SEXP ddd, SEXP drop);

// [[ (scalar index read): same as [
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u5b_u5b, vec_logical_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_logical, SEXP x, int i, SEXP ddd, SEXP exact);
DEFINE_OVERRIDDEN_BUILTIN(int, _u5b_u5b, vec_int_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_int, SEXP x, int i, SEXP ddd, SEXP exact);
DEFINE_OVERRIDDEN_BUILTIN(double, _u5b_u5b, vec_real_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_real, SEXP x, int i, SEXP ddd, SEXP exact);
DEFINE_OVERRIDDEN_BUILTIN(char*, _u5b_u5b, vec_string_borrowed_scalar_int_missing_missing_fx_impure_ret_scalar_string, SEXP x, int i, SEXP ddd, SEXP exact);

// [<- (scalar index write): v(T)b,I,T,miss → v(T)f (copies `x`), v(T)o,… (writes in place)
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_borrowed_scalar_int_scalar_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, int i, Rboolean value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_owned_scalar_int_scalar_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, int i, Rboolean value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_borrowed_scalar_int_scalar_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, int i, int value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_owned_scalar_int_scalar_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, int i, int value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_borrowed_scalar_int_scalar_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, int i, double value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_owned_scalar_int_scalar_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, int i, double value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_borrowed_scalar_int_scalar_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, int i, char* value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_owned_scalar_int_scalar_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, int i, char* value, SEXP ddd);

// [[<- (scalar index write): same as [<- without the trailing `…`
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_borrowed_scalar_int_scalar_logical_fx_impure_ret_vec_logical_fresh, SEXP x, int i, Rboolean value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_owned_scalar_int_scalar_logical_fx_impure_ret_vec_logical_fresh, SEXP x, int i, Rboolean value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_borrowed_scalar_int_scalar_int_fx_impure_ret_vec_int_fresh, SEXP x, int i, int value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_owned_scalar_int_scalar_int_fx_impure_ret_vec_int_fresh, SEXP x, int i, int value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_borrowed_scalar_int_scalar_real_fx_impure_ret_vec_real_fresh, SEXP x, int i, double value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_owned_scalar_int_scalar_real_fx_impure_ret_vec_real_fresh, SEXP x, int i, double value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_borrowed_scalar_int_scalar_string_fx_impure_ret_vec_string_fresh, SEXP x, int i, char* value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_owned_scalar_int_scalar_string_fx_impure_ret_vec_string_fresh, SEXP x, int i, char* value);

// [<- (vector index write): v(T)b,v(I),v(T),miss → v(T)f (copies `x`), v(T)o,… (in place)
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_borrowed_vec_int_vec_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_owned_vec_int_vec_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_borrowed_vec_int_vec_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_owned_vec_int_vec_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_borrowed_vec_int_vec_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_owned_vec_int_vec_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_borrowed_vec_int_vec_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_owned_vec_int_vec_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd);

// [[<- (vector index write): same as [<- without the trailing `…`
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_borrowed_vec_int_vec_logical_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_owned_vec_int_vec_logical_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_borrowed_vec_int_vec_int_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_owned_vec_int_vec_int_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_borrowed_vec_int_vec_real_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_owned_vec_int_vec_real_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_borrowed_vec_int_vec_string_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_owned_vec_int_vec_string_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value);

// Real subscripts: coerce to an integer position and forward, which is what GNU-R does.
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u5b, vec_logical_borrowed_scalar_real_missing_missing_fx_none_ret_scalar_logical, SEXP x, double i, SEXP ddd, SEXP drop);
DEFINE_OVERRIDDEN_BUILTIN(int, _u5b, vec_int_borrowed_scalar_real_missing_missing_fx_none_ret_scalar_int, SEXP x, double i, SEXP ddd, SEXP drop);
DEFINE_OVERRIDDEN_BUILTIN(double, _u5b, vec_real_borrowed_scalar_real_missing_missing_fx_none_ret_scalar_real, SEXP x, double i, SEXP ddd, SEXP drop);
DEFINE_OVERRIDDEN_BUILTIN(char*, _u5b, vec_string_borrowed_scalar_real_missing_missing_fx_none_ret_scalar_string, SEXP x, double i, SEXP ddd, SEXP drop);
DEFINE_OVERRIDDEN_BUILTIN(Rboolean, _u5b_u5b, vec_logical_borrowed_scalar_real_missing_missing_fx_impure_ret_scalar_logical, SEXP x, double i, SEXP ddd, SEXP exact);
DEFINE_OVERRIDDEN_BUILTIN(int, _u5b_u5b, vec_int_borrowed_scalar_real_missing_missing_fx_impure_ret_scalar_int, SEXP x, double i, SEXP ddd, SEXP exact);
DEFINE_OVERRIDDEN_BUILTIN(double, _u5b_u5b, vec_real_borrowed_scalar_real_missing_missing_fx_impure_ret_scalar_real, SEXP x, double i, SEXP ddd, SEXP exact);
DEFINE_OVERRIDDEN_BUILTIN(char*, _u5b_u5b, vec_string_borrowed_scalar_real_missing_missing_fx_impure_ret_scalar_string, SEXP x, double i, SEXP ddd, SEXP exact);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_borrowed_scalar_real_scalar_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, double i, Rboolean value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_borrowed_vec_real_vec_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_owned_scalar_real_scalar_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, double i, Rboolean value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_logical_owned_vec_real_vec_logical_missing_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_borrowed_scalar_real_scalar_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, double i, int value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_borrowed_vec_real_vec_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_owned_scalar_real_scalar_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, double i, int value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_int_owned_vec_real_vec_int_missing_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_borrowed_scalar_real_scalar_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, double i, double value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_borrowed_vec_real_vec_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_owned_scalar_real_scalar_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, double i, double value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_real_owned_vec_real_vec_real_missing_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_borrowed_scalar_real_scalar_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, double i, char* value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_borrowed_vec_real_vec_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_owned_scalar_real_scalar_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, double i, char* value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u3c_u2d, vec_string_owned_vec_real_vec_string_missing_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_borrowed_scalar_real_scalar_logical_fx_impure_ret_vec_logical_fresh, SEXP x, double i, Rboolean value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_borrowed_vec_real_vec_logical_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_owned_scalar_real_scalar_logical_fx_impure_ret_vec_logical_fresh, SEXP x, double i, Rboolean value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_logical_owned_vec_real_vec_logical_fx_impure_ret_vec_logical_fresh, SEXP x, SEXP i, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_borrowed_scalar_real_scalar_int_fx_impure_ret_vec_int_fresh, SEXP x, double i, int value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_borrowed_vec_real_vec_int_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_owned_scalar_real_scalar_int_fx_impure_ret_vec_int_fresh, SEXP x, double i, int value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_int_owned_vec_real_vec_int_fx_impure_ret_vec_int_fresh, SEXP x, SEXP i, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_borrowed_scalar_real_scalar_real_fx_impure_ret_vec_real_fresh, SEXP x, double i, double value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_borrowed_vec_real_vec_real_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_owned_scalar_real_scalar_real_fx_impure_ret_vec_real_fresh, SEXP x, double i, double value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_real_owned_vec_real_vec_real_fx_impure_ret_vec_real_fresh, SEXP x, SEXP i, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_borrowed_scalar_real_scalar_string_fx_impure_ret_vec_string_fresh, SEXP x, double i, char* value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_borrowed_vec_real_vec_string_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_owned_scalar_real_scalar_string_fx_impure_ret_vec_string_fresh, SEXP x, double i, char* value);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, _u5b_u5b_u3c_u2d, vec_string_owned_vec_real_vec_string_fx_impure_ret_vec_string_fresh, SEXP x, SEXP i, SEXP value);

// as.integer(x): the overloads `SpecializeRealIndex` inserts to make a real subscript integral
DEFINE_OVERRIDDEN_BUILTIN(int, as_u2einteger, scalar_real_missing_fx_none_ret_scalar_int, double x, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, as_u2einteger, vec1_real_missing_fx_none_ret_vec1_int, SEXP x, SEXP ddd);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, as_u2einteger, vec_real_missing_fx_none_ret_vec_int, SEXP x, SEXP ddd);

// rep(x, times): T,I → v(T)
DEFINE_OVERRIDDEN_BUILTIN(SEXP, rep, scalar_logical_scalar_int_fx_none_ret_vec_logical, Rboolean x, int times);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, rep, scalar_int_scalar_int_fx_none_ret_vec_int, int x, int times);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, rep, scalar_real_scalar_int_fx_none_ret_vec_real, double x, int times);
DEFINE_OVERRIDDEN_BUILTIN(SEXP, rep, scalar_string_scalar_int_fx_none_ret_vec_string, char* x, int times);

// sum(x, na.rm=miss): v(L)→I, v(I)→I, v(R)→R
DEFINE_OVERRIDDEN_BUILTIN(int, sum, vec_logical_missing_fx_none_ret_scalar_int, SEXP x, SEXP naRm);
DEFINE_OVERRIDDEN_BUILTIN(int, sum, vec_int_missing_fx_none_ret_scalar_int, SEXP x, SEXP naRm);
DEFINE_OVERRIDDEN_BUILTIN(double, sum, vec_real_missing_fx_none_ret_scalar_real, SEXP x, SEXP naRm);

// is.X(x): V→B
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2enumeric, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2einteger, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2edouble, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2elogical, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2enull, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2ecomplex, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2eraw, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2efunction, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2eenvironment, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2elist, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2echaracter, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2eobject, value_fx_none_ret_bool, SEXP value);
DEFINE_OVERRIDDEN_BUILTIN(bool, is_u2esymbol, value_fx_none_ret_bool, SEXP value);

#ifdef __cplusplus
}
#endif
