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

public record BC2CQuery(@Override boolean isOptimized) implements CompiledModuleQuery {
  public static final BC2CQuery UNOPTIMIZED = new BC2CQuery(false);
  public static final BC2CQuery OPTIMIZED = new BC2CQuery(true);

  @Override
  public RuntimeVariant runtime() {
    return RuntimeVariant.DIRECT_BC2C;
  }

  @Override
  public String name() {
    return isOptimized ? "bc2c.optimized" : "bc2c";
  }

  @Override
  public BC2CQuery optimized() {
    return OPTIMIZED;
  }

  @Override
  public BC2CQuery evalOracle() {
    return UNOPTIMIZED;
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
