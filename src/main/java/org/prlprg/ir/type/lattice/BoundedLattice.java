package org.prlprg.ir.type.lattice;

import java.util.Objects;
import javax.annotation.Nonnull;
import org.prlprg.ir.type.RType;

/**
 * Bounded lattice from type theory (lattice with top and bottom). These methods are common in
 * {@link RType} and its parts.
 */
public interface BoundedLattice<T extends BoundedLattice<T>> extends Lattice<T> {
  /**
   * A possible implementation of {@link #intersection(Lattice, Lattice)} that uses reflection on a
   * record, calling {@link #intersection(Lattice, Lattice)} on all components.
   */
  static <T extends Lattice<T>> T simpleRecordIntersection(T lhs, T rhs) {
    return Objects.requireNonNull(Lattice.simpleRecordIntersection(lhs, rhs));
  }

  /**
   * A possible implementation of {@link #intersection(Lattice, Lattice)} that uses reflection on a
   * record, calling {@link #intersection(Lattice, Lattice)} on all components.
   */
  static <T extends Lattice<T>> T simpleRecordIntersection(
      Class<? extends T> returnClass, T lhs, T rhs) {
    return Objects.requireNonNull(Lattice.simpleRecordIntersection(returnClass, lhs, rhs));
  }

  /** Returns the least precise representable subset (also called "meet"). */
  // @Nonnull is needed here because of an IntelliJ bug (won't infer Nonnull by default)
  @SuppressWarnings({"NullableProblems", "unchecked"})
  @Override
  @Nonnull
  default T intersection(T other) {
    return BoundedLattice.simpleRecordIntersection((T) this, other);
  }
}
