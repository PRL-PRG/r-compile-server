package org.prlprg.fir.opt.specialize;

import org.prlprg.fir.ir.abstraction.Abstraction;

/// An optimization that replaces individual expressions with those that are faster and/or have
/// better types (see [org.prlprg.fir.opt.specialize]).
public interface SpecializeOptimization {
  /// If `false`, skips running the optimization on the abstraction.
  @SuppressWarnings("unused")
  default boolean shouldRun(Abstraction abstraction) {
    return true;
  }
}
