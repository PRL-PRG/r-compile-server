package org.prlprg.snapshots;

import org.jspecify.annotations.Nullable;
import org.opentest4j.TestAbortedException;

/// Signal that a [Query] can't be computed, so don't test any of its dependencies.
public class SkipQueryException extends TestAbortedException {
  public SkipQueryException(String queryName, @Nullable Exception e) {
    super("Unsupported example for " + queryName, e);
  }

  public SkipQueryException(String queryName) {
    this(queryName, null);
  }
}
