package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// An elided expression. It does nothing and assigning it is an error. It's an optimization for
/// the optimizer that preserves statement indices for active optimizations and analyses, and is
/// removed in the final [`CFG`][org.prlprg.fir.ir.cfg.CFG].
public record Noop() implements Expression {
  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of();
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
