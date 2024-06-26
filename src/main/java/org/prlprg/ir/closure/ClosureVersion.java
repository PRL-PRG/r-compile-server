package org.prlprg.ir.closure;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableSet;
import com.google.common.collect.Streams;
import java.util.Optional;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.type.REffect;
import org.prlprg.ir.type.REffects;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.Troolean;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.UnreachableError;

/**
 * An IR closure version (baseline or optimized).
 *
 * <p>This is stored in an {@linkplain Closure IR closure}. It contains a {@linkplain CallContext
 * call context} and {@linkplain CFG control-flow-graph}. When the outer closure's GNU-R analogue
 * gets called, if the call context matches the version's context and there is no version with a
 * more specific matching context, this closure is <b>dispatched</b>: code compiled from its CFG is
 * evaluated. See {@link Closure}'s documentation for more details.
 */
public class ClosureVersion {
  private @Nullable Closure closure;
  private final boolean isBaseline;
  private final CallContext callContext;
  private Properties properties;
  private final CFG body;

  /**
   * Create a closure version for the the given call context, with empty properties and body.
   *
   * @param isBaseline Whether this is the closure's baseline or an optimized version. Iff baseline,
   *     it will be compiled with recording instructions.
   * @throws IllegalArgumentException If the closure is baseline and the call context isn't empty.
   */
  ClosureVersion(Closure closure, boolean isBaseline, CallContext callContext) {
    if (isBaseline && !callContext.isEmpty()) {
      throw new IllegalArgumentException("Baseline version must have an empty call context");
    }

    this.closure = closure;
    this.isBaseline = isBaseline;
    this.callContext = callContext;
    properties = Properties.EMPTY;
    body = new CFG();
  }

  /** The closure which contains this version. */
  public Closure closure() {
    assert closure != null
        : "closure should've been assigned at constructor or, if deserialized, in `lateAssignClosure`";
    return closure;
  }

  /**
   * Set a deserialized version's closure.
   *
   * <p>Shouldn't be called anywhere except {@code Closure#parse(Parser)}.
   */
  void lateAssignClosure(Closure closure) {
    assert this.closure == null : "closure already assigned";
    this.closure = closure;
  }

  /**
   * Whether this is the closure's baseline version (otherwise its an optimized one)?
   *
   * <p>The baseline version records information, optimized versions only record when deoptimizing.
   * The baseline version is guaranteed to have an empty call context (optimized versions can also
   * but don't have to). Every closure contains exactly one baseline version and zero or more
   * optimized versions. See {@link Closure}'s documentation for more details.
   *
   * <p>This is immutable.
   */
  public boolean isBaseline() {
    return isBaseline;
  }

  /**
   * Call context required by the closure version to be dispatched.
   *
   * <p>This is immutable.
   */
  public CallContext callContext() {
    return callContext;
  }

  /**
   * Properties of the closure version that are assumed by the caller to allow certain
   * optimizations.
   *
   * <p>This is mutable via {@link #setProperties}, <i>however</i> you are responsible for setting
   * properties that are guaranteed by the version's body.
   */
  public Properties properties() {
    return properties;
  }

  /**
   * Set the properties of the closure version.
   *
   * <p>The properties must be guaranteed by the version's body, this isn't checked.
   *
   * @throws IllegalArgumentException If the closure version is assigned less specific properties
   *     than it already has (doesn't make sense for it to become less optimized).
   */
  public void setProperties(Properties properties) {
    if (!properties.isSubsetOf(this.properties)) {
      throw new IllegalArgumentException(
          "New properties must be a subset of the old properties (doesn't make sense for it to become less optimized).");
    }

    this.properties = properties;
  }

  /**
   * IR corresponding to closure's original body. When translated into C code, it has the same
   * behavior under this version's call context.
   *
   * <p>This also contains the inner {@linkplain Promise promises}, since promises are stored
   * directly within {@link org.prlprg.ir.cfg.StmtData.MkProm MkProm} instructions.
   *
   * <p>This is mutable, <i>however</i> you are responsible for updating {@link #properties()} so
   * that they are the properties of the version's body.
   */
  public CFG body() {
    return body;
  }

