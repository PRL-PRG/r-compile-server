package org.prlprg.ir.type;

import javax.annotation.Nullable;

/**
 * Lattice from type theory which is bounded at the top. These methods are common in {@link RType}
 * and its parts.
 */
public interface Lattice<T extends Lattice<T>> {
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
