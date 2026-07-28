package org.prlprg.fir.ir.instruction;

import com.google.common.collect.ImmutableList;
import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BBRef;
import org.prlprg.fir.ir.phi.Target;

/// Checks all assumptions in [#success] and jumps to it if all pass, otherwise to [#deopt].
///
/// The owning jump's arguments are `[...success phis, ...deopt phis]`, where the first
/// [#successPhiCount] belong to [#success] and the rest to [#deopt].
public record Checkpoint(BBRef success, BBRef deopt, int successPhiCount)
    implements JumpExpression {

  @Override
  @UnmodifiableView
  public List<BBRef> targetRefs() {
    return List.of(success, deopt);
  }

  @Override
  @UnmodifiableView
  public List<Target> targets(List<Argument> args) {
    return List.of(
        new Target(success, ImmutableList.copyOf(args.subList(0, successPhiCount))),
        new Target(deopt, ImmutableList.copyOf(args.subList(successPhiCount, args.size()))));
  }

  @Override
  public Mapped mapTargets(Function<Target, Target> transformer, List<Argument> args) {
    var existing = targets(args);
    var newSuccess = transformer.apply(existing.get(0));
    var newDeopt = transformer.apply(existing.get(1));

    var newArgs =
        ImmutableList.<Argument>builder()
            .addAll(newSuccess.phiArgs())
            .addAll(newDeopt.phiArgs())
            .build();
    return new Mapped(
        new Checkpoint(newSuccess.bbRef(), newDeopt.bbRef(), newSuccess.phiArgs().size()), newArgs);
  }
}
