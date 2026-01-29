package org.prlprg.fir2c;

import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.prlprg.fir.opt.Optimizations.defaultOptimizations;
import static org.prlprg.fir2c.Fir2CCompiler.compile;

import org.jspecify.annotations.Nullable;
import org.prlprg.examples.Example;
import org.prlprg.fir.ir.FirQuery;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir.opt.OptimizedFirQuery;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.gen2c.CompiledModuleQuery;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.snapshots.SnapshotStore;

public record Fir2CQuery(
    @Override String name, @Nullable Optimization optimization, @Override boolean isOptimized)
    implements CompiledModuleQuery {
  public static final Fir2CQuery DIRECT = new Fir2CQuery("fir2c", null);
  public static final Fir2CQuery FULLY_OPTIMIZED =
      new Fir2CQuery("opt.default.fir2c.opt", defaultOptimizations(), true);

  public Fir2CQuery(String name, @Nullable Optimization optimization) {
    this(name, optimization, false);
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
    var R = GNUR.instance();

    var firQuery = optimization == null ? FirQuery.INSTANCE : new OptimizedFirQuery(optimization);
    var firModule = store.load(example, firQuery);

    var firMainFn = firModule.localFunction(Variable.named("main"));
    assertNotNull(firMainFn, "FIR module missing main function");

    return compile(firMainFn, R.getSession(), isOptimized ? new Option[0] : Option.values());
  }
}
