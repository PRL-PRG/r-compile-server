package org.prlprg.ir.closure;

import com.google.common.collect.ImmutableSet;
import javax.annotation.Nullable;
import org.prlprg.bc.Bc;
import org.prlprg.bc.BcCode;
import org.prlprg.bc.ConstPool;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.ir.type.REffect;
import org.prlprg.ir.type.REffects;
import org.prlprg.ir.type.lattice.Lattice;
import org.prlprg.ir.type.lattice.NoOrMaybe;
import org.prlprg.ir.type.lattice.Troolean;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
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
public class Promise {
  // The non-final fields are only non-final so that they can be set in `LateConstruct`.
  // Otherwise they are effectively final.
  private Bc bc;
  private CFG cfg;
  // Except `eagerValue` is set even after `LateConstruct`.
  private @Nullable RValue eagerValue;
  private @IsEnv RValue env;
  private Properties properties;

  /**
   * Create a promise with the given code (both GNU-R and IR), environment, and properties.
   *
   * <p>This should probably only be called from the compiler.
   *
   * <p>IR code is assumed to correspond to the GNU-R bytecode, and eager value and properties are
   * assumed to be correct.
   *
   * <p>The eager value is initially {@code null}. It can be assigned later via {@link
   * #assignEagerValue}.
   *
   * @throws IllegalArgumentException If {@code env} isn't statically known to be an environment/
   */
  public Promise(Bc bc, CFG cfg, @IsEnv RValue env, Properties properties) {
    if (env.isEnv() != Troolean.YES) {
      throw new IllegalArgumentException("`env` must be statically known to be an environment.");
    }

    this.bc = bc;
    this.cfg = cfg;
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
  public CFG cfg() {
    return cfg;
  }

  /** The eager value of the promise, if known. */
  public @Nullable RValue eagerValue() {
    return eagerValue;
  }

  /**
   * Assign an eager value to the promise.
   *
   * @throws IllegalStateException If the promise already has an eager value.
   */
  public void assignEagerValue(RValue value) {
    if (eagerValue != null) {
      throw new IllegalStateException("Eager value already assigned.");
    }
    eagerValue = value;
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
   * Properties of a promise that are assumed by the invoker to allow certain optimizations
   * (<b>postconditions</b>).
   *
   * <p>Currently promises don't require any assumptions, since they have no arguments (although
   * maybe they should have assumptions based on where they are forced). Therefore a promise's
   * properties are always guaranteed to hold.
   *
   * <p>Also, currently the only property is that a promise doesn't perform reflection.
   */
  public record Properties(ImmutableSet<Property> flags) implements Lattice<Properties> {
    /** Properties that don't guarantee anything. */
    public static final Properties EMPTY = new Properties(ImmutableSet.of());

    /** Whether the properties don't guarantee anything, i.e. equal {@link Properties#EMPTY}. */
    public boolean isEmpty() {
      return equals(Properties.EMPTY);
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

    /** Whether these properties guarantee everything that the other properties do. */
    @Override
    public boolean isSubsetOf(Properties other) {
      return flags.containsAll(other.flags);
    }

    /** Returns properties that only guarantee what both these and the other properties do. */
    @Override
    public Properties union(Properties other) {
      return new Properties(
          flags.stream().filter(other.flags::contains).collect(ImmutableSet.toImmutableSet()));
    }

    /** Returns properties that guarantee everything that these and the other properties do. */
    @Override
    public Properties intersection(Properties other) {
      return new Properties(
          ImmutableSet.<Property>builder().addAll(flags).addAll(other.flags).build());
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
  static Pair<Promise, Promise.LateConstruct> lateConstruct() {
    var promise =
        new Promise(
            new Bc(new BcCode.Builder().build(), new ConstPool.Builder().build()),
            new CFG(),
            StaticEnv.NOT_CLOSED,
            Properties.EMPTY);
    return Pair.of(promise, promise.new LateConstruct());
  }

  class LateConstruct {
    private boolean wasSet = false;

    private LateConstruct() {}

    void set(Promise data) {
      assert !wasSet;
      wasSet = true;

      bc = data.bc;
      cfg = data.cfg;
      eagerValue = data.eagerValue;
      env = data.env;
      properties = data.properties;
    }
  }

  @ParseMethod
  private static Promise parse(Parser p, ClosureParseContext.Inner ctx) {
    var s = p.scanner();

    parseId(p, ctx);
    s.assertAndSkip(" in");
    var env = p.parse(RValue.class);
    var eagerValue = s.trySkip(" with") ? p.parse(RValue.class) : null;
    var properties = s.trySkip(" has") ? p.parse(Properties.class) : Properties.EMPTY;
    s.assertAndSkip(" {");

    var bc = p.parse(Bc.class);

    s.assertAndSkip("=== IR ===");
    var cfg = p.parse(CFG.class);

    s.assertAndSkip('}');
    var promise = new Promise(bc, cfg, env, properties);
    promise.eagerValue = eagerValue;
    return promise;
  }

  @PrintMethod
  private void print(Printer p) {
    print(p, ClosurePrintContext.Inner.dummyForPromise());
  }

  @PrintMethod
  private void print(Printer p, ClosurePrintContext.Inner ctx) {
    var w = p.writer();

    printId(p, ctx);
    w.write(" in ");
    p.print(env);
    if (eagerValue != null) {
      w.write(" with ");
      w.runIndented(() -> p.print(eagerValue));
    }
    if (!properties.isEmpty()) {
      w.write(" has ");
      w.runIndented(() -> p.print(properties));
    }
    w.write(" {\n");

    p.print(bc);
    w.write("\n=== IR ===\n");

    p.print(cfg);
    w.write("}");
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  static void parseId(Parser p, ClosureParseContext.Inner ctx) {
    var s = p.scanner();

    s.assertAndSkip('@');
    int index = s.readUInt();
    if (index != ctx.lastYieldedPromiseId()) {
      throw s.fail("Expected inner closure index " + ctx.lastYieldedPromiseId() + ", got " + index);
    }
  }

  static void printId(Printer p, ClosurePrintContext.Inner ctx) {
    var w = p.writer();

    w.write('@');
    p.print(ctx.lastYieldedPromiseId());
  }
  // endregion serialization and deserialization
}
