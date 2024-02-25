package org.prlprg.ir.type;

/** A type with 2 possible values: yes or maybe (a descriptive boolean). */
public enum YesOrMaybe implements BoundedLattice<YesOrMaybe> {
  YES,
  MAYBE;

  /** Yes if true, maybe if false. */
  public static YesOrMaybe of(boolean value) {
    return value ? YES : MAYBE;
  }

  @Override
  public boolean isSubsetOf(YesOrMaybe other) {
    return this == YES || other == MAYBE;
  }

  @Override
  public boolean isSupersetOf(YesOrMaybe other) {
    return this == MAYBE || other == YES;
  }

  @Override
  public YesOrMaybe union(YesOrMaybe other) {
    return this == YES ? other : this;
  }

  @Override
  public YesOrMaybe intersection(YesOrMaybe other) {
    return this == YES ? this : other;
  }
}
