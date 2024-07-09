package org.prlprg.ir.analysis.abstractNode;

public enum AbstractResult {
  NONE,
  UPDATED,
  LOST_PRECISION,
  TAINTED;

  public AbstractResult union(AbstractResult other) {
    return ordinal() > other.ordinal() ? this : other;
  }
}
