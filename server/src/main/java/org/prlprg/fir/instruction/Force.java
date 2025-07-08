package org.prlprg.fir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.variable.Variable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Force(Expression value) implements Expression {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write("force ");
    p.print(value);
  }

  @Override
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return List.of(value);
  }

  @Override
  public @UnmodifiableView Collection<Variable> immediateVariables() {
    return List.of();
  }
}
