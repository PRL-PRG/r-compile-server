package org.prlprg.bc2c;

import java.util.List;
import org.prlprg.bc.*;
import org.prlprg.gen2c.*;

public class BC2CCompiler {
  /// Suffix of the function that returns `Value` AKA `R_bcstack_t` (the one that's internally
  /// called and can be a closure body). The function returned by [CompiledModule] returns
  /// `SEXP`, it's externally called via `.Call`.
  private static final String RAW_SUFFIX = "_raw";

  public static CompiledModule compile(Bc bc, String name, boolean compilePromises) {
    var module = new BC2CModule(compilePromises);

    var item = module.compileClosure(bc, name + RAW_SUFFIX);

    assert item.cName().equals(name + RAW_SUFFIX);
    addCallTrampoline(module.cUnit(), name);
    return new CompiledModule(module.cUnit(), item.constantPool());
  }

  /// Emit a `SEXP`-returning wrapper around the module's top-level `Value`-returning function.
  private static void addCallTrampoline(CUnit cUnit, String name) {
    cUnit
        .addFunction("SEXP", name, List.of("SEXP rho", "SEXP c_cp"))
        .add()
        .stmt("return box(%s%s(rho, c_cp));", name, RAW_SUFFIX);
  }
}
