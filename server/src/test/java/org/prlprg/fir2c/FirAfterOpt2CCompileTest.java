package org.prlprg.fir2c;

import javax.annotation.Nullable;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.gen2c.Gen2CCompilerTest;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.snapshots.Query;

public abstract class FirAfterOpt2CCompileTest extends Gen2CCompilerTest {
  protected abstract String optimizationName();

  protected abstract @Nullable Optimization optimization();

  @Override
  protected Query<CompiledModule> moduleQuery() {
    return new Fir2CQuery(optimizationName() + ".fir2c", optimization());
  }

  @Override
  protected Query<CompiledModule> oracleModuleQuery() {
    return Fir2CQuery.DIRECT;
  }

  @Override
  protected RuntimeVariant runtimeVariant() {
    return RuntimeVariant.FIR2C;
  }
}

