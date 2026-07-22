package org.prlprg.fir.ir.argument;

import org.prlprg.fir.ir.instruction.Use;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Argument that is a register
public record Read(@Override Register variable) implements Argument {
  @Override
  public void addUse(Use use) {
    variable.addUse(use);
  }

  @Override
  public void removeUse(Use use) {
    variable.removeUse(use);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(variable);
  }
}
