package org.prlprg.gen2c;

import static org.prlprg.gen2c.EvalQuery.eval;

import org.junit.jupiter.api.MethodOrderer.OrderAnnotation;
import org.junit.jupiter.api.Order;
import org.junit.jupiter.api.TestMethodOrder;
import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.snapshots.SnapshotStore;

@TestMethodOrder(OrderAnnotation.class)
public interface Gen2CCompilerTest {
  @RExampleTest
  @Order(1)
  default void test(Example example, SnapshotStore store) {
    store.verify(example, moduleQuery());
  }

  @RExampleTest
  @Order(2)
  default void testEval(Example example, SnapshotStore store) {
    var R = GNUR.instance();
    var modulePath = store.loadPath(example, moduleQuery());

    var output = eval(modulePath, R);

    store.verify(example, evalQuery(), output);
  }

  CompiledModuleQuery moduleQuery();

  EvalQuery evalQuery();
}
