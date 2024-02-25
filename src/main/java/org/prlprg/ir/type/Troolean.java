package org.prlprg.ir.type;

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

  public static Troolean of(boolean value) {
    return value ? YES : NO;
  }

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

  public static @Nullable Troolean union(@Nullable Troolean lhs, boolean rhs) {
    return union(lhs, of(rhs));
  }

  public static @Nullable Troolean intersection(@Nullable Troolean lhs, boolean rhs) {
    return intersection(lhs, of(rhs));
  }

  @Override
  public boolean isSubsetOf(Troolean other) {
    return isSubset(this, other);
  }

  @Override
  public boolean isSupersetOf(Troolean other) {
    return isSuperset(this, other);
  }

  @Override
  public Troolean union(Troolean other) {
    var result = union(this, other);
    assert result != null;
    return result;
  }

  @Nullable @Override
  public Troolean intersection(Troolean other) {
    return intersection(this, other);
  }
}
