package org.prlprg.compile;

/** Exception thrown from {@link Compiler}. */
public class CompilerException extends RuntimeException {
  CompilerException(String message) {
    super(message);
  }
}
