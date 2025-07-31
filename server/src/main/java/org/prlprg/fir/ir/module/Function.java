package org.prlprg.fir.ir.module;

import com.google.common.collect.BiMap;
import com.google.common.collect.HashBiMap;
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
  /// Versions are stored in a map so that removing a version doesn't decrement other versions'
  /// indices, which would cause tricky bugs when said versions or later ones are referenced by
  /// serialized calls.
  private final BiMap<Abstraction, Integer> versions = HashBiMap.create();
  private int nextVersionIndex = 0;

  // Cached
  /// Versions are sorted in a way that ensures better ones are before worse ones,
  /// so getting the best version is easy.
  private final SortedSet<Abstraction> versionsSorted = new TreeSet<>();

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
    return Collections.unmodifiableCollection(versions.keySet());
  }

  /// @throws IllegalArgumentException If there's no version at the index.
  public Abstraction version(int index) {
    var version = versions.inverse().get(index);
    if (version == null) {
      throw new IllegalArgumentException("No version at index: " + index);
    }
    return version;
  }

  public boolean contains(Abstraction version) {
    return versions.containsKey(version);
  }

  /// @throws IllegalArgumentException If the version is not found.
  public int indexOf(Abstraction version) {
    var index = versions.get(version);
    if (index == null) {
      throw new IllegalArgumentException("Version not found: " + version);
    }
    return index;
  }

  /// Gets the worst version we could dispatch to whose signature satisfies the provided one.
  ///
  /// Returns `null` if there are no known versions we can dispatch to.
  public @Nullable Abstraction worstGuess(@Nullable Signature signature) {
    if (signature == null) {
      return versionsSorted.isEmpty() ? null : versionsSorted.first();
    }

    for (var version : versionsSorted) {
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
          versions.put(newVersion, nextVersionIndex);
          nextVersionIndex++;
          versionsSorted.add(newVersion);
          return newVersion;
        });
  }

  public void removeVersion(Abstraction version) {
    owner.record(
        "Function#removeVersion",
        List.of(this, version),
        () -> {
          if (!versions.containsKey(version)) {
            throw new IllegalArgumentException("Version not found: " + version);
          }
          versions.remove(version);
          versionsSorted.remove(version);
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
    if (!Strings.isIdentifierOrKeyword(name)) {
      w.writeQuoted('`', name);
    } else {
      w.write(name);
    }

    w.write('{');
    w.runIndented(
        () -> {
          var printed = false;

          for (int i = 0; i < nextVersionIndex; i++) {
            if (printed) {
              w.write("\n");
            } else {
              printed = true;
            }

            var version = versions.inverse().get(i);
            if (version == null) {
              w.write("<removed>");
            } else {
              p.print(version);
            }
          }
        });
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
    name = s.nextCharIs('`') ? Names.read(s, true) : s.readIdentifierOrKeyword();
    s.assertAndSkip('{');

    var p2 = p.withContext(new Abstraction.ParseContext(owner, ctx.postModule, p.context()));
    for (; !s.trySkip('}'); nextVersionIndex++) {
      CommentParser.skipComments(s);

      // Skip removed version but increment the index (hence the weird `for` loop).
      if (s.trySkip("<removed>")) {
        continue;
      }

      var version = p2.parse(Abstraction.class);
      versions.put(version, nextVersionIndex);
      versionsSorted.add(version);
    }
  }
}
