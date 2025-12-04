package org.prlprg.util.cc;

import java.util.Objects;
import org.prlprg.bc2c.PerformanceCounters;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.VecSXP;

// we do not persist the performance counters
public record EvalOutput(SEXP returnValue, String output, PerformanceCounters pc) {
  /// Ignore `pc` in comparison
  @Override
  public boolean equals(Object o) {
    if (!(o instanceof EvalOutput that)) {
      return false;
    }
    return Objects.equals(output, that.output) && Objects.equals(returnValue,
        that.returnValue);
  }

  /// Ignore `pc` in comparison
  @Override
  public int hashCode() {
    return Objects.hash(returnValue, output);
  }
}
