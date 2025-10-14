package org.prlprg.fir2c;

import java.util.Objects;
import org.prlprg.fir.ir.module.Module;

/**
 * Entry point for translating FIŘ modules into C.
 *
 * <p>The compiler mirrors the bytecode compiler (`org.prlprg.bc2c`) structurally: a module is
 * lowered into a translation unit containing one C function per FIŘ abstraction (version), and all
 * literal {@code SEXP}s are hoisted into a constant pool that the generated code accesses using
 * {@code Rsh_const}.
 */
public final class Fir2CCompiler {
  private final Module module;
  private final FirCompilationOptions options;

  public Fir2CCompiler(Module module) {
    this(module, FirCompilationOptions.DEFAULT);
  }

  public Fir2CCompiler(Module module, FirCompilationOptions options) {
    this.module = Objects.requireNonNull(module, "module");
    this.options = Objects.requireNonNull(options, "options");
  }

  public FirCompiledModule compile() {
    return new FirModuleCompiler(module, options).compile();
  }
}
