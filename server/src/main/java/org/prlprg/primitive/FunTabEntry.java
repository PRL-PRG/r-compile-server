package org.prlprg.primitive;

/// An entry of GNU-R's `R_FunTab`. `isInternal`: R code calls it via `.Internal`, not as a
// primitive.
public record FunTabEntry(int index, int arity, boolean isSpecial, boolean isInternal) {}
