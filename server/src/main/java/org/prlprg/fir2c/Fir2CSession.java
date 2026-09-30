package org.prlprg.fir2c;

import com.google.common.collect.ImmutableSet;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.function.Supplier;
import org.jspecify.annotations.Nullable;
import org.prlprg.bc2fir.ModuleBcOriginMap;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.type.Repr;
import org.prlprg.session.RSession;

/// What one client has of a module's compiled C, across the code it was first sent and every
/// patch since (see `server/doc/lazy-versions.md`).
///
/// A module is compiled in pieces: first from its main function, and then, whenever a stub in the
/// client asks for its version, a patch that defines that version and whatever else it needs that
/// the client doesn't have. The pieces refer to each other by C name, so this keeps the names,
/// which stay valid even as the versions' signatures (which the names are made from) change, and
/// which are unique across every module the client loads (they're prefixed by [#id()]).
public final class Fir2CSession {
  /// Whether the client has a version, and as what.
  ///
  /// @param part The version's part of the C names of what the client calls (`Fir_ver_call_...`)
  ///     and initializes.
  /// @param returnRepr What `Fir_ver_call_...` returns: the representation of the version's
  ///     return type when it was compiled. The version's may have narrowed since (optimizing it
  ///     more can unbox it), but the client's code is what it is, so calls to it compiled later
  ///     must expect this and convert.
  /// @param stubId If the client has a stub for the version, its id.
  /// @param stubPart If the client has a stub for the version, the stub's part of its C names
  ///     (including of the `Fir_Stub` it's patched through), which is `part` until the version is
  ///     compiled.
  /// @param stubReturnRepr If the client has a stub for the version, what the stub returns
  ///     (`returnRepr` when it was compiled).
  public record VersionState(
      String part,
      Repr returnRepr,
      @Nullable Integer stubId,
      @Nullable String stubPart,
      @Nullable Repr stubReturnRepr) {
    /// Whether what the client calls is a stub (running its fallback), as opposed to the
    /// compiled version.
    public boolean isStub() {
      return stubId != null && part.equals(stubPart);
    }
  }

  private final String id;
  private final Module module;
  private final RSession rSession;
  private final @Nullable ModuleBcOriginMap bytecodes;
  private final ImmutableSet<Option> options;

  /// Functions the client has (their constants, initializer, and dispatch).
  private final Set<Function> compiledFunctions = new LinkedHashSet<>();

  /// Each version's part of its C names, assigned when first referred to (see
  /// [#part(Function, Abstraction, Supplier)]).
  private final Map<Abstraction, String> parts = new HashMap<>();
  /// Every part handed out, qualified by function name, so the C names are unique.
  private final Set<String> usedParts = new HashSet<>();
  /// What the client has, of the versions it has.
  private final Map<Abstraction, VersionState> versions = new HashMap<>();
  /// The function of every version the client has. Kept here because a version may be removed
  /// from its function (as unused) while the client still has it and asks for it.
  private final Map<Abstraction, Function> functions = new HashMap<>();
  /// Indexed by stub id.
  private final List<Abstraction> stubs = new ArrayList<>();

  private int promises = 0;
  private int patches = 0;

  /// @param id What stubs name this module to the server, so it can find this session. Also
  ///     prefixes every C name, so the client can have more than one module (for tests: one per
  ///     example). Empty for code compiled once, whose stubs are never compiled.
  public Fir2CSession(
      String id,
      Module module,
      RSession rSession,
      @Nullable ModuleBcOriginMap bytecodes,
      ImmutableSet<Option> options) {
    this.id = id;
    this.module = module;
    this.rSession = rSession;
    this.bytecodes = bytecodes;
    this.options = options;
  }

  public String id() {
    return id;
  }

  public Module module() {
    return module;
  }

  RSession rSession() {
    return rSession;
  }

  @Nullable ModuleBcOriginMap bytecodes() {
    return bytecodes;
  }

  ImmutableSet<Option> options() {
    return options;
  }

