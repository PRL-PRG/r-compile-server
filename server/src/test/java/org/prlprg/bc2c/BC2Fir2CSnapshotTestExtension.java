package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.lang.reflect.Method;
import org.opentest4j.TestAbortedException;
import org.prlprg.bc.Bc;
import org.prlprg.bc2fir.BC2CFGCompilerException;
import org.prlprg.bc2fir.BC2ClosureCompilerUnsupportedException;
import org.prlprg.bc2fir.BC2ModuleCompiler;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir2c.Module2CCompiler;
import org.prlprg.fir2c.Option;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.rsession.TestRSession;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.RSession;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.StrSXP;
import org.prlprg.util.snapshot.RDSFileSnapshotStoreFactory;
import org.prlprg.util.snapshot.SnapshotExtension;

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
