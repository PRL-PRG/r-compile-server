package org.prlprg.fir.interpret;

import static org.prlprg.gen2c.EvalQuery.eval;

import org.junit.jupiter.params.ParameterizedClass;
import org.prlprg.examples.Example;
import org.prlprg.examples.FirExampleTest;
import org.prlprg.fir.ir.FirQuery;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;

/// Runs FIŘ modules in the internal interpreter, testing both the module generator and the
/// interpreter itself.
///
/// TODO: Handle expected errors
public interface GenInterpretTest {
  @FirExampleTest
  default void test(Example example, SnapshotStore store) {
    // Like `Gen2CCompilerTest`, check interpretation against the "oracle" module, and use a
    // freshly computed module. Doesn't check the module because it's checked elsewhere.
    var module = moduleQuery().compute(example, store);
    var interpretOutput = interpret(module, example, store);

    store.verify(example, InterpretQuery.INSTANCE, interpretOutput);
  }

  Query<Module> moduleQuery();
}
