package org.prlprg.bc;

import javax.annotation.Nullable;

public class CompilerException extends RuntimeException {
  private final @Nullable Loc loc;

  public CompilerException(String message) {
    this(message, null);
  }

  public CompilerException(String message, @Nullable Loc loc) {
    super(message);
    this.loc = loc;
  }
}
