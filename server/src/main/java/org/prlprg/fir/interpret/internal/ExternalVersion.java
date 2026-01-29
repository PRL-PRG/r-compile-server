package org.prlprg.fir.interpret.internal;

import java.util.List;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;

/// Function version that executes Java code which can be called from the interpreter.
///
/// "Hijacks" a function version whose body is a [stub](Abstraction#isStub); when the version
/// is called, the interpreter runs this code.
///
/// Add to a runtime with [InternalInterpreter#registerExternal(String, int, ExternalVersion)].
@FunctionalInterface
public interface ExternalVersion {
  /// Forces promise arguments *and* evaluates simple AST arguments (symbols), then calls `inner`.
  ///
  /// @throws UnsupportedOperationException If given complex AST arguments (language objects).
  static ExternalVersion strict(ExternalVersion inner) {
    return (runtime, hijacked, arguments, environment) -> {
      var forcedAndEvaldArgs = arguments.stream().map(runtime::eval).toList();
      return inner.call(runtime, hijacked, forcedAndEvaldArgs, environment);
    };
  }

  SEXP call(
      InternalInterpreter runtime, Abstraction hijacked, List<SEXP> arguments, EnvSXP environment);
}
