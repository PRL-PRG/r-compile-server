## Building

```sh
$ make dependencies
$ make
```

For development run:

```sh
$ make setup
```

which will create the `compile_commands.json` file for clangd.

It is not a bad idea to have `../../R` compiled for debugging.
To do that you can use the `../../tools/build-gnur.sh` script with `DEBUG=true`.

## The JIT

```r
rsh::rsh_jit_enable(threshold = 10L)  # GNU-R's JIT now compiles closures with `rsh_cmpfun`
rsh::rsh_fir_connect("0.0.0.0", 8980L) # needed for the last tier
rsh::rsh_jit_tier(f)                   # "interpreted", "baseline" or "optimized"
```

GNU-R's JIT calls the compile hook (`compiler::cmpfun`, which `rsh_jit_enable` replaces with
`rsh_cmpfun`) the first or second time a closure whose body isn't compiled yet is called. Code
that is already bytecode never reaches the hook: package functions (compiled at install), and
closures created by compiled code (their bodies are compiled with the code that creates them).
Small closures that aren't top-level are never compiled either, unless `R_JIT_STRATEGY=3` is set
when R starts, which also makes the hook run on the first call.

`rsh_cmpfun` compiles the closure to bytecode with GNU-R's compiler, and gives it a *counting
body*: bytecode that runs `.Call(C_rsh_tier, tier)` (`src/fir_stubs.cpp`). `tier` is an external
pointer (bytecode constants must not change) to a state that holds the
bytecode, the formals, the baseline's code, a call counter, the request state, the closure's name
and, once it's loaded, the optimized body. With N the threshold, the closure:

1. runs its bytecode for calls 1 to N ("interpreted");
2. from call N+1, runs the baseline, the bytecode compiled by the copy-and-patch JIT (rcp) with
   feedback recording when rcp is available (only in the RCP variant of GNU-R), or the bytecode
   otherwise ("baseline"; see `../../server/doc/bytecode-baseline-feedback.md`);
3. after call 2N, if connected, sends the closure (with its bytecode body and its environment),
   its name and what the baseline recorded to the server (`CompileFirClosure`), which compiles it
   to a FIŘ module. The name is the `name` option of `rsh_cmpfun`, else the function's name in the
   call, else `f`. Later calls check for the answer (in `deterministic` mode, call 2N+1 waits for
   it). Once the module is loaded, the closure's body becomes an external pointer (`Rsh_CodeTag`)
   to the module's from-R function, which GNU-R calls directly ("optimized"). If the server fails,
   or loading its answer does, the closure runs the baseline from then on and doesn't ask again
   ("baseline").

`rsh_jit_tier(f)` returns "baseline" once `f` ran N calls, i.e. when its next call runs the
baseline. See `../../server/doc/lazy-versions.md` for what the server does with the request.

Without `rsh_fir_connect`, closures stay in the baseline. The last call of `rsh_jit_enable` or
`rsh_fir_connect(threshold = ...)` sets the threshold.

`rsh_compile` and the `Compile` RPC are the older bytecode-to-C (bc2c) path, which the JIT no
longer uses.

## FIŘ stubs

Code the server compiles from FIŘ contains *stubs*: versions the server hasn't compiled yet, which
run a fallback until it has (see `../../server/doc/lazy-versions.md`). `src/fir_stubs.cpp` is what
connects them to the server:

```r
rsh::rsh_fir_connect("0.0.0.0", 8980L)  # from now on, a stub's call N asks for its version
rsh::rsh_fir_drain()                    # wait until every request so far is answered
```

Until `rsh_fir_connect` is called, stubs run their fallbacks forever. A stub counts its calls and
requests its version at call N (the same threshold as the closures'). If the server answers that
the version is the same as the fallback, the stub runs the fallback from then on and never asks
again (`FIR_STUB_FALLBACK`); a later patch can still replace it, or put a compiled version back on
its fallback. The `deterministic` argument makes a stub's call N+1 wait for the answer, and a
closure's call 2N+1 wait for its module (the server's tests use it). Stubs and closures share the worker thread and its queue, and
`rsh_fir_drain` waits for both.
