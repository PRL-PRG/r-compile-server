package org.prlprg.fir.ir.module;

import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.SequencedCollection;
import java.util.SequencedMap;
import java.util.SortedSet;
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.CommentParser;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.type.Effects;
import org.prlprg.fir.ir.type.Kind.AnyValue;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
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
  /// Versions are stored so that removing a version doesn't decrement other versions' indices,
  /// which would cause tricky bugs when said versions or later ones are referenced by serialized
  /// calls.
  private final SequencedMap<Integer, Abstraction> versions = new TreeMap<>();
  private final Map<Abstraction, Integer> versionIndices = new HashMap<>();
  private int nextVersionIndex = 0;
  private Effects guaranteedEffects = Effects.ANY;
  private Type guaranteedReturnType = Type.ANY_VALUE;

  // Cached
  /// See [#versionsSorted()].
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

  /// Use [#version(int)] to get the version at an index.
  public @UnmodifiableView SequencedCollection<Abstraction> versions() {
    return Collections.unmodifiableSequencedCollection(versions.sequencedValues());
  }

  /// Versions that are sorted so that "better" ones are before "worse" ones: a version is
  /// "better" if its parameter types, effects, and return type are narrower (see
  /// [Abstraction#compareTo(Abstraction)]).
  public @UnmodifiableView SortedSet<Abstraction> versionsSorted() {
    return Collections.unmodifiableSortedSet(versionsSorted);
  }

  /// Indexes of versions that exist in the function.
  ///
  /// When a version removed, it's index isn't reused, because that leads to tricky bugs when
  /// said version or later ones are referenced by index (e.g. in serialized code).
  public @UnmodifiableView SequencedCollection<Integer> versionIndices() {
    return Collections.unmodifiableSequencedCollection(versions.sequencedKeySet());
  }

  /// @throws IllegalArgumentException If there's no version at the index.
  public Abstraction version(int index) {
    var version = versions.get(index);
    if (version == null) {
      throw new IllegalArgumentException("No version at index: " + index);
    }
    return version;
  }

  public boolean contains(Abstraction version) {
    return versionIndices.containsKey(version);
  }

  /// @throws IllegalArgumentException If the version is not found.
  public int indexOf(Abstraction version) {
    var index = versionIndices.get(version);
    if (index == null) {
      throw new IllegalArgumentException("Version not found: " + version);
    }
    return index;
  }

  /// Gets the best version whose signature can be substituted with `signature` in a call, i.e.
  /// the best version with more permissive parameters and more restrictive effects/return.
  public @Nullable Abstraction guess(Signature signature) {
    for (var version : versionsSorted) {
      if (signature.hasNarrowerParameters(version.signature())
          && version.signature().hasNarrowerEffectsAndReturn(signature)) {
        return version;
      }
    }
    return null;
  }

  /// Gets all versions with a stricter precondition and postcondition than `version`.
  ///
  /// @throws IllegalArgumentException If `version` isn't in this function.
  public Stream<Abstraction> improvementsOver(Abstraction version) {
    if (!contains(version)) {
      throw new IllegalArgumentException("Version not found: " + version);
    }

    return versionsSorted.headSet(version).reversed().stream()
        .filter(
            other ->
                other.signature().hasNarrowerParameters(version.signature())
                    && other.signature().hasNarrowerEffectsAndReturn(version.signature()));
  }

  public Abstraction addVersion(List<Parameter> params) {
    return owner.record(
        "Function#addVersion",
        List.of(this, params),
        () -> {
          var newVersion = new Abstraction(owner, params);
          versions.put(nextVersionIndex, newVersion);
          versionIndices.put(newVersion, nextVersionIndex);
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
          var index = versionIndices.remove(version);
          if (index == null) {
            throw new IllegalArgumentException("Version not found: " + version);
          }
          versions.remove(index);
          versionsSorted.remove(version);
        });
  }

  public Effects guaranteedEffects() {
    return guaranteedEffects;
  }

  public Type guaranteedReturnType() {
    return guaranteedReturnType;
  }

  public void setGuaranteedEffects(Effects guaranteedEffects) {
    owner.record(
        "Function#setGuaranteedEffects",
        List.of(this, guaranteedEffects),
        () -> {
          this.guaranteedEffects = guaranteedEffects;
        });
  }

  public void setGuaranteedReturnType(Type guaranteedReturnType) {
    owner.record(
        "Function#setGuaranteedReturnType",
        List.of(this, guaranteedReturnType),
        () -> {
          if (!guaranteedReturnType.isDefinitely(AnyValue.class)) {
            throw new IllegalArgumentException(
                "Function's guaranteed return type must be a value: "
                    + guaranteedReturnType
                    + "\nIn "
                    + name);
          }

          this.guaranteedReturnType = guaranteedReturnType;
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
    w.write(' ');

    if (nextVersionIndex == 0) {
      if (guaranteedEffects.equals(Effects.ANY) && guaranteedReturnType.equals(Type.ANY_VALUE)) {
        w.write("{}");
      } else {
        w.write("{ -");
        p.print(guaranteedEffects);
        w.write("> ");
        p.print(guaranteedReturnType);
        w.write(" }");
      }
    } else {
      w.write('{');
      w.runIndented(
          () -> {
            for (int i = 0; i < nextVersionIndex; i++) {
              w.write('\n');

              var version = versions.get(i);
              if (version == null) {
                w.write("<removed>");
              } else {
                p.print(version);
              }
            }

            if (!guaranteedEffects.equals(Effects.ANY)
                || !guaranteedReturnType.equals(Type.ANY_VALUE)) {
              w.write("\n-");
              p.print(guaranteedEffects);
              w.write("> ");
              p.print(guaranteedReturnType);
            }
          });
      w.write("\n}");
    }
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
    for (; !s.nextCharSatisfies(c -> c == '-' || c == '}'); nextVersionIndex++) {
      CommentParser.skipComments(s);

      // Skip removed version but increment the index (hence the weird `for` loop).
      if (s.trySkip("<removed>")) {
        continue;
      }

      var version = p2.parse(Abstraction.class);
      versions.put(nextVersionIndex, version);
      versionIndices.put(version, nextVersionIndex);
      versionsSorted.add(version);
    }

    if (s.trySkip('-')) {
      guaranteedEffects = p.parse(Effects.class);
      s.assertAndSkip('>');
      guaranteedReturnType = p.parse(Type.class);

      if (!guaranteedReturnType.isDefinitely(AnyValue.class)) {
        throw s.fail(
            "Function's guaranteed return type must be a value: "
                + guaranteedReturnType
                + "\nIn "
                + name);
      }
    }

    s.assertAndSkip('}');
  }
}
