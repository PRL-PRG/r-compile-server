package org.prlprg.ir.cfg;

/**
 * CFG-unique {@link BB} identifier which can refer to a future basic block in {@link CFGCommand}s.
 * Every basic block has an id unique within its CFG.
 */
public interface BBId {}

record BBIdImpl(String name) implements BBId {
  @Override
  public String toString() {
    return "^" + name;
  }
}