  /// What every C name of this module's code starts with, after `Fir_`.
  public String prefix() {
    return id.isEmpty() ? "" : id + "_";
  }

  // --- Functions ------------------------------------------------------------------------------

  boolean hasFunction(Function function) {
    return compiledFunctions.contains(function);
  }

  /// Record that the client gets `function`. `false` if it already has it.
  boolean addFunction(Function function) {
    return compiledFunctions.add(function);
  }

  // --- Versions -------------------------------------------------------------------------------

  /// How the client has `version`, or `null` if it doesn't.
  public @Nullable VersionState version(Abstraction version) {
    return versions.get(version);
  }

  /// Every version the client has a stub for, in order of stub id.
  public List<Abstraction> stubs() {
    return List.copyOf(stubs);
  }

  /// The function of `version`, which the client has.
  ///
  /// @throws IllegalArgumentException If the client doesn't have `version`.
  public Function functionOf(Abstraction version) {
    var function = functions.get(version);
    if (function == null) {
      throw new IllegalArgumentException("Client doesn't have this version: " + version);
    }
    return function;
  }

  /// The version whose stub has `stubId`.
  ///
  /// @throws IllegalArgumentException If there's no stub with that id.
  public Abstraction stub(int stubId) {
    if (stubId < 0 || stubId >= stubs.size()) {
      throw new IllegalArgumentException("No stub with id " + stubId + " in module " + id);
    }
    return stubs.get(stubId);
  }

  /// The part of `version`'s C names, assigning it from `defaultPart` (made unique within
  /// `function`) if it doesn't have one yet.
  ///
  /// Assigned once and kept, so the names stay valid once the client has them, even though the
  /// default is made from the version's signature, which may change.
  String part(Function function, Abstraction version, Supplier<String> defaultPart) {
    var part = parts.get(version);
    if (part == null) {
      part = freshPart(function, defaultPart.get());
      parts.put(version, part);
    }
    return part;
  }

  /// Record that the client gets `version` compiled.
  ///
  /// If the client has a stub for it, the stub keeps its part (its `Fir_Stub` is patched through
  /// it), so the compiled version gets a new one.
  ///
  /// @throws IllegalStateException If the client already has it compiled.
  void addCompiled(Function function, Abstraction version, Supplier<String> defaultPart) {
    var old = versions.get(version);
    if (old != null && !old.isStub()) {
      throw new IllegalStateException("Client already has this version compiled: " + version);
    }
    var returnRepr = version.returnType().kind().repr();
    if (old == null) {
      versions.put(
          version,
          new VersionState(part(function, version, defaultPart), returnRepr, null, null, null));
    } else {
      var newPart = freshPart(function, old.stubPart() + "_compiled");
      parts.put(version, newPart);
      versions.put(
          version,
          new VersionState(
              newPart, returnRepr, old.stubId(), old.stubPart(), old.stubReturnRepr()));
    }
    functions.put(version, function);
  }

  /// Record that the client gets a stub for `version`, and return it.
  ///
  /// @throws IllegalStateException If the client already has the version.
  VersionState addStub(Function function, Abstraction version, Supplier<String> defaultPart) {
    if (versions.containsKey(version)) {
      throw new IllegalStateException("Client already has this version: " + version);
    }
    var part = part(function, version, defaultPart);
    var returnRepr = version.returnType().kind().repr();
    var state = new VersionState(part, returnRepr, stubs.size(), part, returnRepr);
    stubs.add(version);
    versions.put(version, state);
    functions.put(version, function);
    return state;
  }

  private String freshPart(Function function, String part) {
    var qualified = function.name().name() + "/" + part;
    if (usedParts.add(qualified)) {
      return part;
    }
    for (var i = 2; ; i++) {
      if (usedParts.add(qualified + "_" + i)) {
        return part + "_" + i;
      }
    }
  }

  // --- Counters -------------------------------------------------------------------------------

  /// The next promise index, unique across the module's pieces.
  int nextPromise() {
    return promises++;
  }

  /// The next patch index, unique across the module's pieces.
  int nextPatch() {
    return patches++;
  }
}
