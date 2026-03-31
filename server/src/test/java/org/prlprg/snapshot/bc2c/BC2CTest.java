package org.prlprg.snapshot.bc2c;

import org.prlprg.snapshot.gen2c.CompiledModuleQuery;
import org.prlprg.snapshot.gen2c.Gen2CCompilerTest;

public class BC2CTest implements Gen2CCompilerTest {
  @Override
  public CompiledModuleQuery moduleQuery() {
    return BC2CQuery.UNOPTIMIZED;
  }
}
