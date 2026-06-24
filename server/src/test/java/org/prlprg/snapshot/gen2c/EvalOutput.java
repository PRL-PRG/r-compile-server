package org.prlprg.snapshot.gen2c;

import java.util.Objects;
import java.util.regex.Pattern;
import org.prlprg.examples.SexpResult;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

// we do not persist the performance counters
public record EvalOutput(
    SexpResult result, String outputLog, MockModuleFeedback feedback, PerformanceCounters pc) {
  /// Ignore `pc` in comparison
  @Override
  public boolean equals(Object o) {
    if (!(o instanceof EvalOutput that)) {
      return false;
    }
    return Objects.equals(result, that.result)
        && Objects.equals(behaviorOutputLog(), that.behaviorOutputLog())
        && Objects.equals(feedback, that.feedback);
  }

  /// Ignore `pc` in comparison
  @Override
  public int hashCode() {
    return Objects.hash(result, behaviorOutputLog(), feedback);
  }

  public String outputLogWithoutAddresses() {
    return Pattern.compile("0x[0-9a-fA-F]+", Pattern.MULTILINE)
        .matcher(outputLog)
        .replaceAll("0x...");
  }

  public String behaviorOutputLog() {
    return Pattern.compile("(\\n|^)[>*+#?].*$", Pattern.MULTILINE)
        .matcher(outputLog)
        .replaceAll("");
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    p.print(result);
    w.write("\n---\n");
    w.write(outputLog);
    w.write("\n---\n");
    p.print(feedback);
  }
}
