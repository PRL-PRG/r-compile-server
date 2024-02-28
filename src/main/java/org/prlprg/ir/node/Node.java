package org.prlprg.ir.node;

import org.prlprg.ir.BB;
import org.prlprg.ir.CFG;

/** IR (intermediate representation) node; value or instruction. */
public interface Node {
  /** BB containing this node. */
  BB bb();

  /** CFG containing this node. */
  default CFG cfg() {
    return bb().cfg();
  }
}

abstract class NodeImpl implements Node {
  private final BB bb;

  NodeImpl(BB bb) {
    this.bb = bb;
  }

  @Override
  public BB bb() {
    return bb;
  }
}
