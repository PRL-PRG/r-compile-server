package org.prlprg.fir.variable;

import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public record NamedVariable(@Override String name) implements Variable {
  public NamedVariable {
    if (name.startsWith("r")) {
      throw new IllegalArgumentException("Named variable must not start with 'r': " + name);
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
