package org.prlprg.bc2c;

import org.prlprg.bc.*;
import org.prlprg.gen2c.*;

public class BC2CCompiler {
  public static CompiledItem compile(Bc bc, String name, boolean compilePromises) {
    var module = new BC2CModule(compilePromises);
    return module.compileClosure(bc, name);
  }
}
