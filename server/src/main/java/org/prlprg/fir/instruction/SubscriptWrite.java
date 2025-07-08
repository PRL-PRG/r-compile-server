package org.prlprg.fir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.variable.Variable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record SubscriptWrite(Expression target, Expression index, Expression value)
    implements Expression {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    p.print(target);
    w.write("[");
    p.print(index);
    w.write("] = ");
    p.print(value);
  }

  @Override
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return List.of(target, index, value);
  }

  @Override
  public @UnmodifiableView Collection<Variable> immediateVariables() {
    return List.of();
  }
}
