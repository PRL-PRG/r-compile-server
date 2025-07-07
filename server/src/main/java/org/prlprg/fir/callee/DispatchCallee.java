package org.prlprg.fir.callee;

import org.jetbrains.annotations.Nullable;
import org.prlprg.fir.module.Function;
import org.prlprg.fir.type.Signature;

public record DispatchCallee(Function function, @Nullable Signature signature) implements Callee {
  @Override
  public String toString() {
    return function.name() + ".*< " + signature + " >";
  }
}
