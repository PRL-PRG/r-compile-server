package org.prlprg.examples;

import com.google.common.collect.ImmutableSet;
import com.google.common.collect.Sets;
import java.nio.file.Path;
import java.util.Objects;
import java.util.Set;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Paths;

public record Example(Path rpath, String text, ImmutableSet<ExampleOption> options) {
  public String name() {
    return Paths.getFileStem(rpath);
  }

  public String type() {
    return Paths.getExtension(rpath);
  }

  public @Unmodifiable Set<ExampleOption> options(String filter) {
    return Sets.filter(options, o -> Objects.requireNonNull(o).appliesTo(filter));
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
    return Printer.toString(this);
  }

  public record ParseContext(Path rpath) {}

  @ParseMethod
  private static Example parse(Parser p, ParseContext ctx) {
    var s = p.scanner();

    var options = ImmutableSet.<ExampleOption>builder();
    while (s.trySkip("#? ")) {
      options.add(p.parse(ExampleOption.class));
    }

    var text = s.readUntilEndOfInput();
    return new Example(ctx.rpath, text, options.build());
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();
    for (var option : options) {
      w.write("#? ");
      p.print(option);
      w.write('\n');
    }

    w.write(text);
  }
}
