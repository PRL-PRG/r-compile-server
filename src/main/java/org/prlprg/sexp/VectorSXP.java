package org.prlprg.sexp;

import static org.prlprg.Config.VECTOR_TRUNCATE_SIZE;

import java.util.stream.BaseStream;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Logical;

/** SEXP vector (immutable list). */
public sealed interface VectorSXP<T> extends ListOrVectorSXP<T>
    permits EmptyVectorSXPImpl, ScalarSXPImpl, ExprSXP, PrimVectorSXP, VecSXP {
  @Override
  Attributes attributes();

  /** Does the collection have exactly one element? */
  default boolean isScalar() {
    return size() == 1;
  }

  @Override
  VectorSXP<T> withAttributes(Attributes attributes);

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

final class VectorSXPs {
  static String toString(SEXP sexp, BaseStream<?, ?> data) {
    var dataString = new StringBuilder();
    var dataIter = data.iterator();
    while (dataIter.hasNext()) {
      dataString.append(dataIter.next());
      if (dataIter.hasNext()) {
        dataString.append(",");
        if (VECTOR_TRUNCATE_SIZE > 0 && dataString.length() >= VECTOR_TRUNCATE_SIZE) {
          dataString.append("...");
          break;
        }
      }
    }
    return SEXPs.toString(sexp, dataString);
  }

  private VectorSXPs() {}
}
