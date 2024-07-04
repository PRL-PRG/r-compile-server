package org.prlprg.ir.type.lattice;

import javax.annotation.Nullable;

/**
 * A type with three possible values: yes, no, or maybe. It forms the lattice
 *
 * <pre>
 *       null
 *      /     \
 *     /       \
 *    NO      YES
 *     \      /
 *      \    /
 *      MAYBE
 * </pre>
 */
public enum Troolean implements Lattice<Troolean> {
  YES,
  NO,
  MAYBE;

  /** Yes or no. */
  public static Troolean of(boolean value) {
    return value ? YES : NO;
  }

  /** Yes or maybe. */
  public static Troolean of(YesOrMaybe value) {
    return value == YesOrMaybe.YES ? YES : MAYBE;
  }

  /** No or maybe. */
  public static Troolean of(NoOrMaybe value) {
    return value == NoOrMaybe.NO ? NO : MAYBE;
  }

  /** {@code null} is a subset of anything, and anything is a subset of MAYBE. */
  public static boolean isSubset(@Nullable Troolean lhs, @Nullable Troolean rhs) {
    if (lhs == null) {
      return true;
    }
    if (rhs == null) {
      return false;
    }
    if (rhs == MAYBE) {
      return true;
    }
    return lhs == rhs;
  }

  /** MAYBE is a superset of anything, and anything is a superset of {@code null}. */
  public static boolean isSuperset(@Nullable Troolean lhs, @Nullable Troolean rhs) {
    if (lhs == MAYBE) {
      return true;
    }
    if (rhs == MAYBE) {
      return false;
    }
    if (rhs == null) {
      return true;
    }
    return lhs == rhs;
  }

  /**
   * If either is {@code null}, returns the other. If args are YES and NO, or either is MAYBE,
   * returns MAYBE.
   */
  public static @Nullable Troolean union(@Nullable Troolean lhs, @Nullable Troolean rhs) {
    if (lhs == null) {
      return rhs;
    }
    if (rhs == null) {
      return lhs;
    }
    if (lhs == rhs) {
      return lhs;
    }
    return MAYBE;
  }

  /**
   * If either is MAYBE, returns the other. If args are YES and NO, or either is {@code null},
   * returns {@code null}.
   */
  public static @Nullable Troolean intersection(@Nullable Troolean lhs, @Nullable Troolean rhs) {
    if (lhs == MAYBE) {
      return rhs;
    }
    if (rhs == MAYBE) {
      return lhs;
    }
    if (lhs == rhs) {
      return lhs;
    }
    return null;
  }

  /**
   * If {@code lhs} is {@code null}, returns {@code rhs}. If args are YES and true returns YES, if
   * NO and false returns NO, otherwise MAYBE.
   */
  public static @Nullable Troolean union(@Nullable Troolean lhs, boolean rhs) {
    return union(lhs, of(rhs));
  }

  /**
   * If {@code lhs} is MAYBE, returns {@code rhs}. If args are YES and true returns YES, if NO and
   * false returns NO, otherwise {@code null}.
   */
  public static @Nullable Troolean intersection(@Nullable Troolean lhs, boolean rhs) {
    return intersection(lhs, of(rhs));
  }

  /**
   * Returns {@link Troolean#YES} if {@link Troolean#NO} and vice versa, {@link Troolean#MAYBE} if
   * {@link Troolean#MAYBE}.
   */
  public Troolean negate() {
    return this == MAYBE ? MAYBE : this == YES ? NO : YES;
  }

  /** Anything is a subset of MAYBE, otherwise (if YES or NO) they must be equal. */
  @Override
  public boolean isSubsetOf(Troolean other) {
    return isSubset(this, other);
  }

  /** Anything is a subset of MAYBE, otherwise (if YES or NO) they must be equal. */
  public boolean isSubsetOf(YesOrMaybe other) {
    return isSubset(this, of(other));
  }

  /** Anything is a subset of MAYBE, otherwise (if YES or NO) they must be equal. */
  public boolean isSubsetOf(NoOrMaybe other) {
    return isSubset(this, of(other));
  }

  /** Anything is a subset of MAYBE, otherwise (if YES/true or NO/false) they must be equal. */
  public boolean isSubsetOf(boolean other) {
    return isSubset(this, of(other));
  }

  /** MAYBE is a superset of anything, otherwise (if YES or NO) they must be equal. */
  @Override
  public boolean isSupersetOf(Troolean other) {
    return isSuperset(this, other);
  }

  /** MAYBE is a superset of anything, otherwise (if YES or NO) they must be equal. */
  public boolean isSupersetOf(YesOrMaybe other) {
    return isSuperset(this, of(other));
  }

  /** MAYBE is a superset of anything, otherwise (if YES or NO) they must be equal. */
  public boolean isSupersetOf(NoOrMaybe other) {
    return isSuperset(this, of(other));
  }

  /** MAYBE is a superset of anything, otherwise (if YES/true or NO/false) they must be equal. */
  public boolean isSupersetOf(boolean other) {
    return isSuperset(this, of(other));
  }

  /** If args are YES and NO, or either is MAYBE, returns MAYBE. */
  @Override
  public Troolean union(Troolean other) {
    var result = union(this, other);
    assert result != null;
    return result;
  }

  /** If args are YES and NO, returns {@code null}. If either arg is MAYBE, returns the other. */
  @Nullable @Override
  public Troolean intersection(Troolean other) {
    return intersection(this, other);
  }
}
