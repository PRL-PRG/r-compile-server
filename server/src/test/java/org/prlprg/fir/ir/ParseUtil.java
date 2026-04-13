package org.prlprg.fir.ir;

import static org.junit.jupiter.api.Assertions.fail;

import java.util.Formatter;
import java.util.LinkedHashMap;
import org.intellij.lang.annotations.Language;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.FunctionRef;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.Parser;

public class ParseUtil {
  public static Module parseModule(@Language("FIR") String firText) {
    try {
      return Parser.fromString(firText, Module.class);
    } catch (ParseException e) {
      // Can't use `fail` because then Java expects a `return` after.
      throw new AssertionError(
          "Failed to parse FIŘ module: "
              + e.getMessage()
              + "\n"
              + region(firText, e.position().line(), e.position().column()),
          e);
    }
  }

  public static Abstraction parseAbstraction(
      @Language(value = "FIR", prefix = "fun main(`...`) {\n", suffix = "\n}") String firText) {
    try {
      var module = new Module();
      var deferredFunctions = new LinkedHashMap<NamedVariable, FunctionRef>();

      var result =
          Parser.fromString(
              firText,
              Abstraction.class,
              new Abstraction.ParseContext(
                  module, new FunctionRef.ParseContext(deferredFunctions), null));

      for (var entry : deferredFunctions.entrySet()) {
        var name = entry.getKey();
        var deferred = entry.getValue();
        var function = module.lookupFunction(name);
        if (function == null) {
          fail(
              "Function in parsed standalone FIŘ abstraction isn't builtin or intrinsic: "
                  + name
                  + "\n"
                  + firText);
        }
        deferred.set(function);
      }

      return result;
    } catch (ParseException e) {
      // Can't use `fail` because then Java expects a `return` after.
      throw new AssertionError(
          "Failed to parse FIŘ abstraction: "
              + e.getMessage()
              + "\n"
              + region(firText, e.position().line(), e.position().column()),
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
          s.repeat(" ", (int) errorColNum + 5).append("↓\n");
        }
        f.format("%4d: %s\n", lineNum, line);
        if (lineNum == errorLineNum) {
          s.repeat(" ", (int) errorColNum + 5).append("↑\n");
        }
      }
    }
    return s.toString();
  }
}
