package org.prlprg.ir.analysis.scope;

public enum AbstractResult {
  NONE,
  UPDATED,
  LOST_PRECISION,
  TAINTED;

  public AbstractResult union(AbstractResult other) {
    return ordinal() > other.ordinal() ? this : other;
  }
}
