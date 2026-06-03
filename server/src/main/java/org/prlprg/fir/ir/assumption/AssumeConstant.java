package org.prlprg.fir.ir.assumption;

import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Assume that an argument equals a specific constant.
/// This is a no-op when evaluated, but is checked when reaching a checkpoint.
public record AssumeConstant(@Override Argument target, Value constant) implements Assumption {
  @Override
  public @Unmodifiable List<Argument> arguments() {
    return List.of(target);
  }

  @Override
  public Assumption mapArguments(Function<Argument, Argument> transformer) {
    return new AssumeConstant(transformer.apply(target), constant);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(target);
    p.writer().write(" ?= ");
    p.print(constant);
  }
}
