package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record SubscriptLoad(Argument target, Argument index) implements Expression {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(target);
    p.writer().write("[");
    p.print(index);
    p.writer().write("]");
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of(target, index);
  }
}
