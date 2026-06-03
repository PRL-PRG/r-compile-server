package org.prlprg.fir.ir.expression;

import java.util.List;
import java.util.function.Function;
import javax.annotation.concurrent.Immutable;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.assumption.Assumption;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// These are no-ops when evaluated, but *checked* when reaching a checkpoint: at the checkpoint,
/// if any assumptions in the normal successor fail their check, control diverts into the deopt
/// successor.
@Immutable
public record Assume(Assumption assumption) implements Expression {
  @Override
  public @Unmodifiable List<Argument> arguments() {
    return assumption.arguments();
  }

  @Override
  public Expression mapArguments(Function<Argument, Argument> transformer) {
    return new Assume(assumption.mapArguments(transformer));
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(assumption);
  }
}
