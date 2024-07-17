package org.prlprg.rds;

import java.util.*;
import java.util.function.Supplier;
import java.util.logging.*;
import org.prlprg.AppConfig;

final class RDSLogger {
  private final StringBuilder output = new StringBuilder();
  private final boolean shouldLog;
  private int indentLevel;

  /**
   * @param name a description of the read or write, printed at the start of logging
   */
  RDSLogger(String name, AppConfig.RDSLogLevel logLevel) {
    this.indentLevel = 0;
    this.shouldLog = AppConfig.RDS_LOG_LEVEL.compareTo(logLevel) >= 0;
    logString(() -> name);
  }

  /** Globally enables log output to the provided handler */
  public static void addHandler(Handler handler) {
    var logger = Logger.getLogger(RDSLogger.class.getName());
    logger.addHandler(handler);
    handler.setLevel(Level.FINE);
  }

  /**
   * Logs a lazily-evaluated String with the current indent level with Level.FINE.
   *
   * @param msg a thunk supplying the String to be logged.
   */
  private void logString(Supplier<String> msg) {
    if (shouldLog) {
      int level = this.indentLevel;
      String indent = String.join("", Collections.nCopies(level, "  "));
      output.append(indent).append(msg.get()).append("\n");
    }
  }

  //  public void setOpLabel(String opLabel) {
  //    this.opLabel = opLabel;
  //  }

  /**
   * Logs the reading or writing of a new SEXP by printing an identifier and increasing the
   * indentation level by 1
   *
   * @param sexpIdent a String identifying the SEXP being logged
   */
  public void push(String sexpIdent) {
    logString(() -> sexpIdent + " {");
    indentLevel++;
  }

  /**
   * Logs the end of the reading or writing of a SEXP by printing a closing brace and decreasing the
   * indentation level by 1
   */
  public void pop() {
    indentLevel--;
    logString(() -> "}");
  }

  /**
   * Lazily logs a value read from the input stream or written to the output stream
   *
   * @param <T> the type of the value to be logged
   * @param value the value to be logged
   */
  public <T> void log(T value) {
    logString(
        () ->
            switch (value) {
              case Integer i -> String.format("%d (%s)", i, Integer.toBinaryString(i));
              case Byte b -> String.format("%d (%s)", b, Integer.toBinaryString(b));
              default -> String.format("%s: %s", value);
            });
  }

  /**
   * Lazily logs an array of ints read from the input stream or written to the output stream
   *
   * @param ints the array to be logged
   */
  public void logInts(int[] ints) {
    logString(() -> String.format("%s", Arrays.toString(ints)));
  }

  /**
   * Lazily logs an array of doubles read from the input stream or written to the output stream
   *
   * @param doubles the array to be logged
   */
  public void logDoubles(double[] doubles) {
    logString(() -> String.format("%s", Arrays.toString(doubles)));
  }

  /**
   * Lazily logs an array of doubles read from the input stream or written to the output stream
   *
   * @param doubles the array to be logged
   */
  public void logBytes(byte[] bytes) {
    logString(() -> String.format("%s", Arrays.toString(bytes)));
  }

  /**
   * Writes the RDS output collected thus far to the system logger at level {@code Level.FINE}. This
   * is written in one go rather than in individual messages to preserve formatting and reduce
   * metadata stored with each message.
   */
  public void finish() {
    if (shouldLog) {
      Logger logger = Logger.getLogger(RDSLogger.class.getName());
      logger.setLevel(Level.FINE);
      logger.fine(output.toString());
    }
  }
}
