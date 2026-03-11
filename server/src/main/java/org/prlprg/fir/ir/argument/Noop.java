package org.prlprg.fir.ir.argument;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// An elided argument. It's an error in any statement except [`Statement#NOOP`][
/// org.prlprg.fir.ir.instruction.Statement#NOOP], which does nothing. It's an optimization for
/// the optimizer that preserves statement indices for active optimizations and analyses, and is
/// removed in the final [`CFG`][org.prlprg.fir.ir.cfg.CFG].
public record Noop() implements Argument {
  @Override
  public @Nullable Register variable() {
    return null;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write("noop");
  }
}
