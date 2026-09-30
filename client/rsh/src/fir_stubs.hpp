#pragma once

#include "rsh.hpp"

namespace rsh {

// Connect the stubs in compiled FIŘ code to the compile server at `address:port`, which compiles
// the versions they stand for (see `server/doc/lazy-versions.md`). Until this is called, stubs
// only ever run their fallbacks.
//
// If `deterministic`, a stub's second call waits for the compiled version (see
// `Fir_StubCompiler`).
SEXP fir_connect(SEXP address, SEXP port, SEXP deterministic);

// Wait until the server has answered every request stubs made so far. Doesn't load the answers:
// a stub loads what has arrived the next time it's called.
SEXP fir_drain();

} // namespace rsh
