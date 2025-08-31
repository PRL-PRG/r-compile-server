package org.prlprg.fir.opt;

import java.util.List;
import org.prlprg.fir.ir.module.Function;

/// Run the optimizations in order, then don't re-run.
public class Sequence implements Optimization {
  private final List<Optimization> subOptimizations;

  public Sequence(Optimization... subOptimizations) {
    this.subOptimizations = List.of(subOptimizations);
  }

  @Override
  public void run(Function function) {
    for (var opt : subOptimizations) {
      opt.run(function);
    }
  }
}
