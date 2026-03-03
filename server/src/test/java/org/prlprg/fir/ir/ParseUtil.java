package org.prlprg.fir.ir;

import java.util.Formatter;
import org.intellij.lang.annotations.Language;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.Parser;
import org.prlprg.sexp.SEXP;

public class ParseUtil {
  public static Module parseModule(@Language("FIR") String firText) {
    try {
      return Parser.fromString(firText, Module.class);
    } catch (ParseException e) {
      // Can't use `fail` because then Java expects a `return` after.
      throw new AssertionError(
          "Failed to parse FIŘ file: "
              + e.getMessage()
              + "\n"
              + region(firText, e.position().line(), e.position().column()),
          e);
    }
  }

  public static SEXP parseSexp(String sexpText) {
    try {
      return Parser.fromString(sexpText, SEXP.class);
    } catch (ParseException e) {
      // Can't use `fail` because then Java expects a `return` after.
      throw new AssertionError(
          "Failed to parse SEXP in FIŘ file: "
              + e.getMessage()
              + "\n"
              + region(sexpText, e.position().line(), e.position().column()),
          e);
    }
  }

  private ParseUtil() {}

  /// The number of lines printed around the error line in [#region(String,long,long)].
  private static final int NUM_REGION_CONTEXT_LINES = 2;

  /// Print the lines around the given line, with line numbers and a carat at the given column.
  ///
  /// It's used to print parse errors.
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
}
