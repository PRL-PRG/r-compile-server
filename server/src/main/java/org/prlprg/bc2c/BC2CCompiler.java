package org.prlprg.bc2c;

import com.google.common.collect.ImmutableMap;
import org.prlprg.bc.*;
import org.prlprg.gen2c.CompiledModule;

public class BC2CCompiler {
  public static CompiledModule compile(Bc bc, String name, boolean compilePromises) {
    var module = new BC2CModule(compilePromises);
    var closure = module.compileClosure(bc, name);
    return new CompiledModule(module.cUnit().toString(), ImmutableMap.of(name, closure));
  }
}
