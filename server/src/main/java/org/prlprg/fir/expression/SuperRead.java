package org.prlprg.fir.expression;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.cfg.instruction.Expression;
import org.prlprg.fir.cfg.variable.NamedVariable;

public record SuperRead(NamedVariable variable) implements Expression {
  @Override
  public @NotNull String toString() {
    return "^" + variable;
  }

  @Override
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return List.of(variable);
  }
}
