package org.prlprg.snapshot.gen2c;

import java.util.Objects;
import java.util.regex.Pattern;
import org.jspecify.annotations.Nullable;
import org.prlprg.examples.SexpResult;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

// we do not persist the performance counters
public record EvalOutput(
    SexpResult result,
    String outputLog,
    @Nullable MockModuleFeedback feedback,
    PerformanceCounters pc) {
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

  /// The scratch files [org.prlprg.session.gnur.GNUR#capturingEval] hands to R get a fresh random
  /// name every call, and R quotes the one it's sourcing back in top-level error messages. Two
  /// runs of the same example are then textually different for no behavioral reason.
  private static final Pattern TEMP_FILE =
      Pattern.compile("[^\\s\"']*RCS-(?:test|input)\\d+\\.(?:R|rds)");

  /// The call R names in `Error in <call> : ...` / `Warning in <call> : ...`.
  ///
  /// [Pattern#DOTALL] because a deparsed call can span lines, and the match runs through the
  /// ` : ` separator and any wrapping after it: R breaks the message onto its own indented line
  /// when the call is long, so how it wraps depends on the call too.
  private static final Pattern DIAGNOSTIC_CALL =
      Pattern.compile("^(Error|Warning) in .*? :\\s*", Pattern.MULTILINE | Pattern.DOTALL);

  /// The `Calls: a -> b -> c` traceback R prints under a top-level error.
  private static final Pattern DIAGNOSTIC_CALLS = Pattern.compile("^Calls: .*$", Pattern.MULTILINE);

  public String outputLogWithoutAddresses() {
    return Pattern.compile("0x[0-9a-fA-F]+", Pattern.MULTILINE)
        .matcher(withoutTempFiles())
        .replaceAll("0x...");
  }

  public String behaviorOutputLog() {
    return Pattern.compile("(\\n|^)[>*+#?].*$", Pattern.MULTILINE)
        .matcher(withoutTempFiles())
        .replaceAll("");
  }

  /// [#behaviorOutputLog()] without the calls R names in its diagnostics.
  ///
  /// For comparing two *different compilations* of the same program: R deparses the innermost
  /// call into every error and warning, and prints the call stack under a top-level error, and
  /// optimization deliberately changes both -- inlining reports `main()` where the baseline
  /// reports `f(1)`, calling a primitive directly reports `.Primitive("acos")(x = 42)` where the
  /// baseline reports `atanh(x)`. The message itself, and everything the program actually
  /// printed, still has to match.
  public String behaviorOutputLogWithoutCalls() {
    var withoutCall = DIAGNOSTIC_CALL.matcher(behaviorOutputLog()).replaceAll("$1 in <call> : ");
    return DIAGNOSTIC_CALLS.matcher(withoutCall).replaceAll("Calls: <stack>");
  }

  private String withoutTempFiles() {
    return TEMP_FILE.matcher(outputLog).replaceAll("<temp-file>");
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
    if (feedback != null) {
      w.write("\n---\n");
      p.print(feedback);
    }
  }
}
