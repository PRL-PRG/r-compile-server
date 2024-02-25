package org.prlprg.ir.type;

import javax.annotation.Nonnull;

/**
 * Bounded lattice from type theory (lattice with top and bottom). These methods are common in
 * {@link RType} and its parts.
 */
public interface BoundedLattice<T extends BoundedLattice<T>> extends Lattice<T> {
  /** Returns the least precise representable subset (also called "meet"). */
  // @Nonnull is needed here because of an IntelliJ bug (won't infer Nonnull by default)
  @SuppressWarnings("NullableProblems")
  @Override
  @Nonnull
  T intersection(T other);
}
