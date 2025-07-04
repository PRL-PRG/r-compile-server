package org.prlprg.fir.closure;

import com.google.common.collect.ImmutableList;
import org.jetbrains.annotations.NotNull;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;

public record Function(String name, ImmutableList<Abstraction> versions) {
  @Override
  public @NotNull String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write("fun ");
    Names.write(w, name);
    w.write('{');
    w.runIndented(
        () -> {
          for (var version : versions) {
            w.write('\n');
            p.print(version);
          }
        });
    w.write("\n}");
  }

  @ParseMethod
  private static Function parse(Parser p) {
    var s = p.scanner();

    s.assertAndSkip("fun ");
    var name = Names.read(s, true);
    s.assertAndSkip('{');

    var versions = ImmutableList.<Abstraction>builder();
    while (!s.trySkip('}')) {
      versions.add(p.parse(Abstraction.class));
    }

    return new Function(name, versions.build());
  }
}
