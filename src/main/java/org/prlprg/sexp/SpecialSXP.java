package org.prlprg.sexp;

import org.prlprg.primitive.BuiltinId;

public record SpecialSXP(BuiltinId id) implements SEXP {
  public SpecialSXP {
    if (!id.isSpecial()) {
      throw new IllegalArgumentException("Not a special builtin: " + id);
    }
  }

  @Override
  public SEXPType type() {
    return SEXPType.SPECIAL;
  }

  @Override
  public Class<? extends SEXP> getCanonicalType() {
    return SpecialSXP.class;
  }
}
