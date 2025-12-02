package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.prlprg.bc2fir.BC2ModuleCompiler;
import org.prlprg.fir2c.Module2CCompiler;
import org.prlprg.fir2c.Option;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.sexp.CloSXP;

public class BC2Fir2CSnapshotTestExtension
    extends BC2CDirectSnapshotTestExtension {

  @Override
  CompiledModule compile(CloSXP ast, boolean compilePromises) {
    // Note: regardless of `compilePromises`, fir2C always compiles promises

    var firModuleCompiler = new BC2ModuleCompiler(R.getSession());
    // "entry" can be whatever. We just need some name.
    firModuleCompiler.compile("entry", ast);
    var firModule = firModuleCompiler.finish();

    var firCompiledModule = Module2CCompiler.compile(firModule, R.getSession(), Option.CHECK_ARITY, Option.EMIT_DEBUG_COMMENTS);
    return new CompiledModule(firCompiledModule.cUnit(), "entry", firCompiledModule.constantPool());
  }

  @Override
  RuntimeVariant runtimeVariant() {
    return RuntimeVariant.FIR2C;
  }
}
