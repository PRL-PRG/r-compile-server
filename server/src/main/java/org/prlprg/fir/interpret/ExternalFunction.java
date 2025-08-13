package org.prlprg.fir.interpret;

import org.prlprg.fir.ir.module.Function;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.SEXP;

/// Function that executes Java code which can be called from the interpreter.
///
/// For example, a reimplementation of an R builtin.
///
/// This works by "hijacking" a [Function]; when the function is called and none of its FIŘ
/// overloads match, instead of a crashing, the interpreter runs this code.
///
/// Add to a runtime with [Interpreter#registerExternalFunction(String, ExternalFunction)].
@FunctionalInterface
public interface ExternalFunction {
  SEXP call(Interpreter runtime, Function hijacked, ListSXP arguments, EnvSXP environment);
}
