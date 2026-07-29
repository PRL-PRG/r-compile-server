package org.prlprg.fir.ir.argument;

import java.util.function.Function;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// An argument with an optional name.
public record NamedArgument(@Nullable NamedVariable name, Argument argument) {
  public NamedArgument(Argument argument) {
    this(null, argument);
  }

  public NamedArgument mapArgument(Function<Argument, Argument> transformer) {
    return new NamedArgument(name, transformer.apply(argument));
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (name != null) {
      p.print(name);
      w.write(" = ");
    }
    p.print(argument);
  }
}
