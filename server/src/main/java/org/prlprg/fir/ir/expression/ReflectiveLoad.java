package org.prlprg.fir.ir.expression;

import org.prlprg.fir.ir.variable.NamedVariable;

/// Reflectively load [#variable] from the environment of the promise argument.
public record ReflectiveLoad(NamedVariable variable) implements Expression {}
