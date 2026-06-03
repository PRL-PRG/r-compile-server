package org.prlprg.sexp;

public record ExtptrSxp(SEXP prot, SEXP tag) implements SEXP {

  @Override
  public SEXPType type() {
    return SEXPType.EXTPTR;
  }

  @Override
  public Class<? extends SEXP> getCanonicalType() {
    return ExtptrSxp.class;
  }
}
