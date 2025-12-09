package org.prlprg.fir.interpret;

import org.prlprg.fir.ir.FirQuery;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir.opt.OptimizationTestClass;
import org.prlprg.fir.opt.OptimizedFirQuery;
import org.prlprg.snapshots.Query;

/// Test that various optimizations don't change interpreter output.
@OptimizationTestClass
public record InterpretAfterOptTest(Optimization optimization) implements GenInterpretTest {
  @Override
  public Query<Module> moduleQuery() {
    return new OptimizedFirQuery(optimization);
  }
}
