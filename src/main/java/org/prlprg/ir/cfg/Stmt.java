package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import org.prlprg.ir.cfg.instr.StmtData;

/**
 * IR instruction which isn't the final instruction of a basic block and doesn't affect control
 * flow.
 *
 * @see Instr
 */
public final class Stmt extends Instr {
  /**
   * Creates a statement.
   *
   * <p>Doesn't {@link CFG#track(InstrOrPhi)} it in the {@link CFG}, so this should be called in
   * {@link BB}.
   */
  Stmt(CFG cfg, StmtData data) {
    super(cfg, data);
  }

  /** Serialized form where everything is replaced by IDs. */
  public record Serial(
      @Override MapToIdIn<StmtData> data, @Override ImmutableList<LocalNodeId<?>> outputIds)
      implements Instr.Serial {
    Serial(Stmt node) {
      this(
          MapToIdIn.of((StmtData) node.data),
          node.outputs().stream().map(LocalNode::id).collect(ImmutableList.toImmutableList()));
    }
  }

  @Override
  public boolean isPure() {
    return effects().isEmpty();
  }
}
