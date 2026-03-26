package org.prlprg.fir.ir.assumption;

import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.FunctionRef;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Assume that an argument is a closure of the specific function and a global environment.
public record AssumeFunction(Argument target, FunctionRef functionRef) implements Assumption {
  public AssumeFunction(Argument target, Function function) {
    this(target, new FunctionRef(function));
  }

  public Function function() {
    return functionRef.get();
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of(target);
  }

  @Override
  public Assumption mapArguments(java.util.function.Function<Argument, Argument> transformer) {
    return new AssumeFunction(transformer.apply(target), functionRef);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(target);
    p.writer().write(" ?- ");
    p.print(function().name());
  }
}
