package org.prlprg.fir.ir.instruction;

import java.util.Collection;
import java.util.List;
import java.util.Set;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Goto(Target target) implements Jump {
  @Override
  public @UnmodifiableView Collection<Target> targets() {
    return List.of(target);
  }

  @Override
  public @UnmodifiableView Set<BB> targetBBs() {
    return Set.of(target.bb());
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return target.phiArgs();
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write("goto ");
    p.print(target);
  }
}
