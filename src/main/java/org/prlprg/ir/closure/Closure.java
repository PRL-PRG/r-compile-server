package org.prlprg.ir.closure;

import java.util.Map;
import java.util.TreeMap;
import org.prlprg.bc.Bc;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.ir.closure.ClosureVersion.CallContext;
import org.prlprg.ir.type.lattice.Troolean;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.primitive.Names;
import org.prlprg.sexp.Attributes;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Pair;

/**
 * An IR closure: a GNU-R closure ({@link CloSXP}) converted into our {@link org.prlprg.ir
 * intermediate representation}, which can be converted back. We also attach a name for debugging,
 * typically the name of the variable the GNU-R closure is assigned to (e.g. "f <- function(...)
 * ...").
 *
 * <h2>Evaluation
 *
 * <p>The IR closure maintains the same behavior as the GNU-R closure it was created from (and the
 * same parameters and non-static part of the environment) when converted back into GNU-R. But the
 * re-converted GNU-R closure has a different body. Specifically, its body calls a C function which
 * dispatches either a <b>baseline</b> or <b>optimized</b> {@linkplain ClosureVersion version},
 * depending on the {@linkplain CallContext call context} (number and types of arguments).
 *
 * <ul>
 *   <li>The baseline version is dispatched when no optimized versions are available for the current
 *       call context. It records information (<b>feedback</b>), which is eventually used to predict
 *       call contexts that are likely to be met and {@linkplain org.prlprg.ir.cfg.Assumption
 *       speculative assumptions} that are likely to hold.
 *   <li>The optimized versions are created using this feedback: they have the predicated call
 *       contexts and speculative assumptions. They are only dispatched if their call context is
 *       met, and if any of their speculative assumptions fail, they {@linkplain
 *       org.prlprg.ir.cfg.JumpData.Deopt "deopt"}. In a deopt, evaluation constructs the context
 *       (stack frame etc.) that would be at the equivalent line of code the baseline version, then
 *       long-jumps to that line of code. When a closure version "deopt"s, it also deletes itself
 *       and adds new feedback to the closure which will prevent the failed speculative assumption
 *       from being compiled again (since deopt-ing is expensive).
 * </ul>
 */
public class Closure {
  // The non-final fields are only non-final so that they can be set in `LateConstruct`.
  // Otherwise they are effectively final.
  private CloSXP origin;
  private @IsEnv RValue env;
  private final String name;
  private ClosureVersion baselineVersion;
  private final Map<CallContext, ClosureVersion> optimizedVersions;

  /**
   * {@link Closure(CloSXP, RValue, String)} with an {@linkplain StaticEnv#NOT_CLOSED unclosed}
   * environment (not an inner closure).
   */
  public Closure(CloSXP origin, String name) {
    this(origin, StaticEnv.NOT_CLOSED, name);
  }

  /**
   * Create an IR closure with an empty baseline version.
   *
   * <p>This function should probably only be called by {@link org.prlprg.bc2ir.ClosureCompiler}.
   *
   * @param origin The GNU-R closure. The IR closure keeps this closure's parameters, environment
   *     (although static environment may differ, see {@link #env()}), and behavior.
   * @param env The closure's environment. This is {@linkplain StaticEnv#NOT_CLOSED unclosed} unless
   *     it's an inner closure (from {@link org.prlprg.ir.cfg.StmtData.MkCls MkCls}), in which case
   *     it's the outer closure's environment.
   *     <p>{@code origin}'s environment is replaced with {@link SEXPs#EMPTY_ENV} if not already, in
   *     order to normalize the data since it shouldn't be used.
   * @param name A name for debugging. Typically the variable it was assigned to if known. "" is
   *     acceptable if there's no better name (anonymous closure).
   * @throws IllegalArgumentException If the closure's body isn't bytecode.
   * @throws IllegalArgumentException If {@code env} isn't statically known to be an environment
   *     ({@link RValue#isEnv()}).
   */
  public Closure(CloSXP origin, @IsEnv RValue env, String name) {
    if (!(origin.body() instanceof BCodeSXP)) {
      throw new IllegalArgumentException(
          "`origin` body must be bytecode (required by the compiler so how did you get `baselineVersion`?).");
    }
    if (env.isEnv() != Troolean.YES) {
      throw new IllegalArgumentException("`env` must be statically known to be an environment.");
    }

    // Normalize the origin's environment
    if (origin.env() != SEXPs.EMPTY_ENV) {
      origin =
          SEXPs.closure(origin.parameters(), origin.body(), SEXPs.EMPTY_ENV, origin.attributes());
    }

    this.origin = origin;
    this.env = env;
    this.name = name;
    this.baselineVersion = new ClosureVersion(this, true, CallContext.EMPTY);
    optimizedVersions = new TreeMap<>();
  }

