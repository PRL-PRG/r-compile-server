package org.prlprg.ir.cfg;

/**
 * A {@link Node} that was produced by an {@link Instr}.
 *
 * <p>These nodes have <b>liveness</b>: they can't be an input to any other {@link Instr} that isn't
 * not dominated by their {@link #origin()} (except as a {@link Phi} input, paired with an incoming
 * {@link BB} that is dominated by the {@link Instr}'s {@link BB}). {@link Phi} nodes also have
 * liveness.
 */
public non-sealed interface InstrOutput<T> extends LocalNode<T> {
  /**
   * Downcast {@code InstrOutput<A>} to {@code InstrOutput<B>} where {@code B &lt;: A}.
   *
   * <p>This is needed due to Java's type erasure: see {@link #type()} for more details.
   *
   * @throws ClassCastException if {@code B &lt;/: A}.
   */
  @SuppressWarnings("unchecked")
  default <U extends T> InstrOutput<? extends U> cast(Class<U> clazz) {
    return (InstrOutput<U>) LocalNode.super.cast(clazz);
  }

  /** Instruction that produced this node. */
  Instr origin();
}
