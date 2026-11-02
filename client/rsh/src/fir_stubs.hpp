#pragma once

#include "rsh.hpp"

namespace rsh {

// Connect the stubs in compiled FIŘ code to the compile server at `address:port`, which compiles
// the versions they stand for (see `server/doc/lazy-versions.md`). Until this is called, stubs
// only ever run their fallbacks.
//
// If `deterministic`, a stub's second call waits for the compiled version (see
// `Fir_StubCompiler`), and so does a closure's first call after it asked for its module. If
// `threshold` isn't `NULL`, set the JIT threshold (`set_jit_threshold`).
SEXP fir_connect(SEXP address, SEXP port, SEXP deterministic, SEXP threshold);

// Wait until the server has answered every request stubs made so far. Doesn't load the answers:
// a stub loads what has arrived the next time it's called.
SEXP fir_drain();

// Set the JIT threshold N (`Fir_jit_threshold`).
SEXP set_jit_threshold(SEXP threshold);

// A closure with `compiled`'s formals and environment, and a *counting body*: bytecode that runs
// `.Call(tier_entry, state)`, where `tier_entry` is `rsh_tier` and
// `state` holds `compiled`'s bytecode and `name` (a string, or `NULL` to take the name from the
// first call that needs it). `compiled` itself if its body isn't bytecode, or is a counting body.
//
// GNU-R's JIT copies the body onto the closure it compiles.
SEXP rsh_jit_closure(SEXP compiled, SEXP name, SEXP tier_entry);

// What a counting body runs. Counts the call and runs the running closure's current code in its
// environment: its bytecode for the first N calls, then the baseline (`Fir_bc_baseline_code`),
// which records feedback when rcp is available. At 2N calls, if connected (`fir_connect`), asks
// the server to compile the closure with that feedback into a FIŘ module. Once the module is
// loaded, makes the running closure run it instead, and runs it. If the server fails, makes the
// running closure run the baseline instead.
SEXP rsh_tier(SEXP state);

// `"interpreted"`, `"baseline"` or `"optimized"`: which tier of the JIT `fun` runs in (see
// `rsh_tier`).
SEXP rsh_jit_tier(SEXP fun);

} // namespace rsh
