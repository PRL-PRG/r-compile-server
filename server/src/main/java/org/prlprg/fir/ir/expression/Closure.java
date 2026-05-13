package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.FunctionRef;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Closure(boolean isStatic, FunctionRef codeRef) implements Expression {
  public Closure(boolean isStatic, Function code) {
    this(isStatic, new FunctionRef(code));
  }

  public Function code() {
    return codeRef.get();
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of();
  }

  @Override
  public Expression mapArguments(java.util.function.Function<Argument, Argument> transformer) {
    return this;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("clos");
    if (isStatic) {
      w.write("-static");
    }
    w.write(' ');
    p.print(code().name());
  }
}
