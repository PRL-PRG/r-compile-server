package org.prlprg.gen2c;

import org.prlprg.sexp.VecSXP;

/// C code that adds to a module the client already has (see
/// [org.prlprg.fir2c.Fir2CCompiler#compileStub]).
///
/// @param init The name of the function in `code` the client calls with `constantPool` once the
///     code is loaded.
public record CompiledPatch(CUnit code, VecSXP constantPool, String init) {}
