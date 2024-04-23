package org.prlprg.sexp;

public sealed interface NumericSXP<T extends Number> extends VectorSXP<T> permits IntSXP, RealSXP {
  int[] asInts();

  int asInt();

  double[] asReals();

  double asReal();
}
