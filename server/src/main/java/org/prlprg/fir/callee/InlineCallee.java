package org.prlprg.fir.callee;

import org.prlprg.fir.cfg.Abstraction;

public record InlineCallee(Abstraction inlinee) implements Callee {
  @Override
  public String toString() {
    return inlinee + " <- ";
  }
}
