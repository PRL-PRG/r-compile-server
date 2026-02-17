package org.prlprg.fir.interpret.internal;

import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.sexp.GlobalEnvSXP;

/// Thrown when an unsupported operation is encountered during FIŘ interpretation.
public final class InternalInterpretUnsupportedException extends InternalInterpretException {
  InternalInterpretUnsupportedException(
      String message, @Nullable Throwable cause, List<StackFrame> stack, GlobalEnvSXP globalEnv) {
    super(message, cause, stack, globalEnv);
  }
}
