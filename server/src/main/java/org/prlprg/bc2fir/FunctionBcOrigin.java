package org.prlprg.bc2fir;

import org.prlprg.bc.Bc;
import org.prlprg.sexp.ListSXP;

/// A function's original GNU-R bytecode formals.
public record FunctionBcOrigin(Bc bc, ListSXP formals) {}
