package org.prlprg.fir.ir.callee;

import org.prlprg.fir.ir.cfg.Abstraction;
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
