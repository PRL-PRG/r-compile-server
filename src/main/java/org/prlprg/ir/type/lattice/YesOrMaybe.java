package org.prlprg.ir.type.lattice;

/** A type with 2 possible values: yes or maybe (a descriptive boolean). */
public enum YesOrMaybe implements BoundedLattice<YesOrMaybe> {
  YES,
  MAYBE;

  /** Yes if true, maybe if false. */
  public static YesOrMaybe of(boolean value) {
    return value ? YES : MAYBE;
  }

  /** Converts no into maybe. */
  public static YesOrMaybe of(Troolean value) {
    return value == Troolean.YES ? YES : MAYBE;
  }

  /** Returns true unless this is maybe and other is yes. */
  @Override
  public boolean isSubsetOf(YesOrMaybe other) {
    return this == YES || other == MAYBE;
  }

  /** Returns true unless this is yes and other is maybe. */
  @Override
  public boolean isSupersetOf(YesOrMaybe other) {
    return this == MAYBE || other == YES;
  }

  /**
   * Returns yes if both are yes, otherwise maybe. Equivalent to {@code &&}ing the boolean
   * representation.
   */
  @Override
  public YesOrMaybe union(YesOrMaybe other) {
    return this == YES ? other : this;
  }

  /**
   * Returns yes if either are yes, otherwise maybe. Equivalent to {@code ||}ing the boolean
   * representation.
   */
  @Override
  public YesOrMaybe intersection(YesOrMaybe other) {
    return this == YES ? this : other;
  }
}
