package org.prlprg.ir;

/** Helper to add instructions and blocks to a {@link CFG}. */
public class IRBuilder {
  private BB bb;
  private int index;

  /** Start adding instructions at the given block and index. */
  public IRBuilder(BB bb, int index) {
    this.bb = bb;
    this.index = index;
  }
}
