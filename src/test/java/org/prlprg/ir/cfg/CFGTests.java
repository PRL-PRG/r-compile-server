package org.prlprg.ir.cfg;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.io.StringReader;
import java.io.StringWriter;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Formatter;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.function.Predicate;
import java.util.function.Supplier;
import org.jetbrains.annotations.Unmodifiable;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.ir.cfg.CFGEdit.Semantic;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.DirectorySource;
import org.prlprg.util.Files;
import org.prlprg.util.Pair;

public class CFGTests {
  private static final int NUM_PIR_PRINTS_IN_FAST_TESTS = 200;

  @ParameterizedTest
  @DirectorySource(
      root = "pir-prints",
      depth = Integer.MAX_VALUE,
      glob = "*.log",
      fastLimit = NUM_PIR_PRINTS_IN_FAST_TESTS)
  public void testPirObserverCanRecreate(Path pirPath) {
    var original = Files.readString(pirPath);

    // Silently fails on parse exceptions because we're not testing parsing.
    var cfgsAndEdits = readPirCfgsAndStoreEdits(pirPath, original);
    var cfgs = cfgsAndEdits.first();
    var editsForEveryCfg = cfgsAndEdits.second();

    for (var cfg : cfgs) {
      System.err.println(cfg);

      var edits = editsForEveryCfg.get(cfg);

      var copy = new CFG();
      for (var editAndInverse : edits) {
        var edit = editAndInverse.first();
        var inverse = editAndInverse.second();
        System.err.println(edit);
        var inverse2 = edit.apply(copy);

        assertEquals(inverse, inverse2, "Applying edit on copy doesn't produce the same inverse");
      }

      assertEquals(
          printCFGForEquality(cfg),
          printCFGForEquality(copy),
          "Recreated CFG does not match original");

      System.err.println();
    }
  }

  @ParameterizedTest
  @DirectorySource(
      root = "pir-prints",
      depth = Integer.MAX_VALUE,
      glob = "*.log",
      fastLimit = NUM_PIR_PRINTS_IN_FAST_TESTS)
  public void testPirObserverCanUndo(Path pirPath) {
    var original = Files.readString(pirPath);

    // Silently fails on parse exceptions because we're not testing parsing.
    var cfgsAndEdits = readPirCfgsAndStoreEdits(pirPath, original);
    var cfgs = cfgsAndEdits.first();
    var editsForEveryCfg = cfgsAndEdits.second();

    for (var cfg : cfgs) {
      System.err.println(cfg);

      var edits = editsForEveryCfg.get(cfg);

      for (var editAndInverse : edits.reversed()) {
        var edit = editAndInverse.first();
        var inverse = editAndInverse.second();
        System.err.println(inverse + " <- " + edit);
        var edit2 = inverse.apply(cfg);

        assertEquals(edit, edit2, "Applying inverse doesn't produce the original edit");
      }

      assertEquals(
          printCFGForEquality(new CFG()),
          printCFGForEquality(cfg),
          "Undoing all edits should result in an empty CFG");

      System.err.println();
    }
  }

  @ParameterizedTest
  @DirectorySource(
      root = "pir-prints",
      depth = Integer.MAX_VALUE,
      glob = "*.log",
      fastLimit = NUM_PIR_PRINTS_IN_FAST_TESTS)
  public void testPirVerifies(Path pirPath) {
    var original = Files.readString(pirPath);
    var cfgs = readPirCfgs(pirPath, original, CFG::new, _ -> true);
    for (var cfg : cfgs) {
      try {
        cfg.verify();
      } catch (CFGVerifyException e) {
        throw new AssertionError("Failed to verify " + pirPath, e);
      }
      System.err.println("OK");
    }
  }

  @ParameterizedTest
  @DirectorySource(
      root = "pir-prints",
      depth = Integer.MAX_VALUE,
      glob = "*.log",
      fastLimit = NUM_PIR_PRINTS_IN_FAST_TESTS)
  public void testPirIsParseableAndPrintableWithoutError(Path pirPath) {
    var original = Files.readString(pirPath);
    var cfgs =
        readPirCfgs(
            pirPath,
            original,
            CFG::new,
            e ->
                e.getMessage().contains("non-trivial")
                    ||
                    // Badly formatted strings in PIR
                    e.getMessage().contains("unclosed string")
                    || e.getMessage().contains("escape sequence")
                    || e.getMessage().contains("expected \", \"..., but found \"\",\"...")
                    || (e.getCause() != null
                        && e.getCause().getMessage().contains("unclosed string"))
                    // Type is too long which makes it harder to parse, since we rely on column
                    // numbers to skip over effects
                    || e.getMessage().contains("expected column 19, but found column")
                    // LdFun [[
                    || (e.getCause() != null
                        && e.getCause().getMessage().contains("symbol name cannot be empty")));
    var roundTrip = writePirCfgs(cfgs);
    var defaultStr = writeCfgs(cfgs);

    System.out.println("Native serialized representation:");
    System.out.println(entireRegion(defaultStr));
    System.out.println();
    System.out.println("Reprinted (round-trip) PIR representation:");
    System.out.println(entireRegion(roundTrip));
    System.out.println();
    System.out.println("Original PIR representation:");
    System.out.println(entireRegion(original));
  }

