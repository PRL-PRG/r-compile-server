package org.prlprg.fir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.variable.Variable;

public record Placeholder() implements Expression {
  @Override
  public String toString() {
    return "...";
  }

  @Override
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return List.of();
  }

  @Override
  public @UnmodifiableView Collection<Variable> immediateVariables() {
    return List.of();
  }
}
