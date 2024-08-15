package org.prlprg.ir.type.lattice;

import java.util.Arrays;
import java.util.Collection;
import java.util.Objects;
import java.util.stream.Collector;
import java.util.stream.Collector.Characteristics;
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

  /**
   * Type which is the {@linkplain Lattice#intersectionOf(Lattice)} intersection} of all given
   * types.
   */
  @SafeVarargs
  static <T extends BoundedLattice<T>> T intersection(T type1, T type2, T... types) {
    return Arrays.stream(types).collect(toIntersection(type1.intersectionOf(type2)));
  }

  /**
   * Type which is the {@linkplain Lattice#intersectionOf(Lattice)} intersection} of all given
   * types.
   */
  static <T extends BoundedLattice<T>> T intersection(T nothing, Collection<T> types) {
    return types.stream().collect(toIntersection(nothing));
  }

  /**
   * Creates an {@linkplain Lattice#intersectionOf(Lattice)} intersection} from all types in the
   * stream.
   */
  @SuppressWarnings("unchecked")
  static <T extends BoundedLattice<T>> Collector<T, Object[], T> toIntersection(T any) {
    return Collector.of(
        () -> new Object[] {any},
        (Object[] acc, T next) -> acc[0] = ((T) acc[0]).intersectionOf(next),
        (Object[] a, Object[] b) -> new Object[] {((T) a[0]).intersectionOf((T) b[0])},
        (Object[] a) -> (T) a[0],
        Characteristics.CONCURRENT,
        Characteristics.UNORDERED);
  }

  /** Returns the least precise representable subset (also called "meet"). */
  // @Nonnull is needed here because of an IntelliJ bug (won't infer Nonnull by default)
  @SuppressWarnings({"NullableProblems", "unchecked"})
  @Override
  @Nonnull
  default T intersectionOf(T other) {
    return BoundedLattice.simpleRecordIntersection((T) this, other);
  }
}
