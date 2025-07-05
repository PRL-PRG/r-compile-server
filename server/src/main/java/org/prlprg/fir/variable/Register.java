package org.prlprg.fir.variable;

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
}
