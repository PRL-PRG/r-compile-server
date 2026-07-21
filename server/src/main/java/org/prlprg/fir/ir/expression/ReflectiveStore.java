package org.prlprg.fir.ir.expression;

import org.prlprg.fir.ir.variable.NamedVariable;

/// Reflectively store the value argument into [#variable] of the promise argument's environment.
/// Arguments are `[promise, value]`.
public record ReflectiveStore(NamedVariable variable) implements Expression {}
