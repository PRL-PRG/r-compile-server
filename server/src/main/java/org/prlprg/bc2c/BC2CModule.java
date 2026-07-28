package org.prlprg.bc2c;

import org.prlprg.bc.Bc;
import org.prlprg.gen2c.CUnit;

class BC2CModule {
  private final CUnit cUnit = new CUnit();
  private final boolean compilePromises;
  private int funId = 0;

  BC2CModule(boolean compilePromises) {
    this.compilePromises = compilePromises;

    cUnit.addInclude("runtime.h");
  }

  CUnit cUnit() {
    return cUnit;
  }

  CompiledItem compileClosure(Bc bc, String baseName) {
    var name = funId == 0 ? baseName : baseName + "_" + funId;
    funId++;

    var compiler = new ClosureCompiler(this, name, bc);
    compiler.setCompilePromises(compilePromises);

    var constants = compiler.compile();

    return new CompiledItem(name, constants);
  }

  CompiledItem compilePromise(Bc bc, String baseName) {
    var name = baseName + "_P_" + funId++;

    var compiler = new ClosureCompiler(this, name, bc);
    compiler.setCompilePromises(compilePromises);
    // compiler.setUseCells(false);

    var constants = compiler.compile();

    return new CompiledItem(name, constants);
  }
}
