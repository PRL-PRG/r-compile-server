package org.prlprg.sexp;

public sealed interface NumericSXP<T> extends PrimVectorSXP<T> permits IntSXP, RealSXP, ComplexSXP {
  int asInt(int index);

  double asReal(int index);
}
