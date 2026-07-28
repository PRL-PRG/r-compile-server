package org.prlprg.fir.interpret.internal;

import static org.prlprg.fir.interpret.internal.PrintStack.printStack;

import java.util.List;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.interpret.InterpretException;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.GlobalEnvSXP;

/// Exception thrown during FIŘ interpretation.
public sealed class InternalInterpretException extends InterpretException
    permits InternalInterpretUnsupportedException {
  private final String printStack;

  InternalInterpretException(
      String message, @Nullable Throwable cause, List<StackFrame> stack, GlobalEnvSXP globalEnv) {
    super(message, cause);
    printStack = Printer.use(p -> printStack(p, stack, globalEnv));
  }

  @Override
  public String getMessage() {
    return mainMessage() + "\nStack:\n" + printStack;
  }
}
