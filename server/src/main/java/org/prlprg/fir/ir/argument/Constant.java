package org.prlprg.fir.ir.argument;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.UserEnvSXP;

/// Argument that is a constant (or global, e.g. static environment)
public record Constant(Value value) implements Argument {
  public static final Constant ELIDED_CLOSURE =
      new Constant(
          new Value.Sexp(
              SEXPs.closure(SEXPs.NULL, SEXPs.symbol(".elidedClosure"), SEXPs.EMPTY_ENV)));

  public Constant {
    if (value instanceof Value.Sexp(var sexp) && sexp instanceof UserEnvSXP) {
      throw new IllegalArgumentException("Non-static environments can't be constants");
    }
  }

  public Constant(SEXP value) {
    this(new Value.Sexp(value));
  }

  @Override
  public @Nullable Register variable() {
    return null;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(value);
  }
}
