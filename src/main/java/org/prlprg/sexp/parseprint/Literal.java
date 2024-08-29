package org.prlprg.sexp.parseprint;

import org.prlprg.parseprint.EnumSerialCaseIs;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.StringCase;

@EnumSerialCaseIs(StringCase.SCREAMING_SNAKE)
enum Literal {
  NULL(SEXPs.NULL),
  TRUE(SEXPs.TRUE),
  FALSE(SEXPs.FALSE),
  NA_LGL(SEXPs.NA_LOGICAL),
  NA_INT(SEXPs.NA_INTEGER),
  NA_REAL(SEXPs.NA_REAL),
  NA_CPLX(SEXPs.NA_COMPLEX),
  NA_STR(SEXPs.NA_STRING);

  private final SEXP value;

  Literal(SEXP value) {
    this.value = value;
  }

  public SEXP value() {
    return value;
  }
}
