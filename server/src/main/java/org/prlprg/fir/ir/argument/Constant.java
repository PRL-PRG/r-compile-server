package org.prlprg.fir.ir.argument;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXP;

/// Argument that is a constant.
///
/// Any {@link SEXP} that is not a non-static environment can be a constant, since it will be
/// compiled to a constant pool entry if it's not a static (e.g. static environment).
public record Constant(Value value) implements Argument {
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
}
