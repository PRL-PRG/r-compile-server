package org.prlprg.fir.ir.instruction;

import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BBRef;
import org.prlprg.fir.ir.phi.Target;

/// Return the single argument (`args[0]`) from the enclosing version or promise.
public record Return() implements JumpExpression {
  @Override
  @UnmodifiableView
  public List<BBRef> targetRefs() {
    return List.of();
  }

  @Override
  @UnmodifiableView
  public List<Target> targets(List<Argument> args) {
    return List.of();
  }

  @Override
  public Mapped mapTargets(Function<Target, Target> transformer, List<Argument> args) {
    return new Mapped(this, args);
  }
}
