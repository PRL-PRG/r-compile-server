# Lazy versions

A function version's body is only computed when something first needs it. Until then the version
is *unevaluated*: it has a signature, and (unless it's a baseline) a *fallback* that can be run in
its place. This is what lets the compiler create a version for every call it would like to
specialize, and only pay to compile and optimize the ones that actually run.

This document describes the IR, how optimizations create and evaluate lazy versions, how the
interpreter runs them, and how the FIŘ-to-C compiler, the compile server and the client turn them
into code that patches itself.

## The IR

A version ([`Abstraction`](../src/main/java/org/prlprg/fir/ir/abstraction/Abstraction.java)) is in
one of three states:

- A **stub** has no body at all (`lazyBody()` is `null`, `isStub()`). It prints as `{ ... }`.
  Builtins and intrinsics are stubs; their code is in the runtime.
- An **unevaluated** version has a [`LazyBody`](../src/main/java/org/prlprg/fir/ir/abstraction/LazyBody.java)
  whose CFG hasn't been computed. `body()` computes it (`isEvaluated()` becomes true) by running
  the `LazyBody.Initializer` the version was constructed with, in a fresh empty CFG.
- An **evaluated** version's body is there, as before this change.

The signature (parameters, return type, effects) is never lazy. What the body is computed from
(e.g. bytecode, or another version) must determine it up front.

Evaluating a body that's already being evaluated throws: the initializer must not access the
version's own body. `LazyBody#peek()` returns the CFG while it's being filled, for code (like
`CFG#isPromise()` or feedback copying) that needs to refer to it without evaluating it.

### Fallbacks

An unevaluated version may have a **fallback**: a single-block CFG that adapts the version's
parameters, calls another version of the same function, adapts what that returns, and returns it.
It's what runs when the version is called before it's evaluated (the interpreter's first call, and
the compiled stub's calls until the server answers).

The call is a [`FallbackCallee`](../src/main/java/org/prlprg/fir/ir/callee/FallbackCallee.java),
not a `StaticFnCallee`: it names the callee by signature like a static call, but resolves to the
best matching version *other than the fallback's own* (`Function#guess(Signature, Abstraction)`),
because a copy of the baseline has the baseline's signature and would otherwise call itself. It
also runs in the environment the version was called with, since a fallback has no closure to take
one from.

Evaluating the version discards the fallback (`LazyBody#fallback()` becomes `null`), dropping its
uses of the parameters so that the body's are the only ones. The CFG itself is left intact,
because it may be running: the version is evaluated by its second call, which its first call, which
runs the fallback, may still be making (recursion).

The `CFGChecker` requires every unevaluated version except the baseline to have a fallback, and
checks the fallback's shape. `TypeAndEffectChecker` type-checks the fallback like a body. The
baseline is exempt because it's what every fallback ultimately calls, and because the compiler has
the original bytecode to run in its place (see below), so nothing needs a baseline's fallback.

### Printing

Unevaluated versions aren't printed, since the text couldn't say how to evaluate them, and so they
don't parse either. A module printed with unevaluated versions is therefore not the whole module
(a call whose signature only an unevaluated version satisfies, e.g. one with unboxed arguments,
doesn't resolve in it). The exception is an unevaluated baseline, which the function can't go
without: it prints as `{ <unevaluated> }`, which the parser rejects.

`Module#evaluateAll()` evaluates everything, including whatever that adds, for when the whole
module is wanted (e.g. to snapshot it; see [Tests](#tests)).

## What creates lazy versions

### BC→FIŘ

`BC2FirClosureCompiler` adds a function whose baseline is unevaluated: the bytecode is only
compiled into FIŘ when the baseline's body is accessed. That's also when the functions of the
closure's inner closures are added to the module, when the baseline's feedback registers are
recorded in the `ModuleBcOriginMap`, and when unsupported bytecode is reported. The baseline has
no fallback.

### Optimizations

Every optimization that used to copy a version into a new one (`CopyBaseline`,
`CreateBestVersion`, `SpeculateDispatch`, `CreateOwnedParameterVersion`,
`CreateBorrowedParameterVersion`, `Unbox`, `StrictifyPromise`) now creates a lazy copy through
[`LazyCopy`](../src/main/java/org/prlprg/fir/opt/LazyCopy.java). The copy's body is the source's,
copied when first accessed, adapted by an optimization-specific `LazyCopy.Adapter` (e.g. `Unbox`
re-boxes the now-unboxed parameters at the entry and unboxes the return value). The fallback does
the same adaptation around a call to the source's signature.

Optimizations don't evaluate versions: `AbstractionOptimization` runs on evaluated versions only,
and the passes that look at a callee's body (`StrictifyPromise`, `StaticClosure`,
`ElideUnusedVersions`) treat an unevaluated one conservatively. The one exception is `Inline`,
which evaluates a callee once the call passes every check that doesn't depend on the callee's
body, and does so before it starts inlining (evaluating can run optimizations on the whole
module, this version included). `ElideUnusedVersions` also keeps any version an unevaluated one
will be copied from (`LazyBody#sources()`), since the copy will need whatever the source calls.

### Runs and `runId`

A copy is an unoptimized starting point, so something has to optimize it once it's evaluated.
`Optimization#run` is now told the *top-level* optimization of the run it's part of, and every
optimization has a `runId()` that changes when a run of it as the top-level optimization starts or
ends. `LazyCopy` captures both when it creates the copy. When the copy is evaluated:

- If `topLevel.runId()` is unchanged, the run that created the copy is still going, and it
  optimizes the copy like any other evaluated version. Nothing more to do.
- Otherwise, the top-level optimization is run again on the whole module. That optimizes the
  copy, may create more versions, and leaves versions that were already at a fixpoint alone. It
  isn't re-entered if it's already running (a later run is in the middle of changing the code
  that made it evaluate the copy), since that run optimizes the copy too.

The run waits for the module to be [unpinned](#the-interpreter). `Optimization#evaluateAll`
evaluates and optimizes every unevaluated version of a module in one run instead of one per
version.

## The interpreter

`InternalInterpreter` calls an unevaluated version's fallback for the rest of the top-level call
(however many times the version is called), and evaluates the version once that call returns, so
the next top-level call runs its body. Feedback recorded while running a fallback is discarded,
except the call itself and the parameters' (which the version keeps).

This is the order of events in compiled code: a stub's calls run the fallback while the compiler
evaluates and optimizes the version, and the next call after that (in the deterministic mode the
tests use) runs it compiled. The interpreter can't do the evaluation in the middle of a top-level
call: it runs the IR directly, and evaluating a version optimizes the module, which would change
the instructions under it. So it *pins* the module (`Module#pin()`) for the duration of a
top-level call, and the runs that evaluating a version triggers are deferred
(`Module#changeWhenUnpinned`) until the module is unpinned, deduplicated per optimization. It
never dispatches to a version that's unevaluated at the time of the call other than to run its
fallback; the interpreter's first top-level call thus runs the fallback, and its second the copy,
optimized.

## FIŘ→C

`Fir2CCompiler` compiles an unevaluated version into a **stub**: a C function with the version's
name and signature that first asks the runtime (`Fir_stub_enter`) whether the compiled version has
arrived and calls it if so, and otherwise runs the fallback, compiled into the stub. The stub's
`Fir_Stub` names the module and the stub to the server. An unevaluated baseline is compiled into
the bytecode-running shim as before (which is why it needs no fallback); one with no bytecode is
evaluated. Fallbacks are a new way into that shim from FIŘ code, so it now binds a FIŘ `dots`
argument (a plain pairlist, or `NULL`) the way `applyClosure` binds `...` (a `DOTSXP`, or
missing), which the bytecode expects.

The runtime (`client/rsh/src/fir2c/runtime.c`) doesn't know how to reach the server, so it takes a
`Fir_StubCompiler` from whoever does (`Fir_set_stub_compiler`). Without one, stubs run their
fallbacks forever. The first call of a stub sends a request for its version; later calls poll for
the answer, and once it's loaded call the compiled version. In `deterministic` mode (for tests)
the second call waits for the answer, so that exactly the first call runs the fallback.

### The compile server

A module is compiled in pieces, tracked by a
[`Fir2CSession`](../src/main/java/org/prlprg/fir2c/Fir2CSession.java): what the client has of the
module (functions, versions, which of them are stubs), and every version's part of its C names.
The names stay valid even as the versions' signatures (which the names are made from) change, and
every name is prefixed by the session's id so that a client's JIT, which remembers where it found
a name, can load more than one module.

The server keeps the sessions of the modules its clients run in
[`FirModules`](../src/main/java/org/prlprg/server/FirModules.java), and serves the
`CompileFirVersion` RPC (`proto/routes.proto`): find the session, evaluate the stub's version
(which optimizes it, as above), and compile a *patch* with `Fir2CCompiler#compileStub`. The patch
is a C unit with an initializer that the client calls with the patch's constant pool. It defines
the compiled version and makes its stub call it (`Fir_stub_compiled`), and, following the compiled
version's static calls, whatever else the client doesn't have: new functions, new versions (as
stubs if they're unevaluated). It doesn't redefine what the client already has and is up to date
(see below); that's declared `extern` and resolved by the client's JIT against the code it loaded
before. An answer can therefore have no code at all, when an earlier one already brought the
version.

What the client calls a version by (`Fir_ver_call_...`) is an *entry*: a function pointer that
the client's current *implementation* of the version (`Fir_ver_impl_..._<n>`, each with its own
constants and initializer) is assigned to. A stub is the first implementation; a patch assigns the
entry the compiled one. That's also how a version the client already has compiled is *updated*: a
patch reimplements every version the client has whose IR changed since (`Fir2CSession` keeps a
fingerprint of what each implementation was compiled from), as well as every stub whose version
was evaluated since, not just the one the patch was asked for. A version's IR changes after it's
compiled because evaluating another version re-runs the optimizations on the whole module, and
although the other versions were at a fixpoint, the module has changed under them: callees are
now evaluated (so `Inline` can inline them, and `StrictifyPromise` and `StaticClosure` can look
inside them), and versions have been added (so `OptimizeCallee` can retarget calls, and
`ImproveSignatures` narrow types after them).

An entry has a fixed calling convention, but optimizing a version can narrow what it returns (to
an unboxed scalar). An implementation that returns something else than the version's current
entry gives the version a new entry, which calls compiled from then on use, and the older entries
are assigned an adapter that boxes the new implementation's result, for the client's existing
calls. Calls compiled later also convert what an entry returns if the version's return type has
narrowed since without the version being reimplemented (which doesn't happen in practice).

A function's dispatch function (what dispatch calls and `Fir_call_dynamic` call, and what
identifies the function to `Fir_assume_function`) and its from-R function (what its closures'
bodies call) choose among the versions the function has, so they're fixed trampolines that
forward, through the function's `Fir_FunctionData`, to a generated implementation
(`Fir_fun_dispatch_f_0`, `Fir_fun_from_r_f_0`, ...). A patch regenerates the implementations of
every function whose versions changed since the client's were generated -- versions added or
removed, an entry added, or a signature changed -- and replaces them (`Fir_fun_set_entries`).
Regenerating refers to every version of the function, so the patch also defines the ones the
client doesn't have (as stubs), and dispatch in the client always sees the same versions the
interpreter would. The session also remembers each version's function, because a version the
client has may since have been removed from its function as unused.

### The client

The `rsh` package registers the `Fir_StubCompiler` (`rsh::rsh_fir_connect(address, port,
deterministic)`, `client/rsh/src/fir_stubs.cpp`). Requests are sent by one worker thread, one at
a time in the order stubs made them; everything else -- loading the object into the ORC JIT,
deserializing the constants, calling the initializer -- happens on the R thread when a stub polls.
Answers are loaded in the order they were requested, all of them, so that an answer without code
finds its version already loaded. `rsh::rsh_fir_drain()` waits for every request to be answered.

## Tests

- `FirQuery` and `OptimizedFirQuery` are *transient* (`Query#isTransient`): every load recomputes
  the module, since using it evaluates parts of it. Their snapshots are of a separately computed
  copy with the baselines evaluated (`FirQuery`) or the baseline and best version of every function
  evaluated (`OptimizedFirQuery`), and are only compared against.
- `ForcedFirQuery` wraps one of them and evaluates everything. The FIŘ→C compile tests
  (`Fir2CTest#test`, `FirAfterOpt2CTest#test`) snapshot the C of the forced module.
- `EvalQuery` runs the *lazy* module instead (`Fir2CQuery#forEval`), with its stubs connected to
  the in-JVM test server (`FirTestServer`), in a second R process that has `rsh` loaded
  (`GNUR#rshInstance`), calling `main` three times (fallback, compiled version, what it calls
  compiled). It saves the module as the run left it (`module.fir` next to the output).
  `InterpretQuery` does the same for the interpreter.
- `ManualFirServer` (test sources) serves one example for running `eval.R` by hand.

Running these tests needs `rsh` installed in the vendored R (`make -C client/rsh install`), and it
must be reinstalled after changing the runtime, which the tests no longer compile in.
