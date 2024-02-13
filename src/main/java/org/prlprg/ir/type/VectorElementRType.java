package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.Troolean;
import org.prlprg.sexp.SEXPType;

/** The "main" type of a vector's elements. */
public enum VectorElementRType implements Lattice<VectorElementRType> {
  ANY(null),
  PRIMITIVE(null),
  NUMERIC_OR_LOGICAL(null),
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
      case VEC -> SEXP;
      case EXPR -> EXPRESSION;
      case CHAR, LGL, INT, REAL, CPLX, STR, RAW -> {
        var primType = PrimVecElementRType.of(type);
        assert primType != null;
        yield primType.toVectorElementType();
      }
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
    return switch (this) {
      case PRIMITIVE, NUMERIC_OR_LOGICAL, INT, STRING, LOGICAL, RAW, COMPLEX, DOUBLE ->
          Troolean.YES;
      case ANY -> Troolean.MAYBE;
      case SEXP, EXPRESSION -> Troolean.NO;
    };
  }

  @Override
  public boolean isSubsetOf(VectorElementRType other) {
    return other == ANY
        || switch (this) {
          case ANY -> false;
          case PRIMITIVE -> other == PRIMITIVE;
          case NUMERIC_OR_LOGICAL -> other == NUMERIC_OR_LOGICAL || other == PRIMITIVE;
          case SEXP -> other == SEXP;
          case INT -> other == INT || other == NUMERIC_OR_LOGICAL || other == PRIMITIVE;
          case STRING -> other == STRING || other == PRIMITIVE;
          case LOGICAL -> other == LOGICAL || other == NUMERIC_OR_LOGICAL || other == PRIMITIVE;
          case RAW -> other == RAW || other == PRIMITIVE;
          case COMPLEX -> other == COMPLEX || other == NUMERIC_OR_LOGICAL || other == PRIMITIVE;
          case DOUBLE -> other == DOUBLE || other == NUMERIC_OR_LOGICAL || other == PRIMITIVE;
          case EXPRESSION -> other == EXPRESSION;
        };
  }

  @Override
  public VectorElementRType union(VectorElementRType other) {
    var primitiveFallback = other.isSubsetOf(PRIMITIVE) ? PRIMITIVE : ANY;
    var numericOrLogicalFallback =
        other.isSubsetOf(NUMERIC_OR_LOGICAL) ? NUMERIC_OR_LOGICAL : primitiveFallback;
    return other == ANY
        ? ANY
        : switch (this) {
          case ANY -> ANY;
          case PRIMITIVE -> primitiveFallback;
          case NUMERIC_OR_LOGICAL -> numericOrLogicalFallback;
          case SEXP -> other == SEXP ? SEXP : ANY;
          case INT -> other == INT ? INT : numericOrLogicalFallback;
          case STRING -> other == STRING ? STRING : primitiveFallback;
          case LOGICAL -> other == LOGICAL ? LOGICAL : numericOrLogicalFallback;
          case RAW -> other == RAW ? RAW : primitiveFallback;
          case COMPLEX -> other == COMPLEX ? COMPLEX : numericOrLogicalFallback;
          case DOUBLE -> other == DOUBLE ? DOUBLE : numericOrLogicalFallback;
          case EXPRESSION -> other == EXPRESSION ? EXPRESSION : ANY;
        };
  }

  @Override
  public @Nullable VectorElementRType intersection(VectorElementRType other) {
    return isSubsetOf(other) ? this : other.isSubsetOf(this) ? other : null;
  }

  @Override
  public String toString() {
    return switch (this) {
      case ANY -> "any";
      case PRIMITIVE -> "prim";
      case NUMERIC_OR_LOGICAL -> "num|lgl";
      case SEXP -> "vec";
      case INT -> "int";
      case STRING -> "str";
      case LOGICAL -> "lgl";
      case RAW -> "raw";
      case COMPLEX -> "cplx";
      case DOUBLE -> "real";
      case EXPRESSION -> "expr";
    };
  }
}
