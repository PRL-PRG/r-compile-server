package org.prlprg.fir.ir.expression;

import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Type;

/// A lazily-evaluated promise. Contributes no arguments at its own level: the values it uses are
/// the arguments of the instructions inside its nested [#code], which track their own uses.
///
/// `local` marks a promise that has been speculated to *not escape* (outlive the stack frame it's
/// created in). If a local promise does escape and is forced afterwards, it crashes at runtime. A
/// local promise prints as `prom-<...>{ ... }`; a regular (non-local) one prints as
/// `prom<...>{ ... }`.
public record Promise(Type valueType, Effects effects, CFG code, boolean local)
    implements Expression {
  /// Creates a non-local (regular) promise.
  public Promise(Type valueType, Effects effects, CFG code) {
    this(valueType, effects, code, false);
  }
}
