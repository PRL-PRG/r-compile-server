package org.prlprg.fir.ir.expression;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.sexp.SEXP;

/// A lazily-evaluated promise. Contributes no arguments at its own level: the values it uses are
/// the arguments of the instructions inside its nested [#code], which track their own uses.
///
/// `local` marks a promise that has been speculated to *not escape* (outlive the stack frame it's
/// created in). If a local promise does escape and is forced afterwards, it crashes at runtime. A
/// local promise prints as `prom-<...>{ ... }`; a regular (non-local) one prints as
/// `prom<...>{ ... }`.
///
/// `expr` is the R source expression of the promise (what `substitute` and the other readers of
/// `PREXPR` see), or `null` when it is unknown. It prints in brackets after the type:
/// `prom<...>[<lang f(x)>]{ ... }`.
public record Promise(Type valueType, Effects effects, CFG code, boolean local, @Nullable SEXP expr)
    implements Expression {
  /// Creates a non-local (regular) promise without a source expression.
  public Promise(Type valueType, Effects effects, CFG code) {
    this(valueType, effects, code, false, null);
  }

  /// Creates a promise without a source expression.
  public Promise(Type valueType, Effects effects, CFG code, boolean local) {
    this(valueType, effects, code, local, null);
  }

  /// If this promise has no source expression and its body only returns a register defined
  /// outside it, that register. The promise then wraps a known value, so the backends create it
  /// already evaluated, with the value as its expression (like the argument promises of
  /// `do.call`).
  public @Nullable Register wrappedValue() {
    if (expr != null || code.bbs().size() != 1) {
      return null;
    }
    var entry = code.entry();
    if (!entry.statements().isEmpty()
        || !(entry.jump().expression() instanceof Return)
        || entry.jump().args().size() != 1
        || !(entry.jump().args().getFirst() instanceof Read(var reg))) {
      return null;
    }
    return reg;
  }
}
