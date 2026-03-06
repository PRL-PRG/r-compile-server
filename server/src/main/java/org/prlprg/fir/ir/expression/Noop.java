package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// An [Expression] which does nothing. Assigning it to a register is invalid.
public record Noop() implements Expression {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write("noop");
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of();
  }
}
