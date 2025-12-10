package org.prlprg.gen2c;

import java.util.Objects;
import org.prlprg.sexp.SEXP;

// we do not persist the performance counters
public record EvalOutput(SEXP returnValue, String outputLog, PerformanceCounters pc) {
  /// Ignore `pc` in comparison
  @Override
  public boolean equals(Object o) {
    if (!(o instanceof EvalOutput that)) {
      return false;
    }
    return Objects.equals(outputLog, that.outputLog)
        && Objects.equals(returnValue, that.returnValue);
  }

  /// Ignore `pc` in comparison
  @Override
  public int hashCode() {
    return Objects.hash(returnValue, outputLog);
  }
}
