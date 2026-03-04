package org.prlprg.fir2c;

import org.prlprg.gen2c.CompiledModuleQuery;
import org.prlprg.gen2c.Gen2CCompilerTest;

public class Fir2CCompileTest implements Gen2CCompilerTest {
  @Override
  public CompiledModuleQuery moduleQuery() {
    return Fir2CQuery.DIRECT;
  }
}
