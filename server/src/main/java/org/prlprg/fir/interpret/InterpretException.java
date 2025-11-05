package org.prlprg.fir.interpret;

import static org.prlprg.fir.interpret.PrintStack.printStack;

import java.util.List;
import javax.annotation.Nullable;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.GlobalEnvSXP;

/// Exception thrown during FIŘ interpretation.
public final class InterpretException extends RuntimeException {
  private final String printStack;

  InterpretException(String message, @Nullable Throwable cause, List<StackFrame> stack, GlobalEnvSXP globalEnv) {
    super(message, cause);
    printStack = Printer.use(p -> printStack(p, stack, globalEnv));
  }

  public String mainMessage() {
    return super.getMessage();
  }

  @Override
  public String getMessage() {
    return mainMessage() + "\n" + printStack;
  }
}
