package org.prlprg.sexp;

/** SEXP vector of a single data type. */
public sealed interface PrimVectorSXP<T> extends VectorSXP<T>
    permits ComplexSXP, NumericSXP, LglSXP, StrSXP {
  /** Is one of the elements NA or (for reals) NaN? */
  boolean hasNaOrNaN();

  @Override
  PrimVectorSXP<T> withAttributes(Attributes attributes);
}
