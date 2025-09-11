package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Assume that an argument equals a specific constant.
/// This is a no-op when evaluated, but is checked when reaching a checkpoint.
public record AssumeConstant(Argument target, Constant constant) implements Assume {
  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of(target, constant);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(target);
    p.writer().write(" =? ");
    p.print(constant);
  }
}