  /** Name of the closure for debugging, typically the name of the variable it's assigned to. */
  public String name() {
    return name;
  }

  /**
   * The GNU-R closure this was created from.
   *
   * <p>(Not the re-converted closure with the baseline and optimized versions.)
   */
  public CloSXP origin() {
    return origin;
  }

  /** Closure's GNU-R bytecode = {@linkplain #origin() origin}'s body's bytecode. */
  public Bc bc() {
    assert origin.body() instanceof BCodeSXP
        : "Closure's body must be bytecode, and this should've been checked on creation.";
    return ((BCodeSXP) origin.body()).bc();
  }

  /** Closure's AST = {@linkplain #origin() origin}'s AST (doesn't change). */
  public SEXP ast() {
    return origin.bodyAST();
  }

  /** Closure's parameters = {@linkplain #origin() origin}'s parameters (don't change). */
  public ListSXP parameters() {
    return origin.parameters();
  }

  /** The # of parameters the closure takes, or {@code INT_MAX} if it has the dots parameter. */
  public int numParameters() {
    return origin.numParameters();
  }

  /**
   * Closure's environment.
   *
   * <p>This is {@linkplain StaticEnv#NOT_CLOSED unclosed} unless it's an inner closure (from {@link
   * org.prlprg.ir.cfg.StmtData.MkCls MkCls}), in which case it's the outer closure's environment.
   */
  public @IsEnv RValue env() {
    return env;
  }

  /** Get the baseline closure version (the version with record instructions). */
  public ClosureVersion baselineVersion() {
    return baselineVersion;
  }

  /**
   * Add an empty optimized version for the given context and return it so you add data to it.
   *
   * <p>This function should probably only be called by {@link org.prlprg.bc2ir.ClosureCompiler}.
   *
   * @throws IllegalArgumentException If a version with the given call context already exists.
   */
  public ClosureVersion addVersion(CallContext context) {
    if (optimizedVersions.containsKey(context)) {
      throw new IllegalArgumentException(
          "Version with call context already exists. Call `removeVersion` to delete.");
    }

    var version = new ClosureVersion(this, false, context);
    optimizedVersions.put(context, version);
    return version;
  }

  /**
   * Delete the version with the given call context.
   *
   * @throws IllegalArgumentException If no version with the given call context is in this closure.
   */
  public void deleteVersion(CallContext context) {
    if (!optimizedVersions.containsKey(context)) {
      throw new IllegalArgumentException("No version with call context exists.");
    }
    optimizedVersions.remove(context);
  }

  /**
   * Get the closure version with the most specific call context that is a superset of the given
   * one.
   *
   * <p>"Superset" means that any call that the given context satisfies, the returned closure's call
   * context also satisfies. It also means the returned version's context is guaranteed to be "less
   * than or equal to" the given context in the natural order of call contexts.
   */
  public ClosureVersion getVersion(CallContext context) {
    var version = optimizedVersions.get(context);
    if (version != null) {
      return version;
    }
    for (var entry : optimizedVersions.entrySet()) {
      if (entry.getKey().isSupersetOf(context)) {
        return entry.getValue();
      }
    }
    return baselineVersion;
  }

  // region serialization and deserialization
  /**
   * Return a closure, and then replace its data with that of another closure later.
   *
   * <p>This is necessary for deserialization, since we deserialize {@link
   * org.prlprg.ir.cfg.StmtData.MkCls StmtData.MkCls} before we deserialize the inner closure it
   * contains; we give {@link org.prlprg.ir.cfg.StmtData.MkCls MkCls} the returned inner closure,
   * which is initially filled with misc data, but is late-assigned before the entire closure is
   * returned to code outside the package.
   */
  static Pair<Closure, LateConstruct> lateConstruct(String name) {
    var closure =
        new Closure(
            SEXPs.closure(
                SEXPs.NULL, SEXPs.string("closure is being deserialized"), SEXPs.EMPTY_ENV),
            name);
    return Pair.of(closure, closure.new LateConstruct());
  }

  class LateConstruct {
    private boolean wasSet = false;

    private LateConstruct() {}

