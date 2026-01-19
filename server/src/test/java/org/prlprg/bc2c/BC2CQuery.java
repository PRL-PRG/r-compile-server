package org.prlprg.bc2c;

import java.util.List;
import org.prlprg.bc.BCQuery;
import org.prlprg.bc.Bc;
import org.prlprg.examples.Example;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.gen2c.CompiledModuleQuery;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.snapshots.SkipQueryException;
import org.prlprg.snapshots.SnapshotStore;

public class BC2CQuery implements CompiledModuleQuery {
  public static final BC2CQuery INSTANCE = new BC2CQuery();

  private BC2CQuery() {}

  @Override
  public RuntimeVariant runtime() {
    return RuntimeVariant.DIRECT_BC2C;
  }

  @Override
  public CompiledModule compute(Example example, SnapshotStore store) {
    var compilePromises = example.hasOption(name(), "compilePromises");
    var bc = store.load(example, BCQuery.REGULAR);

    return compile(bc, compilePromises);
  }

  private static CompiledModule compile(Bc bc, boolean compilePromises) {
    try {
      // Use the same conventions as FIŘ, so both can be tested the same way:
      // give the compiled closure the same C name and define an (empty) initializer

      var module = BC2CCompiler.compile(bc, "Fir_fun_from_r_main", compilePromises);

      var initStub = module.code().addFunction("SEXP", "Fir_fun_init_main", List.of("SEXP cp"));
      initStub.add().stmt("return R_NilValue;");

      return module;
    } catch (UnsupportedBcInstrException e) {
      throw new SkipQueryException("bc2c", e);
    }
  }
}
