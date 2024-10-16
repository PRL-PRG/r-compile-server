package org.prlprg.ir.type.lattice;

import javax.annotation.Nullable;
import org.prlprg.ir.type.RType;

/**
 * Lattice from type theory which is bounded at the top. These methods are common in {@link RType}
 * and its parts.
 */
public interface Lattice<T extends Lattice<T>> {
  /** Is this a subtype of the given type? Treats {@code null} as "bottom". */
  static <T extends Lattice<T>> boolean isSubset(@Nullable T lhs, @Nullable T rhs) {
    return lhs == null || (rhs != null && lhs.isSubsetOf(rhs));
  }

  /** Is this a supertype of the given type? Treats {@code null} as "bottom". */
  static <T extends Lattice<T>> boolean isSuperset(@Nullable T lhs, @Nullable T rhs) {
    return rhs == null || (lhs != null && lhs.isSupersetOf(rhs));
  }

  /**
   * Returns the most precise representable superset (also called "join"). Treats {@code null} as
   * "bottom".
   */
  static <T extends Lattice<T>> @Nullable T union(@Nullable T lhs, @Nullable T rhs) {
    return lhs == null ? rhs : rhs == null ? lhs : lhs.union(rhs);
  }

  /**
   * Returns the least precise representable subset (also called "meet"). Treats {@code null} as
   * "bottom" (which means it may return {@code null} if the types are disjoint.
   */
  static <T extends Lattice<T>> @Nullable T intersection(@Nullable T lhs, @Nullable T rhs) {
    return lhs == null || rhs == null ? null : lhs.intersection(rhs);
  }

  /** Is this a subtype of the given type? */
  boolean isSubsetOf(T other);

  /** Is this a supertype of the given type? */
  @SuppressWarnings("unchecked")
  default boolean isSupersetOf(T other) {
    return other.isSubsetOf((T) this);
  }

  /** Returns the most precise representable superset (also called "join"). */
  T union(T other);

  /**
   * Returns the least precise representable subset (also called "meet"), or {@code null} if the
   * types are disjoint and there's no expressible "bottom" type.
   */
  @Nullable T intersection(T other);
}
