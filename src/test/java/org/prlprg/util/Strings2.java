package org.prlprg.util;

import java.util.Formatter;

/**
 * String utilities only used by tests.
 *
 * <p>{@link org.prlprg.util.Strings} is already taken, by string utilities used outside of tests.
 */
public class Strings2 {
  /** The number of lines printed around the error line in {@link #region(String, long, long)}. */
  private static final int NUM_REGION_CONTEXT_LINES = 2;

  /**
   * Print the lines around the given line, with line numbers and a carat at the given column.
   *
   * <p>It's used to print parse errors.
   */
  public static String region(String source, long errorLineNum, long errorColNum) {
    if (errorLineNum < 0 || errorColNum < 0) {
      throw new IllegalArgumentException("errorLineNum and errorColNum must be positive");
    }

    long firstLineNum = errorLineNum - NUM_REGION_CONTEXT_LINES;
    long lastLineNum = errorLineNum + NUM_REGION_CONTEXT_LINES;

    var s = new StringBuilder();
    var f = new Formatter(s);
    var lines = source.lines().iterator();
    for (long lineNum = 1; lines.hasNext(); lineNum++) {
      var line = lines.next();
      if (lineNum == firstLineNum - 1 || lineNum == lastLineNum + 1) {
        s.append("      ...\n");
      } else if (lineNum >= firstLineNum && lineNum <= lastLineNum) {
        if (lineNum == errorLineNum) {
          s.append(" ".repeat((int) errorColNum + 5)).append("↓\n");
        }
        f.format("%4d: %s\n", lineNum, line);
        if (lineNum == errorLineNum) {
          s.append(" ".repeat((int) errorColNum + 5)).append("↑\n");
        }
      }
    }
    return s.toString();
  }

  /**
   * Print the entire region, with line numbers.
   *
   * <p>It's used to print parse errors that unfortunately can't be pinpointed to a specific line.
   */
  public static String entireRegion(String source) {
    var s = new StringBuilder();
    var f = new Formatter(s);
    var lines = source.lines().iterator();
    for (long lineNum = 1; lines.hasNext(); lineNum++) {
      var line = lines.next();
      f.format("%4d: %s\n", lineNum, line);
    }
    return s.toString();
  }
}
