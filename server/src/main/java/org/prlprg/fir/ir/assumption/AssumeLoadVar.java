package org.prlprg.fir.ir.assumption;

import java.util.List;
import org.jetbrains.annotations.Unmodifiable;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Assume that a variable lookup of [#variable] yields [#constant]
///
/// Effectively combines `ld` with [AssumeConstant]
public record AssumeLoadVar(NamedVariable variable, Value constant) implements Assumption {
  @Override
  public @Nullable Argument target() {
    return null;
  }

  @Override
  public @Unmodifiable List<Argument> arguments() {
    return List.of();
  }

  @Override
  public Assumption mapArguments(java.util.function.Function<Argument, Argument> transformer) {
    return this;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();
    w.write("ld ");
    p.print(variable);
    w.write(" ?= ");
    p.print(constant);
  }
}
