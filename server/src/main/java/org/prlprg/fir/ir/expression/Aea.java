package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// "Argument->Expression Adapter": an [Expression] that is just an [Argument].
///
/// Necessary for `r = 5`, `r1 = r2`, and `noop`.
public record Aea(Argument value) implements Expression {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(value);
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of(value);
  }
}
