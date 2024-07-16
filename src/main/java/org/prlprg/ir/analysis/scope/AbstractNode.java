package org.prlprg.ir.analysis.scope;

import org.prlprg.ir.type.lattice.Lattice;

/**
 * A lattice used for abstract interpretation.
 *
 * <h2>Comparison to {@link org.prlprg.ir.type.lattice.Lattice}</h2>
 *
 * <p>Both this and {@link org.prlprg.ir.type.lattice.Lattice} are interfaces to represent lattices.
 * In theory, any class implementing one can implement the other and vice versa, so they could be
 * merged into one interface that is implemented by all lattices.
 *
 * <p>But in practice, both interfaces are used differently. Implementing the {@link Lattice}
 * methods for instances that implement this type would be a waste of code, because said methods are
 * never called on such instances, and vice versa.
 *
 * <p>Specifically:
 *
 * <ul>
 *   <li><b>This interface exposes an in-place {@link #merge(Object)} operation</b> (and {@link
 *       #copy()}), because merging is more common and scope analysis is very expensive, so we the
 *       performance benefit of in-place merging and benefit of not accidentally using stale values
 *       and suffer the tradeoff of aliased-mutation bugs. <b>{@link Lattice}s are immutable and
 *       expose {@link Lattice#unionOf(Lattice)}, which creates a new object</b>. {@link Lattice}s
 *       are also typically smaller, so the performance tradeoff for them is less significant.
 *   <li><b>{@link Lattice} exposes {@link Lattice#isSubset(Lattice, Lattice)} and {@link
 *       Lattice#intersectionOf(Lattice)}</b>, but we don't ever check subset or intersect instances
 *       of this interface, so it doesn't expose those operations. (And if some subclasses of this
 *       interface did need those operations, we could create a sub-interface for them
 *       specifically.)
 * </ul>
 */
public interface AbstractNode<Self> {
  /**
   * Merge in-place with {@code other} and return if we changed.
   *
   * <p>To be clear, this object is mutated iff the return value isn't {@link AbstractResult#NONE}.
   *
   * <p>This will clone any data necessary from {@code other} (only {@code this} changes).
   */
  AbstractResult merge(Self other);

  /** Same as {@link #merge(Object)}, but sometimes different (TODO). */
  default AbstractResult mergeExit(Self other) {
    return merge(other);
  }

  /**
   * Deep-copy the node.
   *
   * <p>This isn't {@link Object#clone()} because it's widely discouraged.
   */
  Self copy();
}
