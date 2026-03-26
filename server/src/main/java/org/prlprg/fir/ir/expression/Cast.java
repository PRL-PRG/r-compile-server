package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Cast an expression to a different type.
public record Cast(Argument target, Type type) implements Expression {
  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of(target);
  }

  @Override
  public Expression mapArguments(Function<Argument, Argument> transformer) {
    return new Cast(transformer.apply(target), type);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(target);
    p.writer().write(" as ");
    p.print(type);
  }
}
