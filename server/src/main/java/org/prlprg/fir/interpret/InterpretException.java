package org.prlprg.fir.interpret;

import org.jspecify.annotations.Nullable;

public class InterpretException extends RuntimeException {
  public InterpretException(String message, @Nullable Throwable cause) {
    super(message, cause);
  }

  public String mainMessage() {
    return super.getMessage();
  }
}
