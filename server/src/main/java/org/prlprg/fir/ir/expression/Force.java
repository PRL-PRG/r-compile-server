package org.prlprg.fir.ir.expression;

/// Force the promise argument. If [#isMaybe], a non-promise argument is returned unchanged.
public record Force(boolean isMaybe) implements Expression {}
