package org.prlprg.fir.ir.expression;

import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Creates a closure environment.
///
/// Every closure compiled from GNU-R bytecode starts with mkenv, because
/// every GNU-R call implicitly creates an environment, but we may delay or
/// elide it if we remove stores and disprove reflection.
public record MkEnv(MkEnvType type) implements Expression {
  public enum MkEnvType {
    REGULAR,
    NON_REFLECTIVE,
    ELIDED,
  }

  @Override
  public @Unmodifiable List<Argument> arguments() {
    return List.of();
  }

  @Override
  public Expression mapArguments(Function<Argument, Argument> transformer) {
    return this;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();
    w.write("mkenv");
    switch (type) {
      case REGULAR -> {}
      case NON_REFLECTIVE -> w.write('~');
      case ELIDED -> w.write('-');
    }
  }
}
