package org.prlprg.util;

/**
 * A type with four possible values: yes, no, maybe, or irrelevant. It forms the lattice
 *
 * <pre>
 *     IRRELEVANT
 *      /     \
 *     /       \
 *    NO      YES
 *     \      /
 *      \    /
 *      MAYBE
 * </pre>
 */
public enum Quad {
  YES,
  NO,
  MAYBE,
  IRRELEVANT;

  public static Quad of(boolean value) {
    return value ? YES : NO;
  }

  public Quad union(Quad other) {
    if (this == IRRELEVANT) {
      return other;
    }
    if (other == IRRELEVANT) {
      return this;
    }
    if (this == other) {
      return this;
    }
    return MAYBE;
  }

  public Quad union(boolean other) {
    return union(of(other));
  }

  public Quad intersection(Quad other) {
    if (this == MAYBE) {
      return other;
    }
    if (other == MAYBE) {
      return this;
    }
    if (this == other) {
      return this;
    }
    return IRRELEVANT;
  }

  public Quad intersection(boolean other) {
    return intersection(of(other));
  }

  public boolean isSubsetOf(Quad rhs) {
    if (this == IRRELEVANT) {
      return true;
    }
    if (rhs == IRRELEVANT) {
      return false;
    }
    if (rhs == MAYBE) {
      return true;
    }
    return this == rhs;
  }

  public boolean isSupersetOf(Quad rhs) {
    if (this == MAYBE) {
      return true;
    }
    if (rhs == MAYBE) {
      return false;
    }
    if (rhs == IRRELEVANT) {
      return true;
    }
    return this == rhs;
  }
}
