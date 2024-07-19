package org.prlprg.ir.cfg;

import java.util.List;
import java.util.SequencedCollection;
import org.jetbrains.annotations.UnmodifiableView;

/** Either {@link Instr} or {@link Phi}. An immediate child node of a basic block. */
public sealed interface InstrOrPhi permits Instr, Phi {
  /**
   * (A view of) the nodes in the instruction or phi's inputs.
   *
   * <p>For phis, these are the input nodes from each predecessor. For instructions, these include
   * all inputs that are nodes, and all nodes in inputs that are collections of nodes.
   */
  @UnmodifiableView
  SequencedCollection<? extends Node<?>> inputNodes();

  /**
   * (A view of) the instruction's or phi's output nodes.
   *
   * <p>For a phi, this is just the phi itself. For an instruction, this is its output nodes, which
   * are usually 0 (for effect-only instructions like stores and errors) or 1 (for instructions that
   * produce a value like loads and calls).
   */
  @UnmodifiableView
  List<? extends Node<?>> outputs();

  /**
   * Replace every occurrence of {@code old} with {@code replacement} in the instruction or phi's
   * inputs ({@link #inputNodes()}).
   *
   * <p>This will record a {@link CFGEdit}.
   *
   * @throws IllegalArgumentException If the {@code replacement}'s {@link Node#type()} is
   *     incompatible with the input's required type. If {@code replacement}'s {@link Node#type()}
   *     is a subtype of {@code old}'s (including if they're identical) this is guaranteed not to
   *     error. If it's a supertype, it depends on whether {@code old} is in a position where the
   *     supertype is still a subtype of the required type.
   */
  void replaceInInputs(Node<?> old, Node<?> replacement);
}
