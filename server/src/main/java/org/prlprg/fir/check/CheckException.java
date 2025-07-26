package org.prlprg.fir.check;

import org.prlprg.fir.ir.cfg.cursor.CFGCursor;

public final class CheckException extends RuntimeException {
  private final CFGCursor position;

  public CheckException(CFGCursor position, String message) {
    super(message);
    this.position = position;
  }

  public CFGCursor position() {
    return position;
  }

  public String mainMessage() {
    return super.getMessage();
  }

  @Override
  public String getMessage() {
    return super.getMessage() + "\n" + position;
  }
}
