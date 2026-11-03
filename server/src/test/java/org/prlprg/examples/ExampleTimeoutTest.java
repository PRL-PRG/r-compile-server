package org.prlprg.examples;

import org.junit.jupiter.api.Disabled;
import org.prlprg.snapshot.SnapshotStore;

/// Checks [ExampleTimeout]: every invocation must fail after `EXAMPLE_TIMEOUT`, and the next one
/// must still run, although each loops forever and ignores interrupts.
///
/// It's disabled because each invocation takes `EXAMPLE_TIMEOUT`. To run it:
///
/// ```shell
/// EXAMPLE_TIMEOUT=2 EXAMPLE_FILTER='(force_twice|raise)\.fir' ./mvnw test \
///   -Dtest=ExampleTimeoutTest -Djunit.jupiter.conditions.deactivate='org.junit.*DisabledCondition'
/// ```
@Disabled("Each invocation takes EXAMPLE_TIMEOUT")
class ExampleTimeoutTest {
  @FirExampleTest(includeFromR = false)
  @SuppressWarnings({"InfiniteLoopStatement", "StatementWithEmptyBody"})
  void loopForever(Example example, SnapshotStore store) {
    while (true) {}
  }
}