    void set(Closure data) {
      assert !wasSet;
      wasSet = true;

      if (!name.equals(data.name)) {
        throw new LateConstructException(
            "Closure name in reference is different from its name in definition: reference is "
                + name
                + ", definition is "
                + data.name);
      }

      origin = data.origin;
      env = data.env;
      baselineVersion = data.baselineVersion;
      optimizedVersions.putAll(data.optimizedVersions);
    }
  }

  private static class LateConstructException extends IllegalArgumentException {
    public LateConstructException(String s) {
      super(s);
    }
  }

  @ParseMethod
  private static Closure parse(Parser p) {
    return p.withContext(new ClosureParseContext.Outermost()).parse(Closure.class);
  }

  @ParseMethod
  private static Closure parse(Parser p, ClosureParseContext ctx) {
    return new Closure(p, ctx);
  }

  /** Deserialize constructor (so we can set the final fields). */
  private Closure(Parser p, ClosureParseContext ctx) {
    p = p.withContext(ctx.inner());
    var s = p.scanner();

    s.assertAndSkip("func");
    name = parseName(p, ctx);
    var parameters = p.parse(ListSXP.class);
    env = s.trySkip(" in") ? p.parse(RValue.class) : StaticEnv.NOT_CLOSED;
    var attributes = s.trySkip(" with") ? p.parse(Attributes.class) : Attributes.NONE;
    s.assertAndSkip("=>");
    var body = p.parse(SEXP.class);
    origin = SEXPs.closure(parameters, body, SEXPs.EMPTY_ENV, attributes);
    s.assertAndSkip('{');

    baselineVersion = p.parse(ClosureVersion.class);

    optimizedVersions = new TreeMap<>();
    while (s.nextCharsAre("CallContext")) {
      // Optimized versions parse their call context.
      var version = p.parse(ClosureVersion.class);
      var context = version.callContext();
      if (optimizedVersions.containsKey(context)) {
        throw s.fail("Duplicate optimized version for context: " + context);
      }
      optimizedVersions.put(context, version);
    }

    if (ctx instanceof ClosureParseContext.Outermost o) {
      while (o.needsNextInnerClosure() || o.needsNextPromise()) {
        if (o.needsNextPromise()) {
          o.setNextPromise(p.parse(Promise.class));
        } else {
          try {
            o.setNextInnerClosure(p.parse(Closure.class));
          } catch (LateConstructException e) {
            throw s.fail(e.getMessage());
          }
        }
      }
    }

    s.assertAndSkip('}');
  }

  @PrintMethod
  private void print(Printer p) {
    print(p, new ClosurePrintContext.Outermost());
  }

  @PrintMethod
  private void print(Printer p1, ClosurePrintContext ctx) {
    var p = p1.withContext(ctx.inner());
    var w = p.writer();

    w.write("func ");
    printName(name, p, ctx);
    p.print(parameters());
    if (env != StaticEnv.NOT_CLOSED) {
      w.write(" in ");
      w.runIndented(() -> p.print(env));
    }
    if (!origin.attributes().isEmpty()) {
      w.write(" with ");
      w.runIndented(() -> p.print(origin.attributes()));
    }
    w.write(" {");

    p.print(baselineVersion);

    for (var optVersion : optimizedVersions.values()) {
      w.write('\n');
      // Optimized versions print their call context.
      p.print(optVersion);
    }

    if (ctx instanceof ClosurePrintContext.Outermost o) {
      while (o.hasNextDeferredInnerClosure() || o.hasNextDeferredPromise()) {
        if (o.hasNextDeferredPromise()) {
          p.print(o.nextDeferredPromise());
        } else {
          p.print(o.nextDeferredInnerClosure());
        }
      }
    }

    w.write('}');
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  static String parseName(Parser p, ClosureParseContext ctx) {
    var s = p.scanner();

    return s.runWithWhitespacePolicy(
        SkipWhitespace.NONE,
        () -> {
          s.assertAndSkip('@');
          if (ctx instanceof ClosureParseContext.Inner i) {
            int index = s.readUInt();
            if (index != i.lastYieldedInnerClosureId()) {
              throw s.fail(
                  "Expected inner closure index "
                      + i.lastYieldedInnerClosureId()
                      + ", got "
                      + index);
            }
            s.assertAndSkip(':');
          }
          return Names.read(s, true);
        });
  }

  static void printName(String name, Printer p, ClosurePrintContext ctx) {
    var w = p.writer();

    w.write('@');
    if (ctx instanceof ClosurePrintContext.Inner i) {
      p.print(i.lastYieldedInnerClosureId());
      w.write(':');
    }
    w.write(Names.quoteIfNecessary(name));
  }
  // endregion serialization and deserialization
}
