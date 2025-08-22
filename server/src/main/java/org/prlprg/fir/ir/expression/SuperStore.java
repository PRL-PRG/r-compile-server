package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record SuperStore(NamedVariable variable, Argument value) implements Expression {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("sst ");
    p.print(variable);
    w.write(" = ");
    p.print(value);
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of(value);
  }
}