  /**
   * Enable this test to get "click to show difference" in IntelliJ, to inspect the PIR reprints
   * "by-eye". They will never be the same because PIR's print representation loses information.
   */
  @Disabled(
      "Enable this test to get \"click to show difference\" in IntelliJ, to inspect the PIR"
          + " reprints \"by-eye\". This will never pass (nor should it) because PIR's print"
          + " representation loses information.")
  @ParameterizedTest
  @DirectorySource(
      root = "pir-prints",
      depth = Integer.MAX_VALUE,
      glob = "*.log",
      fastLimit = NUM_PIR_PRINTS_IN_FAST_TESTS)
  public void testPirByEye(Path pirPath) {
    var original = Files.readString(pirPath);
    var cfgs = readPirCfgs(pirPath, original, CFG::new, _ -> false);
    var roundTrip = writePirCfgs(cfgs);

    // This will fail, but it will show a message that lets you see the difference.
    // It's only important that there aren't unexplained discrepancies.
    assertEquals(original, roundTrip);
  }

  // region helpers
  private Pair<List<CFG>, Map<CFG, List<Pair<Semantic<?>, Semantic<?>>>>> readPirCfgsAndStoreEdits(
      Path pirPath, String source) {
    var observersForEveryCfg = new HashMap<CFG, CFGObserver>();
    var editsForEveryCfg = new HashMap<CFG, List<Pair<Semantic<?>, Semantic<?>>>>();
    var cfgs =
        readPirCfgs(
            pirPath,
            source,
            () -> {
              var edits = new ArrayList<Pair<Semantic<?>, Semantic<?>>>();
              CFGObserver observer = (edit, inverse) -> edits.add(Pair.of(edit, inverse));

              var cfg = new CFG();
              cfg.addObserver(observer);

              observersForEveryCfg.put(cfg, observer);
              editsForEveryCfg.put(cfg, edits);

              return cfg;
            },
            _ -> true);

    for (var cfgAndObserver : observersForEveryCfg.entrySet()) {
      var cfg = cfgAndObserver.getKey();
      var observer = cfgAndObserver.getValue();
      cfg.removeObserver(observer);
    }

    return Pair.of(cfgs, editsForEveryCfg);
  }

  private @Unmodifiable List<CFG> readPirCfgs(
      Path pirPath,
      String source,
      Supplier<CFG> cfgFactory,
      Predicate<ParseException> silentlyFailOnParseException) {
    var pirReader = new StringReader(source);

    List<CFG> cfgs = new ArrayList<>();
    try {
      CFGPirSerialize.manyFromPIR(pirReader, cfgFactory).forEach(cfgs::add);
    } catch (ParseException e) {
      if (!silentlyFailOnParseException.test(e)) {
        var msg =
            "Failed to parse "
                + pirPath
                + "\n"
                + region(source, e.position().line(), e.position().column());
        throw new AssertionError(msg, e);
      }
    } catch (Throwable e) {
      System.err.println(
          "Uncaught error or exception while parsing " + pirPath + "\n" + entireRegion(source));
      throw e;
    }

    pirReader.close();
    return cfgs;
  }

  private String writePirCfgs(List<CFG> cfgs) {
    var pirWriter = new StringWriter();
    for (var cfg : cfgs) {
      cfg.toPir(pirWriter);
    }
    return pirWriter.toString();
  }

  private String writeCfgs(List<CFG> cfgs) {
    return Printer.use(
        p -> {
          for (var cfg : cfgs) {
            p.print(cfg);
          }
        });
  }

  // endregion

  // region print regions and other
  private static final int NUM_REGION_CONTEXT_LINES = 2;

  private String region(String source, long errorLineNum, long errorColNum) {
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
        f.format("%4d: %s\n", lineNum, line);
        if (lineNum == errorLineNum) {
          s.append(" ".repeat((int) errorColNum + 5)).append("^\n");
        }
      }
    }
    return s.toString();
  }

  private String entireRegion(String source) {
    var s = new StringBuilder();
    var f = new Formatter(s);
    var lines = source.lines().iterator();
    for (long lineNum = 1; lines.hasNext(); lineNum++) {
      var line = lines.next();
      f.format("%4d: %s\n", lineNum, line);
    }
    return s.toString();
  }

  private String printCFGForEquality(CFG cfg) {
    var str = cfg.toString();
    return str.substring(str.indexOf('\n') + 1);
  }
  // endregion print regions and other
}
