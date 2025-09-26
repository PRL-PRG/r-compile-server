package org.prlprg.fir.opt;

import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;

/// An optimization that runs on an [Abstraction].
public interface AbstractionOptimization extends Optimization {
  @Override
  default void run(Function function) {
    for (var version : function.versions()) {
      run(version);
    }
  }

  /// Returns `true` if it made progress.
  boolean run(Abstraction abstraction);
}
