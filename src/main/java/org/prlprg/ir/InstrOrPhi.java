package org.prlprg.ir;

import com.google.common.collect.ImmutableList;

/** Either {@link Instr} or {@link Phi}. An immediate child node of a basic block. */
public sealed interface InstrOrPhi extends NodeWithCfg permits Instr, Phi {
  /**
   * The instruction's or phi's return values, which other nodes may depend on. This is {@code this}
   * if a phi or instruction that returns itself, empty if it's an instruction that returns nothing,
   * or multiple nodes if it's an instruction that returns multiple values.
   */
  ImmutableList<Node> returns();

  /**
   * Replace the node in arguments.
   *
   * @throws IllegalArgumentException If you try to replace with a node of incompatible type.
   */
  void replace(Node old, Node replacement);
}
