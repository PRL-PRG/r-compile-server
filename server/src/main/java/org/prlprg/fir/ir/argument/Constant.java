package org.prlprg.fir.ir.argument;

import javax.annotation.Nullable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.sexp.parseprint.SEXPPrintOptions;

/// Argument that is a constant.
///
/// Any {@link SEXP} that is not a non-static environment can be a constant, since it will be
/// compiled to a constant pool entry if it's not a static (e.g. static environment).
public record Constant(SEXP sexp) implements Argument {
  public Constant {
    if (sexp instanceof UserEnvSXP) {
      throw new IllegalArgumentException("Non-static environments can't be constants");
    }
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
    p.withContext(SEXPPrintOptions.FULL_DELIMITED).print(sexp);
  }
}
