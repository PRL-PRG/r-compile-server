package org.prlprg.snapshot.fir2c;

import org.prlprg.fir.opt.Optimization;
import org.prlprg.snapshot.fir.opt.OptimizationTestClass;
import org.prlprg.snapshot.gen2c.CompiledModuleQuery;
import org.prlprg.snapshot.gen2c.Gen2CCompilerTest;

@OptimizationTestClass
record FirAfterOpt2CTest(Optimization optimization) implements Gen2CCompilerTest {
  @Override
  public CompiledModuleQuery moduleQuery() {
    return new Fir2CQuery("opt." + optimization.name() + ".fir2c", optimization);
  }
}
