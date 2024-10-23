package org.prlprg.sexp;

public record ExtptrSxp() implements SEXP {

  @Override
  public SEXPType type() {
    return SEXPType.EXPR;
  }

  @Override
  public Class<? extends SEXP> getCanonicalType() {
    return ExtptrSxp.class;
  }
}
