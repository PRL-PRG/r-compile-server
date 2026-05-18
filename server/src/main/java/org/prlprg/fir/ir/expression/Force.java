package org.prlprg.fir.ir.expression;

import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Force(boolean isMaybe, Argument value) implements Expression {
  @Override
  public @Unmodifiable List<Argument> arguments() {
    return List.of(value);
  }

  @Override
  public Expression mapArguments(Function<Argument, Argument> transformer) {
    return new Force(isMaybe, transformer.apply(value));
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write(isMaybe ? "force? " : "force ");
    p.print(value);
  }
}
