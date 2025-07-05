package org.prlprg.fir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.variable.Variable;

public record SubscriptRead(Expression target, Expression index) implements Expression {
  @Override
  public String toString() {
    return target + "[" + index + "]";
  }

  @Override
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return List.of(target, index);
  }

  @Override
  public @UnmodifiableView Collection<Variable> immediateVariables() {
    return List.of();
  }
}
