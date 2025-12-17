package org.prlprg.fir2c;

import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir.opt.OptimizationTestClass;
import org.prlprg.gen2c.CompiledModuleQuery;
import org.prlprg.gen2c.EvalQuery;
import org.prlprg.gen2c.Gen2CCompilerTest;

@OptimizationTestClass
record FirAfterOpt2CCompileTest(Optimization optimization) implements Gen2CCompilerTest {
  @Override
  public CompiledModuleQuery moduleQuery() {
    return new Fir2CQuery(optimization.name() + ".fir2c", optimization);
  }

  @Override
  public EvalQuery evalQuery() {
    return EvalQuery.FIR_ORACLE;
  }
}
