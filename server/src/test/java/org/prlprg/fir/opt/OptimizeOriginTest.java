package org.prlprg.fir.opt;

import org.prlprg.fir.interpret.InterpretUtil.TestInterpretCtx;
import org.prlprg.fir.opt.specialize.Inline;
import org.prlprg.fir.opt.specialize.ResolveDynamicCallee;
import org.prlprg.fir.opt.specialize.ResolveLoad;
import org.prlprg.fir.opt.specialize.ResolveLoadFun;

class OptimizeOriginTest extends OptimizationTest {
  @Override
  protected Optimization optimization(TestInterpretCtx c) {
    return new Sequence(
        new Specialize(
            new ResolveLoad(), new ResolveLoadFun(), new ResolveDynamicCallee(), new Inline(10000)),
        new Cleanup(true));
  }
}
