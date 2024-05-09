package org.prlprg.ir.closure;

import org.prlprg.ir.cfg.CFG;

public class Promise {
  private final CFG cfg;

  public Promise(CFG cfg) {
    // TODO: Maybe change constructor
    this.cfg = cfg;
  }

  public CFG cfg() {
    return cfg;
  }
}
