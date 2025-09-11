package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Destroys the last environment created by mkenv and sets rho to its parent.
/// Created when inlining a closure that has mkenv. If we later manage to defer
/// the mkenv until the popenv, we elide both.
public record PopEnv() implements Expression {
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
    p.writer().write("popenv");
  }
}
