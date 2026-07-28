package org.prlprg.fir.ir.argument;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.instruction.Use;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/// Argument that is a constant (or global, e.g. static environment)
public record Constant(Value value) implements Argument {
  public static final Constant ELIDED_CLOSURE =
      new Constant(
          new Value.Sexp(
              SEXPs.closure(SEXPs.NULL, SEXPs.symbol(".elidedClosure"), SEXPs.EMPTY_ENV)));

  public Constant(SEXP value) {
    this(new Value.Sexp(value));
  }

  @Override
  public @Nullable Register variable() {
    return null;
  }

  @Override
  public void addUse(Use use) {
    // A constant has no register, so it is never a use.
  }

  @Override
  public void removeUse(Use use) {
    // A constant has no register, so it is never a use.
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
