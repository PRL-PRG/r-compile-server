package org.prlprg.fir.check;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.module.Function;

public final class CheckException extends RuntimeException {
  private final @Nullable Function function;
  private final @Nullable CFGCursor position;

  public CheckException(@Nullable Function function, @Nullable CFGCursor position, String message) {
    super(message);
    this.function = function;
    this.position = position;
  }

  public @Nullable Function function() {
    return function;
  }

  public @Nullable CFGCursor position() {
    return position;
  }

  public String mainMessage() {
    return super.getMessage();
  }

  @Override
  public String getMessage() {
    return mainMessage()
        + "\nIn "
        + (function == null ? "" : function.name())
        + (position == null ? "" : position);
  }
}
