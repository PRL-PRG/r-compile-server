package org.prlprg.fir2c;

import org.prlprg.gen2c.CompiledModule;
import org.prlprg.gen2c.EvalQuery;
import org.prlprg.gen2c.Gen2CCompilerTest;
import org.prlprg.snapshots.Query;

public class Fir2CCompileTest implements Gen2CCompilerTest {
  @Override
  public Query<CompiledModule> moduleQuery() {
    return Fir2CQuery.DIRECT;
  }

  @Override
  public EvalQuery evalQuery() {
    return EvalQuery.FIR_ORACLE;
  }
}
