package org.prlprg.fir.ir.instruction;

import java.util.Collection;
import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Goto(Comments comments, Target target) implements Jump {
  public Goto(Target target) {
    this(new Comments(), target);
  }

  @Override
  public @UnmodifiableView Collection<Target> targets() {
    return List.of(target);
  }

  @Override
  public @UnmodifiableView Collection<BB> targetBBs() {
    return List.of(target.bb());
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return target.phiArgs();
  }

  @Override
  public Jump mapArguments(Function<Argument, Argument> transformer) {
    return new Goto(comments, target.mapArguments(transformer));
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(comments);
    p.writer().write("goto ");
    p.print(target);
  }
}
