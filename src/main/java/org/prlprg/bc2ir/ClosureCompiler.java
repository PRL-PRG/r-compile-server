package org.prlprg.bc2ir;

import static org.prlprg.bc2ir.CFGCompiler.compileCFG;
import static org.prlprg.ir.analysis.PropertiesComputer.computeClosureVersionProperties;
import static org.prlprg.ir.analysis.PropertiesComputer.computePromiseProperties;

import org.prlprg.RSession;
import org.prlprg.bc.Compiler;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.ISexp;
import org.prlprg.ir.cfg.IsEnv;
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.ir.closure.Closure;
import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.ir.closure.Promise;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/**
 * Stores data to compile a {@linkplain CloSXP closure SEXP} into an {@linkplain org.prlprg.ir IR}
 * {@linkplain Closure closure}.
 */
public class ClosureCompiler {
  /**
   * {@link #compileBaselineClosure(String, CloSXP, ISexp)} with an {@linkplain StaticEnv#UNKNOWN
   * unclosed} environment (not an inner closure).
   */
  public static Closure compileBaselineClosure(String name, CloSXP sexp) {
    return compileBaselineClosure(name, sexp, StaticEnv.UNKNOWN);
  }

  /**
   * Compile a {@linkplain CloSXP closure SEXP} into an {@linkplain org.prlprg.ir IR} {@linkplain
   * Closure closure} with only a baseline version.
   *
   * @param name A name for debugging. Typically the variable it was assigned to if known. "" is
   *     acceptable.
   * @param env The closure's environment. This is {@linkplain StaticEnv#UNKNOWN unclosed} unless
   *     it's an inner closure (from {@link org.prlprg.ir.cfg.StmtData.MkCls MkCls}), in which case
   *     it's the outer closure's environment.
   * @throws IllegalArgumentException If the closure's body isn't bytecode (in this case, you must
   *     use a {@link org.prlprg.bc.Compiler} to compile it before calling this).
   *     <p><b>OR</b> if {@code env} isn't statically known to be an environment.
   * @throws CFGCompilerUnsupportedBcException If the closure can't be compiled because it does
   *     something complex which the compiler doesn't support yet.
   */
  public static Closure compileBaselineClosure(String name, CloSXP sexp, @IsEnv ISexp env) {
    return compileBaselineClosure(name, sexp, env, new Module());
  }

  /**
   * {@link #compileBaselineClosure(String, CloSXP, ISexp, Module)} with an {@linkplain
   * StaticEnv#UNKNOWN unclosed} environment (not an inner closure).
   */
  public static Closure compileBaselineClosure(String name, CloSXP sexp, Module module) {
    return compileBaselineClosure(name, sexp, StaticEnv.UNKNOWN, module);
  }

  /**
   * Compile a {@linkplain CloSXP closure SEXP} into an {@linkplain org.prlprg.ir IR} {@linkplain
   * Closure closure} with only a baseline version, in the given module.
   *
   * <p>If the closure's body is an AST, if the module is running an {@linkplain RSession R
   * session}, this will attempt to compile into bytecode. If the module doesn't have a session or
   * the AST can't be converted (it calls the browser function), this will throw {@link
   * ClosureCompilerUnsupportedException}.
   *
   * @param name A name for debugging. Typically the variable it was assigned to if known. "" is
   *     acceptable.
   * @param env The closure's environment. This is {@linkplain StaticEnv#UNKNOWN unclosed} unless
   *     it's an inner closure (from {@link org.prlprg.ir.cfg.StmtData.MkCls MkCls}), in which case
   *     it's the outer closure's environment.
   * @throws IllegalArgumentException If the closure's body isn't bytecode (in this case, you must
   *     use a {@link org.prlprg.bc.Compiler} to compile it before calling this).
   *     <p><b>OR</b> if {@code env} isn't statically known to be an environment.
   * @throws ClosureCompilerUnsupportedException See above, <b>OR</b> if the closure's bytecode does
   *     something complex that the compiler doesn't support yet.
   */
  public static Closure compileBaselineClosure(
      String name, CloSXP sexp, @IsEnv ISexp env, Module module) {
    if (!(sexp.body() instanceof BCodeSXP)) {
      var rSession = module.serverRSession();
      if (rSession == null) {
        throw new ClosureCompilerUnsupportedException(
            "Can't compile an AST closure without a GNU-R session", sexp);
      }

      var sexp1 = sexp;
      var bc =
          new Compiler(sexp, rSession)
              .compile()
              .orElseThrow(
                  () ->
                      new ClosureCompilerUnsupportedException(
                          "Can't compile a closure with a browser call", sexp1));

      sexp = SEXPs.closure(sexp.parameters(), SEXPs.bcode(bc), sexp.env(), sexp.attributes());
    }

    var closure = new Closure(name, sexp, env);
    compileVersion(closure.baselineVersion(), module);
    return closure;
  }

  /**
   * Compile the given version: fill its body, promises, and properties.
   *
   * @throws IllegalArgumentException If the given version has a non-empty body, promises, or
   *     properties.
   * @throws ClosureCompilerUnsupportedException If the closure's bytecode does something complex
   *     that the compiler doesn't support yet.
   */
  private static void compileVersion(ClosureVersion version, Module module) {
    if (!version.body().isEmpty() || !version.properties().isEmpty()) {
      throw new IllegalArgumentException("Version must be empty before compiling");
    }

    try {
      compileCFG(version.closure().bc(), version.body(), false, version.closure().env(), module);
    } catch (CFGCompilerUnsupportedBcException e) {
      throw new ClosureCompilerUnsupportedException(
          "Bytecode does something unsupported", version.closure().origin().body(), e);
    }
    version.setProperties(computeClosureVersionProperties(version.body()));
  }

  /**
   * Compile the promise whose GNU-R AST or bytecode is the given SEXP, has the given environment,
   * and do this in the given module.
   *
   * @param name A name for debugging. Typically the variable it was assigned to if known. "" is
   *     acceptable.
   * @throws ClosureCompilerUnsupportedException If the promise code is an AST.
   */
  static Promise compilePromise(
      String name, SEXP promiseCodeSexp, @IsEnv ISexp prenv, Module module) {
    if (!(promiseCodeSexp instanceof BCodeSXP promiseBcSexp)) {
      throw new ClosureCompilerUnsupportedException(
          "Can't compile a promise whose body is an AST", promiseCodeSexp);
    }
    var promiseBc = promiseBcSexp.bc();

    // compilePromise(Bc, @IsEnv ISexp, Module)
    var cfg = new CFG();
    compileCFG(promiseBc, cfg, true, prenv, module);
    var properties = computePromiseProperties(cfg);
    return new Promise(name, promiseBc, cfg, prenv, properties);
  }
}
