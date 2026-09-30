package org.prlprg.snapshot.fir2c;

import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.prlprg.fir.opt.Optimizations.defaultOptimizations;
import static org.prlprg.fir2c.Fir2CCompiler.compile;

import com.google.common.collect.ImmutableSet;
import java.util.Collections;
import java.util.Map;
import java.util.Objects;
import java.util.WeakHashMap;
import org.jspecify.annotations.Nullable;
import org.prlprg.bc2fir.BC2FirCFGCompilerUnsupportedException;
import org.prlprg.bc2fir.BC2FirClosureCompiler;
import org.prlprg.bc2fir.BC2FirClosureCompilerUnsupportedException;
import org.prlprg.bc2fir.ModuleBcOriginMap;
import org.prlprg.examples.Example;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir2c.Fir2CSession;
import org.prlprg.fir2c.Option;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.server.FirTestServer;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.snapshot.SkipQueryException;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.bc.BCQuery;
import org.prlprg.snapshot.fir.ir.FirQuery;
import org.prlprg.snapshot.fir.ir.ForcedFirQuery;
import org.prlprg.snapshot.fir.ir.GenFirQuery;
import org.prlprg.snapshot.fir.opt.OptimizedFirQuery;
import org.prlprg.snapshot.gen2c.CompiledModuleQuery;

/// The example's module compiled to C.
///
/// Unless [#isLazy()], every version is evaluated first, so the C is all of the module and can be
/// compared across runs. A lazy query compiles the module as it is, with its unevaluated versions
/// as stubs that ask the [test compile server][FirTestServer] for them: this is what's run, and
/// it's computed anew for every run, because what the server has of the module changes as the
/// code runs.
public record Fir2CQuery(
    @Override String name,
    @Nullable Optimization optimization,
    @Override boolean isOptimized,
    boolean isLazy)
    implements CompiledModuleQuery {
  public static final Fir2CQuery DIRECT = new Fir2CQuery("fir2c", null);
  public static final Fir2CQuery OPTIMIZED_ONLY_FIR =
      new Fir2CQuery("opt.fir2c.opt", defaultOptimizations());
  public static final Fir2CQuery FULLY_OPTIMIZED = OPTIMIZED_ONLY_FIR.optimized();

  /// The session of every module a lazy query compiled, so that whoever runs it can find what the
  /// server has of it.
  private static final Map<CompiledModule, Fir2CSession> SESSIONS =
      Collections.synchronizedMap(new WeakHashMap<>());

  /// The session `compiled`, which a lazy query computed, was compiled in.
  public static Fir2CSession sessionOf(CompiledModule compiled) {
    return Objects.requireNonNull(
        SESSIONS.get(compiled), "module wasn't compiled by a lazy `Fir2CQuery`");
  }

  public Fir2CQuery(String name, @Nullable Optimization optimization) {
    this(name, optimization, false, false);
  }

  /// The module this compiles: the example's, optimized if this is, and with every version
  /// evaluated unless this is lazy.
  public GenFirQuery firQuery() {
    return isLazy ? unevaluatedFirQuery() : new ForcedFirQuery(unevaluatedFirQuery());
  }

  private GenFirQuery unevaluatedFirQuery() {
    return optimization == null ? FirQuery.INSTANCE : new OptimizedFirQuery(optimization);
  }

  @Override
  public RuntimeVariant runtime() {
    return RuntimeVariant.FIR2C;
  }

  @Override
  public Fir2CQuery optimized() {
    return isOptimized ? this : new Fir2CQuery(name + ".opt", optimization, true, isLazy);
  }

  @Override
  public Fir2CQuery evalOracle() {
    return DIRECT;
  }

  @Override
  public Fir2CQuery forEval() {
    return isLazy ? this : new Fir2CQuery(name + ".lazy", optimization, isOptimized, true);
  }

  @Override
  public boolean isStandalone() {
    return !isLazy;
  }

  @Override
  public boolean isTransient() {
    return isLazy;
  }

  @Override
  public String moduleId(CompiledModule compiled) {
    return isLazy ? sessionOf(compiled).id() : "";
  }

  @Override
  public CompiledModule compute(Example example, SnapshotStore store) {
    if (example.text().contains("-error:")) {
      // Don't try to compile invalid FIR
      throw new SkipQueryException(name(), new RuntimeException("Invalid FIR"));
    }

    var R = GNUR.instance();

    var firModule = store.load(example, firQuery());

    var firMainFn = firModule.localFunction(Variable.named("main"));
    assertNotNull(firMainFn, "FIR module missing main function");

    var options =
        isOptimized
            ? new Option[] {Option.COMPILE_REFERENCED_FUNCTIONS, Option.EMIT_DEBUG_COMMENTS}
            : Option.values();

    if (!isLazy) {
      return compile(firMainFn, R.getSession(), bytecodes(example, store), options);
    }

    // `firQuery()` is transient, so `firModule` is ours: the server changes it as the code runs.
    var server = FirTestServer.instance();
    var session =
        new Fir2CSession(
            server.firModules().freshId(),
            firModule,
            R.getSession(),
            FirQuery.bytecodesOf(firModule),
            ImmutableSet.copyOf(options));
    server.firModules().register(session, isOptimized ? 3 : 0);
    var compiled = compile(session, firMainFn);
    SESSIONS.put(compiled, session);
    return compiled;
  }

  /// The original GNU-R bytecode of the example's functions, so [org.prlprg.fir2c.Fir2CCompiler]
  /// emits bytecode-running baseline versions, or `null` for FIR-text examples (which have none).
  ///
  /// The FIR module snapshot round-trips through text, which drops the bytecode, so this re-runs
  /// bc2fir on a throwaway module purely to record it; generated inner-closure names are
  /// hash-derived, so they match the snapshot module's.
  private static @Nullable ModuleBcOriginMap bytecodes(Example example, SnapshotStore store) {
    if (!example.type().equals("R")) {
      return null;
    }

    var R = GNUR.instance();
    var bc = store.load(example, BCQuery.FIR);

    var env = new UserEnvSXP();
    var main = SEXPs.closure(SEXPs.list(), SEXPs.bcode(bc), env);
    env.set("main", main);

    var bytecodes = new ModuleBcOriginMap();
    try {
      var module = new Module();
      BC2FirClosureCompiler.compile(R.getSession(), module, "main", main, bytecodes);
      // Inner closures' bytecode is only recorded when the enclosing baseline is evaluated.
      module.evaluateAll();
    } catch (BC2FirClosureCompilerUnsupportedException | BC2FirCFGCompilerUnsupportedException e) {
      return null;
    }
    return bytecodes;
  }
}
