package org.prlprg.session.gnur;

import java.io.IOException;
import java.time.Duration;
import org.jspecify.annotations.Nullable;

public class EvalException extends RuntimeException {
  private final String mainMessage;
  private final int exitCode;
  private final String outputLog;

  public EvalException(int exitCode, String outputLog, @Nullable IOException cause) {
    this(
        "R REPL died (status: " + exitCode + ")",
        "R REPL died (code: " + exitCode + ")",
        exitCode,
        outputLog,
        cause);
  }

  private EvalException(
      String message,
      String mainMessage,
      int exitCode,
      String outputLog,
      @Nullable IOException cause) {
    super(message + ". Output:\n" + outputLog, cause);
    this.mainMessage = mainMessage;
    this.exitCode = exitCode;
    this.outputLog = outputLog;
  }

  /// The evaluation took longer than `timeout`, so the process was killed.
  static EvalException timedOut(Duration timeout, int exitCode, String outputLog) {
    var message = "R REPL timed out after " + timeout.toSeconds() + " s";
    return new EvalException(message, message, exitCode, outputLog, null);
  }

  public String mainMessage() {
    return mainMessage;
  }

  public int exitCode() {
    return exitCode;
  }

  public String outputLog() {
    return outputLog;
  }
}
