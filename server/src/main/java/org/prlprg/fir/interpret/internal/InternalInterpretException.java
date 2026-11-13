package org.prlprg.fir.interpret.internal;

import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.interpret.InterpretException;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.GlobalEnvSXP;

/// Exception thrown during FIŘ interpretation.
public sealed class InternalInterpretException extends InterpretException
    permits InternalInterpretUnsupportedException {
  /// `null` until [#printStack(List, GlobalEnvSXP)], for an exception made without a stack.
  private @Nullable String printStack;

  /// `stack` is `null` to print it later ([#printStack(List, GlobalEnvSXP)]), or never.
  InternalInterpretException(
      String message,
      @Nullable Throwable cause,
      @Nullable List<StackFrame> stack,
      GlobalEnvSXP globalEnv) {
    super(message, cause);
    if (stack != null) {
      printStack(stack, globalEnv);
    }
  }

  boolean hasStack() {
    return printStack != null;
  }

  void printStack(List<StackFrame> stack, GlobalEnvSXP globalEnv) {
    printStack = Printer.use(p -> PrintStack.printStack(p, stack, globalEnv));
  }

  @Override
  public String getMessage() {
    return mainMessage() + "\nStack:\n" + printStack;
  }
}
