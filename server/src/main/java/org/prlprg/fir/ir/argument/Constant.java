package org.prlprg.fir.ir.argument;

import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXP;

/// Argument that is a constant.
///
/// Currently any {@link SEXP} can be in a constant, but we may want to make this more specific
/// (e.g. only scalars).
public record Constant(SEXP sexp) implements Argument {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(sexp);
  }
}