  /**
   * Returns the index of itself in the parent closure.
   *
   * <p>The index is such that {@link #closure() closure}{@code .}{@link Closure#getVersion(int)
   * getVersion}{@code (index) == original}: index 0 is reserved for the baseline version, and the
   * remaining indices are for optimized versions in order from "most specific" to "least specific".
   *
   * @throws IllegalStateException If the closure version was removed from or otherwise not in its
   *     closure.
   */
  public int index() {
    try {
      return closure().indexOfVersion(this);
    } catch (IllegalArgumentException e) {
      throw new IllegalStateException(
          "Closure version was removed from or otherwise not in its closure:\n"
              + this
              + "\n=== not in ===\n"
              + closure,
          e);
    }
  }

  /**
   * Properties <b>for</b> a closure version that are <b>required</b> by the caller the version to
   * be dispatched and not another one (<b>preconditions</b>).
   *
   * <p>e.g. argument types and count. For now these are all properties of the arguments, but maybe
   * in the future they could cover the callee environment or other context.
   *
   * <p>This implements {@link Comparable} so that contexts that are strict subsets of other
   * contexts are "greater than" the other contexts. "Subset" means that any call that satisfies the
   * subset also satisfies the superset, "strict subset" is a subset that is not equal.
   */
  public record CallContext(
      ImmutableSet<ArgsAssumption> flags,
      ImmutableList<ImmutableSet<ArgAssumption>> argumentFlags,
      int numMissing)
      implements Lattice<CallContext>, Comparable<CallContext> {
    /** Context that doesn't require anything. All callers satisfy this context. */
    public static final CallContext EMPTY =
        new CallContext(ImmutableSet.of(), ImmutableList.of(), 0);

    public CallContext {
      if (numMissing < 0) {
        throw new IllegalArgumentException("# missing arguments must be non-negative");
      }
      if (argumentFlags.stream()
          .anyMatch(
              f ->
                  f.contains(ArgAssumption.IS_SIMPLE_INT)
                      && f.contains(ArgAssumption.IS_SIMPLE_REAL))) {
        throw new IllegalArgumentException("Argument can't be both simple int and simple real");
      }
      if (argumentFlags.stream()
          .anyMatch(
              f ->
                  (f.contains(ArgAssumption.IS_SIMPLE_INT)
                          || f.contains(ArgAssumption.IS_SIMPLE_REAL))
                      && !f.contains(ArgAssumption.IS_NOT_OBJECT))) {
        throw new IllegalArgumentException("Argument can't be both simple scalar and object");
      }
    }

    /** Whether the context has no requirements, i.e. equals {@link CallContext#EMPTY}. */
    public boolean isEmpty() {
      return this.equals(EMPTY);
    }

    /** Whether the context is only met when the assumption is. */
    public boolean requires(ArgsAssumption assumption) {
      return flags.contains(assumption);
    }

    /** Whether the context is only met when the assumption for the specific argument is. */
    public boolean requires(int argument, ArgAssumption assumption) {
      return argumentFlags.get(argument).contains(assumption);
    }

    /** Whether a call that satisfies this context also satisfies the given context. */
    @SuppressWarnings("UnstableApiUsage")
    @Override
    public boolean isSubsetOf(CallContext other) {
      return flags.containsAll(other.flags)
          && Streams.zip(
                  argumentFlags.stream(), other.argumentFlags.stream(), ImmutableSet::containsAll)
              .allMatch(b -> b)
          && (numMissing == other.numMissing
              || (numMissing < other.numMissing
                  && flags.contains(ArgsAssumption.NO_EXPLICITLY_MISSING_ARGUMENTS)));
    }

    /**
     * Create a context that is satisfied when <b>either</b> this and the other context are
     * satisfied.
     *
     * <p>This is actually corresponds to {@code &} in PIR's {@code Context.h}.
     */
    @Override
    public CallContext union(CallContext other) {
      var unionFlagsStream = flags.stream().filter(other.flags::contains);
      if (numMissing != other.numMissing) {
        unionFlagsStream =
            Stream.concat(
                unionFlagsStream, Stream.of(ArgsAssumption.NO_EXPLICITLY_MISSING_ARGUMENTS));
      }
      var unionFlags = unionFlagsStream.collect(ImmutableSet.toImmutableSet());
      @SuppressWarnings("UnstableApiUsage")
      var unionArgumentFlags =
          Streams.zip(
                  argumentFlags.stream(),
                  other.argumentFlags.stream(),
                  (a, b) -> a.stream().filter(b::contains).collect(ImmutableSet.toImmutableSet()))
              .collect(ImmutableList.toImmutableList());
      var unionNumMissing = Math.min(numMissing, other.numMissing);
      return new CallContext(unionFlags, unionArgumentFlags, unionNumMissing);
    }

    /**
     * Create a context that, when satisfied, means <b>both</b> this and the other context are
     * satisfied.
     *
     * <p>Returns {@code null} if one doesn't exist (due to a different number of missing
     * arguments).
     *
     * <p>This is actually corresponds to {@code |} in PIR's {@code Context.h}.
     */
    @Override
    public @Nullable CallContext intersection(CallContext other) {
      if (numMissing != other.numMissing) {
        var minContext = numMissing < other.numMissing ? this : other;
        if (minContext.flags.contains(ArgsAssumption.NO_EXPLICITLY_MISSING_ARGUMENTS)) {
          return null;
        }
      }

      var intersectionFlags =
          Stream.concat(
                  flags.stream().filter(other.flags::contains),
                  other.flags.stream().filter(flags::contains))
              .collect(ImmutableSet.toImmutableSet());
      @SuppressWarnings("UnstableApiUsage")
      var intersectionArgumentFlags =
          Streams.concat(
                  Streams.zip(
                      argumentFlags.stream(),
                      other.argumentFlags.stream(),
                      (a, b) ->
                          Stream.concat(
                                  a.stream().filter(b::contains), b.stream().filter(a::contains))
                              .collect(ImmutableSet.toImmutableSet())),
                  argumentFlags.stream().skip(other.argumentFlags.size()),
                  other.argumentFlags.stream().skip(argumentFlags.size()))
              .collect(ImmutableList.toImmutableList());
      var intersectionNumMissing = Math.max(numMissing, other.numMissing);
      return new CallContext(intersectionFlags, intersectionArgumentFlags, intersectionNumMissing);
    }

    @Override
    public int compareTo(ClosureVersion.CallContext o) {
      if (equals(o)) {
        return 0;
      }
      if (o.isSubsetOf(this)) {
        return -1;
      }
      if (isSubsetOf(o)) {
        return 1;
      }

      // A heuristic is to put contexts with less assumptions total first.
      if (flags.size() != o.flags.size()) {
        return Integer.compare(flags.size(), o.flags.size());
      }
      if (argumentFlags.size() != o.argumentFlags.size()) {
        return Integer.compare(argumentFlags.size(), o.argumentFlags.size());
      }
      for (int i = 0; i < argumentFlags.size(); i++) {
        if (argumentFlags.get(i).size() != o.argumentFlags.get(i).size()) {
          return Integer.compare(argumentFlags.get(i).size(), o.argumentFlags.get(i).size());
        }
      }
      if (numMissing != o.numMissing) {
        return Integer.compare(numMissing, o.numMissing);
      }

      // Ok, now we really don't try to use heuristics to decide which context is "smaller".
      // Hash code is usually unique, so this will return something arbitrary, but fast.
      if (hashCode() != o.hashCode()) {
        return Integer.compare(hashCode(), o.hashCode());
      }
      // Last resort: deep comparison.
      for (int i = 0; i < flags.size(); i++) {
        if (flags.contains(ArgsAssumption.values()[i])
            != o.flags.contains(ArgsAssumption.values()[i])) {
          return Boolean.compare(
              flags.contains(ArgsAssumption.values()[i]),
              o.flags.contains(ArgsAssumption.values()[i]));
        }
      }
      for (int i = 0; i < argumentFlags.size(); i++) {
        for (int j = 0; j < argumentFlags.get(i).size(); j++) {
          if (argumentFlags.get(i).contains(ArgAssumption.values()[j])
              != o.argumentFlags.get(i).contains(ArgAssumption.values()[j])) {
            return Boolean.compare(
                argumentFlags.get(i).contains(ArgAssumption.values()[j]),
                o.argumentFlags.get(i).contains(ArgAssumption.values()[j]));
          }
        }
      }
      // We checked equality at the beginning, so this shouldn't be possible.
      throw new UnreachableError(
          "Call contexts are not equal but the deep comparison didn't reveal any differences");
    }

    /** Flag in {@link CallContext} pertaining to all arguments in general. */
    public enum ArgsAssumption {
      /**
       * Explicitly missing is e.g. {@code f(,,)} ({@code f} is given 3 explicitly missing
       * arguments).
       *
       * <p>There can also be implicitly missing arguments, e.g. {@code f()}, but {@code f} takes 3
       * arguments.
       */
      NO_EXPLICITLY_MISSING_ARGUMENTS,
      /** i.e. the args are not named (? unless they're in the same order without any gaps ?). */
      CORRECT_ORDER_OF_ARGUMENTS,
      /** The number of args supplied is less than or equal to {@link Closure#numParameters}. */
      NOT_TOO_MANY_ARGUMENTS,
      /**
       * Arguments are statically matched.
       *
       * <p>TODO clarify this. It's very similar to CORRECT_ORDER_OF_ARGUMENTS, but neither seems to
       * imply the other.
       */
      STATICALLY_ARGMATCHED
    }

    /** Flag in {@link CallContext} pertaining to a specific argument. */
    public enum ArgAssumption {
      /** Argument isn't lazy. */
      IS_EAGER,
      /** Argument isn't reflective (? promise doesn't perform reflection ?). */
      IS_NON_REFLECTIVE,
      /** Argument isn't an object. */
      IS_NOT_OBJECT,
      /** Argument is a simple int: int scalar with no attributes or altrep. */
      IS_SIMPLE_INT,
      /** Argument is a simple real: double scalar with no attributes or altrep. */
      IS_SIMPLE_REAL
    }
  }

