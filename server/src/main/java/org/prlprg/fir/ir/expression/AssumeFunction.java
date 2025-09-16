package org.prlprg.fir.ir.expression;

import java.util.Collection;
import java.util.List;
import java.util.Objects;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Assume that an argument is a closure of the specific function and a global environment.
public final class AssumeFunction implements Assume {
  private final Argument target;
  private @Nullable Function function;

  public AssumeFunction(Argument target, Function function) {
    this.target = target;
    this.function = function;
  }

  void unsafeSetFunction(Function function) {
    if (this.function != null) {
      throw new IllegalStateException("Function is already set: " + this.function);
    }
    this.function = function;
  }

  public Argument target() {
    return target;
  }

  public Function function() {
    return Objects.requireNonNull(function, "function was deferred and not set");
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of(target);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(target);
    p.writer().write(" ?- ");
    p.writer().write(function().name());
  }

  @Override
  public boolean equals(Object obj) {
    if (obj == this) {
      return true;
    }
    if (obj == null || obj.getClass() != this.getClass()) {
      return false;
    }
    var that = (AssumeFunction) obj;
    return Objects.equals(this.target, that.target) && Objects.equals(this.function, that.function);
  }

  @Override
  public int hashCode() {
    return Objects.hash(target, function);
  }
}
