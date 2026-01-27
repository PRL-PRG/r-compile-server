package org.prlprg.fir2c;

import org.prlprg.bc2fir.BC2FirCompilerTest;
import org.prlprg.fir.ir.FirParseTest;
import org.prlprg.gen2c.CompiledModuleQuery;
import org.prlprg.gen2c.Gen2CCompilerTest;
import org.prlprg.snapshots.order.OrderAfter;

@OrderAfter(BC2FirCompilerTest.class)
@OrderAfter(FirParseTest.class)
public class Fir2CCompileTest implements Gen2CCompilerTest {
  @Override
  public CompiledModuleQuery moduleQuery() {
    return Fir2CQuery.DIRECT;
  }
}
