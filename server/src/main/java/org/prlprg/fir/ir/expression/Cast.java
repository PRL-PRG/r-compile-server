package org.prlprg.fir.ir.expression;

import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.type.Repr;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Cast an expression to a different type.
public record Cast(Argument target, Type type) implements Expression {
  public Cast {
    if (type.kind().repr() != Repr.SEXP) {
      throw new IllegalArgumentException("never cast non-SEXP type:\n" + target + " as " + type);
    }
  }

  @Override
  public @Unmodifiable List<Argument> arguments() {
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
