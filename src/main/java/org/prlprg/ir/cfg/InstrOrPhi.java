package org.prlprg.ir.cfg;

import java.util.List;
import java.util.SequencedCollection;
import org.jetbrains.annotations.Unmodifiable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.cfg.InstrData.CascadingInstrUpdate;
import org.prlprg.ir.cfg.InstrData.CascadingUpdatedInstrs;
import org.prlprg.ir.effect.REffects;

/** Either {@link Instr} or {@link Phi}. An immediate child node of a basic block. */
public sealed interface InstrOrPhi permits Instr, Phi {
  /**
   * The control-flow graph containing this instruction or phi.
   *
   * <p>Currently, the basic block ({@link BB}) isn't stored in the instruction or phi, because it
   * may change and the time complexity of updating it is too high for the convenience. But the
   * control-flow graph is constant (changing the control-flow graph is only possible via creating a
   * new instruction), so storing a reference to it for convenience is OK.
   */
  CFG cfg();

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
  @Unmodifiable List<? extends LocalNode<?>> outputs();

  /** {@code true} for {@link Phi}s, {@code false} for {@link Jump}s, and for {@link Stmt}s, whether
   * {@linkplain Instr#effects()} are {@linkplain REffects#isEmpty() empty}.
   */
  boolean isPure();
}

sealed interface InstrOrPhiImpl permits Instr, Phi {
  /** Return the {@link InstrOrPhi} as-is, but casted to this type.
   *
   * <p>This is preferred instead of doing a Java cast, because Java allows casts that would throw
   * {@link ClassCastException} at runtime.
   */
  static InstrOrPhiImpl cast(InstrOrPhi instrOrPhi) {
    return switch (instrOrPhi) {
      case Instr instr -> instr;
      case Phi<?> phi -> phi;
    };
  }

  /**
   * Replace every occurrence of {@code old} with {@code replacement} in the instruction or phi's
   * inputs ({@link InstrOrPhi#inputNodes()}).
   *
   * <p>Returns whether this caused the phi's {@link Node#type()}, or the instruction's {@link
   * Instr#effects()} or one ot its {@link Instr#outputs()} {@link Node#type()}s, to change. If the
   * latter, you are responsible for updating instructions whose inputs contain the changed outputs.
   *
   * <p>This will not record a {@link CFGEdit}, it may cause a {@link Phi} to no longer by an
   * expected type, and you are responsible for updating instructions whose inputs contain outputs
   * that the replacement changed the type of. Hence this is package-private and "unsafe".
   *
   * @throws IllegalArgumentException If the {@code replacement}'s {@link Node#type()} is
   *     incompatible with the input's required type. If {@code replacement}'s {@link Node#type()}
   *     is a subtype of {@code old}'s (including if they're identical) this is guaranteed not to
   *     error. If it's a supertype, it depends on whether {@code old} is in a position where the
   *     supertype is still a subtype of the required type.
   */
  CascadingInstrUpdate unsafeReplaceInInputs(CascadingUpdatedInstrs seen, Node<?> old, Node<?> replacement);
}