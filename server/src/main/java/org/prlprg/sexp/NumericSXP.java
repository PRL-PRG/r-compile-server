package org.prlprg.sexp;

public sealed interface NumericSXP<T extends Number> extends PrimVectorSXP<T>
    permits IntSXP, RealSXP {
  int asInt(int index);

  double asReal(int index);
}
