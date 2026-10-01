package org.prlprg.fir2c;

import com.google.common.collect.ImmutableSet;
import com.google.common.hash.HashCode;
import com.google.common.hash.Hashing;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Objects;
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
  /// One of the C names the client calls a version by (`Fir_ver_call_...`, a function pointer
  /// its current implementation is assigned to), with the calling convention it has.
  ///
  /// @param part The version's part of the name.
  /// @param returnRepr What a call returns: the representation of the version's return type
  ///     when the entry was made. When an implementation returns something else (optimizing the
  ///     version more can unbox it), the version gets a new entry, which calls compiled from
  ///     then on use, and the older entries are assigned adapters that convert.
  public record Entry(String part, Repr returnRepr) {}

  /// Whether the client has a version, and as what.
  ///
  /// @param entries The names the client calls the version by, oldest first; the last is what
  ///     calls compiled now use.
  /// @param implementations How many implementations of the version the client has, each a
  ///     function `Fir_ver_impl_..._<index>` with its own constants: a stub (running the
  ///     fallback) is one, and so is each compiled one (the first, and every update).
  /// @param stubId If the client has a stub for the version, its id.
  /// @param compiled Whether the client has the version compiled (else only its stub).
  /// @param ir What the client's compiled implementation was compiled from (a fingerprint of the
  ///     version's IR), to tell when the version changed since; `null` if it isn't compiled.
  public record VersionState(
      List<Entry> entries,
      int implementations,
      @Nullable Integer stubId,
      boolean compiled,
      @Nullable HashCode ir) {
    public Entry entry() {
      return entries.getLast();
    }

    /// The version's part of its current C names.
    public String part() {
      return entry().part();
    }

    /// What the client's current entry returns.
    public Repr returnRepr() {
      return entry().returnRepr();
    }

    /// The index of the client's current implementation.
    public int implementation() {
      return implementations - 1;
    }

    /// Whether what the client calls is a stub (running its fallback), as opposed to the
    /// compiled version.
    public boolean isStub() {
      return stubId != null && !compiled;
    }
  }

  /// A fingerprint of `version`'s IR, to tell whether it changed (see [VersionState#ir()]).
  public static HashCode fingerprint(Abstraction version) {
    return Hashing.sha256().hashUnencodedChars(version.toString());
  }

  private final String id;
  private final Module module;
  private final RSession rSession;
  private final @Nullable ModuleBcOriginMap bytecodes;
  private final ImmutableSet<Option> options;

  /// Functions the client has (their constants, initializer, and dispatch).
  private final Set<Function> compiledFunctions = new LinkedHashSet<>();
  /// How many generations of each function's dispatch and from-R entries the client has.
  private final Map<Function, Integer> entryGenerations = new HashMap<>();
  /// What each function's current entries dispatch among: its versions when they were generated,
  /// in dispatch order, by the C names they call them by, with their signatures.
  private final Map<Function, List<String>> entryCallees = new HashMap<>();

  /// Each version's part of its current C names, assigned when first referred to (see
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
  /// Entries the client has the definition of (the rest of the pieces declare them `extern`),
  /// qualified by function name like [#usedParts].
  private final Set<String> definedEntries = new HashSet<>();

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

  /// Every function the client has, in the order it got them.
  public List<Function> functions() {
    return List.copyOf(compiledFunctions);
  }

  /// The generation of `function`'s dispatch and from-R entries the client gets next (0 when the
  /// function is first compiled; a patch that regenerates them takes the next).
  int nextEntries(Function function) {
    return entryGenerations.merge(function, 1, Integer::sum) - 1;
  }

  /// Record what `function`'s current entries were generated from.
  void setEntryCallees(Function function, List<String> callees) {
    entryCallees.put(function, List.copyOf(callees));
  }

  /// What `function`'s current entries dispatch among (see [#setEntryCallees(Function, List)]).
  public List<String> entryCallees(Function function) {
    return entryCallees.getOrDefault(function, List.of());
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

  /// Record that the client gets an implementation of `version` compiled from its IR as it is
  /// now: its first, one replacing its stub, or one updating the compiled one it has (because
  /// the version changed since). Returns the state after, whose [VersionState#implementation()]
  /// is the new implementation's index.
  ///
  /// If what the new implementation returns isn't what the version's current entry returns, the
  /// version gets a new entry, named from `defaultPart` (see [Entry#returnRepr()]).
  VersionState addCompiled(Function function, Abstraction version, Supplier<String> defaultPart) {
    var old = versions.get(version);
    var returnRepr = version.returnType().kind().repr();
    var ir = fingerprint(version);
    VersionState state;
    if (old == null) {
      var entry = new Entry(part(function, version, defaultPart), returnRepr);
      state = new VersionState(List.of(entry), 1, null, true, ir);
    } else {
      var entries = new ArrayList<>(old.entries());
      if (old.returnRepr() != returnRepr) {
        var newPart = freshPart(function, defaultPart.get());
        parts.put(version, newPart);
        entries.add(new Entry(newPart, returnRepr));
      }
      state =
          new VersionState(List.copyOf(entries), old.implementations() + 1, old.stubId(), true, ir);
    }
    versions.put(version, state);
    functions.put(version, function);
    return state;
  }

  /// Record that the client gets a stub for `version`, and return it.
  ///
  /// @throws IllegalStateException If the client already has the version.
  VersionState addStub(Function function, Abstraction version, Supplier<String> defaultPart) {
    if (versions.containsKey(version)) {
      throw new IllegalStateException("Client already has this version: " + version);
    }
    var entry = new Entry(part(function, version, defaultPart), version.returnType().kind().repr());
    var state = new VersionState(List.of(entry), 1, stubs.size(), false, null);
    stubs.add(version);
    versions.put(version, state);
    functions.put(version, function);
    return state;
  }

  /// Every version the client has, in no particular order.
  public Set<Abstraction> versions() {
    return Set.copyOf(versions.keySet());
  }

  /// The entries of `version` the client doesn't have the definition of yet, and record that the
  /// piece being compiled defines them.
  List<Entry> takeUndefinedEntries(Abstraction version) {
    var state = Objects.requireNonNull(versions.get(version));
    var function = functionOf(version);
    var undefined = new ArrayList<Entry>();
    for (var entry : state.entries()) {
      if (definedEntries.add(function.name().name() + "/" + entry.part())) {
        undefined.add(entry);
      }
    }
    return undefined;
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
