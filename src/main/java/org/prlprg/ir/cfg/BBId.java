package org.prlprg.ir.cfg;

import com.google.common.base.Objects;

/**
 * CFG-unique {@link BB} identifier which can refer to a future basic block in {@link CFGEdit}s.
 * Every basic block has an id unique within its CFG.
 */
public interface BBId {
  /** {@link Object#toString()} representation of this without the common BB prefix ("^"). */
  String name();
}

class BBIdImpl implements BBId {
  private final String name;

  public BBIdImpl(CFG cfg, String name) {
    this.name = cfg.nextBBId(name);
  }

  @Override
  public String name() {
    return name;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) return true;
    if (!(o instanceof BBIdImpl bbId)) return false;
    return Objects.equal(name, bbId.name);
  }

  @Override
  public int hashCode() {
    return Objects.hashCode(name);
  }

  @Override
  public String toString() {
    return "^" + name;
  }
}
