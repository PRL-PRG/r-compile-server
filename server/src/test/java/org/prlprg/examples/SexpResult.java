package org.prlprg.examples;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import java.io.IOException;
import java.nio.file.Path;
import java.util.HashMap;
import java.util.Objects;
import java.util.regex.Pattern;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Files;

public sealed interface SexpResult {
  static SexpResult read(Path path, GNUR R) throws IOException {
    var returnValuePath = path.resolve("returnValue.rds");
    var crashPath = path.resolve("crash.txt");

    var returnValueExists = Files.exists(returnValuePath);
    var crashExists = Files.exists(crashPath);

    if (returnValueExists && crashExists) {
      fail("Snapshot has both return value and crash");
    }

    if (returnValueExists) {
      return new Ok(RDSReader.readFile(R.getSession(), returnValuePath.toFile()));
    }

    var fullMessage = Files.readString(crashPath);
    var isSimplyUnsupported = fullMessage.startsWith("(Unsupported) ");
    var message =
        isSimplyUnsupported ? fullMessage.substring("(Unsupported) ".length()) : fullMessage;
    return new Error(message, isSimplyUnsupported);
  }

  default void write(Path path) throws IOException {
    var returnValuePath = path.resolve("returnValue.rds");
    var crashPath = path.resolve("crash.txt");

    switch (this) {
      case Ok(var value) -> {
        Files.deleteIfExists(crashPath);
        RDSWriter.writeFile(returnValuePath.toFile(), value);
      }
      case Error(var message, var isSimplyUnsupported) -> {
        Files.deleteIfExists(returnValuePath);
        var unsupportedPrefix = isSimplyUnsupported ? "(Unsupported) " : "";
        Files.writeString(crashPath, unsupportedPrefix + message);
      }
    }
  }

  default void check(Example example) {
    check(example, "");
  }

  /// Like [#check(Example)], but also finds options filtered to `queryName` (e.g.
  /// `#? [opt.fir2c.opt.eval]crashes` for a crash that only happens in optimized code).
  ///
  /// `crashes` may have a scalar string argument; if so, the crash message must contain it.
  default void check(Example example, String queryName) {
    var crashesOption = example.options().get(queryName, "crashes");
    var expectCrash = crashesOption != null;
    switch (this) {
      case Ok(var value) when expectCrash ->
          fail("Expected **crash**, got success.\nReturned: " + value);
      case Error(var message, var isSimplyUnsupported) when !expectCrash && !isSimplyUnsupported ->
          fail("Expected success, got crash.\n" + message);
      case Error(var message, var _) when expectCrash && !crashesOption.args().isEmpty() -> {
        var expectedInMessage =
            crashesOption
                .expectOneArg()
                .asScalarString()
                .orElseGet(
                    () -> {
                      fail("`crashes` argument must be a scalar string");
                      throw new AssertionError("unreachable");
                    });
        if (!message.contains(expectedInMessage)) {
          fail("Expected crash message to contain: " + expectedInMessage + "\nGot: " + message);
        }
      }
      default -> {}
    }

    if (example.hasOption("", "returns")) {
      var expected = example.sexpOption("", "returns");
      if (this instanceof Ok(var value)) {
        assertEquals(expected, value, "Wrong return value");
      }
    }
  }

  default boolean isSimplyUnsupported() {
    return this instanceof Error(var _, var isSimplyUnsupported) && isSimplyUnsupported;
  }

  /// The printed result, with closure bodies reduced to a placeholder.
  ///
  /// For comparing optimized and unoptimized compilations of the same program, because the
  /// optimized and unoptimized code are *semantically* but not *structurally* equivalent.
  default String withoutCompiledCode() {
    return renumberRefs(SexpResultPrivate.COMPILED_CODE.matcher(toString()).replaceAll("<code>"));
  }

  /// Renumbers printed reference ids in order of first appearance.
  private static String renumberRefs(String printed) {
    var renumbered = new HashMap<String, Integer>();
    var matcher = SexpResultPrivate.REF_ID.matcher(printed);
    var result = new StringBuilder();
    while (matcher.find()) {
      var id = renumbered.computeIfAbsent(matcher.group(1), _ -> renumbered.size());
      matcher.appendReplacement(result, "#" + id);
    }
    matcher.appendTail(result);
    return result.toString();
  }

  record Ok(SEXP value) implements SexpResult {
    @PrintMethod
    private void print(Printer p) {
      var w = p.writer();

      w.write("Return: ");
      p.print(value);
    }

    @Override
    public boolean equals(Object o) {
      if (!(o instanceof Ok(SEXP value1))) {
        return false;
      }
      return Objects.equals(value.toString(), value1.toString());
    }

    @Override
    public int hashCode() {
      return Objects.hashCode(value.toString());
    }

    @Override
    public String toString() {
      return Printer.toString(this);
    }
  }

  record Error(String message, boolean isSimplyUnsupported) implements SexpResult {
    public Error(Throwable error, boolean isSimplyUnsupported) {
      this(
          error.getMessage()
              + (error.getCause() == null ? "" : "\nCaused by: " + error.getCause().getMessage()),
          isSimplyUnsupported);
    }

    public String mainMessage() {
      return message.lines().findFirst().orElse("");
    }

    @Override
    public boolean equals(Object o) {
      if (!(o instanceof Error error)) {
        return false;
      }
      return Objects.equals(mainMessage(), error.mainMessage());
    }

    @Override
    public int hashCode() {
      return Objects.hashCode(mainMessage());
    }

    @PrintMethod
    private void print(Printer p) {
      var w = p.writer();

      w.write("Crash: ");
      w.write(mainMessage());
    }

    @Override
    public String toString() {
      return Printer.toString(this);
    }
  }
}

final class SexpResultPrivate {
  /// Bytecode or external pointer [SEXP] printed
  static final Pattern COMPILED_CODE = Pattern.compile("<bcode#\\d+(?: \\.\\.\\.)?>|<extptr>");

  /// Matches a printed [SEXP] reference (`#(\d+)`)
  static final Pattern REF_ID = Pattern.compile("#(\\d+)");
}
