package org.prlprg.fir.check;

import org.prlprg.fir.ir.cfg.cursor.CFGCursor;
import org.prlprg.fir.ir.module.Function;

public final class CheckException extends RuntimeException {
  private final Function function;
  private final CFGCursor position;

  public CheckException(Function function, CFGCursor position, String message) {
    super(message);
    this.function = function;
    this.position = position;
  }

  public Function function() {
    return function;
  }

  public CFGCursor position() {
    return position;
  }

  public String mainMessage() {
    return super.getMessage();
  }

  @Override
  public String getMessage() {
    return mainMessage() + "\nIn " + function.name() + position;
  }
}
