package org.prlprg.fir.ir.module;

import java.util.Collections;
import java.util.Comparator;
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
import org.jetbrains.annotations.Unmodifiable;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.properties.FunctionUserProperties;
import org.prlprg.fir.ir.type.Repr;
import org.prlprg.fir.ir.type.Signature;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.parseprint.IrPrintContext;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public final class Function {
  // Backlink
  private final Module owner;

  // Data
  private final FunctionUserProperties userProperties = new FunctionUserProperties();
  private final Comments comments;
  private final NamedVariable name;
  private final List<NamedVariable> parameterNames;
  /// Versions are stored so that removing a version doesn't decrement other versions' indices,
  /// which would cause tricky bugs when said versions or later ones are referenced by serialized
  /// calls.
  private final SequencedMap<Integer, Abstraction> versions = new TreeMap<>();
  private final Map<Abstraction, Integer> versionIndices = new HashMap<>();
  private int nextVersionIndex = 0;

  // Cached
  /// See [#versionsSorted()]
  private final SortedSet<Abstraction> versionsSorted =
      new TreeSet<>(
          Comparator.<Abstraction>comparingInt(v -> !versions.isEmpty() && v == baseline() ? 1 : 0)
              .thenComparing(Comparator.naturalOrder()));

  Function(
      Module owner,
      NamedVariable name,
      List<NamedVariable> parameterNames,
      List<FunctionParameter> baselineParameters,
      boolean baselineIsStub) {
    comments = new Comments();
    this.owner = owner;
    this.name = name;
    this.parameterNames = List.copyOf(parameterNames);

    // Add baseline version
    addVersion(baselineParameters, baselineIsStub);
  }

  /// Create a function from already-constructed versions, e.g. ones that were just parsed.
  ///
  /// `versions` maps each version's index to the version. Indices may have gaps: those are removed
  /// versions, whose indices aren't reused (see [#removeVersion]). `nextVersionIndex` is the index
  /// the next [added][#addVersion] version gets, which is greater than every index in `versions`
  /// (it's *not* simply the last index plus one, because the last version(s) may be removed).
  ///
  /// @throws IllegalArgumentException If `versions` is empty, doesn't start at index 0 (the
  ///   baseline can't be removed), or has an index that isn't below `nextVersionIndex`.
  public Function(
      Module owner,
      NamedVariable name,
      List<NamedVariable> parameterNames,
      SequencedMap<Integer, Abstraction> versions,
      int nextVersionIndex) {
    if (versions.isEmpty()) {
      throw new IllegalArgumentException("Function must have at least one version (the baseline)");
    }
    if (versions.firstEntry().getKey() != 0) {
      throw new IllegalArgumentException("Function's baseline can't be removed");
    }
    if (versions.lastEntry().getKey() >= nextVersionIndex) {
      throw new IllegalArgumentException(
          "Function's version indices must all be below "
              + nextVersionIndex
              + ", but one is "
              + versions.lastEntry().getKey());
    }

    comments = new Comments();
    this.owner = owner;
    this.name = name;
    this.parameterNames = List.copyOf(parameterNames);
    this.nextVersionIndex = nextVersionIndex;

    this.versions.putAll(versions);
    for (var version : versions.entrySet()) {
      versionIndices.put(version.getValue(), version.getKey());
    }
    // After `versions` is fully populated, so `versionsSorted`'s comparator sees the baseline.
    versionsSorted.addAll(versions.values());
  }

  static List<FunctionParameter> computeBaselineParameters(List<NamedVariable> parameterNames) {
    var baselineParamNames = new HashSet<String>(parameterNames.size());
    return parameterNames.stream()
        .map(
            paramName -> {
              var baselineParamName = resemblance(paramName, baselineParamNames);
              var paramType = paramName.equals(NamedVariable.DOTS) ? Type.DOTS : Type.ANY_SEXP;
              baselineParamNames.add(baselineParamName);
              return new FunctionParameter(baselineParamName, paramType);
            })
        .toList();
  }

  /// A register name which resembles `nv` but is syntactically valid and not in `existing`.
  private static String resemblance(NamedVariable nv, Set<String> existing) {
    var base = Register.resemblance(nv.name());

    var result = base;
    var disambiguator = 1;
    while (existing.contains(result)) {
      result = base + disambiguator;
      disambiguator++;
    }

    return result;
  }

  public Module owner() {
    return owner;
  }

  public FunctionUserProperties userProperties() {
    return userProperties;
  }

  public Comments comments() {
    return comments;
  }

  public NamedVariable name() {
    return name;
  }

  public @Unmodifiable List<NamedVariable> parameterNames() {
    return parameterNames;
  }

  /// Use [#version(int)] to get the version at an index
  public @UnmodifiableView SequencedCollection<Abstraction> versions() {
    return Collections.unmodifiableSequencedCollection(versions.sequencedValues());
  }

  /// Versions that are sorted so that "better" ones are before "worse" ones: a version is
  /// "better" if its parameter types, effects, and return type are narrower (see
  /// [Abstraction#compareTo(Abstraction)]), or it's not baseline
  public @UnmodifiableView SortedSet<Abstraction> versionsSorted() {
    return Collections.unmodifiableSortedSet(versionsSorted);
  }

  /// Indexes of versions that exist in the function
  ///
  /// When a version removed, it's index isn't reused, because that leads to tricky bugs when
  /// said version or later ones are referenced by index (e.g. in serialized code)
  public @UnmodifiableView SequencedCollection<Integer> versionIndices() {
    return Collections.unmodifiableSequencedCollection(versions.sequencedKeySet());
  }

  /// The index the next [added][#addVersion] version gets, which is one past the highest index
  /// ever used (removed versions' indices aren't reused).
  public int nextVersionIndex() {
    return nextVersionIndex;
  }

  public Abstraction baseline() {
    return versions.firstEntry().getValue();
  }

  /// A function can only be dispatched if its baseline's parameter and return types are SEXPs
  public boolean canDispatch() {
    return baseline().parameters().stream()
            .allMatch(param -> param.type().kind().repr() == Repr.SEXP)
        && baseline().returnType().kind().repr() == Repr.SEXP;
  }

  /// @throws IllegalArgumentException If there's no version at the index
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

  /// Gets the *worst* version whose parameters are more permissive than `signature`, and whose
  /// return value is *not disjoint*
  public @Nullable Abstraction guessWorst(Signature signature) {
    for (var version : versionsSorted.reversed()) {
      if (signature.hasNarrowerParameters(version.signature())
          && (version.signature().returnType().isSubtypeOf(signature.returnType())
              || signature.returnType().isSubtypeOf(version.signature().returnType()))) {
        return version;
      }
    }
    return null;
  }

  /// Gets the best version whose signature can be substituted with `signature` in a call, i.e.
  /// the best version with more permissive parameters and more restrictive effects/return.
  public @Nullable Abstraction guess(Signature signature) {
    for (var version : versionsSorted) {
      if (signature.hasNarrowerParameters(version.signature())
          && version.signature().hasNarrowerPostconditions(signature)) {
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
                    && other.signature().hasNarrowerPostconditions(version.signature()));
  }

  public Abstraction addVersion(List<FunctionParameter> params, boolean isStub) {
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

  /// A function can be printed without any surrounding information, so this forwards to
  /// [IrPrintContext] and callers can just `p.print(function)`.
  @PrintMethod
  private void print(Printer p) {
    p.withContext(new IrPrintContext()).print(this);
  }
}
