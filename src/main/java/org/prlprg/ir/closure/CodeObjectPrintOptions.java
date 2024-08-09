package org.prlprg.ir.closure;

import org.prlprg.sexp.parseprint.HasSEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPPrintOptions;

public record CodeObjectPrintOptions(boolean printFullOrigin, SEXPPrintOptions sexp)
    implements HasCodeObjectPrintOptions, HasSEXPPrintContext {
  public static CodeObjectPrintOptions DEFAULT =
      new CodeObjectPrintOptions(false, SEXPPrintOptions.DEFAULT);
  public static CodeObjectPrintOptions FULL =
      new CodeObjectPrintOptions(true, SEXPPrintOptions.FULL);

  @Override
  public CodeObjectPrintOptions codeObjectPrintOptions() {
    return this;
  }

  @Override
  public SEXPPrintContext sexpPrintContext() {
    return sexp.sexpPrintContext();
  }
}
