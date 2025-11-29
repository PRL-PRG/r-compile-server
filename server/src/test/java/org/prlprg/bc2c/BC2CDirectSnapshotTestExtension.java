package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.prlprg.bc.BCCompiler;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.sexp.CloSXP;

class BC2CDirectSnapshotTestExtension
    extends BC2CSnapshotTestExtension {

  @Override
  CompiledModule compile(CloSXP ast, boolean compilePromises) {
    var ast2bc = new BCCompiler(ast, R.getSession());


    // FIXME: just for now as we do not support guards
    ast2bc.setOptimizationLevel(3);
    var bc =
        ast2bc
            .compile()
            .orElseThrow(() -> new RuntimeException("Compilation did not produce byte code"));

    var name = "f_" + (bc.hashCode() < 0 ? "n" + -bc.hashCode() : bc.hashCode());
    return new BC2CCompiler(bc, name, compilePromises).finish();
  }

  @Override
  RuntimeVariant runtimeVariant() {
    return RuntimeVariant.DIRECT_BC2C;
  }
}
