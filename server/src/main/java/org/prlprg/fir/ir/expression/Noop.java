package org.prlprg.fir.ir.expression;

/// An elided expression. It does nothing and assigning it is an error. It's an optimization for
/// the optimizer that preserves statement indices for active optimizations and analyses, and is
/// removed in the final [`CFG`][org.prlprg.fir.ir.cfg.CFG].
public record Noop() implements Expression {}
