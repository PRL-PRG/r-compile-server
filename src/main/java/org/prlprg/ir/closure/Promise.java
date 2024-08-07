package org.prlprg.ir.closure;

import com.google.common.collect.ImmutableSet;
import java.util.List;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.bc.Bc;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.ir.type.REffect;
import org.prlprg.ir.type.REffects;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.Troolean;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Pair;

/**
 * IR for a promise used by an IR {@linkplain ClosureVersion closure version}.
 *
 * <p>Contains a {@link BCodeSXP} which is the GNU-R promise code, {@link CFG} which is the compiled
 * {@linkplain org.prlprg.ir IR} code, an {@link RValue} which is the eager value (if known), an
 * {@link RValue} which is the environment that code is evaluated in, and {@link Promise.Properties}
 * which are guarantees that the promise invoker can assume for its own optimizations.
 */
public final class Promise extends CodeObject {
  // The non-final fields are only non-final so that they can be set in `LateConstruct`.
  // Otherwise they are effectively final.
  private Bc bc;
  private CFG body;
  private @IsEnv RValue env;
  // Except `properties` is set even after `LateConstruct`.
  private Properties properties;

  /**
   * Create a promise with the given code (both GNU-R and IR), environment, and properties.
   *
   * <p>This should probably only be called from the compiler.
   *
   * <p>IR code is assumed to correspond to the GNU-R bytecode, and eager value and properties are
   * assumed to be correct.
   *
   * @param name A descriptive name for the promise for debugging. Pass the empty string if there
   *     isn't a good one.
   * @throws IllegalArgumentException If {@code env} isn't statically known to be an environment/
   */
  public Promise(String name, Bc bc, CFG body, @IsEnv RValue env, Properties properties) {
    super(name);
    if (env.isEnv() != Troolean.YES) {
      throw new IllegalArgumentException("`env` must be statically known to be an environment.");
    }

    this.bc = bc;
    this.body = body;
    this.env = env;
    this.properties = properties;
  }

  /** The promise code as GNU-R bytecode. */
  public Bc origin() {
    return bc;
  }

  /** The promise code as an AST. */
  public @Nullable SEXP ast() {
    return bc.consts().getFirst();
  }

  /** The promise code as {@linkplain org.prlprg.ir IR}. */
  public CFG body() {
    return body;
  }

  /** The environment that the promise gets evaluated in. */
  public @IsEnv RValue env() {
    return env;
  }

  /** Properties of a promise that are assumed by the invoker to allow certain optimizations. */
  public Properties properties() {
    return properties;
  }

  /**
   * The eager value of the promise, if known.
   *
   * <p>This is in {@link #properties()} because it's one of the things inferred from the promise
   * body (similar to whether it performs reflection).
   */
  public @Nullable RValue eagerValue() {
    return properties.eagerValue();
  }

  /**
   * Set the properties of the promise.
   *
   * <p>The properties must be guaranteed by the promise's body, this isn't checked.
   *
   * @throws IllegalArgumentException If the promise is assigned less specific properties than it
   *     already has (doesn't make sense for it to become less optimized). <b>OR</b> if the promise
   *     previously had an eager value, and now it has a different one (also doesn't make sense).
   */
  public void setProperties(Properties properties) {
    if (!properties.isSubsetOf(this.properties)) {
      throw new IllegalArgumentException(
          "New properties must be a subset of the old properties (doesn't make sense for it to become less optimized).");
    }

    this.properties = properties;
  }

  @Override
  public @UnmodifiableView List<Node> outerCfgNodes() {
    return properties.eagerValue != null ? List.of(properties.eagerValue, env) : List.of(env);
  }

  @Override
  public void unsafeReplaceOuterCfgNode(Node oldNode, Node newNode) {
    if (properties.eagerValue != null && properties.eagerValue.equals(oldNode)) {
      if (!(newNode instanceof RValue newEagerValue)) {
        throw new IllegalArgumentException(
            "Promise replacement `eagerValue` node must be an RValue.");
      }
      properties = properties.withEagerValue(newEagerValue);
    }

    if (env.equals(oldNode)) {
      if (!(newNode instanceof RValue newEnv)) {
        throw new IllegalArgumentException("Promise replacement `env` node must be an RValue.");
      }
      if (newEnv.isEnv() != Troolean.YES) {
        throw new IllegalArgumentException(
            "Promise replacement `env` node must be statically known to be an environment.");
      }
      env = newEnv;
    }
  }

  @Override
  public void verifyOuterCfgRValuesAreOfCorrectTypes() {
    if (env.isEnv() != Troolean.YES) {
      throw new IllegalStateException(
          "Promise `env` must be statically known to be an environment.");
    }
  }

  /**
   * Verify all {@link CFG}s within this promise (its body, and those in inner closures and
   * promises).
   */
  @Override
  public void verify() {
    // `MkCls` and `MkProm` verify their inner closure and promise.
    body.verify();
  }

