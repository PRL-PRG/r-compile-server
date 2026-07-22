package org.prlprg.fir.ir.expression;

import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Type;

/// A lazily-evaluated promise. Contributes no arguments at its own level: the values it uses are
/// the arguments of the instructions inside its nested [#code], which track their own uses.
public record Promise(Type valueType, Effects effects, CFG code, boolean local)
    implements Expression {}
