package org.prlprg.bc;

import org.jspecify.annotations.Nullable;

public class CompilerException extends RuntimeException {
  private final @Nullable Loc loc;

  CompilerException(String message) {
    this(message, null);
  }

  CompilerException(String message, @Nullable Loc loc) {
    super(message);
    this.loc = loc;
  }

  public @Nullable Loc loc() {
    return loc;
  }
}
