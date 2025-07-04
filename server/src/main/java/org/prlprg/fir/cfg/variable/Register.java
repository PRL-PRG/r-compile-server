package org.prlprg.fir.cfg.variable;

import org.jetbrains.annotations.NotNull;

public record Register(@Override String name) implements Variable {
  public Register {
    if (!name.startsWith("r")) {
      throw new IllegalArgumentException("Register must start with 'r': " + name);
    }
  }

  @Override
  public @NotNull String toString() {
    return name;
  }
}
