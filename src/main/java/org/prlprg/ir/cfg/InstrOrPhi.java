package org.prlprg.ir.cfg;

import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;

/** Either {@link Instr} or {@link Phi}. An immediate child node of a basic block. */
public sealed interface InstrOrPhi extends NodeWithCfg permits Instr, Phi {
  /**
   * (A view of) the instruction or phi's arguments, which are the other nodes it depends on. If a
   * phi, these are its {@link Phi#inputs()} without the extra type information or associated basic
   * block.
   */
  @UnmodifiableView
  List<Node> args();

  /**
   * (A view of) the instruction's or phi's return values, which other nodes may depend on. This is
   * {@code this} if a phi or instruction that returns itself, empty if it's an instruction that
   * returns nothing, or multiple nodes if it's an instruction that returns multiple values.
   */
  @UnmodifiableView
  List<Node> returns();

  /**
   * Replace the node in arguments.
   *
   * @throws IllegalArgumentException If the old node wasn't in {@link #args()}.
   * @throws IllegalArgumentException If you try to replace with a node of incompatible type.
   */
  void replace(Node old, Node replacement);

  /** Itself. */
  @Override
  default InstrOrPhi origin() {
    return this;
  }

  @Override
  NodeId<? extends InstrOrPhi> id();
}
