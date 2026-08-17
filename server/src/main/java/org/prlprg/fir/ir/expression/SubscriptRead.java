package org.prlprg.fir.ir.expression;

/// Read an element from a vector. Arguments are `[target, index]`.
///
/// `outOfRangeIsNa` is R's distinction between its two subscripts, and decides whether this can
/// fail:
/// - `true` (printed `x[i]`, from `[`): an index outside the vector reads as `NA`, so this can't
///   fail and is pure.
/// - `false` (printed `x[[i]]`, from `[[`): an index outside the vector is an error, so this is
///   impure.
public record SubscriptRead(boolean outOfRangeIsNa) implements Expression {}
