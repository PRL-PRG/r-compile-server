package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.function.Predicate;
import java.util.stream.Stream;
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
  JumpData.Checkpoint data();

  default void addAssumption(RValue test, org.prlprg.rshruntime.DeoptReason failReason) {
    Instr.mutateArgs(
        this,
        new JumpData.Checkpoint(
            Stream.concat(data().tests().stream(), Stream.of(test))
                .collect(ImmutableList.toImmutableList()),
            Stream.concat(data().failReasons().stream(), Stream.of(failReason))
                .collect(ImmutableList.toImmutableList()),
            data().ifPass(),
            data().ifFail()));
  }

  /** Remove assumptions whose tests don't pass {@code keepTest}. */
  default void filterAssumptions(Predicate<RValue> keepTest) {
    var testsAndFailReasons =
        data().streamAssumptionData().filter(pair -> keepTest.test(pair.first())).toList();
    Instr.mutateArgs(
        this,
        new JumpData.Checkpoint(
            testsAndFailReasons.stream().map(Pair::first).collect(ImmutableList.toImmutableList()),
            testsAndFailReasons.stream().map(Pair::second).collect(ImmutableList.toImmutableList()),
            data().ifPass(),
            data().ifFail()));
  }
}

final class CheckpointImpl extends JumpImpl<JumpData.Checkpoint> implements Checkpoint {
  private final List<Assumption> assumptions = new ArrayList<>();

  CheckpointImpl(CFG cfg, TokenToCreateNewInstr token, JumpData.Checkpoint data) {
    super(JumpData.Checkpoint.class, cfg, token, data);

    // This isn't handled by `verify` because at the time of the call, `assumptions` is still null.
    while (assumptions.size() < data.numAssumptions()) {
      assumptions.add(new AssumptionImpl(this, assumptions.size()));
    }
  }

  @SuppressWarnings("ConstantValue")
  @SuppressFBWarnings("RCN_REDUNDANT_NULLCHECK_OF_NONNULL_VALUE")
  @Override
  public void verify() throws InstrVerifyException {
    super.verify();

    if (assumptions == null) {
      // `verify` called during initialization
      return;
    }
    if (assumptions.size() > data().numAssumptions()) {
      assumptions.subList(data().numAssumptions(), assumptions.size()).clear();
    }
    while (assumptions.size() < data().numAssumptions()) {
      assumptions.add(new AssumptionImpl(this, assumptions.size()));
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
