package org.prlprg.fir.ir.instruction;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Deoptimize to GNU-R bytecode.
/// @param pc the GNU-R bytecode position to deoptimize to.
/// @param stack the stack to restore when deoptimizing.
public record Deopt(int pc, ImmutableList<Argument> stack) implements Jump {
  @Override
  public @UnmodifiableView Collection<Target> targets() {
    return List.of();
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return stack;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();
    w.write("deopt ");
    w.write(String.valueOf(pc));
    w.write(" ");
    p.printAsList("[", "]", stack);
  }
}
