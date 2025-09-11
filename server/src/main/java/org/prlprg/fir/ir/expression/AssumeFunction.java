package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Assume that an argument is a closure of the specific function and a global environment.
public record AssumeFunction(Argument target, Function function) implements Assume {
  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of(target);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(target);
    p.writer().write(" -? ");
    p.writer().write(function.name());
  }
}
