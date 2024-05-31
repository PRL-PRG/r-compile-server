package org.prlprg.sexp;

public sealed interface NumericSXP<T extends Number> extends VectorSXP<T> permits IntSXP, RealSXP {
  int asInt(int index);

  double asReal(int index);
}
