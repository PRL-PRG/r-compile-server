package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Creates a closure environment.
/// Every closure compiled from GNU-R bytecode starts with mkenv, because
/// every GNU-R call implicitly creates an environment, but we may delay or
/// elide it if we remove stores and disprove reflection.
public record MkEnv() implements Expression {
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
    p.writer().write("mkenv");
  }
}
