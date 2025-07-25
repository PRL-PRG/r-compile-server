package org.prlprg.fir.ir.module;

import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.SortedSet;
import java.util.TreeSet;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.CommentParser;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;
import org.prlprg.util.DeferredCallbacks;
import org.prlprg.util.Strings;

public final class Function {
  // Backlink
  private final Module owner;

  // Data
  private final String name;
  private final SortedSet<Abstraction> versions =
      new TreeSet<>(
          (Abstraction a, Abstraction b) -> {
            // Sort by parameter types (largest type first), then by number of parameters, then by
            // hash.
            for (var i = 0; i < Math.min(a.parameters().size(), b.parameters().size()); i++) {
              var cmp = b.parameters().get(i).type().compareTo(a.parameters().get(i).type());
              if (cmp != 0) {
                return cmp;
              }
            }
            var cmp = Integer.compare(a.parameters().size(), b.parameters().size());
            if (cmp != 0) {
              return cmp;
            }
            return Integer.compare(a.hashCode(), b.hashCode());
          });

  Function(Module owner, String name) {
    if (name.isEmpty()) {
      throw new IllegalArgumentException(
          "Illegal function name (function names must not be empty): " + name);
    }

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

  public boolean containsVersion(Abstraction version) {
    return versions.contains(version);
  }

  /// @throws IllegalArgumentException if the version is not found
  public int indexOfVersion(Abstraction version) {
    if (!versions.contains(version)) {
      throw new IllegalArgumentException("Version not found: " + version);
    }
    return versions.headSet(version).size();
  }

  public Abstraction version(int index) {
    if (index < 0 || index >= versions.size()) {
      throw new IndexOutOfBoundsException("Index out of bounds: " + index);
    }
    return versions.stream().skip(index).findFirst().orElseThrow();
  }

  /// Gets the worst version we could dispatch to whose signature satisfies the provided one.
  ///
  /// Returns `null` if there are no known versions we can dispatch to.
  public @Nullable Abstraction worstGuess(@Nullable Signature signature) {
    if (signature == null) {
      return versions.isEmpty() ? null : versions.first();
    }

    for (var version : versions) {
      if (version.signature().satisfies(signature)) {
        return version;
      }
    }
    return null;
  }

  public Abstraction addVersion(List<Parameter> params) {
    return owner.record(
        "Function#addVersion",
        List.of(this, params),
        () -> {
          var newVersion = new Abstraction(owner, params);
          versions.add(newVersion);
          return newVersion;
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
    if (!Strings.isValidJavaIdentifierOrKeyword(name)) {
      w.writeQuoted('`', name);
    } else {
      w.write(name);
    }
    w.write('{');
    w.runIndented(() -> p.printSeparated("\n", versions));
    w.write("\n}");
  }

  public record ParseContext(
      Module owner, DeferredCallbacks<Module> postModule, @Nullable Object inner) {}

  @ParseMethod
  private Function(Parser p1, ParseContext ctx) {
    owner = ctx.owner;
    var p = p1.withContext(ctx.inner);

    var s = p.scanner();

    s.assertAndSkip("fun ");
    name = s.nextCharIs('`') ? Names.read(s, true) : s.readJavaIdentifierOrKeyword();
    s.assertAndSkip('{');

    var p2 = p.withContext(new Abstraction.ParseContext(owner, ctx.postModule, p.context()));
    while (!s.trySkip('}')) {
      CommentParser.skipComments(s);
      versions.add(p2.parse(Abstraction.class));
    }
  }
}
