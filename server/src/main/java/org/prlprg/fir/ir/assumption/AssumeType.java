package org.prlprg.fir.ir.assumption;

import java.util.Collection;
import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.type.Repr;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Assume that an argument has a certain type.
public record AssumeType(@Override Argument target, Type type) implements Assumption {
  public AssumeType {
    if (type.kind().repr() != Repr.SEXP) {
      throw new IllegalArgumentException("never assume non-SEXP type:\n" + target + " :? " + type);
    }
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of(target);
  }

  @Override
  public Assumption mapArguments(Function<Argument, Argument> transformer) {
    return new AssumeType(transformer.apply(target), type);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(target);
    p.writer().write(" ?: ");
    p.print(type);
  }
}
