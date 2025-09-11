package org.prlprg.fir.ir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Checks all assumptions in `success` and jumps to it if all pass, otherwise to `deopt`.
public record Checkpoint(Target success, Target deopt) implements Jump {
  @Override
  public @UnmodifiableView Collection<Target> targets() {
    return List.of(success, deopt);
  }

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
    var w = p.writer();
    w.write("check ");
    p.print(success);
    w.write(" else ");
    p.print(deopt);
  }
}
