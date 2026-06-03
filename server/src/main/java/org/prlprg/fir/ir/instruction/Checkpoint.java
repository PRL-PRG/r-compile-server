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

/// Checks all assumptions in `success` and jumps to it if all pass, otherwise to `deopt`.
public record Checkpoint(Comments comments, Target success, Target deopt) implements Jump {
  public Checkpoint(Target success, Target deopt) {
    this(new Comments(), success, deopt);
  }

  @Override
  public @UnmodifiableView List<Target> targets() {
    return List.of(success, deopt);
  }

  @Override
  public @UnmodifiableView List<BB> targetBBs() {
    return success.bb() == deopt.bb() ? List.of(success.bb()) : List.of(success.bb(), deopt.bb());
  }

  @Override
  public @Unmodifiable List<Argument> arguments() {
    return List.of();
  }

  @Override
  public Jump mapArguments(Function<Argument, Argument> transformer) {
    return new Checkpoint(
        comments, success.mapArguments(transformer), deopt.mapArguments(transformer));
  }

  @Override
  public Jump mapTargets(Function<Target, Target> transformer) {
    return new Checkpoint(comments, transformer.apply(success), transformer.apply(deopt));
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    p.print(comments);
    w.write("check ");
    p.print(success);
    w.write(" else ");
    p.print(deopt);
  }
}
