package org.prlprg.fir.cfg.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.UnmodifiableView;

public record Unreachable() implements Jump {
  @Override
  public @NotNull String toString() {
    return "unreachable";
  }

  @Override
  public @UnmodifiableView Collection<Target> targets() {
    return List.of();
  }

  @Override
  public @UnmodifiableView Collection<Expression> children() {
    return List.of();
  }
}
