package org.prlprg.sexp;

import java.util.stream.BaseStream;

/** SEXP vector (immutable list). */
public sealed interface VectorSXP<T> extends ListOrVectorSXP<T>
    permits ComplexSXP, EmptyVectorSXPImpl, ExprSXP, LglSXP, NumericSXP, StrSXP, VecSXP {
  @Override
  Attributes attributes();

  @Override
  VectorSXP<T> withAttributes(Attributes attributes);

  default boolean isScalar() {
    return size() == 1;
  }
}

final class VectorSXPs {
  static final int VECTOR_TRUNCATE_SIZE = 100;

  static String toString(SEXP sexp, BaseStream<?, ?> data) {
    var dataString = new StringBuilder();
    var dataIter = data.iterator();
    while (dataIter.hasNext()) {
      dataString.append(dataIter.next());
      if (dataIter.hasNext()) {
        dataString.append(",");
        //        if (dataString.length() >= VECTOR_TRUNCATE_SIZE) {
        //          dataString.append("...");
        //          break;
        //        }
      }
    }
    return SEXPs.toString(sexp, dataString);
  }

  private VectorSXPs() {}
}
