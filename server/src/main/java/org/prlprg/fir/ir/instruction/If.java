package org.prlprg.fir.ir.instruction;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Lists;

public record If(Argument cond, Target ifTrue, Target ifFalse) implements Jump {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("if ");
    p.print(cond);
    w.write(" then ");
    p.print(ifTrue);
    w.write(" else ");
    p.print(ifFalse);
  }

  @Override
  public @UnmodifiableView Collection<Target> targets() {
    return List.of(ifTrue, ifFalse);
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return Lists.concatLazy(List.of(cond), ifTrue.phiArgs(), ifFalse.phiArgs());
  }
}
