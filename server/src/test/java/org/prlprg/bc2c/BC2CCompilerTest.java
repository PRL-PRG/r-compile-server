package org.prlprg.bc2c;

import org.prlprg.bc.BCCompilerTest;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.gen2c.EvalQuery;
import org.prlprg.gen2c.Gen2CCompilerTest;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.order.OrderAfter;

@OrderAfter(BCCompilerTest.class)
public class BC2CCompilerTest implements Gen2CCompilerTest {
  @Override
  public Query<CompiledModule> moduleQuery() {
    return BC2CQuery.INSTANCE;
  }

  @Override
  public EvalQuery evalQuery() {
    return EvalQuery.BC;
  }
}
