package org.prlprg.ir.cfg;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.TestConfig.EXPECT_AND_DELETE_SOME_PIR_TESTS;
import static org.prlprg.TestConfig.VERBOSE;
import static org.prlprg.util.Tests.printlnIfVerbose;

import java.io.StringReader;
import java.io.StringWriter;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.function.Predicate;
import java.util.function.Supplier;
import javax.annotation.Nullable;
import org.jetbrains.annotations.Unmodifiable;
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.Assumptions;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.params.ParameterizedTest;
import org.prlprg.ir.cfg.CFGEdit.Semantic;
import org.prlprg.parseprint.ParseException;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.DirectorySource;
import org.prlprg.util.Files;
import org.prlprg.util.Pair;
import org.prlprg.util.Strings2;
import org.prlprg.util.Tests;

public class CFGPirTests implements Tests {
  private static final int NUM_PIR_PRINTS_IN_FAST_TESTS = 200;

  private @Nullable String acceptablyFailed;

  // region tests
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
      printlnIfVerbose(cfg);

      var edits = editsForEveryCfg.get(cfg);

      var copy = new CFG();
      for (var editAndInverse : edits) {
        var edit = editAndInverse.first();
        var inverse = editAndInverse.second();
        printlnIfVerbose(edit);
        var inverse2 = edit.apply(copy);

        assertEquals(inverse, inverse2, "Applying edit on copy doesn't produce the same inverse");
      }

      assertEquals(cfg.toString(), copy.toString(), "Recreated CFG does not match original");

      printlnIfVerbose();
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
      var edits = editsForEveryCfg.get(cfg);

      for (var editAndInverse : edits.reversed()) {
        var edit = editAndInverse.first();
        var inverse = editAndInverse.second();
        printlnIfVerbose(cfg);
        printlnIfVerbose(inverse + " <- " + edit);
        var edit2 = inverse.apply(cfg);

        assertEquals(edit, edit2, "Applying inverse doesn't produce the original edit");
        printlnIfVerbose();
      }

      assertEquals(
          new CFG().toString(), cfg.toString(), "Undoing all edits should result in an empty CFG");

      printlnIfVerbose("========================================");
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
        printlnIfVerbose("OK");
      } catch (CFGVerifyException e) {
        if (e.brokenInvariants().stream()
            .allMatch(i -> i.toString().contains("is of wrong type"))) {
          // wrong type errors are expected because we're still designing the type system, and
          // haven't gave instructions specific enough types
          printlnIfVerbose("TYPE_ERROR");
          acceptablyFailed =
              "Verification failed due to a type error because we haven't made the types specific enough";
        } else {
          throw new AssertionError("Failed to verify " + pirPath, e);
        }
      }
    }
  }

  @ParameterizedTest
  @DirectorySource(
      root = "pir-prints",
      relativize = true,
      depth = Integer.MAX_VALUE,
      glob = "*.log",
      fastLimit = NUM_PIR_PRINTS_IN_FAST_TESTS)
  public void testPirIsParseableAndPrintableWithoutError(Path relativePirPath) {
    var lessRelativePirPath = Paths.get("pir-prints");
    var pirSourcePath = getSourceResourcePath(lessRelativePirPath.resolve(relativePirPath));
    var pirPath = getResourcePath(lessRelativePirPath.resolve(relativePirPath));

    var original = Files.readString(pirPath);
    var cfgs =
        readPirCfgs(
            pirPath,
            original,
            CFG::new,
            e -> {
              var acceptAndDelete =
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
                          && e.getCause().getMessage().contains("symbol name cannot be empty"));
              if (EXPECT_AND_DELETE_SOME_PIR_TESTS && acceptAndDelete) {
                if (pirSourcePath == null) {
                  throw new UnsupportedOperationException(
                      "EXPECT_AND_DELETE_SOME_PIR_TESTS can only be set with access to the source resources (artifact is running in the project's `target` folder)");
                }
                Files.delete(pirSourcePath);
                return true;
              } else {
                return false;
              }
            });
    var roundTrip = writePirCfgs(cfgs);
    var defaultStr = writeCfgs(cfgs);

    if (VERBOSE) {
      System.out.println("Native serialized representation:");
      System.out.println(Strings2.entireRegion(defaultStr));
      System.out.println();
      System.out.println("Reprinted (round-trip) PIR representation:");
      System.out.println(Strings2.entireRegion(roundTrip));
      System.out.println();
      System.out.println("Original PIR representation:");
      System.out.println(Strings2.entireRegion(original));
    }
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

  // endregion tests

  // region lifecycle
  @AfterEach
  public void checkForAcceptableFailures() {
    // Report test differently if we failed to parse, since we didn't fully test it.
    //
    // This is still at the end of the file, in case a CFG fails to parse in an acceptable way and
    // later one fails in an unexpected way (we can still partially test), or we want a verbose log.
    if (acceptablyFailed != null) {
      Assumptions.abort(acceptablyFailed);
    }
  }

  // endregion lifecycle

  // region CFG helpers
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
      if (silentlyFailOnParseException.test(e)) {
        acceptablyFailed =
            "Parsing failed for an acceptable reason (either we're not testing parsing, or the PIR being parsed is ambiguous)";
      } else {
        var msg =
            "Failed to parse "
                + pirPath
                + "\n"
                + Strings2.region(source, e.position().line(), e.position().column());
        throw new AssertionError(msg, e);
      }
    } catch (Throwable e) {
      System.err.println(
          "Uncaught error or exception while parsing "
              + pirPath
              + "\n"
              + Strings2.entireRegion(source));
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
  // endregion CFG helpers
}
