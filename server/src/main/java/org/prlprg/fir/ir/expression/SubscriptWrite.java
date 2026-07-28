package org.prlprg.fir.ir.expression;

/// Write an element into a vector. Arguments are `[target, index, value]`.
public record SubscriptWrite() implements Expression {}
