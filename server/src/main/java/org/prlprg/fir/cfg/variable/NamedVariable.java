package org.prlprg.fir.cfg.variable;

import org.jetbrains.annotations.NotNull;

public record NamedVariable(@Override String name) implements Variable {
  public NamedVariable {
    if (name.startsWith("r")) {
      throw new IllegalArgumentException("Named variable must not start with 'r': " + name);
    }
  }

  @Override
  public @NotNull String toString() {
    return name;
  }
}
