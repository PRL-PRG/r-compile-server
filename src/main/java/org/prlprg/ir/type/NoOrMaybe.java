package org.prlprg.ir.type;

/** A type with 2 possible values: no or maybe (a descriptive boolean). */
public enum NoOrMaybe implements BoundedLattice<NoOrMaybe> {
  NO,
  MAYBE;

  /** Maybe if true, no if false. */
  public static NoOrMaybe of(boolean value) {
    return value ? MAYBE : NO;
  }

  @Override
  public boolean isSubsetOf(NoOrMaybe other) {
    return this == NO || other == MAYBE;
  }

  @Override
  public boolean isSupersetOf(NoOrMaybe other) {
    return this == MAYBE || other == NO;
  }

  @Override
  public NoOrMaybe union(NoOrMaybe other) {
    return this == NO ? other : this;
  }

  @Override
  public NoOrMaybe intersection(NoOrMaybe other) {
    return this == NO ? this : other;
  }
}
