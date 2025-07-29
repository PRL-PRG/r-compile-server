package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Use(Register variable) implements Expression {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write("use ");
    p.print(variable);
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    // `variable` is considered an argument even though it can only be a specific type ([Read]).
    return List.of(new Read(variable));
  }
}
