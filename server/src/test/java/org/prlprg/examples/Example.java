package org.prlprg.examples;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableSet;
import com.google.common.collect.Sets;
import java.util.Objects;
import java.util.Set;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// A source file consisting of a set of closures that is put through various tests.
public record Example(String name, String text, ImmutableSet<ExampleOption> options) {
  public @Unmodifiable Set<ExampleOption> options(String filter) {
    return Sets.filter(options, o -> Objects.requireNonNull(o).appliesTo(filter));
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  public record ParseContext(String name) {}

  @ParseMethod
  private static Example parse(Parser p, ParseContext ctx) {
    var s = p.scanner();

    var options = ImmutableSet.<ExampleOption>builder();
    while (s.trySkip("#? ")) {
      options.add(p.parse(ExampleOption.class));
    }

    var text = s.readUntilEndOfInput();
    return new Example(ctx.name, text, options.build());
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
