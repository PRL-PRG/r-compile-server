package org.prlprg.fir.ir.argument;

import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Argument that is a variable.
public record Read(@Override Register variable) implements Argument {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(variable);
  }
}
