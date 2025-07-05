package org.prlprg.fir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.variable.NamedVariable;
import org.prlprg.fir.variable.Variable;

public record SuperRead(NamedVariable variable) implements Expression {
  @Override
  public String toString() {
    return "^" + variable;
  }

  @Override
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return List.of();
  }

  @Override
  public @UnmodifiableView Collection<Variable> immediateVariables() {
    return List.of(variable);
  }
}
