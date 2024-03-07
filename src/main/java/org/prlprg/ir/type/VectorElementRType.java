package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.sexp.SEXPType;

/** The "main" type of a vector's elements. */
public enum VectorElementRType implements Lattice<VectorElementRType> {
  ANY(null),
  SEXP(SEXPType.VEC),
  INT(SEXPType.INT),
  STRING(SEXPType.STR),
  LOGICAL(SEXPType.LGL),
  RAW(SEXPType.RAW),
  COMPLEX(SEXPType.CPLX),
  DOUBLE(SEXPType.REAL),
  EXPRESSION(SEXPType.EXPR);

  /**
   * Returns the element type of a vector with the given {@link SEXPType}, or {@code null} if it
   * isn't a vector SEXPType.
   */
  public static @Nullable VectorElementRType of(SEXPType type) {
    return switch (type) {
      case NIL,
              LIST,
              SYM,
              LANG,
              CLO,
              PROM,
              EXTPTR,
              WEAKREF,
              ENV,
              SPECIAL,
              BUILTIN,
              S4,
              BCODE,
              DOT,
              ANY ->
          null;
      case CHAR ->
          throw new IllegalArgumentException(
              "char vectors aren't expected here, we may need to add them to RType");
      case LGL -> LOGICAL;
      case INT -> INT;
      case REAL -> DOUBLE;
      case CPLX -> COMPLEX;
      case STR -> STRING;
      case RAW -> RAW;
      case VEC -> SEXP;
      case EXPR -> EXPRESSION;
    };
  }

  /**
   * The {@link SEXPType} which all instances of the vector have, or {@code null} if instances may
   * have different SEXPTypes.
   */
  public final @Nullable SEXPType vectorSexpType;

  VectorElementRType(@Nullable SEXPType vectorSexpType) {
    this.vectorSexpType = vectorSexpType;
  }

  /** Is this a primitive vector type? */
  Troolean isPrimitive() {
    return vectorSexpType == null
        ? Troolean.MAYBE
        : Troolean.of(vectorSexpType.isPrimitiveVector());
  }

  /**
   * Converts to a {@link PrimVecElementRType} (permits less values), or {@code null} if this isn't
   * a primitive type.
   */
  public @Nullable PrimVecElementRType toPrimVecElementType() {
    return switch (this) {
      case INT -> PrimVecElementRType.INT;
      case STRING -> PrimVecElementRType.STRING;
      case LOGICAL -> PrimVecElementRType.LOGICAL;
      case RAW -> PrimVecElementRType.RAW;
      case COMPLEX -> PrimVecElementRType.COMPLEX;
      case DOUBLE -> PrimVecElementRType.DOUBLE;
      case SEXP, EXPRESSION, ANY -> null;
    };
  }

  @Override
  public boolean isSubsetOf(VectorElementRType other) {
    return other == ANY || this == other;
  }

  @Override
  public VectorElementRType union(VectorElementRType other) {
    return this == other ? this : ANY;
  }

  @Nullable @Override
  public VectorElementRType intersection(VectorElementRType other) {
    return other == ANY ? this : this == ANY ? other : this == other ? this : null;
  }
}
