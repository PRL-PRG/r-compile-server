package org.prlprg.bc2c;

import org.prlprg.gen2c.CompiledModuleQuery;
import org.prlprg.gen2c.Gen2CCompilerTest;

public class BC2CCompilerTest implements Gen2CCompilerTest {
  @Override
  public CompiledModuleQuery moduleQuery() {
    return BC2CQuery.UNOPTIMIZED;
  }
}
