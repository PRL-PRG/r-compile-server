package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import java.util.List;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Module;

class FixpointSequenceTest {
  /// Test optimization that tracks how many times it's called and can be configured to return
  /// different values.
  private static class TestOptimization implements AbstractionOptimization {
    private final boolean[] changedReturns;
    private int callCount = 0;

    TestOptimization(boolean... changedReturns) {
      this.changedReturns = changedReturns;
    }

    @Override
    public boolean run(Abstraction abstraction) {
      // Cycle through `changedReturns`.
      return changedReturns[callCount++ % changedReturns.length];
    }
  }

  /// Create a simple abstraction for testing
  private static Abstraction testAbstraction() {
    var module = new Module();
    return new Abstraction(module, List.of());
  }

  @Test
  void testSingleOptimizationNoChanges() {
    var optimization = new TestOptimization(false);
    var abstraction = testAbstraction();

    var fixpoint = new FixpointSequence(optimization);
    var changed = fixpoint.run(abstraction);

    assertFalse(changed);
    assertEquals(1, optimization.callCount);
  }

  @Test
  void testSingleOptimizationWithChanges() {
    var optimization = new TestOptimization(true, false);
    var abstraction = testAbstraction();

    var fixpoint = new FixpointSequence(optimization);
    var changed = fixpoint.run(abstraction);

    assertTrue(changed);
    assertEquals(2, optimization.callCount);
  }

  @Test
  void testSingleOptimizationWithChangesTwice() {
    var optimization = new TestOptimization(true, true, false);
    var abstraction = testAbstraction();

    var fixpoint = new FixpointSequence(optimization);
    var changed = fixpoint.run(abstraction);

    assertTrue(changed);
    assertEquals(3, optimization.callCount);
  }

  @Test
  void testMultipleOptimizations() {
    var opt1 = new TestOptimization(true, false);
    var opt2 = new TestOptimization(false, false);
    var abstraction = testAbstraction();

    var fixpoint = new FixpointSequence(opt1, opt2);
    var changed = fixpoint.run(abstraction);

    assertTrue(changed);
    assertEquals(2, opt1.callCount);
    assertEquals(2, opt2.callCount);
  }

  @Test
  void testMaxIterationsLimit() {
    var optimization = new TestOptimization(true); // Always returns true
    var abstraction = testAbstraction();

    var fixpoint = new FixpointSequence(3, optimization);
    var changed = fixpoint.run(abstraction);

    assertTrue(changed);
    assertEquals(3, optimization.callCount);
  }

  @Test
  void testHardLimit() {
    var optimization = new TestOptimization(true); // Always returns true
    var abstraction = testAbstraction();

    var fixpoint = new FixpointSequence(optimization);

    var exception = assertThrows(IllegalStateException.class, () -> fixpoint.run(abstraction));

    assertTrue(exception.getMessage().contains("Didn't reach a fixpoint after 100000 iterations"));
  }

  @Test
  void testComplexSequence() {
    // Test a more realistic scenario where optimizations interact
    var opt1 = new TestOptimization(true, false, false); // Changes first iteration only
    var opt2 = new TestOptimization(false, true, false); // Changes second iteration only
    var abstraction = testAbstraction();

    var fixpoint = new FixpointSequence(opt1, opt2);
    var changed = fixpoint.run(abstraction);

    assertTrue(changed);
    assertEquals(3, opt1.callCount);
    assertEquals(3, opt2.callCount);
  }
}
