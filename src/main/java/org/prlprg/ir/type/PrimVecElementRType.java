package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.sexp.SEXPType;

/** The "main" type of a primitive vector's elements. */
public enum PrimVecElementRType implements Lattice<PrimVecElementRType> {
  ANY(null),
  NUMERIC_OR_LOGICAL(null),
  INT(SEXPType.INT),
  STRING(SEXPType.STR),
  LOGICAL(SEXPType.LGL),
  RAW(SEXPType.RAW),
  COMPLEX(SEXPType.CPLX),
  DOUBLE(SEXPType.REAL);

  /**
   * Returns the element type of a vector with the given {@link SEXPType}, or {@code null} if it
   * isn't a primitive vector SEXPType.
   */
  public static @Nullable PrimVecElementRType of(SEXPType type) {
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
              ANY,
              VEC,
              EXPR ->
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
    };
  }

  /** The {@link SEXPType} which all instances of the vector have. */
  public final @Nullable SEXPType vectorSexpType;

  PrimVecElementRType(@Nullable SEXPType vectorSexpType) {
    this.vectorSexpType = vectorSexpType;
  }

  /** Is this an integer, complex, or double? */
  public Maybe isNumeric() {
    return switch (this) {
      case INT, COMPLEX, DOUBLE -> Maybe.YES;
      case ANY, NUMERIC_OR_LOGICAL -> Maybe.MAYBE;
      case STRING, LOGICAL, RAW -> Maybe.NO;
    };
  }

  /** Is this an integer, complex, double, or logical? */
  public Maybe isNumericOrLogical() {
    return switch (this) {
      case NUMERIC_OR_LOGICAL, INT, COMPLEX, DOUBLE, LOGICAL -> Maybe.YES;
      case ANY -> Maybe.MAYBE;
      case STRING, RAW -> Maybe.NO;
    };
  }

  /** Converts to a {@link VectorElementRType} (permits more values). */
  public VectorElementRType toVectorElementType() {
    return switch (this) {
      case ANY -> VectorElementRType.PRIMITIVE;
      case NUMERIC_OR_LOGICAL -> VectorElementRType.NUMERIC_OR_LOGICAL;
      case INT -> VectorElementRType.INT;
      case STRING -> VectorElementRType.STRING;
      case LOGICAL -> VectorElementRType.LOGICAL;
      case RAW -> VectorElementRType.RAW;
      case COMPLEX -> VectorElementRType.COMPLEX;
      case DOUBLE -> VectorElementRType.DOUBLE;
    };
  }

  @Override
  public boolean isSubsetOf(PrimVecElementRType other) {
    return toVectorElementType().isSubsetOf(other.toVectorElementType());
  }

  @Override
  public PrimVecElementRType union(PrimVecElementRType other) {
    return cast(toVectorElementType().union(other.toVectorElementType()));
  }

  @Override
  public @Nullable PrimVecElementRType intersection(PrimVecElementRType other) {
    var intersection = toVectorElementType().intersection(other.toVectorElementType());
    return intersection == null ? null : cast(intersection);
  }

  @Override
  public String toString() {
    return toVectorElementType().toString();
  }

  @SuppressWarnings("DuplicatedCode")
  private static PrimVecElementRType cast(VectorElementRType type) {
    return switch (type) {
      case PRIMITIVE -> ANY;
      case NUMERIC_OR_LOGICAL -> NUMERIC_OR_LOGICAL;
      case INT -> INT;
      case STRING -> STRING;
      case LOGICAL -> LOGICAL;
      case RAW -> RAW;
      case COMPLEX -> COMPLEX;
      case DOUBLE -> DOUBLE;
      default -> throw new IllegalArgumentException("Vector type isn't primitive: " + type);
    };
  }
}
