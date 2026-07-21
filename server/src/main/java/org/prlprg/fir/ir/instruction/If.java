package org.prlprg.fir.ir.instruction;

import com.google.common.collect.ImmutableList;
import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BBRef;
import org.prlprg.fir.ir.phi.Target;

/// Conditional jump. The owning jump's arguments are `[cond, ...ifTrue phis, ...ifFalse phis]`,
/// where the first [#truePhiCount] phi arguments belong to [#ifTrue] and the rest to [#ifFalse].
public record If(BBRef ifTrue, BBRef ifFalse, int truePhiCount) implements JumpExpression {
  @Override
  @UnmodifiableView
  public List<BBRef> targetRefs() {
    return List.of(ifTrue, ifFalse);
  }

  @Override
  @UnmodifiableView
  public List<Target> targets(List<Argument> args) {
    var phiStart = 1;
    var falseStart = phiStart + truePhiCount;
    return List.of(
        new Target(ifTrue, ImmutableList.copyOf(args.subList(phiStart, falseStart))),
        new Target(ifFalse, ImmutableList.copyOf(args.subList(falseStart, args.size()))));
  }

  @Override
  public Mapped mapTargets(Function<Target, Target> transformer, List<Argument> args) {
    var existing = targets(args);
    var newTrue = transformer.apply(existing.get(0));
    var newFalse = transformer.apply(existing.get(1));

    var newArgs =
        ImmutableList.<Argument>builder()
            .add(args.get(0))
            .addAll(newTrue.phiArgs())
            .addAll(newFalse.phiArgs())
            .build();
    return new Mapped(new If(newTrue.bbRef(), newFalse.bbRef(), newTrue.phiArgs().size()), newArgs);
  }
}
