package org.prlprg.bc2c;

import org.prlprg.bc.BCQuery;
import org.prlprg.bc.Bc;
import org.prlprg.examples.Example;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.gen2c.CompiledModuleQuery;
import org.prlprg.snapshots.SnapshotStore;

public class BC2CQuery implements CompiledModuleQuery {
  public static final BC2CQuery INSTANCE = new BC2CQuery();

  private BC2CQuery() {}

  @Override
  public CompiledModule compute(Example example, SnapshotStore store) {
    var compilePromises = example.hasOption(name(), "compilePromises");
    var bc = store.query(example, BCQuery.INSTANCE);

    return compile(bc, compilePromises);
  }

  private static CompiledModule compile(Bc bc, boolean compilePromises) {
    var name = "f_" + (bc.hashCode() < 0 ? "n" + -bc.hashCode() : bc.hashCode());
    return new BC2CCompiler(bc, name, compilePromises).finish();
  }
}
