package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import java.util.List;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.opt.sequence.AbstractionFixpointSequence;

class AbstractionFixpointSequenceTest {
  /// Test optimization that tracks how many times it's called and can be configured to return
  /// different values.
  private static class TestOptimization implements AbstractionOptimization {
    private final boolean[] changedReturns;
    private int callCount = 0;

    TestOptimization(boolean... changedReturns) {
      this.changedReturns = changedReturns;
    }

    @Override
    public boolean run(Function function, AbstractionFeedback feedback, Abstraction abstraction) {
      // Cycle through `changedReturns`.
      return changedReturns[callCount++ % changedReturns.length];
    }
  }

  /// Create a simple function for testing
  private static Function testFunction() {
    return new Module().addFunction(Variable.named("test"), List.of(), false);
  }

  @Test
  void testSingleOptimizationNoChanges() {
    var optimization = new TestOptimization(false);
    var function = testFunction();
    var abstraction = function.baseline();

    var fixpoint = new AbstractionFixpointSequence("testSequence", optimization);
    var changed = runOpt(function, fixpoint, abstraction);

    assertFalse(changed);
    assertEquals(1, optimization.callCount);
  }

  @Test
  void testSingleOptimizationWithChanges() {
    var optimization = new TestOptimization(true, false);
    var function = testFunction();
    var abstraction = function.baseline();

    var fixpoint = new AbstractionFixpointSequence("testSequence", optimization);
    var changed = runOpt(function, fixpoint, abstraction);

    assertTrue(changed);
    assertEquals(2, optimization.callCount);
  }

  @Test
  void testSingleOptimizationWithChangesTwice() {
    var optimization = new TestOptimization(true, true, false);
    var function = testFunction();
    var abstraction = function.baseline();

    var fixpoint = new AbstractionFixpointSequence("testSequence", optimization);
    var changed = runOpt(function, fixpoint, abstraction);

    assertTrue(changed);
    assertEquals(3, optimization.callCount);
  }

  @Test
  void testMultipleOptimizations() {
    var opt1 = new TestOptimization(true, false);
    var opt2 = new TestOptimization(false, false);
    var function = testFunction();
    var abstraction = function.baseline();

    var fixpoint = new AbstractionFixpointSequence("testSequence", opt1, opt2);
    var changed = runOpt(function, fixpoint, abstraction);

    assertTrue(changed);
    assertEquals(2, opt1.callCount);
    assertEquals(2, opt2.callCount);
  }

  @Test
  void testMaxIterationsLimit() {
    var optimization = new TestOptimization(true); // Always returns true
    var function = testFunction();
    var abstraction = function.baseline();

    var fixpoint = new AbstractionFixpointSequence("testSequence", 3, optimization);
    var changed = runOpt(function, fixpoint, abstraction);

    assertTrue(changed);
    assertEquals(3, optimization.callCount);
  }

  @Test
  void testHardLimit() {
    var optimization = new TestOptimization(true); // Always returns true
    var function = testFunction();
    var abstraction = function.baseline();

    var fixpoint = new AbstractionFixpointSequence("testSequence", optimization);

    var exception =
        assertThrows(IllegalStateException.class, () -> runOpt(function, fixpoint, abstraction));

    assertTrue(exception.getMessage().contains("Didn't reach a fixpoint after"));
  }

  @Test
  void testComplexSequence() {
    // Test a more realistic scenario where optimizations interact
    var opt1 = new TestOptimization(true, false, false); // Changes first iteration only
    var opt2 = new TestOptimization(false, true, false); // Changes second iteration only
    var function = testFunction();
    var abstraction = function.baseline();

    var fixpoint = new AbstractionFixpointSequence("testSequence", opt1, opt2);
    var changed = runOpt(function, fixpoint, abstraction);

    assertTrue(changed);
    assertEquals(3, opt1.callCount);
    assertEquals(3, opt2.callCount);
  }

  boolean runOpt(Function function, AbstractionOptimization optimization, Abstraction abstraction) {
    return optimization.run(
        function, new AbstractionFeedback(new MockModuleFeedback()), abstraction);
  }
}
