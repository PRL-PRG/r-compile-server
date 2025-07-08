package org.prlprg.fir.callee;

import org.prlprg.fir.cfg.Abstraction;
import org.prlprg.fir.module.Function;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record StaticCallee(Function function, Abstraction version) implements Callee {
  public StaticCallee {
    if (!function.versions().contains(version)) {
      throw new IllegalArgumentException(
          "Function does not contain the specified version: " + version);
    }
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write(function.name());
    w.write('.');
    p.print(function.indexOfVersion(version));
  }
}
