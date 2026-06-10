package org.prlprg.fir.ir.argument;

import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Use(@Override Register variable) implements Argument {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write("use ");
    p.print(variable);
  }
}
