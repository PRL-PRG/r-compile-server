package org.prlprg.bc2c;

import org.prlprg.bc.*;
import org.prlprg.gen2c.CompiledModule;

public class BC2CCompiler {
  private final BC2CModule module;
  private final Bc bc;
  /// The name is chosen by the client
  private final String closureName;

  public BC2CCompiler(Bc bc, String closureName, boolean compilePromises) {
    this.module = new BC2CModule(compilePromises);
    this.bc = bc;
    // We can have other closures to compile in the same Bc
    // We will need to generate a unique name for each
    // This is the main (entry) name
    this.closureName = closureName;
  }

  public CompiledModule finish() {
    var compiledClosure = module.compileClosure(bc, closureName);

    return new CompiledModule(module.cUnit(), compiledClosure.name(), compiledClosure.constantPool());
  }
}

