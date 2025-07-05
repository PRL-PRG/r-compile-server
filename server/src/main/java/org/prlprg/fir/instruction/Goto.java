package org.prlprg.fir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.phi.Target;
import org.prlprg.fir.variable.Variable;

public record Goto(Target target) implements Jump {
  @Override
  public String toString() {
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

  @Override
  public @UnmodifiableView Collection<Variable> immediateVariables() {
    return List.of();
  }
}
