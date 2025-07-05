package org.prlprg.fir.instruction;

import com.google.common.base.Joiner;
import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.variable.Variable;

public record MkVector(ImmutableList<Expression> elements) implements Expression {
  @Override
  public String toString() {
    return "[" + Joiner.on(", ").join(elements) + "]";
  }

  @Override
  public ImmutableList<Expression> immediateChildren() {
    return elements;
  }

  @Override
  public @UnmodifiableView Collection<Variable> immediateVariables() {
    return List.of();
  }
}
