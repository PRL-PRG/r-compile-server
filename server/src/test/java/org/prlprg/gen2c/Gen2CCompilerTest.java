package org.prlprg.gen2c;

import static org.prlprg.gen2c.EvalQuery.eval;

import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.session.gnur.GNURQuery;
import org.prlprg.snapshots.Query;
import org.prlprg.snapshots.SnapshotStore;

public interface Gen2CCompilerTest {
  @RExampleTest
  default void test(Example example, SnapshotStore store) {
    store.verify(example, moduleQuery());
  }

  @RExampleTest
  default void testEval(Example example, SnapshotStore store) {
    var R = store.query(example, GNURQuery.INSTANCE);
    var modulePath = store.queryPath(example, moduleQuery());

    var output = eval(modulePath, R);

    store.verify(example, evalQuery(), output);
  }

  Query<CompiledModule> moduleQuery();

  EvalQuery evalQuery();
}
