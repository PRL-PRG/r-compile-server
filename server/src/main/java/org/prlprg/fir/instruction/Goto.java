package org.prlprg.fir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.NotNull;
import org.jetbrains.annotations.UnmodifiableView;

public record Goto(Target target) implements Jump {
  @Override
  public @NotNull String toString() {
    return "goto " + target;
  }

  @Override
  public @UnmodifiableView Collection<Target> targets() {
    return List.of(target);
  }

  @Override
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return target.phiArgs();
  }
}
