package org.prlprg.fir.ir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record SuperWrite(NamedVariable variable, Expression value) implements Expression {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("^");
    p.print(variable);
    w.write(" = ");
    p.print(value);
  }

  @Override
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return List.of(value);
  }

  @Override
  public @UnmodifiableView Collection<Variable> immediateVariables() {
    return List.of(variable);
  }
}
