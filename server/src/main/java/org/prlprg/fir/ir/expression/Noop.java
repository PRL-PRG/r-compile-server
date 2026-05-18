package org.prlprg.fir.ir.expression;

import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// An elided expression. It does nothing and assigning it is an error. It's an optimization for
/// the optimizer that preserves statement indices for active optimizations and analyses, and is
/// removed in the final [`CFG`][org.prlprg.fir.ir.cfg.CFG].
public record Noop() implements Expression {
  @Override
  public @Unmodifiable List<Argument> arguments() {
    return List.of();
  }

  @Override
  public Expression mapArguments(Function<Argument, Argument> transformer) {
    return this;
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
