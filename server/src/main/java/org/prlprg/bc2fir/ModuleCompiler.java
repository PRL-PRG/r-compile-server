package org.prlprg.bc2fir;

import org.prlprg.fir.ir.module.Module;
import org.prlprg.sexp.CloSXP;

/// Compile GNU-R bytecode functions into a FIŘ module.
public final class ModuleCompiler {
  private final Module module = new Module();

  /// Compile the closure with the given name and bytecode and add it to the module being compiled.
  public void compile(String name, CloSXP closure) {
    ClosureCompiler.compile(module, name, closure);
  }

  /// Returns the module containing all compiled functions so far.
  public Module finish() {
    return module;
  }
}
