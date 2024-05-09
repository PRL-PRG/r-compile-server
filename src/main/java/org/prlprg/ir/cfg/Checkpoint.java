package org.prlprg.ir.cfg;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

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
}

final class CheckpointImpl extends JumpImpl<JumpData.Checkpoint> implements Checkpoint {
  private final List<Assumption> assumptions = new ArrayList<>();

  CheckpointImpl(CFG cfg, String name, JumpData.Checkpoint data) {
    super(JumpData.Checkpoint.class, cfg, name, data);

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
