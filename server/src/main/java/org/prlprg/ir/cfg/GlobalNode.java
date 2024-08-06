package org.prlprg.ir.cfg;

/**
 * An IR node that doesn't belong to a {@linkplain CFG control-flow graph}, i.e. its {@link #cfg()}
 * is null.
 */
public interface GlobalNode extends Node {
  @Override
  default CFG cfg() {
    return null;
  }

  @Override
  GlobalNodeId<?> id();
}
