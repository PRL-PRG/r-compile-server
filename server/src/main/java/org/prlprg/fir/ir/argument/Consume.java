package org.prlprg.fir.ir.argument;

import org.prlprg.fir.ir.instruction.Use;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Register argument ([Read]) that additionally guarantees the register will not be used
/// afterward, so this has fresh ownership
public record Consume(@Override Register variable) implements Argument {
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
    p.writer().write("consume ");
    p.print(variable);
  }
}
