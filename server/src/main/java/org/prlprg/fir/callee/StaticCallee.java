package org.prlprg.fir.callee;

import org.prlprg.fir.cfg.Abstraction;
import org.prlprg.fir.module.Function;

public record StaticCallee(Function function, Abstraction version) implements Callee {
  public StaticCallee {
    if (!function.versions().contains(version)) {
      throw new IllegalArgumentException(
          "Function does not contain the specified version: " + version);
    }
  }

  @Override
  public String toString() {
    return function.name() + "." + function.indexOfVersion(version);
  }
}
