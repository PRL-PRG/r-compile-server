package org.prlprg.ir.cfg;

import org.prlprg.ir.type.RType;

/**
 * A {@link Node} that was produced by an {@link Instr}.
 *
 * <p>These nodes have <b>liveness</b>: they can't be an input to any other {@link Instr} that isn't
 * not dominated by their {@link #origin()} (except as a {@link Phi} input, paired with an incoming
 * {@link BB} that is dominated by the {@link Instr}'s {@link BB}). {@link Phi} nodes also have
 * liveness.
 */
public final class InstrOutput<T> extends LocalNode<T> {
  private final Instr origin;

  /**
   * Downcast {@code InstrOutput<? extends A>} to {@code InstrOutput<? extends B>} where {@code B
   * &lt;: A}.
   *
   * <p>This is needed due to Java's type erasure: see {@link #type()} for more details.
   *
   * @throws ClassCastException if {@code B &lt;/: A}.
   */
  @SuppressWarnings("unchecked")
  public <U> InstrOutput<? extends U> cast(Class<U> clazz) {
    return (InstrOutput<U>) super.cast(clazz);
  }

  InstrOutput(Instr origin, RType type) {
    super(origin.cfg(), type, origin.cfg().uniqueLocalId());
    this.origin = origin;
  }

  /** Instruction that produced this node. */
  public Instr origin() {
    return origin;
  }

  @Override
  public String toString() {
    return id() + " from " + origin;
  }
}
