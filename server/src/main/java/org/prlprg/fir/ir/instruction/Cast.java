package org.prlprg.fir.ir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Cast(Expression value, Type type) implements Expression {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(value);
    p.writer().write(" as ");
    p.print(type);
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
