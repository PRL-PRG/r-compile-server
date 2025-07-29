package org.prlprg.fir.ir.expression;

import com.google.common.collect.ImmutableList;
import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.callee.Callee;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public final class Call implements Expression {
  private @Nullable Callee callee;
  private final ImmutableList<Argument> arguments;

  public Call(Callee callee, ImmutableList<Argument> arguments) {
    this.callee = callee;
    this.arguments = arguments;
  }

  /// Only called when parsing, since the callee may be in a function that's parsed later, and we
  /// represent it via direct reference.
  void unsafeSetCallee(Callee callee) {
    if (this.callee != null) {
      throw new IllegalStateException("Callee is already set: " + this.callee);
    }
    this.callee = callee;
  }

  public Callee callee() {
    return Objects.requireNonNull(callee, "callee was deferred and not set");
  }

  /// Call arguments, also happens to be [Expression#arguments()] which is every [Argument]
  /// in the expression (since the callee never contains an [Argument]).
  @Override
  public ImmutableList<Argument> arguments() {
    return arguments;
  }

  @Override
  public boolean equals(Object obj) {
    if (obj == this) {
      return true;
    }
    if (obj == null || obj.getClass() != this.getClass()) {
      return false;
    }
    var that = (Call) obj;
    return Objects.equals(this.callee, that.callee)
        && Objects.equals(this.arguments, that.arguments);
  }

  @Override
  public int hashCode() {
    return Objects.hash(callee, arguments);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(callee());
    p.printAsList("(", ")", arguments);
  }
}
