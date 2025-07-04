package org.prlprg.fir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.UnmodifiableView;

public record Return(Expression value) implements Jump {
  @Override
  public @NotNull String toString() {
    return "return " + value;
  }

  @Override
  public @UnmodifiableView Collection<Target> targets() {
    return List.of();
  }

  @Override
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return List.of(value);
  }
}
