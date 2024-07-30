package org.prlprg.ir.cfg;

public enum CascadingInstrUpdate {
  NONE(false, false),
  UPDATED_EFFECTS(true, false),
  UPDATED_OUTPUT_TYPES(false, true),
  UPDATED_EFFECTS_AND_OUTPUT_TYPES(true, true);

  private final boolean updatedEffects;
  private final boolean updatedOutputTypes;

  public static CascadingInstrUpdate of(boolean updatedEffects, boolean updatedOutputTypes) {
    if (updatedEffects && updatedOutputTypes) {
      return UPDATED_EFFECTS_AND_OUTPUT_TYPES;
    } else if (updatedEffects) {
      return UPDATED_EFFECTS;
    } else if (updatedOutputTypes) {
      return UPDATED_OUTPUT_TYPES;
    } else {
      return NONE;
    }
  }

  CascadingInstrUpdate(boolean updatedEffects, boolean updatedOutputTypes) {
    this.updatedEffects = updatedEffects;
    this.updatedOutputTypes = updatedOutputTypes;
  }

  public boolean updatedEffects() {
    return updatedEffects;
  }

  public boolean updatedOutputTypes() {
    return updatedOutputTypes;
  }

  /**
   * Return an update is the result of applying both updates, i.e. {@code updated…} is true iff
   * either {@code this} or {@code other}'s is true.
   */
  public CascadingInstrUpdate merge(CascadingInstrUpdate other) {
    return of(
        updatedEffects || other.updatedEffects, updatedOutputTypes || other.updatedOutputTypes);
  }
}
