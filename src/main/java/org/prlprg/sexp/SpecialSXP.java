package org.prlprg.sexp;

public final class SpecialSXP implements SEXP {
  public SpecialSXP(String name) {}

  @Override
  public SEXPType type() {
    return SEXPType.SPECIAL;
  }

  @Override
  public Class<? extends SEXP> getCanonicalType() {
    return SpecialSXP.class;
  }
}
