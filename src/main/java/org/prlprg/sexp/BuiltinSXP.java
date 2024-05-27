package org.prlprg.sexp;

import org.prlprg.primitive.BuiltinId;

public record BuiltinSXP(BuiltinId id) implements SEXP {
  public BuiltinSXP {
    if (id.isSpecial()) {
      throw new IllegalArgumentException("Not a non-special builtin: " + id);
    }
  }

  @Override
  public SEXPType type() {
    return SEXPType.BUILTIN;
  }

  @Override
  public Class<? extends SEXP> getCanonicalType() {
    return BuiltinSXP.class;
  }
}
