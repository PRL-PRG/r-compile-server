package org.prlprg.fir2c;

import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir.opt.OptimizationTestClass;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.gen2c.Gen2CCompilerTest;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.snapshots.Query;

@OptimizationTestClass
record FirAfterOpt2CCompileTest(Optimization optimization) implements Gen2CCompilerTest {
  @Override
  public Query<CompiledModule> moduleQuery() {
    return new Fir2CQuery(optimization.name() + ".fir2c", optimization);
  }

  @Override
  public Query<CompiledModule> oracleModuleQuery() {
    return Fir2CQuery.DIRECT;
  }

  @Override
  public RuntimeVariant runtimeVariant() {
    return RuntimeVariant.FIR2C;
  }
}
