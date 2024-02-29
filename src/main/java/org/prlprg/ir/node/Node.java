package org.prlprg.ir.node;

import javax.annotation.Nonnull;
import javax.annotation.Nullable;
import org.prlprg.ir.CFG;

/** IR (intermediate representation) node; value or instruction. */
public interface Node {
  /**
   * CFG containing the node, or {@code null} if it's a shared static node (e.g. {@code
   * R_GlobalEnv}.
   */
  @Nullable CFG cfg();
}

/** An IR node with a non-null {@link CFG}. */
interface NodeWithCfg extends Node {
  @SuppressWarnings("NullableProblems")
  @Override
  @Nonnull
  CFG cfg();
}
