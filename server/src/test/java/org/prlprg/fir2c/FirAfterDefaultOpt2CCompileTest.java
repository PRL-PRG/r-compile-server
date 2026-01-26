package org.prlprg.fir2c;

import static org.prlprg.fir.opt.Optimizations.defaultOptimizations;

import org.prlprg.gen2c.CompiledModuleQuery;
import org.prlprg.gen2c.EvalQuery;
import org.prlprg.gen2c.Gen2CCompilerTest;

class FirAfterDefaultOpt2CCompileTest implements Gen2CCompilerTest {
  @Override
  public CompiledModuleQuery moduleQuery() {
    return new Fir2CQuery("default.fir2c", defaultOptimizations());
  }

  @Override
  public EvalQuery evalQuery() {
    return EvalQuery.FIR_ORACLE;
  }
}