  /**
   * Properties <b>of</b> a closure version that are <b>assumed</b> by the caller to allow certain
   * optimizations (when the caller is also compiled code, and we statically know the exact version
   * that will be called, we can use its properties) (<b>postconditions</b>).
   *
   * <p>A closure version's properties are guaranteed when its call context is met.
   *
   * <p>e.g. evaluates all arguments, doesn't perform reflection.
   *
   * @see CallContext
   */
  public record Properties(ImmutableSet<Property> flags, ArgumentForce argumentForce)
      implements Lattice<Properties> {
    /** Properties that don't guarantee anything. */
    public static final Properties EMPTY =
        new Properties(ImmutableSet.of(), ArgumentForce.AMBIGUOUS);

    public Properties {
      if (flags.contains(Property.IS_EAGER)) {
        for (var argument : argumentForce.argIsForced) {
          if (argument != Troolean.YES) {
            throw new IllegalArgumentException(
                "If `flags` states that all arguments are evaluated, `argumentForce` must state that they are all forced");
          }
        }
      }
    }

    /** Whether these properties don't guarantee anything, i.e. equal {@link Properties#EMPTY}. */
    public boolean isEmpty() {
      return equals(EMPTY);
    }

    /** Whether the closure version eagerly evaluates all of its arguments (yes or maybe). */
    public YesOrMaybe evaluatesAllArguments() {
      return flags.contains(Property.IS_EAGER) ? YesOrMaybe.YES : YesOrMaybe.MAYBE;
    }

    /** Whether the closure version performs reflection (no or maybe). */
    public NoOrMaybe performsReflection() {
      return flags.contains(Property.NO_REFLECTION) ? NoOrMaybe.NO : NoOrMaybe.MAYBE;
    }

    /** Possible return type from calling this closure version with the given arguments. */
    public RType returnType(ImmutableList<RValue> args) {
      return RTypes.ANY;
    }

    /** Possible effects from calling this closure version with the given arguments. */
    public REffects effects(ImmutableList<RValue> args) {
      var effects = REffects.ARBITRARY;
      if (flags.contains(Property.NO_REFLECTION)) {
        var anyIsReflectivePromise = false;
        for (var i = 0; i < args.size(); i++) {
          if (args.get(i).type().isLazy() != Troolean.NO
              && argumentForce.argIsForced(i) != Troolean.NO) {
            anyIsReflectivePromise = true;
            break;
          }
        }

        if (!anyIsReflectivePromise) {
          effects = effects.without(REffect.Reflection);
        }
      }
      return effects;
    }

    // TODO: `RFunctionType` or `OverloadRType`? The above functions can be used by the generics
    //  implementation (generics are
    // [SAMs](https://stackoverflow.com/questions/17913409/what-is-a-sam-type-in-java)).

    /** Whether these properties guarantee everything that the given properties do. */
    @Override
    public boolean isSubsetOf(Properties other) {
      return flags.containsAll(other.flags) && argumentForce.isSubsetOf(other.argumentForce);
    }

    /** Create properties that only guarantee what both this and the other properties do. */
    @Override
    public Properties union(Properties other) {
      var unionFlags =
          flags.stream().filter(other.flags::contains).collect(ImmutableSet.toImmutableSet());
      var unionArgumentForce = argumentForce.union(other.argumentForce);
      return new Properties(unionFlags, unionArgumentForce);
    }

    /**
     * Create properties that guarantee everything that both this and the other properties do.
     *
     * <p>Returns {@code null} if the guarantees conflict so that such properties can't exist.
     */
    @Override
    public @Nullable Properties intersection(Properties other) {
      var intersectionFlags =
          Stream.concat(flags.stream(), other.flags.stream())
              .collect(ImmutableSet.toImmutableSet());
      var intersectionArgumentForce = argumentForce.intersection(other.argumentForce);
      if (intersectionArgumentForce == null) {
        return null;
      }
      return new Properties(intersectionFlags, intersectionArgumentForce);
    }

    /**
     * Flag in {@link Properties} (flag of a closure version which allows optimizations in the
     * caller).
     */
    public enum Property {
      /** Closure evaluates all of its arguments. */
      IS_EAGER,
      /** Closure doesn't perform reflection in an outside environment. */
      NO_REFLECTION
    }

    /**
     * Which arguments are guaranteed to be or not be forced, and which guaranteed forced ones are
     * also guaranteed to be forced before others.
     *
     * @param argIsForced Arguments that are guaranteed forced or not forced.
     *     <p>Any additional arguments are {@link Troolean#MAYBE} if in the closure's parameters.
     * @param orderedForcedArgs All arguments before this index are both guaranteed forced and
     *     guaranteed to be forced in the same order they are as parameters.
     */
    public record ArgumentForce(ImmutableList<Troolean> argIsForced, int orderedForcedArgs)
        implements Lattice<ArgumentForce> {
      /** No arguments are guaranteed to be forced. */
      public static final ArgumentForce AMBIGUOUS = new ArgumentForce(ImmutableList.of(), 0);

      /** Whether the argument at the given index is never, maybe, or always forced. */
      public Troolean argIsForced(int index) {
        return index < argIsForced.size() ? argIsForced.get(index) : Troolean.MAYBE;
      }

      /** Whether this contains all guarantees the given data-structure does. */
      @SuppressWarnings("UnstableApiUsage")
      @Override
      public boolean isSubsetOf(ArgumentForce other) {
        return argIsForced.size() >= other.argIsForced.size()
            && Streams.zip(argIsForced.stream(), other.argIsForced.stream(), Troolean::isSubsetOf)
                .allMatch(b -> b)
            && orderedForcedArgs >= other.orderedForcedArgs;
      }

      /** Create a data-structure with only the guarantees that both data-structures have. */
      @Override
      public ArgumentForce union(ArgumentForce other) {
        @SuppressWarnings("UnstableApiUsage")
        var unionArgIsForced =
            Streams.zip(argIsForced.stream(), other.argIsForced.stream(), (a, b) -> a.union(b))
                .collect(Collectors.toList());
        while (!unionArgIsForced.isEmpty() && unionArgIsForced.getLast() == Troolean.MAYBE) {
          unionArgIsForced.removeLast();
        }
        var unionOrderedForcedArgs = Math.min(orderedForcedArgs, other.orderedForcedArgs);
        return new ArgumentForce(ImmutableList.copyOf(unionArgIsForced), unionOrderedForcedArgs);
      }

      /**
       * Create a data-structure with the guarantees of both data-structures.
       *
       * <p>Returns {@code null} if they conflict so that such a data-structure can't exist (if one
       * guarantees an argument is forced and the other guarantees that argument is not forced).
       */
      @SuppressWarnings("OptionalGetWithoutIsPresent")
      @Override
      public @Nullable ArgumentForce intersection(ArgumentForce other) {
        @SuppressWarnings("UnstableApiUsage")
        var unionArgIsForced =
            Streams.concat(
                    Streams.zip(
                        argIsForced.stream(),
                        other.argIsForced.stream(),
                        (a, b) -> Optional.ofNullable(a.intersection(b))),
                    argIsForced.stream().skip(other.argIsForced.size()).map(Optional::of),
                    other.argIsForced.stream().skip(argIsForced.size()).map(Optional::of))
                .toList();
        if (unionArgIsForced.stream().anyMatch(Optional::isEmpty)) {
          return null;
        }
        var unionOrderedForcedArgs = Math.max(orderedForcedArgs, other.orderedForcedArgs);
        return new ArgumentForce(
            unionArgIsForced.stream().map(Optional::get).collect(ImmutableList.toImmutableList()),
            unionOrderedForcedArgs);
      }

      public ArgumentForce {
        if (!argIsForced.isEmpty() && argIsForced.getLast() == Troolean.MAYBE) {
          throw new IllegalArgumentException(
              "Normalize this by removing trailing ambiguously-forced arguments");
        }
        for (int i = 0; i < orderedForcedArgs; i++) {
          if (argIsForced.size() < i || argIsForced.get(i) != Troolean.YES) {
            throw new IllegalArgumentException(
                "Argument "
                    + i
                    + " is guaranteed to be ordered forced (in `orderedForcedArgs`), but not guaranteed to be forced itself (in `argIsForced`)");
          }
        }
      }
    }
  }

  /**
   * Verify all {@link CFG}s within this version (its body, and those in inner closures and
   * promises).
   */
  public void verify() {
    // `MkCls` and `MkProm` verify their inner closure and promise.
    body.verify();
  }

  // region serialization and deserialization
  @ParseMethod
  private static ClosureVersion parse(Parser p) {
    return new ClosureVersion(p);
  }

  /** Deserializing constructor (so we can set the final fields). */
  private ClosureVersion(Parser p) {
    var s = p.scanner();

    isBaseline = !s.nextCharsAre("CallContext");
    callContext = isBaseline ? CallContext.EMPTY : p.parse(CallContext.class);
    properties = s.trySkip("has") ? p.parse(Properties.class) : Properties.EMPTY;
    s.assertAndSkip('{');
    body = p.parse(CFG.class);
    s.assertAndSkip('}');
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (!isBaseline) {
      p.print(callContext);
      w.write(' ');
    }
    if (!properties.isEmpty()) {
      w.write(" has ");
      w.runIndented(() -> p.print(properties));
      w.write(' ');
    }
    w.write("{");
    w.runIndented(
        () -> {
          w.write('\n');
          p.print(body);
        });
    w.write("\n}");
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
