package org.prlprg.fir.variable;

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
}
