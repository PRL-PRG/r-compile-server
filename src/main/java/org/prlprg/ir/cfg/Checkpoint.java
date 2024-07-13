package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.function.Predicate;
import java.util.stream.Stream;
import org.prlprg.ir.cfg.JumpData.Checkpoint_;
import org.prlprg.util.Pair;

/**
 * Branch ({@link Jump} IR instruction) which contains a set of assumptions. If all of those
 * assumptions pass, it will branch into the "fastpath" {@link BB}, otherwise it branches into a
 * basic block which deoptimizes.
 */
public interface Checkpoint extends Jump {
  @Override
  NodeId<? extends Checkpoint> id();

  @Override
  Checkpoint_ data();

  default void addAssumption(ISexp test, org.prlprg.rshruntime.DeoptReason failReason) {
    Instr.mutateArgs(
        this,
        new Checkpoint_(
            Stream.concat(data().tests().stream(), Stream.of(test))
                .collect(ImmutableList.toImmutableList()),
            Stream.concat(data().failReasons().stream(), Stream.of(failReason))
                .collect(ImmutableList.toImmutableList()),
            data().ifPass(),
            data().ifFail()));
  }

  /** Remove assumptions whose tests don't pass {@code keepTest}. */
  default void filterAssumptions(Predicate<ISexp> keepTest) {
    var testsAndFailReasons =
        data().streamAssumptionData().filter(pair -> keepTest.test(pair.first())).toList();
    Instr.mutateArgs(
        this,
        new Checkpoint_(
            testsAndFailReasons.stream().map(Pair::first).collect(ImmutableList.toImmutableList()),
            testsAndFailReasons.stream().map(Pair::second).collect(ImmutableList.toImmutableList()),
            data().ifPass(),
            data().ifFail()));
  }
}

final class CheckpointImpl extends JumpImpl<Checkpoint_> implements Checkpoint {
  private final List<Assumption> assumptions = new ArrayList<>();

  CheckpointImpl(CFG cfg, NodeId<? extends Instr> id, Checkpoint_ data) {
    super(Checkpoint_.class, cfg, id, data);

    // This isn't handled by `verify` because at the time of the call, `assumptions` is still null.
    while (assumptions.size() < data.numAssumptions()) {
      assumptions.add(new AssumptionImpl(this, assumptions.size()));
    }
  }

  @Override
  protected void verify(boolean isInsert) throws InstrVerifyException {
    super.verify(isInsert);

    // `assumptions` is `null` on insert.
    if (!isInsert) {
      if (assumptions.size() > data().numAssumptions()) {
        assumptions.subList(data().numAssumptions(), assumptions.size()).clear();
      }
      while (assumptions.size() < data().numAssumptions()) {
        assumptions.add(new AssumptionImpl(this, assumptions.size()));
      }
    }
  }

  @Override
  public List<Node> returns() {
    return Collections.unmodifiableList(assumptions);
  }

  @Override
  public NodeId<? extends Checkpoint> id() {
    return uncheckedCastId();
  }
}
