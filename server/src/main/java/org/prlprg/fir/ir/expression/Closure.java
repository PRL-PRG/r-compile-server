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

public final class Closure implements Expression {
  private @Nullable Function code;

  public Closure(Function code) {
    this.code = code;
  }

  /// Only called when parsing, since the function parsed later, and we represent it via direct
  /// reference.
  void unsafeSetCode(Function code) {
    if (this.code != null) {
      throw new IllegalStateException("Callee is already set: " + this.code);
    }
    this.code = code;
  }

  @Override
  public @UnmodifiableView Collection<Argument> arguments() {
    return List.of();
  }

  public Function code() {
    return Objects.requireNonNull(code, "code was deferred and not set");
  }

  @Override
  public boolean equals(Object obj) {
    if (obj == this) {
      return true;
    }
    if (obj == null || obj.getClass() != this.getClass()) {
      return false;
    }
    var that = (Closure) obj;
    return Objects.equals(this.code, that.code);
  }

  @Override
  public int hashCode() {
    return Objects.hash(code);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("clos ");
    p.print(code().name());
  }
}
