package org.prlprg.fir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.variable.NamedVariable;
import org.prlprg.fir.variable.Variable;

public record SuperWrite(NamedVariable variable, Expression value) implements Expression {
  @Override
  public String toString() {
    return "^" + variable + " = " + value;
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
