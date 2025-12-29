package org.prlprg.fir.interpret;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.sexp.SEXP;

/// FIŘ interpreter interface. Both the internal hardcoded interpreter ([internal](
/// org.prlprg.fir.interpret)) and GNU-R compile-service inherit it.
public interface Interpreter {
  Module module();

  ModuleFeedback feedback();

  /// Looks up the function, gets the best applicable version, and calls it with the arguments
  /// in the global environment.
  SEXP call(String functionName, SEXP... arguments);

  /// Create an [InterpretException] at the current evaluation position.
  default InterpretException fail(String message) {
    return fail(message, null);
  }

  /// Create an [InterpretException] at the current evaluation position.
  InterpretException fail(String message, @Nullable Throwable cause);
}
