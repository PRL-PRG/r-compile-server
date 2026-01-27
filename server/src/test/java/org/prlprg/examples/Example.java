package org.prlprg.examples;

import java.nio.file.Path;
import java.util.Objects;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Paths;

public record Example(Path rpath, String text, ExampleOptions options) {
  public String name() {
    return Paths.getFileStem(rpath);
  }

  public String type() {
    return Paths.getExtension(rpath);
  }

  public Path absolutePath() {
    return Paths.getResource(Example.class, type()).resolve(rpath);
  }

  public boolean hasOption(String filter, String name) {
    return options.get(filter, name) != null;
  }

  public SEXP sexpOption(String filter, String name) {
    var option = options.get(filter, name);
    if (option == null) {
      throw new IllegalArgumentException(
          "Option \"" + name + "\" not found for filter \"" + filter + "\"");
    }
    return option.expectOneArg();
  }

  public int intOption(String filter, String name, int defaultValue) {
    var option = options.get(filter, name);
    return option == null ? defaultValue : option.expectOneScalarIntegerArg();
  }

  /// Equality and hashing only use path.
  @Override
  public boolean equals(Object o) {
    if (!(o instanceof Example example)) {
      return false;
    }
    return Objects.equals(rpath, example.rpath);
  }

  /// Equality and hashing only use path.
  @Override
  public int hashCode() {
    return Objects.hash(rpath);
  }

  @Override
  public String toString() {
    return name();
  }

  public record ParseContext(Path rpath) {}

  @ParseMethod
  private static Example parse(Parser p, ParseContext ctx) {
    var s = p.scanner();

    var options = p.parse(ExampleOptions.class);
    var text = s.readUntilEndOfInput();
    return new Example(ctx.rpath, text, options);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();
    w.write(options.toString());
    w.write(text);
  }
}
