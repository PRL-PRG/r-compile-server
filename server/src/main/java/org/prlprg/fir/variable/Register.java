package org.prlprg.fir.variable;

import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record Register(@Override String name) implements Variable {
  public Register {
    if (!name.startsWith("r")) {
      throw new IllegalArgumentException("Register must start with 'r': " + name);
    }
  }

  @Override
  public String toString() {
    return name;
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write(name);
  }
}
