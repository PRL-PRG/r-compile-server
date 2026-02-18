package org.prlprg.examples;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

import java.io.IOException;
import java.nio.file.Path;
import java.util.Objects;
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
    if (example.hasOption("", "crashes") && this instanceof Ok) {
      fail("Expected **crash**, got success.\n" + this);
    } else if (this instanceof Error(var message, var isSimplyUnsupported)
        && !isSimplyUnsupported) {
      fail("Expected success, got crash.\n" + message);
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

  record Ok(SEXP value) implements SexpResult {
    @PrintMethod
    private void print(Printer p) {
      var w = p.writer();

      w.write("Return: ");
      p.print(value);
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
