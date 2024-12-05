package org.prlprg.ir.cfg;

import javax.annotation.Nonnull;

/**
 * An IR node that belongs to a {@linkplain CFG control-flow graph}, i.e. its {@link #cfg()} is
 * non-null.
 */
public interface LocalNode extends Node {
  // We must explicitly annotate with `@Nonnull`, otherwise IntelliJ assumes this is still nullable.
  // Unfortunately, IntelliJ still thinks `@Nonnull` is a useless annotation, so we must also
  // suppress the warning.
  @SuppressWarnings("NullableProblems")
  @Override
  @Nonnull
  CFG cfg();
}
