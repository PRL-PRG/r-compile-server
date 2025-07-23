package org.prlprg.fir.callee;

import javax.annotation.Nullable;
import org.prlprg.fir.module.Function;
import org.prlprg.fir.type.Signature;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record DispatchCallee(Function function, @Nullable Signature signature) implements Callee {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write(function.name());
    if (signature != null) {
      w.write('<');
      p.print(signature);
      w.write('>');
    }
  }
}
