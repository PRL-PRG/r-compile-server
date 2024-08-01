package org.prlprg.sexp;

public sealed interface NumericSXP<T> extends NumericOrLogicalSXP<T> permits IntSXP, RealSXP, ComplexSXP {}