  /**
   * Properties of a promise that are assumed by the invoker to allow certain optimizations
   * (<b>postconditions</b>).
   *
   * <p>Currently promises don't require any assumptions, since they have no arguments (although
   * maybe they should have assumptions based on where they are forced). Therefore a promise's
   * properties are always guaranteed to hold.
   *
   * <p>Also, currently the only property is that a promise doesn't perform reflection.
   */
  public record Properties(ImmutableSet<Property> flags, @Nullable RValue eagerValue)
      implements Lattice<Properties> {
    /** Properties that don't guarantee anything. */
    public static final Properties EMPTY = new Properties(ImmutableSet.of(), null);

    /** Returns the same properties but with a different eager value. */
    public Properties withEagerValue(RValue eagerValue) {
      return new Properties(flags, eagerValue);
    }

    /** Whether the properties don't guarantee anything, i.e. equal {@link Properties#EMPTY}. */
    public boolean isEmpty() {
      return equals(EMPTY);
    }

    /** Whether the promise performs reflection (no or maybe). */
    public NoOrMaybe performsReflection() {
      return flags.contains(Property.NO_REFLECTION) ? NoOrMaybe.NO : NoOrMaybe.MAYBE;
    }

    /** Possible effects from evaluating this promise. */
    public REffects effects() {
      var effects = REffects.ARBITRARY;
      if (flags.contains(Property.NO_REFLECTION)) {
        effects = effects.without(REffect.Reflection);
      }
      return effects;
    }

    /**
     * Whether these properties guarantee everything that the other properties do.
     *
     * @throws IllegalArgumentException If both properties have different non-null eager values.
     */
    @Override
    public boolean isSubsetOf(Properties other) {
      if (eagerValue != null && other.eagerValue != null && !eagerValue.equals(other.eagerValue)) {
        throw new IllegalArgumentException("Properties have different non-null eager values.");
      }

      return flags.containsAll(other.flags) && (eagerValue != null || other.eagerValue == null);
    }

    /**
     * Returns properties that only guarantee what both these and the other properties do.
     *
     * @throws IllegalArgumentException If both properties have different non-null eager values.
     */
    @Override
    public Properties union(Properties other) {
      if (eagerValue != null && other.eagerValue != null && !eagerValue.equals(other.eagerValue)) {
        throw new IllegalArgumentException("Properties have different non-null eager values.");
      }

      return new Properties(
          flags.stream().filter(other.flags::contains).collect(ImmutableSet.toImmutableSet()),
          eagerValue == null ? null : other.eagerValue);
    }

    /**
     * Returns properties that guarantee everything that these and the other properties do.
     *
     * @throws IllegalArgumentException If both properties have different non-null eager values.
     */
    @Override
    public Properties intersection(Properties other) {
      if (eagerValue != null && other.eagerValue != null && !eagerValue.equals(other.eagerValue)) {
        throw new IllegalArgumentException("Properties have different non-null eager values.");
      }

      return new Properties(
          ImmutableSet.<Property>builder().addAll(flags).addAll(other.flags).build(),
          eagerValue != null ? eagerValue : other.eagerValue);
    }

    /** Flag in {@link Properties} (flag of a promise which allows optimizations in the invoker). */
    public enum Property {
      /** Promise doesn't perform reflection in an outside environment. */
      NO_REFLECTION
    }
  }

  // region serialization and deserialization
  /**
   * Return a promise, and then replace its data with that of another promise later.
   *
   * <p>This is necessary for deserialization, since we deserialize {@link
   * org.prlprg.ir.cfg.StmtData.MkProm StmtData.MkProm} before we deserialize the promise it
   * contains; we give {@link org.prlprg.ir.cfg.StmtData.MkProm MkProm} the returned promise, which
   * is initially filled with misc data, but is late-assigned before the entire closure is returned
   * to code outside the package.
   */
  static Pair<Promise, Promise.LateConstruct> lateConstruct(String name) {
    var promise = new Promise(name, Bc.empty(), new CFG(), StaticEnv.NOT_CLOSED, Properties.EMPTY);
    return Pair.of(promise, promise.new LateConstruct());
  }

  public final class LateConstruct extends CodeObject.LateConstruct<Promise> {
    private LateConstruct() {
      super();
    }

    @Override
    public void doSet(Promise data) {
      bc = data.bc;
      body = data.body;
      env = data.env;
      properties = data.properties;
    }
  }

  /** Deserializing constructor (so we can set the final fields). */
  @ParseMethod
  private Promise(Parser p, ClosureParseContext ctx) {
    super("prom", p, ctx);
    var idIndex = ctx.lastYieldedIdIndex();

    var s = p.scanner();

    s.assertAndSkip("env");
    env = p.parse(RValue.class);
    properties = s.trySkip("has") ? p.parse(Properties.class) : Properties.EMPTY;

    s.assertAndSkip("{");

    bc = p.parse(Bc.class);
    s.assertAndSkip("=== IR ===");
    body = p.withContext(ctx.ref(new NodeIdQualifier(name, idIndex))).parse(CFG.class);

    s.assertAndSkip('}');

    if (ctx instanceof ClosureParseContext.Outermost o) {
      o.parseRemaining(p);
    }
  }

  // The class doesn't escape its visibility, because this is a protected method of a sealed class.
  @Override
  protected void print(
      Printer p, @SuppressWarnings("ClassEscapesDefinedScope") ClosurePrintContext ctx) {
    printHeader("prom", p, ctx);
    var idIndex = ctx.lastYieldedIdIndex();

    var w = p.writer();

    w.write(" env ");
    p.print(env);
    if (!properties.isEmpty()) {
      w.write(" has ");
      w.runIndented(() -> p.print(properties));
    }

    w.write(" {");

    w.runIndented(
        () -> {
          w.write('\n');
          p.print(bc);
          w.write("\n=== IR ===\n");
          p.withContext(ctx.ref(new NodeIdQualifier(name, idIndex))).print(body);
        });

    w.write("\n}");

    if (ctx instanceof ClosurePrintContext.Outermost o) {
      o.printRemaining(p);
    }
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
