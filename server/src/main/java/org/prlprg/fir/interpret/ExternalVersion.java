package org.prlprg.fir.interpret;

import java.util.List;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXP;

/// Function version that executes Java code which can be called from the interpreter.
///
/// Like [ExternalFunction], except it "hijacks" a function version. Specifically, the version's
/// body must be a single [Unreachable][org.prlprg.fir.ir.instruction.Unreachable]; when the
/// version is called, instead of running the body (and crashing), the interpreter runs this code.
///
/// Add to a runtime with [Interpreter#registerExternalVersion(String, int, ExternalVersion)].
@FunctionalInterface
public interface ExternalVersion {
  /// Forces all arguments, then calls `inner`.
  static ExternalVersion strict(ExternalVersion inner) {
    return (runtime, hijacked, arguments, environment) -> {
      var forcedArgs =
          arguments.stream()
              .map(
                  argument ->
                      argument instanceof PromSXP promSxp ? runtime.force(promSxp) : argument)
              .toList();
      return inner.call(runtime, hijacked, forcedArgs, environment);
    };
  }

  SEXP call(Interpreter runtime, Abstraction hijacked, List<SEXP> arguments, EnvSXP environment);
}
