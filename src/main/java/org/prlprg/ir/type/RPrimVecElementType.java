package org.prlprg.ir.type;

import javax.annotation.Nullable;
import org.prlprg.sexp.SEXPType;

/** The "main" type of a primitive vector's elements. */
public enum RPrimVecElementType {
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
  public static @Nullable RPrimVecElementType of(SEXPType type) {
    return RVectorElementType.of(type).toPrimVecElementType();
  }

  /** The {@link SEXPType} which all instances of the vector have. */
  public final SEXPType vectorSexpType;

  RPrimVecElementType(SEXPType vectorSexpType) {
    this.vectorSexpType = vectorSexpType;
  }

  /** Converts to a {@link RVectorElementType} (permits more values). */
  public RVectorElementType toVectorElementType() {
    return switch (this) {
      case INT -> RVectorElementType.INT;
      case STRING -> RVectorElementType.STRING;
      case LOGICAL -> RVectorElementType.LOGICAL;
      case RAW -> RVectorElementType.RAW;
      case COMPLEX -> RVectorElementType.COMPLEX;
      case DOUBLE -> RVectorElementType.DOUBLE;
    };
  }
}
