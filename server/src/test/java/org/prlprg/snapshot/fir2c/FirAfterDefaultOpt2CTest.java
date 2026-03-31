package org.prlprg.snapshot.fir2c;

import org.prlprg.snapshot.gen2c.CompiledModuleQuery;
import org.prlprg.snapshot.gen2c.Gen2CCompilerTest;

class FirAfterDefaultOpt2CTest implements Gen2CCompilerTest {
  @Override
  public CompiledModuleQuery moduleQuery() {
    return Fir2CQuery.OPTIMIZED_ONLY_FIR;
  }
}
