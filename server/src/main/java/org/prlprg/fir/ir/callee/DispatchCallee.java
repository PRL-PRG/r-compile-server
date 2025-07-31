package org.prlprg.fir.ir.callee;

import javax.annotation.Nullable;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Strings;

public record DispatchCallee(Function function, @Nullable Signature signature) implements Callee {
  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (Strings.isIdentifierOrKeyword(function.name())) {
      w.write(function.name());
    } else {
      w.writeQuoted('`', function.name());
    }
    if (signature != null) {
      w.write('<');
      p.print(signature);
      w.write('>');
    }
  }
}
