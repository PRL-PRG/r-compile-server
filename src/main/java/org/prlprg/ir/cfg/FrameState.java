package org.prlprg.ir.cfg;

import javax.annotation.Nullable;

/**
 * IR node which corresponds to a <b>frame-state</b>: a snapshot of the current stack top.
 *
 * <p>Includes {@link Stmt}s which produce a frame-state.
 */
public interface FrameState extends Node {
  @Override
  NodeId<? extends FrameState> id();

  @Nullable @IsEnv RValue frameStateEnv();
  @Nullable FrameState inlinedNext();
}
