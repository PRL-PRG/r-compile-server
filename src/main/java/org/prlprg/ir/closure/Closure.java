package org.prlprg.ir.closure;

import java.util.Map;
import java.util.TreeMap;
import org.prlprg.bc.Bc;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.RValue;
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.ir.closure.ClosureVersion.CallContext;
import org.prlprg.ir.type.lattice.Troolean;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.SEXP;

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
  private final CloSXP origin;
  private final @IsEnv RValue env;
  private final String name;
  private final ClosureVersion baselineVersion;
  private final Map<CallContext, ClosureVersion> optimizedVersions = new TreeMap<>();

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

    this.origin = origin;
    this.env = env;
    this.name = name;
    this.baselineVersion = new ClosureVersion(this, true, CallContext.EMPTY);
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
}
