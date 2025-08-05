package org.prlprg.fir.interpret;

// TODO: Rewrite to add `CFGCursor` and `List<StackFrame>` and display them in `getMessage`,
//  like `CheckException` does with only `CFGCursor`.

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import org.prlprg.sexp.GlobalEnvSXP;

/// Exception thrown during FIR interpretation.
public final class InterpreterException extends RuntimeException {
  private final ImmutableList<StackFrame> stack;
  private final GlobalEnvSXP globalEnv;

  InterpreterException(String message, Collection<StackFrame> stack, GlobalEnvSXP globalEnv) {
    super(message);
    this.stack = ImmutableList.copyOf(stack);
    this.globalEnv = globalEnv;
  }

  public String mainMessage() {
    return super.getMessage();
  }

  @Override
  public String getMessage() {
    return mainMessage() + "\n" + new PrintContext(stack, globalEnv);
  }
}
