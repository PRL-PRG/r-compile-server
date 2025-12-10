package org.prlprg.gen2c;

import java.util.Objects;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Either;

// we do not persist the performance counters
public record EvalOutput(
    Either<SEXP, String> returnValue, String outputLog, PerformanceCounters pc) {
  public boolean success() {
    return returnValue.isLeft();
  }

  /// Ignore `pc` in comparison
  @Override
  public boolean equals(Object o) {
    if (!(o instanceof EvalOutput that)) {
      return false;
    }
    return Objects.equals(returnValue, that.returnValue)
        && Objects.equals(outputLog, that.outputLog);
  }

  /// Ignore `pc` in comparison
  @Override
  public int hashCode() {
    return Objects.hash(outputLog, returnValue);
  }
}
