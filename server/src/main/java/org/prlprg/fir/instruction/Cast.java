package org.prlprg.fir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.type.Type;
import org.prlprg.fir.variable.Variable;

public record Cast(Expression value, Type type) implements Expression {
  @Override
  public String toString() {
    return value + " as " + type;
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
