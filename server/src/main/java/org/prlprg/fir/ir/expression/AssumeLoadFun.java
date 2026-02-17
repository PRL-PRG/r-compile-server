package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import java.util.Objects;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Assume that a local function lookup of [#variable] doesn't encounter promises and yields
/// [#function].
///
/// Effectively combines [LoadFun] where `env` is [LoadFun.Env#LOCAL] with [AssumeFunction],
/// additionally assuming no promises are forced, to remove the reflection in [LoadFun]. When
/// checked, performs a function lookup of [#variable] that fails instead of forcing promises.
/// If the lookup succeeds, checks if the found function is [#function]. The deopt after
/// [AssumeLoadFun] is before the [LoadFun] it replaces.
public final class AssumeLoadFun implements Assume {
  private final NamedVariable variable;
  private @Nullable Function function;

  public AssumeLoadFun(NamedVariable variable, Function function) {
    this.variable = variable;
    this.function = function;
  }

  void unsafeSetFunction(Function function) {
    if (this.function != null) {
      throw new IllegalStateException("Function is already set: " + this.function);
    }
    this.function = function;
  }

  public NamedVariable variable() {
    return variable;
  }

  public Function function() {
    return Objects.requireNonNull(function, "function was deferred and not set");
  }

  @Override
  public @Nullable Argument target() {
    return null;
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of();
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

  @Override
  public boolean equals(Object obj) {
    if (obj == this) {
      return true;
    }
    if (obj == null || obj.getClass() != this.getClass()) {
      return false;
    }
    var that = (AssumeLoadFun) obj;
    return Objects.equals(this.variable, that.variable)
        && Objects.equals(this.function, that.function);
  }

  @Override
  public int hashCode() {
    return Objects.hash(variable, function);
  }
}
