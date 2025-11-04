package org.prlprg.fir.interpret;

import javax.annotation.Nullable;

/// Exception thrown during FIŘ interpretation.
public final class InterpretException extends RuntimeException {
  private final Snapshot snapshot;

  InterpretException(String message, @Nullable Throwable cause, Snapshot snapshot) {
    super(message, cause);
    this.snapshot = snapshot;
  }

  public String mainMessage() {
    return super.getMessage();
  }

  @Override
  public String getMessage() {
    return mainMessage() + "\n" + snapshot;
  }
}
