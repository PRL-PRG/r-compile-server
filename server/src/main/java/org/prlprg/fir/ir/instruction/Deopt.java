package org.prlprg.fir.ir.instruction;

import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BBRef;
import org.prlprg.fir.ir.phi.Target;

/// Deoptimize to GNU-R bytecode. The stack to restore is the owning jump's arguments.
///
/// @param pc the GNU-R bytecode position to deoptimize to.
public record Deopt(int pc) implements JumpExpression {
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
