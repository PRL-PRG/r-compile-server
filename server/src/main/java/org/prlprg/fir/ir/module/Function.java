package org.prlprg.fir.ir.module;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.SequencedCollection;
import java.util.SequencedMap;
import java.util.Set;
import java.util.SortedSet;
import java.util.TreeMap;
import java.util.TreeSet;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.jetbrains.annotations.Unmodifiable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.CommentParser;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.binding.Parameter;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
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
  private final List<NamedVariable> parameterNames;
  /// Versions are stored so that removing a version doesn't decrement other versions' indices,
  /// which would cause tricky bugs when said versions or later ones are referenced by serialized
  /// calls.
  private final SequencedMap<Integer, Abstraction> versions = new TreeMap<>();
  private final Map<Abstraction, Integer> versionIndices = new HashMap<>();
  private int nextVersionIndex = 0;

  // Cached
  /// See [#versionsSorted()].
  private final SortedSet<Abstraction> versionsSorted = new TreeSet<>();

  Function(
      Module owner,
      String name,
      List<NamedVariable> parameterNames,
      List<Parameter> baselineParameters,
      boolean baselineIsStub) {
    if (name.isEmpty()) {
      throw new IllegalArgumentException(
          "Illegal function name (function names must not be empty): " + name);
    }

    this.owner = owner;
    this.name = name;
    this.parameterNames = List.copyOf(parameterNames);

    // Add baseline version
    addVersion(baselineParameters, baselineIsStub);
  }

  static List<Parameter> computeBaselineParameters(List<NamedVariable> parameterNames) {
    var baselineParamNames = new HashSet<Register>(parameterNames.size());
    return parameterNames.stream()
        .map(
            paramName -> {
              var baselineParamName = resemblance(paramName, baselineParamNames);
              var paramType = paramName.equals(NamedVariable.DOTS) ? Type.DOTS : Type.ANY;
              baselineParamNames.add(baselineParamName);
              return new Parameter(baselineParamName, paramType);
            })
        .toList();
  }

  /// Returns a [Register] which resembles `nv` but syntactically valid and not in `existing`.
  private static Register resemblance(NamedVariable nv, Set<Register> existing) {
    var base = nv.equals(NamedVariable.DOTS) ? "ddd" : nv.name().replaceAll("[^a-zA-Z0-9_]", "_");
    if ((base.charAt(0) >= '0' && base.charAt(0) <= '9') || base.equals("_")) {
      base = "_" + base;
    }

    var result = base;
    var disambiguator = 1;
    while (existing.contains(Variable.register(result))) {
      result = base + disambiguator;
      disambiguator++;
    }

    return Variable.register(result);
  }

  public Module owner() {
    return owner;
  }

  public String name() {
    return name;
  }

  public @Unmodifiable List<NamedVariable> parameterNames() {
    return parameterNames;
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

  public Abstraction baseline() {
    return versions.firstEntry().getValue();
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

  public boolean containsIndex(int index) {
    return versions.containsKey(index);
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

  public Abstraction addVersion(List<Parameter> params, boolean isStub) {
    return owner.record(
        "Function#addVersion",
        List.of(this, params),
        () -> {
          var newVersion = new Abstraction(owner, params, isStub);
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
          if (version == baseline()) {
            throw new IllegalArgumentException("Can't remove baseline");
          }

          var index = versionIndices.remove(version);
          if (index == null) {
            throw new IllegalArgumentException("Version not found: " + version);
          }
          versions.remove(index);
          versionsSorted.remove(version);
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

    p.printAsList("(", ")", parameterNames);

    w.write(" {");
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
        });
    w.write("\n}");
  }

  public record ParseContext(
      Module owner, DeferredCallbacks<Module> postModule, @Nullable Object inner) {}

  @ParseMethod
  private Function(Parser p1, ParseContext ctx) {
    owner = ctx.owner;
    var p = p1.withContext(ctx.inner);
    var p2 = p.withContext(new Abstraction.ParseContext(owner, ctx.postModule, p.context()));

    var s = p.scanner();

    s.assertAndSkip("fun ");
    name = s.nextCharIs('`') ? Names.read(s, true) : s.readIdentifierOrKeyword();

    parameterNames = p.parseList("(", ")", NamedVariable.class);

    s.assertAndSkip('{');
    for (; !s.nextCharIs('}'); nextVersionIndex++) {
      CommentParser.skipComments(s);

      // Skip removed version but increment the index (hence the weird `for` loop).
      if (s.trySkip("<removed>")) {
        if (versions.isEmpty()) {
          throw s.fail("function's baseline can't be removed");
        }
        continue;
      }

      var version = p2.parse(Abstraction.class);
      versions.put(nextVersionIndex, version);
      versionIndices.put(version, nextVersionIndex);
      versionsSorted.add(version);
    }
    if (versions.isEmpty()) {
      throw s.fail("function must have at least one version (the baseline)");
    }
    s.assertAndSkip('}');
  }
}
