package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Dup(Argument value) implements Expression {
  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of(value);
  }

  @Override
  public Expression mapArguments(Function<Argument, Argument> transformer) {
    return new Dup(transformer.apply(value));
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write("dup ");
    p.print(value);
  }
}
