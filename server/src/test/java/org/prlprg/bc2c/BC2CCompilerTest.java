package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.gen2c.EvalQuery.eval;

import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.gen2c.EvalQuery;
import org.prlprg.gen2c.Gen2CCompilerTest;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.gnur.GNURQuery;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;

public class BC2CCompilerTest extends Gen2CCompilerTest {
  @Override
  protected Query<CompiledModule> moduleQuery() {
    return BC2CQuery.INSTANCE;
  }

  @Override
  protected Query<CompiledModule> oracleModuleQuery() {
    return BC2CQuery.INSTANCE;
  }

  @Override
  protected RuntimeVariant runtimeVariant() {
    return RuntimeVariant.DIRECT_BC2C;
  }
}

