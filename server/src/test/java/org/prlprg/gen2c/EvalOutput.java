package org.prlprg.gen2c;

import java.util.Objects;
import java.util.regex.Pattern;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
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
        && Objects.equals(behaviorOutputLog(), that.behaviorOutputLog());
  }

  /// Ignore `pc` in comparison
  @Override
  public int hashCode() {
    return Objects.hash(returnValue, behaviorOutputLog());
  }

  public String behaviorOutputLog() {
    return Pattern.compile("(\\n|^)[>*+#].*$", Pattern.MULTILINE).matcher(outputLog).replaceAll("");
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    returnValue.destruct(
        sexp -> {
          w.write("Return: ");
          p.print(sexp);
          return null;
        },
        err -> {
          w.write("Crash: ");
          w.write(err);
          return null;
        });

    w.write("\n---\n");

    w.write(outputLog);
  }
}
