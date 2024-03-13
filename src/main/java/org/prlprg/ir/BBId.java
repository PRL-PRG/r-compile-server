package org.prlprg.ir;

/** CFG-unique {@link BB} identifier which can refer to a future basic block in {@link CFGAction}s.
 * Specifically, there's a counter which gets incremented every time the CFG adds a basic block. */
public interface BBId {}

record BBIdImpl(String desc) implements BBId {
  @Override
  public String toString() {
    return "^" + desc;
  }
}
