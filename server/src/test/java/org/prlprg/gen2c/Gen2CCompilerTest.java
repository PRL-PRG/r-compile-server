package org.prlprg.gen2c;

import static org.prlprg.gen2c.EvalQuery.eval;

import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.service.RshCompiler.RuntimeVariant;
import org.prlprg.session.gnur.GNURQuery;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;

public interface Gen2CCompilerTest {
  @RExampleTest
  default void test(Example example, SnapshotStore store) {
    // Check evaluation against the "oracle" module, then that the module matches itself.
    // We call `eval` with a freshly computed module instead of a cached one,
    // so that we always test the code,
    // not a snapshot
    // (whose results would never change since the "evaluator" is the C compiler + CPU).
    // We check evaluation first because the error is more accurate;
    // if the module still doesn't match,
    // it's usually because the snapshot is outdated and the code is fine.
    try (var R = store.query(example, GNURQuery.INSTANCE)) {
      var module = moduleQuery().compute(example, store);
      var evalOutput = eval(module, runtimeVariant(), R);

      store.verify(example, evalQuery(), evalOutput);
      store.verify(example, moduleQuery(), module);
    }
  }

  Query<CompiledModule> moduleQuery();

  Query<CompiledModule> oracleModuleQuery();

  RuntimeVariant runtimeVariant();

  private Query<EvalOutput> evalQuery() {
    return new EvalQuery(oracleModuleQuery(), runtimeVariant());
  }
}

