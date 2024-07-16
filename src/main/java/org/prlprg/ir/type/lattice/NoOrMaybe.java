package org.prlprg.ir.type.lattice;

/** A type with 2 possible values: no or maybe (a descriptive boolean). */
public enum NoOrMaybe implements BoundedLattice<NoOrMaybe> {
  NO,
  MAYBE;

  /** Maybe if true, no if false. */
  public static NoOrMaybe of(boolean value) {
    return value ? MAYBE : NO;
  }

  /** Converts yes into maybe. */
  public static NoOrMaybe of(Maybe value) {
    return value == Maybe.NO ? NO : MAYBE;
  }

  /**
   * Returns {@link YesOrMaybe#YES} if {@link NoOrMaybe#NO} and {@link YesOrMaybe#MAYBE} if {@link
   * NoOrMaybe#MAYBE}.
   */
  public YesOrMaybe negate() {
    return this == NO ? YesOrMaybe.YES : YesOrMaybe.MAYBE;
  }

  /** Returns true unless this is maybe and other is no. */
  @Override
  public boolean isSubsetOf(NoOrMaybe other) {
    return this == NO || other == MAYBE;
  }

  /** Returns true unless this is no and other is maybe. */
  @Override
  public boolean isSupersetOf(NoOrMaybe other) {
    return this == MAYBE || other == NO;
  }

  /**
   * Returns no if both are no, otherwise maybe. Equivalent to {@code ||}ing the boolean
   * representation.
   */
  @Override
  public NoOrMaybe unionOf(NoOrMaybe other) {
    return this == NO ? other : this;
  }

  /**
   * Returns no if either are no, otherwise maybe. Equivalent to {@code &&}ing the boolean
   * representation.
   */
  @Override
  public NoOrMaybe intersectionOf(NoOrMaybe other) {
    return this == NO ? this : other;
  }
}
