package org.prlprg.bc2c;

import org.prlprg.gen2c.CompiledModule;
import org.prlprg.gen2c.Gen2CCompilerTest;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.snapshots.Query;

public class BC2CCompilerTest implements Gen2CCompilerTest {
  @Override
  public Query<CompiledModule> moduleQuery() {
    return BC2CQuery.INSTANCE;
  }

  @Override
  public Query<CompiledModule> oracleModuleQuery() {
    return BC2CQuery.INSTANCE;
  }

  @Override
  public RuntimeVariant runtimeVariant() {
    return RuntimeVariant.DIRECT_BC2C;
  }
}
