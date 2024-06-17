package org.prlprg.sexp;

public record SpecialSXP(String name) implements SEXP {
  @Override
  public SEXPType type() {
    return SEXPType.SPECIAL;
  }

  @Override
  public Class<? extends SEXP> getCanonicalType() {
    return SpecialSXP.class;
  }
}
