package org.prlprg.sexp;

import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Logical;

/** SEXP vector (immutable list). */
public sealed interface VectorSXP<T> extends ListOrVectorSXP<T>
    permits PrimVectorSXP, VecSXP, ExprSXP {
  @Override
  Attributes attributes();

  /** Does the collection have exactly one element? */
  default boolean isScalar() {
    return size() == 1;
  }

  /**
   * Does the collection have exactly one element <i>and</i> no attributes <i>and</i> is primitive
   * (doesn't contain other {@link SEXP}s)?
   *
   * <p>i.e. can it be represented as an unboxed value?
   */
  default boolean isSimpleScalar() {
    return isScalar() && attributes().isEmpty() && this instanceof PrimVectorSXP;
  }

  @Override
  VectorSXP<T> withAttributes(Attributes attributes);

  @Override
  VectorSXP<T> copy();

  /**
   * Coerce the elements of this vector to strings.
   *
   * @return the elements as strings.
   */
  default String[] coerceToStrings() {
    return coerceTo(String.class);
  }

  default Double[] coerceToReals() {
    return coerceTo(Double.class);
  }

  default Integer[] coerceToInts() {
    return coerceTo(Integer.class);
  }

  default Logical[] coerceToLogicals() {
    return coerceTo(Logical.class);
  }

  default Complex[] coerceToComplexes() {
    return coerceTo(Complex.class);
  }

  @SuppressWarnings("unchecked")
  default <R> R[] coerceTo(Class<R> clazz) {
    Object[] target;
    SEXPType targetType;
    if (clazz == String.class) {
      target = new String[size()];
      targetType = SEXPType.STR;
    } else if (clazz == Double.class) {
      target = new Double[size()];
      targetType = SEXPType.REAL;
    } else if (clazz == Integer.class) {
      target = new Integer[size()];
      targetType = SEXPType.INT;
    } else if (clazz == Logical.class) {
      target = new Logical[size()];
      targetType = SEXPType.LGL;
    } else if (clazz == Complex.class) {
      target = new Complex[size()];
      targetType = SEXPType.CPLX;
    } else {
      throw new IllegalArgumentException("Unsupported target type: " + clazz);
    }

    for (int i = 0; i < size(); i++) {
      target[i] = Coercions.coerce(get(i), targetType);
    }

    return (R[]) target;
  }
}
