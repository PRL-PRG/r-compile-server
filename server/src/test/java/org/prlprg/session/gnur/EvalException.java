package org.prlprg.session.gnur;

import java.io.IOException;

public class EvalException extends RuntimeException {
  private final int exitCode;
  private final String outputLog;

  public EvalException(int exitCode, String outputLog, IOException cause) {
    super("R REPL died (status: " + exitCode + "), output so far:\n " + outputLog, cause);
    this.exitCode = exitCode;
    this.outputLog = outputLog;
  }

  public String mainMessage() {
    return "R REPL died (code: " + exitCode + ")";
  }

  public String outputLog() {
    return outputLog;
  }
}
