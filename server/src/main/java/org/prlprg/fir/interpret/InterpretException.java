package org.prlprg.fir.interpret;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import javax.annotation.Nullable;
import org.prlprg.sexp.GlobalEnvSXP;

/// Exception thrown during FIŘ interpretation.
public final class InterpretException extends RuntimeException {
  private final ImmutableList<StackFrame> stack;
  private final GlobalEnvSXP globalEnv;

  InterpretException(
      String message,
      @Nullable Throwable cause,
      Collection<StackFrame> stack,
      GlobalEnvSXP globalEnv) {
    super(message, cause);
    this.stack = ImmutableList.copyOf(stack);
    this.globalEnv = globalEnv;
  }

  public String mainMessage() {
    return super.getMessage();
  }

  @Override
  public String getMessage() {
    return mainMessage() + "\n" + new PrintStackTrace(stack, globalEnv);
  }
}
