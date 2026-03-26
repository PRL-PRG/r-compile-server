package org.prlprg.fir.ir.instruction;

import com.google.common.collect.ImmutableList;
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

/// Deoptimize to GNU-R bytecode.
/// @param pc the GNU-R bytecode position to deoptimize to.
/// @param stack the stack to restore when deoptimizing.
public record Deopt(Comments comments, int pc, ImmutableList<Argument> stack) implements Jump {
  public Deopt(int pc, List<Argument> stack) {
    this(new Comments(), pc, ImmutableList.copyOf(stack));
  }

  @Override
  public @UnmodifiableView Collection<Target> targets() {
    return List.of();
  }

  @Override
  public @UnmodifiableView Collection<BB> targetBBs() {
    return List.of();
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return stack;
  }

  @Override
  public Jump mapArguments(Function<Argument, Argument> transformer) {
    return new Deopt(
        comments, pc, stack.stream().map(transformer).collect(ImmutableList.toImmutableList()));
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    p.print(comments);
    w.write("deopt ");
    w.write(String.valueOf(pc));
    w.write(" ");
    p.printAsList("[", "]", stack);
  }
}
