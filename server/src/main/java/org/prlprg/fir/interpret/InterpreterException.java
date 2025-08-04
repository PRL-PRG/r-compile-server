package org.prlprg.fir.interpret;

// TODO: Rewrite to add `CFGCursor` and `List<StackFrame>` and display them in `getMessage`,
//  like `CheckException` does with only `CFGCursor`.

/// Exception thrown during FIR interpretation.
public final class InterpreterException extends RuntimeException {
  public InterpreterException(String message) {
    super(message);
  }
}
