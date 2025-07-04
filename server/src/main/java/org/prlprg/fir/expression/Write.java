package org.prlprg.fir.expression;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.cfg.instruction.Expression;
import org.prlprg.fir.cfg.variable.Variable;

public record Write(Variable variable, Expression value) implements Expression {
  @Override
  public @NotNull String toString() {
    return variable + " = " + value;
  }

  @Override
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return List.of(variable, value);
  }
}
