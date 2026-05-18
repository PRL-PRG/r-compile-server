package org.prlprg.fir.ir.instruction;

import java.util.List;
import java.util.function.Function;
import org.jetbrains.annotations.Unmodifiable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Unreachable(Comments comments) implements Jump {
  public Unreachable() {
    this(new Comments());
  }

  @Override
  public @UnmodifiableView List<Target> targets() {
    return List.of();
  }

  @Override
  public @UnmodifiableView List<BB> targetBBs() {
    return List.of();
  }

  @Override
  public @Unmodifiable List<Argument> arguments() {
    return List.of();
  }

  @Override
  public Jump mapArguments(Function<Argument, Argument> transformer) {
    return this;
  }

  @Override
  public Jump mapTargets(Function<Target, Target> transformer) {
    return this;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(comments);
    p.writer().write("unreachable");
  }
}
