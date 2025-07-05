package org.prlprg.fir.module;

import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.SortedSet;
import java.util.TreeSet;
import org.jetbrains.annotations.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.cfg.Abstraction;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;

public class Function {
  // Backlink
  private final Module owner;

  // Data
  private final String name;
  private final SortedSet<Abstraction> versions =
      new TreeSet<>(
          (Abstraction a, Abstraction b) -> {
            // Sort by parameter types (largest type first), then by number of parameters, then by
            // hash.
            for (var i = 0; i < Math.min(a.params().size(), b.params().size()); i++) {
              var cmp = b.params().get(i).type().compareTo(a.params().get(i).type());
              if (cmp != 0) {
                return cmp;
              }
            }
            var cmp = Integer.compare(a.params().size(), b.params().size());
            if (cmp != 0) {
              return cmp;
            }
            return Integer.compare(a.hashCode(), b.hashCode());
          });

  Function(Module owner, String name) {
    this.owner = owner;
    this.name = name;
  }

  public Module owner() {
    return owner;
  }

  public String name() {
    return name;
  }

  public @UnmodifiableView Collection<Abstraction> versions() {
    return Collections.unmodifiableCollection(versions);
  }

  public void addVersion(Abstraction version) {
    owner.record(
        "Function#addVersion",
        List.of(this, version),
        () -> {
          if (versions.contains(version)) {
            throw new IllegalArgumentException("Version already exists: " + version);
          }
          if (version.module() != owner) {
            throw new IllegalArgumentException(
                "Version must belong to the same module as the function: " + version);
          }
          versions.add(version);
          return null;
        });
  }

  public void removeVersion(Abstraction version) {
    owner.record(
        "Function#removeVersion",
        List.of(this, version),
        () -> {
          if (!versions.remove(version)) {
            throw new IllegalArgumentException("Version not found: " + version);
          }
          return null;
        });
  }

  @Override
  public String toString() {
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

  record ParseContext(Module owner, @Nullable Object inner) {}

  @ParseMethod
  private Function(Parser p1, ParseContext ctx) {
    owner = ctx.owner;
    var p = p1.withContext(ctx.inner);

    var s = p.scanner();

    s.assertAndSkip("fun ");
    name = Names.read(s, true);
    s.assertAndSkip('{');

    while (!s.trySkip('}')) {
      versions.add(p.parse(Abstraction.class));
    }
  }
}
