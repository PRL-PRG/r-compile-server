package org.prlprg.fir.check;

import org.prlprg.fir.ir.cfg.cursor.CFGCursor;

public final class CheckException extends RuntimeException {
  private final CFGCursor position;

  public CheckException(String message, CFGCursor position) {
    super(message);
    this.position = position;
  }

  public CFGCursor position() {
    return position;
  }

  @Override
  public String getMessage() {
    return super.getMessage() + "\n" + position;
  }
}
