package org.prlprg.fir.ir.assumption;

import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.NamedVariable;

/// Assume that a variable lookup of [#variable] yields [#constant] (has no argument).
///
/// Effectively combines `ld` with [AssumeConstant].
public record AssumeLoadVar(NamedVariable variable, Value constant) implements Assumption {}
