package org.prlprg.bc2c;

import org.prlprg.bc.*;
import org.prlprg.gen2c.*;

public class BC2CCompiler {
  public static CompiledModule compile(Bc bc, String name, boolean compilePromises) {
    var module = new BC2CModule(compilePromises);

    var item = module.compileClosure(bc, name);

    assert item.cName().equals(name);
    return new CompiledModule(module.cUnit(), item.constantPool());
  }
}
