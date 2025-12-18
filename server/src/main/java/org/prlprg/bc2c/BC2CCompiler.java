package org.prlprg.bc2c;

import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
import org.prlprg.bc.*;
import org.prlprg.gen2c.CompiledClosure;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;

public class BC2CCompiler {
  private final BC2CModule module;
  private final Bc bc;
  /// The name is chosen by the client
  private final String closureName;
  private final CloSXP closureSexp;

  public BC2CCompiler(String closureName, CloSXP closureSexp, boolean compilePromises) {
    this.module = new BC2CModule(compilePromises);
    // We can have other closures to compile in the same Bc
    // We will need to generate a unique name for each
    // This is the main (entry) name
    this.closureName = closureName;
    this.closureSexp = closureSexp;

    if (!(closureSexp.body() instanceof BCodeSXP bcSxp)) {
      throw new IllegalArgumentException("Closure passed to `BC2CCompiler` must have bytecode body, got:\n" + closureSexp);
    }
    bc = bcSxp.bc();
  }

  public CompiledModule finish() {
    var compiledClosure = module.compileClosure(bc, closureName);

    var bindingsOfJustClosure = ImmutableMap.of(closureName, new CompiledClosure(closureSexp.parameters(), closureSexp.env(), compiledClosure.name(), compiledClosure.constantPool()));
    return new CompiledModule(
        module.cUnit().toString(), bindingsOfJustClosure, compiledClosure.constantPool());
  }
}
