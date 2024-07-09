package org.prlprg.ir.cfg;

import org.prlprg.ir.cfg.StmtData.FrameState_;

/**
 * {@link Stmt} (IR instruction) which produces a {@linkplain FrameState frame-state} (snapshot of
 * the current stack top).
 */
public interface FrameStateStmt extends Stmt, FrameState {
  @Override
  NodeId<? extends FrameStateStmt> id();

  @Override
  FrameState_ data();
}

final class FrameStateStmtImpl extends SelfReturningStmtImpl<FrameState_>
    implements FrameStateStmt {
  FrameStateStmtImpl(CFG cfg, NodeId<? extends Instr> id, FrameState_ data) {
    super(FrameState_.class, cfg, id, data);
  }

  @Override
  public @IsEnv RValue frameStateEnv() {
    return data().env();
  }

  @Override
  public FrameState inlinedNext() {
    return data().inlinedNext();
  }

  @Override
  public NodeId<? extends FrameStateStmt> id() {
    return uncheckedCastId();
  }
}
