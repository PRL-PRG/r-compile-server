package org.prlprg.fir.ir.expression;

import java.util.Collection;
import javax.annotation.concurrent.Immutable;
import org.jetbrains.annotations.UnmodifiableView;
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
  public @UnmodifiableView Collection<Argument> arguments() {
    return assumption.arguments();
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
