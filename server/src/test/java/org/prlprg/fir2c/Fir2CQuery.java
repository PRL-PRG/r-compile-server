package org.prlprg.fir2c;

import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.fir2c.Module2CCompiler.compile;

import javax.annotation.Nullable;
import junit.framework.AssertionFailedError;
import org.prlprg.examples.Example;
import org.prlprg.fir.ir.FirQuery;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir2c.FirCompiledModule.FirCompiledDispatchIndex;
import org.prlprg.gen2c.CompiledModule;
import org.prlprg.gen2c.CompiledModuleQuery;
import org.prlprg.session.gnur.GNURQuery;
import org.prlprg.snapshots.SnapshotStore;

public record Fir2CQuery(@Override String name, @Nullable Optimization optimization)
    implements CompiledModuleQuery {
  public static final Fir2CQuery DIRECT = new Fir2CQuery("fir2c", null);

  @Override
  public CompiledModule compute(Example example, SnapshotStore store) {
    var R = store.query(example, GNURQuery.INSTANCE);
    var firModule = store.query(example, FirQuery.INSTANCE);

    var main = firModule.localFunction(Variable.named("main"));
    if (main == null || !main.baseline().parameters().isEmpty() || main.baseline().isStub()) {
      fail(
          "FIR module must have `main` function, whose baseline takes zero arguments and isn't a stub:\n" + firModule);
    }

    var firCompiledModule =
        compile(firModule, R.getSession(), Option.CHECK_ARITY, Option.EMIT_DEBUG_COMMENTS);

    if (!(firCompiledModule.compiledFunctionDispatches().get(main)
        instanceof FirCompiledDispatchIndex.Regular(var entryFunName))) {
      throw new AssertionFailedError("Missing main function index");
    }
    return new CompiledModule(
        firCompiledModule.cUnit().toString(), entryFunName, firCompiledModule.constantPool());
  }

  @Override
  public CompiledModule oracle(Example example, SnapshotStore store) {
    return DIRECT.compute(example, store);
  }
}
