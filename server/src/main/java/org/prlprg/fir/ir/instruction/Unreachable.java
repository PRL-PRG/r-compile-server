package org.prlprg.fir.ir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Unreachable() implements Jump {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write("...");
  }

  @Override
  public @UnmodifiableView Collection<Target> targets() {
    return List.of();
  }

  @Override
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return List.of();
  }

  @Override
  public @UnmodifiableView Collection<Variable> immediateVariables() {
    return List.of();
  }
}
