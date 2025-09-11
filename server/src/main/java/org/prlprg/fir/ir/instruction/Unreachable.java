package org.prlprg.fir.ir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Unreachable() implements Jump {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write("unreachable");
  }

  @Override
  public @UnmodifiableView Collection<Target> targets() {
    return List.of();
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of();
  }
}
