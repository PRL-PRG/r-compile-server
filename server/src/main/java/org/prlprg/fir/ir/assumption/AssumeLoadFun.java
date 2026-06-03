package org.prlprg.fir.ir.assumption;

import java.util.List;
import org.jetbrains.annotations.Unmodifiable;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.FunctionRef;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Assume that a local function lookup of [#variable] doesn't encounter promises and yields
/// [#function]
///
/// Effectively combines `ldf` with [AssumeFunction], additionally assuming no promises are
/// forced, to remove the reflection in `ldf`. When checked, performs a function lookup of
/// [#variable] that fails instead of forcing promises.
/// If the lookup succeeds, checks if the found function is [#function]. The deopt after
/// [AssumeLoadFun] is before the `ldf` it replaces.
public record AssumeLoadFun(NamedVariable variable, FunctionRef functionRef) implements Assumption {
  public AssumeLoadFun(NamedVariable variable, Function function) {
    this(variable, new FunctionRef(function));
  }

  public Function function() {
    return functionRef.get();
  }

  @Override
  public @Nullable Argument target() {
    return null;
  }

  @Override
  public @Unmodifiable List<Argument> arguments() {
    return List.of();
  }

  @Override
  public Assumption mapArguments(java.util.function.Function<Argument, Argument> transformer) {
    return this;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();
    w.write("ldf ");
    p.print(variable);
    w.write(" ?- ");
    p.print(function().name());
  }
}
