package org.prlprg.fir.ir.callee;

import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record DispatchCallee(@Override Function function, @Override @Nullable Signature signature)
    implements Callee {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    p.print(function.name());
    if (signature != null) {
      w.write("< ");
      p.print(signature);
      w.write(" >");
    }
  }
}
