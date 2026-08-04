package org.prlprg.snapshot.fir2c;

import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.prlprg.fir.opt.Optimizations.defaultOptimizations;
import static org.prlprg.fir2c.Fir2CCompiler.compile;

import org.jspecify.annotations.Nullable;
import org.prlprg.bc2fir.BC2FirCFGCompilerUnsupportedException;
import org.prlprg.bc2fir.BC2FirClosureCompiler;
import org.prlprg.bc2fir.BC2FirClosureCompilerUnsupportedException;
import org.prlprg.bc2fir.ModuleBcOriginMap;
import org.prlprg.examples.Example;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir2c.Option;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.snapshot.SkipQueryException;
import org.prlprg.snapshot.SnapshotStore;
import org.prlprg.snapshot.bc.BCQuery;
import org.prlprg.snapshot.fir.ir.FirQuery;
import org.prlprg.snapshot.fir.ir.GenFirQuery;
import org.prlprg.snapshot.fir.opt.OptimizedFirQuery;
import org.prlprg.snapshot.gen2c.CompiledModuleQuery;

public record Fir2CQuery(
    @Override String name, @Nullable Optimization optimization, @Override boolean isOptimized)
    implements CompiledModuleQuery {
  public static final Fir2CQuery DIRECT = new Fir2CQuery("fir2c", null);
  public static final Fir2CQuery OPTIMIZED_ONLY_FIR =
      new Fir2CQuery("opt.fir2c.opt", defaultOptimizations(10, true));
  public static final Fir2CQuery FULLY_OPTIMIZED = OPTIMIZED_ONLY_FIR.optimized();

  public Fir2CQuery(String name, @Nullable Optimization optimization) {
    this(name, optimization, false);
  }

  public GenFirQuery firQuery() {
    return optimization == null ? FirQuery.INSTANCE : new OptimizedFirQuery(optimization);
  }

  @Override
  public RuntimeVariant runtime() {
    return RuntimeVariant.FIR2C;
  }

  @Override
  public Fir2CQuery optimized() {
    return isOptimized ? this : new Fir2CQuery(name + ".opt", optimization, true);
  }

  @Override
  public Fir2CQuery evalOracle() {
    return DIRECT;
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

    return compile(firMainFn, R.getSession(), bytecodes(example, store), options);
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
      BC2FirClosureCompiler.compile(R.getSession(), new Module(), "main", main, bytecodes);
    } catch (BC2FirClosureCompilerUnsupportedException | BC2FirCFGCompilerUnsupportedException e) {
      return null;
    }
    return bytecodes;
  }
}
