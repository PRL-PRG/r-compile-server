package org.prlprg.primitive;

import org.prlprg.sexp.SEXPType;

/** Possible runtime type to be tested by GNU-R {@code is}. */
public enum IsTypeCheck {
  NIL(SEXPType.NIL.i),
  LGL(SEXPType.LGL.i),
  REAL(SEXPType.REAL.i),
  STR(SEXPType.STR.i),
  INT(SEXPType.INT.i),
  CPLX(SEXPType.CPLX.i),
  RAW(SEXPType.RAW.i),
  EXPR(SEXPType.EXPR.i),
  VEC(SEXPType.VEC.i),
  LIST(SEXPType.LIST.i),
  NON_OBJECT(200),
  VECTOR(201),
  FACTOR(202);

  /** The integer which represents this type in GNU-R */
  public final int i;

  IsTypeCheck(int i) {
    this.i = i;
  }

  /** Return the runtime type check represented by the given integer value. */
  public static IsTypeCheck valueOf(int i) {
    return switch (i) {
      case 0 -> NIL;
      case 10 -> LGL;
      case 14 -> REAL;
      case 16 -> STR;
      case 13 -> INT;
      case 15 -> CPLX;
      case 24 -> RAW;
      case 20 -> EXPR;
      case 19 -> VEC;
      case 2 -> LIST;
      case 200 -> NON_OBJECT;
      case 201 -> VECTOR;
      case 202 -> FACTOR;
      default -> throw new IllegalArgumentException("Unknown runtime type check: " + i);
    };
  }
}
