package org.prlprg.fir.ir.instruction;

import com.google.common.collect.ImmutableList;
import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BBRef;
import org.prlprg.fir.ir.phi.Target;

/// Unconditional jump to [#target]; the owning jump's arguments are the target's phi arguments.
public record Goto(BBRef target) implements JumpExpression {
  @Override
  @UnmodifiableView
  public List<BBRef> targetRefs() {
    return List.of(target);
  }

  @Override
  @UnmodifiableView
  public List<Target> targets(List<Argument> args) {
    return List.of(new Target(target, ImmutableList.copyOf(args)));
  }

  @Override
  public Mapped mapTargets(Function<Target, Target> transformer, List<Argument> args) {
    var mapped = transformer.apply(new Target(target, ImmutableList.copyOf(args)));
    return new Mapped(new Goto(mapped.bbRef()), mapped.phiArgs());
  }
}
