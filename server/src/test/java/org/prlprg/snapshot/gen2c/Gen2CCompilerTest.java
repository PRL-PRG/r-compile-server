package org.prlprg.snapshot.gen2c;

import org.junit.jupiter.api.MethodOrderer.OrderAnnotation;
import org.junit.jupiter.api.Order;
import org.junit.jupiter.api.TestMethodOrder;
import org.prlprg.examples.Example;
import org.prlprg.examples.RExampleTest;
import org.prlprg.snapshot.SnapshotStore;

@TestMethodOrder(OrderAnnotation.class)
public interface Gen2CCompilerTest {
  @RExampleTest
  @Order(1)
  default void test(Example example, SnapshotStore store) {
    store.verify(example, moduleQuery());
  }

  @RExampleTest(skipOption = "noEval")
  @Order(2)
  default void testEval(Example example, SnapshotStore store) {
    store.verify(example, new EvalQuery(moduleQuery()));
  }

  CompiledModuleQuery moduleQuery();
}
