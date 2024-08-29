package org.prlprg.sexp;

public sealed interface NumericOrLogicalSXP<T> extends PrimVectorSXP<T> permits NumericSXP, LglSXP {
  int asInt(int index);

  double asReal(int index);
}
