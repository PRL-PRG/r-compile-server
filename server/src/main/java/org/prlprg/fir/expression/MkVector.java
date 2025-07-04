package org.prlprg.fir.expression;

import com.google.common.base.Joiner;
import com.google.common.collect.ImmutableList;
import org.jetbrains.annotations.NotNull;
import org.prlprg.fir.cfg.instruction.Expression;

public record MkVector(ImmutableList<Expression> elements) implements Expression {
  @Override
  public @NotNull String toString() {
    return "[" + Joiner.on(", ").join(elements) + "]";
  }

  @Override
  public ImmutableList<Expression> immediateChildren() {
    return elements;
  }
}
