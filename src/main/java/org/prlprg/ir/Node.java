package org.prlprg.ir;

/** Intermediate representation value or instruction. */
public interface Node {
  /** BB containing this node. */
  BB bb();

  /** CFG containing this node. */
  default CFG cfg() {
    return bb().cfg();
  }

  /** Node was created directly from GNU-R bytecode. */
  sealed interface GnuR extends Node permits Instr.GnuR {}
  // /** Node corresponds to a PIR value. */
  // sealed interface PIR extends Node permits ... {}
}

abstract class NodeImpl implements Node {
  private final BB bb;

  NodeImpl(BB bb) {
    this.bb = bb;
  }

  BB bb() {
    return bb;
  }
}
