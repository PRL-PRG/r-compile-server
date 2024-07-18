package org.prlprg.bc2ir;

import static org.prlprg.bc2ir.ClosureCompiler.compileBaselineClosure;

import java.util.HashMap;
import java.util.Map;
import javax.annotation.Nullable;
import org.prlprg.RSession;
import org.prlprg.bc.Bc;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.StaticEnv;
import org.prlprg.ir.closure.Closure;
import org.prlprg.ir.closure.ClosureVersion;
import org.prlprg.sexp.CloSXP;

/**
 * Contains other closures and data in the JIT-server that may be referenced when compiling a
 * {@linkplain Closure closure}, {@linkplain ClosureVersion version}, and/or {@linkplain CFG CFG}.
 *
 * <p>Although each session will have a different global environment and namespace environments, we
 * may receive a request they have and/or speculate on them having certain properties. In this case
 * we'll cache namespaces (with closures and regular values) so they can be referenced by compiled
 * code. These caches will be in this data-structure.
 */
public class Module {
  private final @Nullable RSession serverRSession;
  private final Map<CloSXP, Closure> compiledClosures = new HashMap<>();

  /**
   * Create an empty module.
   *
   * <p>It doesn't have an {@linkplain RSession R session}, so it can't ASTs into {@linkplain Bc
   * GNU-R bytecode}.
   */
  public Module() {
    this(null);
  }

  /**
   * Create an empty module with the given server session.
   *
   * @param serverRSession Necessary to compile ASTs into {@linkplain Bc GNU-R bytecode}.
   */
  public Module(@Nullable RSession serverRSession) {
    this.serverRSession = serverRSession;
  }

  /**
   * The {@linkplain RSession R session} this module is running, or {@code null} if its not running
   * one.
   *
   * <p>The session is required to compile AST closures, but not to compile {@linkplain Bc bytecode}
   * closures into IR (hence it can be null).
   *
   * <p>The session is designated for the server; clients may have different sessions, and
   * everything that is compiled should work for them (or the session it's specifically compiled
   * for).
   */
  public @Nullable RSession serverRSession() {
    return serverRSession;
  }

  /**
   * Get the IR closure for the given GNU-R closure if we've compiled it before, otherwise compile
   * it now.
   *
   * <p>The closure must not be an inner closure, i.e. it will must have an {@linkplain
   * StaticEnv#UNKNOWN unclosed} environment, because inner closures are compiled for each outer
   * closure version (even if the AST is the same, the environment will probably be different, and
   * we cache inner closures when we cache their outer closures, so to reduce complexity we don't
   * cache inner closures by themselves).
   *
   * @param name A name for debugging. Typically the variable it was assigned to if known. "" is
   *     acceptable if the closure is anonymous.
   *     <p>Note that if the closure already exists, it will use its already-existing name instead.
   * @throws UnsupportedOperationException If the module doesn't have the closure, its body is an
   *     AST, and the module doesn't have an {@linkplain RSession R session}.
   * @throws UnsupportedOperationException If the module doesn't have the closure and its body
   *     contains any calls to the browser function.
   */
  public Closure getOrCompile(CloSXP sexp, String name) {
    return compiledClosures.computeIfAbsent(sexp, _ -> compileBaselineClosure(name, sexp, this));
  }
}
