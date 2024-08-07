package org.prlprg.ir.cfg;

import javax.annotation.Nullable;

/** IR (intermediate representation) node; value or instruction. */
public interface Node {
  /** CFG containing the node, or {@code null} if it's a global node (e.g. {@code R_GlobalEnv}. */
  @Nullable CFG cfg();

  /**
   * The instruction that created this node. If this node is a phi or instruction, it will be
   * itself. If this node is a global, it will be {@code null}.
   */
  @Nullable InstrOrPhi origin();

  /**
   * Unique identifier for the node.
   *
   * <p>If {@link #cfg()} is non-null, the returned ID must be unique to this node within the CFG.
   * If {@link #cfg()} is null, the returned ID must be unique within <b>every</b> CFG.
   */
  NodeId<?> id();
}
