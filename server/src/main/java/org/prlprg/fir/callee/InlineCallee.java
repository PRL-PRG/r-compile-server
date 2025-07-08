package org.prlprg.fir.callee;

import org.prlprg.fir.cfg.Abstraction;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record InlineCallee(Abstraction inlinee) implements Callee {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(inlinee);
    p.writer().write(" <- ");
  }
}
