package org.prlprg.bc2c;

import org.prlprg.bc.Bc;
import org.prlprg.gen2c.CUnit;
import org.prlprg.gen2c.CompiledItem;

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
    var name = baseName + "_" + funId++;
    var compiler = new ClosureCompiler(this, name, bc);
    compiler.setCompilePromises(compilePromises);
    return compiler.compile();
  }

  CompiledItem compilePromise(Bc bc, String baseName) {
    var name = baseName + "_P_" + funId++;
    var compiler = new ClosureCompiler(this, name, bc);
    compiler.setCompilePromises(compilePromises);
    // compiler.setUseCells(false);
    return compiler.compile();
  }
}
