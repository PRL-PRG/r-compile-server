package org.prlprg.fir.ir.instruction;

import com.google.common.collect.ImmutableList;
import java.util.Collection;
import java.util.List;
import java.util.Objects;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.callee.Callee;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public final class Call implements Expression {
  private @Nullable Callee callee;
  private final ImmutableList<Expression> arguments;

  public Call(Callee callee, ImmutableList<Expression> arguments) {
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

  @Override
  public @UnmodifiableView Collection<Expression> immediateChildren() {
    return arguments;
  }

  @Override
  public @UnmodifiableView Collection<Variable> immediateVariables() {
    return (callee instanceof DynamicCallee(var variable, var _)) ? List.of(variable) : List.of();
  }

  public Callee callee() {
    return Objects.requireNonNull(callee, "callee was deferred and not set");
  }

  public ImmutableList<Expression> arguments() {
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
