package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.sexp.SEXPType;

/** The "main" type of a primitive vector's elements. */
public enum PrimVecElementRType {
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
    var vecType = VectorElementRType.of(type);
    return vecType == null ? null : vecType.toPrimVecElementType();
  }

  /** The {@link SEXPType} which all instances of the vector have. */
  public final SEXPType vectorSexpType;

  PrimVecElementRType(SEXPType vectorSexpType) {
    this.vectorSexpType = vectorSexpType;
  }

  /** Is this an integer, complex, or double? */
  public boolean isNumeric() {
    return switch (this) {
      case INT, COMPLEX, DOUBLE -> true;
      case STRING, LOGICAL, RAW -> false;
    };
  }

  /** Is this an integer, complex, double, or logical? */
  public boolean isNumericOrLogical() {
    return switch (this) {
      case INT, COMPLEX, DOUBLE, LOGICAL -> true;
      case STRING, RAW -> false;
    };
  }

  /** Converts to a {@link VectorElementRType} (permits more values). */
  public VectorElementRType toVectorElementType() {
    return switch (this) {
      case INT -> VectorElementRType.INT;
      case STRING -> VectorElementRType.STRING;
      case LOGICAL -> VectorElementRType.LOGICAL;
      case RAW -> VectorElementRType.RAW;
      case COMPLEX -> VectorElementRType.COMPLEX;
      case DOUBLE -> VectorElementRType.DOUBLE;
    };
  }
}
