package org.prlprg.fir2c;

import javax.annotation.Nullable;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.gen2c.Gen2CCompilerTest;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.snapshots.Query;

public class Fir2CCompileTest extends Gen2CCompilerTest {
  @Override
  protected Query<CompiledModule> moduleQuery() {
    return Fir2CQuery.DIRECT;
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

