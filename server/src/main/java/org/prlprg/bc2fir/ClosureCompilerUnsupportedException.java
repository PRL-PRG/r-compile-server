package org.prlprg.bc2fir;

import javax.annotation.Nullable;
import org.prlprg.sexp.SEXP;

/**
 * {@link UnsupportedOperationException} thrown when encountering a closure or promise whose body is
 * contains unsupported bytecode, or is an AST in a way we don't support.
 */
public class ClosureCompilerUnsupportedException extends UnsupportedOperationException {
  private final SEXP unsupportedBody;

  ClosureCompilerUnsupportedException(String message, SEXP unsupportedBody) {
    this(message, unsupportedBody, null);
  }

  ClosureCompilerUnsupportedException(
      String message, SEXP unsupportedBody, @Nullable Throwable cause) {
    super(message, cause);
    this.unsupportedBody = unsupportedBody;
  }

  /** The SEXP of the AST or bytecode that contains the unsupported part. */
  public SEXP unsupportedBody() {
    return unsupportedBody;
  }
}
