package org.prlprg.examples;

import java.nio.file.Path;
import java.util.Objects;
import org.jspecify.annotations.Nullable;
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

  /// The package of a `#? stdlib` example, or `null` if it isn't one.
  ///
  /// A `stdlib_<pkg>_<fn>` example defines a copy of `pkg`'s function `fn`, then runs `fn`'s
  /// help-page examples. The copy refers to `pkg`'s internals, so its tests evaluate `main` in an
  /// environment whose parent is `pkg`'s namespace (see `eval.R`).
  public @Nullable String stdlibPackage() {
    return hasOption("", "stdlib") ? name().split("_", 3)[1] : null;
  }

  /// The RNG seed of a `#? seed(<int>)` example, or `null` if it has none.
  ///
  /// For an example that uses the RNG without `set.seed`. `eval.R` sets the seed before each call
  /// of `main`, so every run and every compilation sees the same random numbers.
  public @Nullable Integer seed() {
    var option = options.get("", "seed");
    return option == null ? null : option.expectOneScalarIntegerArg();
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
