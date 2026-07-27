package org.prlprg.fir.ir.module;

import java.util.Collections;
import java.util.Comparator;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import java.util.SortedSet;
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
  /// Versions that have been added to functions, so we can ensure the same version isn't added
  /// to multiple.
  private static final Set<Abstraction> PAIRED_VERSIONS = new HashSet<>();

  // Backlink
  private final Module owner;

  // Data
  private final FunctionUserProperties userProperties = new FunctionUserProperties();
  private final Comments comments;
  private final NamedVariable name;
  private final List<NamedVariable> parameterNames;
  private @Nullable Abstraction baseline;
  private final SortedSet<Abstraction> versions =
      new TreeSet<>(
          Comparator.<Abstraction>comparingInt(v -> v == baseline ? 1 : 0)
              .thenComparing(Comparator.naturalOrder()));

  Function(Module owner, NamedVariable name, List<NamedVariable> parameterNames) {
    comments = new Comments();
    this.owner = owner;
    this.name = name;
    this.parameterNames = List.copyOf(parameterNames);
  }

  /// Set the function's baseline.
  ///
  /// @throws IllegalStateException If it has already been set.
  public void addBaseline(Abstraction newBaseline) {
    if (baseline != null) {
      throw new IllegalStateException("Baseline already set");
    }
    baseline = newBaseline;
    addVersion(newBaseline);
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

  /// Returns the function's baseline.
  ///
  /// @throws IllegalStateException If the function was constructed without a baseline and it
  /// wasn't set.
  public Abstraction baseline() {
    if (baseline == null) {
      throw new IllegalStateException("baseline not yet set");
    }
    return baseline;
  }

  public @UnmodifiableView SortedSet<Abstraction> versions() {
    return Collections.unmodifiableSortedSet(versions);
  }

  /// A function can only be dispatched if its baseline's parameter and return types are SEXPs
  public boolean canDispatch() {
    return baseline().parameters().stream()
            .allMatch(param -> param.type().kind().repr() == Repr.SEXP)
        && baseline().returnType().kind().repr() == Repr.SEXP;
  }

  /// Gets the *worst* version whose parameters are more permissive than `signature`, and whose
  /// return value is *not disjoint*
  public @Nullable Abstraction guessWorst(Signature signature) {
    for (var version : versions.reversed()) {
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
    for (var version : versions) {
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
    if (!versions.contains(version)) {
      throw new IllegalArgumentException("Version not found: " + version);
    }

    return versions.headSet(version).reversed().stream()
        .filter(
            other ->
                other.signature().hasNarrowerParameters(version.signature())
                    && other.signature().hasNarrowerPostconditions(version.signature()));
  }

  /// Construct a new version, immediately add it to this function, and return it
  public Abstraction addVersion(List<FunctionParameter> params, boolean isStub) {
    var version = new Abstraction(owner, params, isStub);
    addVersion(version);
    return version;
  }

  /// Add an existing version.
  ///
  /// @throws IllegalStateException If the version is from a different module.
  /// @throws IllegalStateException If the version is in another function.
  public void addVersion(Abstraction version) {
    owner.record(
        "Function#addVersion",
        List.of(this, version),
        () -> {
          if (version.module() != owner) {
            throw new IllegalArgumentException("Can't add version in different module");
          }
          if (!PAIRED_VERSIONS.add(version)) {
            throw new IllegalArgumentException(
                versions.contains(version)
                    ? "Version was already added to this function"
                    : "Version belongs to another function");
          }
          versions.add(version);
        });
  }

  public void removeVersion(Abstraction version) {
    owner.record(
        "Function#removeVersion",
        List.of(this, version),
        () -> {
          if (version == baseline) {
            throw new IllegalArgumentException("Can't remove baseline");
          }

          if (!versions.remove(version)) {
            throw new IllegalArgumentException("Version not in this function");
          }
          var removed = PAIRED_VERSIONS.remove(version);
          assert removed : "version was in a function but not in `PAIRED_VERSIONS`";
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
