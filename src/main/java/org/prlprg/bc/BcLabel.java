package org.prlprg.bc;

import java.util.Objects;

/** A branch instruction destination. */
public final class BcLabel {
  /** Index of the instruction the branch instruction jumps to. */
  private int target;

  public BcLabel(int target) {
    this.target = target;
  }

  public int target() {
    return target;
  }

  void setTarget(int target) {
    this.target = target;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof BcLabel bcLabel)) return false;
    return target == bcLabel.target;
  }

  @Override
  public int hashCode() {
    return Objects.hash(target);
  }

  @Override
  public String toString() {
    return "BcLabel(" + target + ')';
  }
}
