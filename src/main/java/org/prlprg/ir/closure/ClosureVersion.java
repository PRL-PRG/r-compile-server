package org.prlprg.ir.closure;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableSet;
import com.google.common.collect.Streams;
import java.util.Objects;
import java.util.Optional;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.CFGParsePrint;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.cfg.NodeId;
import org.prlprg.ir.effect.REffect;
import org.prlprg.ir.effect.REffects;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.YesOrMaybe;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.TaggedElem;

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
   * @throws IllegalArgumentException If the call context has a different number of parameter types
   *     than the closure's number of parameters.
   */
  ClosureVersion(Closure closure, boolean isBaseline, CallContext callContext) {
    if (isBaseline && !callContext.isEmpty()) {
      throw new IllegalArgumentException("Baseline version must have an empty call context");
    }
    if (!isBaseline && callContext.paramTypes == null) {
      throw new UnsupportedOperationException(
          "Optimized version's call context must have a fixed number of parameters (`paramTypes != null`)");
    }
    if (callContext.paramTypes != null
        && callContext.paramTypes.size() != closure.numParameters()) {
      throw new IllegalArgumentException(
          "Call context must have the same number of parameter types as the number of parameters");
    }

    this.closure = closure;
    this.isBaseline = isBaseline;
    this.callContext = callContext;
    properties = Properties.EMPTY;
    body =
        new CFG(
            closure.parameters().stream().map(TaggedElem::tagOrEmpty).toList(),
            callContext.paramTypes);
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
   * <p>Specifically, each param's type, or {@code null} if we don't even know what number of
   * params.
   *
   * <p>This implements {@link Comparable} so that contexts that are strict subsets of other
   * contexts are "greater than" the other contexts. "Subset" means that any call that satisfies the
   * subset also satisfies the superset, "strict subset" is a subset that is not equal.
   */
  public record CallContext(@Nullable ImmutableList<RType> paramTypes)
      implements Lattice<CallContext>, Comparable<CallContext> {
    /** Context that doesn't require anything. All callers satisfy this context. */
    public static final CallContext EMPTY = new CallContext(null);

    /** Whether the context has no requirements, i.e. equals {@link CallContext#EMPTY}. */
    public boolean isEmpty() {
      return this.equals(EMPTY);
    }

    /** Whether the context is met given the argument types. */
    public boolean permits(Iterable<RType> argTypes) {
      // Return `true` if this has no argument requirements.
      if (paramTypes == null) {
        return true;
      }

      var argTypesIter = argTypes.iterator();
      for (var i = 0; i < paramTypes.size(); i++) {
        // Return `false` if too few arguments, or the type isn't correct.
        if (!argTypesIter.hasNext() || !permits(i, argTypesIter.next())) {
          return false;
        }
      }

      // Return `false` if too many arguments.
      return !argTypesIter.hasNext();
    }

    /**
     * Whether the context is met iff the argument at the given index has the given type, assuming
     * other argument types and assumptions are permitted.
     */
    private boolean permits(int argument, RType type) {
      return paramTypes == null
          || (argument < paramTypes.size() && type.isSubsetOf(paramTypes.get(argument)));
    }

    /**
     * Whether the context is <i>not</i> met iff the argument at the given index <i>doesn't</i> have
     * the given type.
     */
    public boolean requires(int argument, RType type) {
      return paramTypes != null
          && (argument >= paramTypes.size() || paramTypes.get(argument).isSubsetOf(type));
    }

    /** Whether a call that satisfies this context also satisfies the given context. */
    @SuppressWarnings("UnstableApiUsage")
    @Override
    public boolean isSubsetOf(CallContext other) {
      return other.paramTypes == null
          || (paramTypes != null
              && paramTypes.size() == other.paramTypes.size()
              && Streams.zip(paramTypes.stream(), other.paramTypes.stream(), RType::isSubsetOf)
                  .allMatch(b -> b));
    }

    /**
     * Create a context that is satisfied when <b>either</b> this and the other context are
     * satisfied.
     *
     * @throws UnsupportedOperationException If the contexts have different numbers of parameters.
     */
    @SuppressWarnings("UnstableApiUsage")
    @Override
    public CallContext unionOf(CallContext other) {
      if (paramTypes == null) {
        return other;
      }
      if (other.paramTypes == null) {
        return this;
      }

      if (paramTypes.size() != other.paramTypes.size()) {
        throw new UnsupportedOperationException(
            "Can't union contexts with different numbers of parameters");
      }

      return new CallContext(
          Streams.zip(paramTypes.stream(), other.paramTypes.stream(), RType::union)
              .collect(ImmutableList.toImmutableList()));
    }

    /**
     * Create a context that, when satisfied, means <b>both</b> this and the other context are
     * satisfied.
     *
     * <p>Returns {@code null} if one doesn't exist (e.g. due to incompatible parameter types).
     *
     * @throws UnsupportedOperationException If the contexts have different numbers of parameters.
     */
    @SuppressWarnings("UnstableApiUsage")
    @Override
    public @Nullable CallContext intersectionOf(CallContext other) {
      if (paramTypes == null) {
        return other;
      }
      if (other.paramTypes == null) {
        return this;
      }

      if (paramTypes.size() != other.paramTypes.size()) {
        throw new UnsupportedOperationException(
            "Can't intersect contexts with different numbers of parameters");
      }

      var paramTypes =
          Streams.zip(this.paramTypes.stream(), other.paramTypes.stream(), RType::intersection)
              .collect(ImmutableList.toImmutableList());
      if (paramTypes.stream().anyMatch(RType::isNothing)) {
        return null;
      }

      return new CallContext(paramTypes);
    }

    @SuppressWarnings("UnstableApiUsage")
    @Override
    public int compareTo(CallContext o) {
      if (equals(o)) {
        return 0;
      }
      if (o.isSubsetOf(this)) {
        return -1;
      }
      if (isSubsetOf(o)) {
        return 1;
      }

      if (paramTypes == null || o.paramTypes == null) {
        throw new UnsupportedOperationException(
            "Didn't implement comparison for contexts with `null` parameter types that aren't handled by the above");
      }

      // A heuristic is to put contexts with more subtyping parameters first.
      int numSubtypes =
          Streams.zip(
                  paramTypes.stream(),
                  o.paramTypes.stream(),
                  (a, b) -> a.isSubsetOf(b) ? 1 : b.isSubsetOf(a) ? -1 : 0)
              .reduce(0, Integer::sum);
      if (numSubtypes != 0) {
        return numSubtypes;
      }

      // Ok, now we really don't try to use heuristics to decide which context is "smaller".
      // Hash code is usually unique, so this will return something arbitrary, but fast.
      if (hashCode() != o.hashCode()) {
        return Integer.compare(hashCode(), o.hashCode());
      }
      // Last resort: `toString()`.
      return toString().compareTo(o.toString());
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
          if (argument != Maybe.YES) {
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
    public RType returnType(ImmutableList<Node<?>> ignored) {
      // TODO
      return RType.ANY;
    }

    /** Possible effects from calling this closure version with the given arguments. */
    public REffects effects(ImmutableList<Node<?>> args) {
      var effects = REffects.ARBITRARY;
      if (flags.contains(Property.NO_REFLECTION)) {
        var anyIsReflectivePromise = false;
        for (var i = 0; i < args.size(); i++) {
          if (args.get(i).type().isLazy() != Maybe.NO && argumentForce.argIsForced(i) != Maybe.NO) {
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

    public Properties withFlags(Property... newFlags) {
      return new Properties(
          ImmutableSet.<Property>builder().addAll(flags).add(newFlags).build(), argumentForce);
    }

    /** Whether these properties guarantee everything that the given properties do. */
    @Override
    public boolean isSubsetOf(Properties other) {
      return flags.containsAll(other.flags) && argumentForce.isSubsetOf(other.argumentForce);
    }

    /** Create properties that only guarantee what both this and the other properties do. */
    @Override
    public Properties unionOf(Properties other) {
      var unionFlags =
          flags.stream().filter(other.flags::contains).collect(ImmutableSet.toImmutableSet());
      var unionArgumentForce = argumentForce.unionOf(other.argumentForce);
      return new Properties(unionFlags, unionArgumentForce);
    }

    /**
     * Create properties that guarantee everything that both this and the other properties do.
     *
     * <p>Returns {@code null} if the guarantees conflict so that such properties can't exist.
     */
    @Override
    public @Nullable Properties intersectionOf(Properties other) {
      var intersectionFlags =
          Stream.concat(flags.stream(), other.flags.stream())
              .collect(ImmutableSet.toImmutableSet());
      var intersectionArgumentForce = argumentForce.intersectionOf(other.argumentForce);
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
     *     <p>Any additional arguments are {@link Maybe#MAYBE} if in the closure's parameters.
     * @param orderedForcedArgs All arguments before this index are both guaranteed forced and
     *     guaranteed to be forced in the same order they are as parameters.
     */
    public record ArgumentForce(ImmutableList<Maybe> argIsForced, int orderedForcedArgs)
        implements Lattice<ArgumentForce> {
      /** No arguments are guaranteed to be forced. */
      public static final ArgumentForce AMBIGUOUS = new ArgumentForce(ImmutableList.of(), 0);

      /** Whether the argument at the given index is never, maybe, or always forced. */
      public Maybe argIsForced(int index) {
        return index < argIsForced.size() ? argIsForced.get(index) : Maybe.MAYBE;
      }

      /** Whether this contains all guarantees the given data-structure does. */
      @SuppressWarnings("UnstableApiUsage")
      @Override
      public boolean isSubsetOf(ArgumentForce other) {
        return argIsForced.size() >= other.argIsForced.size()
            && Streams.zip(argIsForced.stream(), other.argIsForced.stream(), Maybe::isSubsetOf)
                .allMatch(b -> b)
            && orderedForcedArgs >= other.orderedForcedArgs;
      }

      /** Create a data-structure with only the guarantees that both data-structures have. */
      @Override
      public ArgumentForce unionOf(ArgumentForce other) {
        @SuppressWarnings("UnstableApiUsage")
        var unionArgIsForced =
            Streams.zip(argIsForced.stream(), other.argIsForced.stream(), Maybe::union)
                .collect(Collectors.toList());
        while (!unionArgIsForced.isEmpty() && unionArgIsForced.getLast() == Maybe.MAYBE) {
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
      public @Nullable ArgumentForce intersectionOf(ArgumentForce other) {
        @SuppressWarnings("UnstableApiUsage")
        var unionArgIsForced =
            Streams.concat(
                    Streams.zip(
                        argIsForced.stream(),
                        other.argIsForced.stream(),
                        (a, b) -> Optional.ofNullable(a.intersectionOf(b))),
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
        if (!argIsForced.isEmpty() && argIsForced.getLast() == Maybe.MAYBE) {
          throw new IllegalArgumentException(
              "Normalize this by removing trailing ambiguously-forced arguments");
        }
        for (int i = 0; i < orderedForcedArgs; i++) {
          if (argIsForced.size() < i || argIsForced.get(i) != Maybe.YES) {
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
  record ParseContext(boolean isBaseline, @Nullable Object inner) {}

  /** Deserializing constructor (so we can set the final fields). */
  @ParseMethod
  private ClosureVersion(Parser p) {
    this(p, new ParseContext(false, p.context()));
  }

  /** Deserializing constructor (so we can set the final fields). */
  @ParseMethod
  private ClosureVersion(Parser p1, ParseContext ctx) {
    this.isBaseline = ctx.isBaseline();
    var p = p1.withContext(ctx.inner());
    var s = p.scanner();

    var paramNodeIdsBuilder = ImmutableList.<NodeId<?>>builder();
    var paramTypesBuilder = isBaseline ? null : ImmutableList.<RType>builder();

    s.assertAndSkip('(');
    if (!s.trySkip(')')) {
      do {
        paramNodeIdsBuilder.add(p.parse(NodeId.class));
        if (!isBaseline) {
          s.assertAndSkip(':');
          paramTypesBuilder.add(p.parse(RType.class));
        }
      } while (s.trySkip(','));
      s.assertAndSkip(')');
    }

    callContext = new CallContext(isBaseline ? null : paramTypesBuilder.build());
    properties = s.trySkip("has") ? p.parse(Properties.class) : Properties.EMPTY;
    s.assertAndSkip('{');
    body = p.parse(CFG.class, new CFGParsePrint.ParamsContext(paramNodeIdsBuilder.build()));
    s.assertAndSkip('}');
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write('(');
    w.runIndented(
        () -> {
          for (var i = 0; i < closure().numParameters(); i++) {
            if (i != 0) {
              w.write(",\n");
            }
            p.print(body.params().get(i));
            if (!isBaseline) {
              w.write(':');
              p.print(Objects.requireNonNull(callContext.paramTypes).get(i));
            }
          }
        });
    w.write(')');

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
