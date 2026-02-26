package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import java.util.List;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.feedback.ModuleFeedback;
import org.prlprg.fir.interpret.internal.MockModuleFeedback;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.fir.opt.sequence.ModuleFixpointSequence;

class ModuleFixpointSequenceTest {
  /// Test optimization that tracks how many times it's called and can be configured to return
  /// different values.
  private static class TestOptimization implements Optimization {
    private final boolean[] changedReturns;
    private int callCount = 0;

    TestOptimization(boolean... changedReturns) {
      this.changedReturns = changedReturns;
    }

    @Override
    public boolean run(ModuleFeedback feedback, Function function) {
      return changedReturns[callCount++ % changedReturns.length];
    }
  }

  /// Create a simple module with one function for testing
  private static Module testModule() {
    var module = new Module();
    module.addFunction(Variable.named("f"), List.of(), true);
    return module;
  }

  @Test
  void testSingleOptimizationNoChanges() {
    var optimization = new TestOptimization(false);
    var module = testModule();
    var feedback = new MockModuleFeedback();

    var fixpoint = new ModuleFixpointSequence("testSequence", optimization);
    var changed = fixpoint.run(feedback, module);

    assertFalse(changed);
    assertEquals(1, optimization.callCount);
  }

  @Test
  void testSingleOptimizationWithChanges() {
    var optimization = new TestOptimization(true, false);
    var module = testModule();
    var feedback = new MockModuleFeedback();

    var fixpoint = new ModuleFixpointSequence("testSequence", optimization);
    var changed = fixpoint.run(feedback, module);

    assertTrue(changed);
    assertEquals(2, optimization.callCount);
  }

  @Test
  void testSingleOptimizationWithChangesTwice() {
    var optimization = new TestOptimization(true, true, false);
    var module = testModule();
    var feedback = new MockModuleFeedback();

    var fixpoint = new ModuleFixpointSequence("testSequence", optimization);
    var changed = fixpoint.run(feedback, module);

    assertTrue(changed);
    assertEquals(3, optimization.callCount);
  }

  @Test
  void testMultipleOptimizations() {
    var opt1 = new TestOptimization(true, false);
    var opt2 = new TestOptimization(false, false);
    var module = testModule();
    var feedback = new MockModuleFeedback();

    var fixpoint = new ModuleFixpointSequence("testSequence", opt1, opt2);
    var changed = fixpoint.run(feedback, module);

    assertTrue(changed);
    assertEquals(2, opt1.callCount);
    assertEquals(2, opt2.callCount);
  }

  @Test
  void testMaxIterationsLimit() {
    var optimization = new TestOptimization(true); // Always returns true
    var module = testModule();
    var feedback = new MockModuleFeedback();

    var fixpoint = new ModuleFixpointSequence("testSequence", 3, optimization);
    var changed = fixpoint.run(feedback, module);

    assertTrue(changed);
    assertEquals(3, optimization.callCount);
  }

  @Test
  void testHardLimit() {
    var optimization = new TestOptimization(true); // Always returns true
    var module = testModule();
    var feedback = new MockModuleFeedback();

    var fixpoint = new ModuleFixpointSequence("testSequence", optimization);

    var exception = assertThrows(IllegalStateException.class, () -> fixpoint.run(feedback, module));

    assertTrue(exception.getMessage().contains("Didn't reach a fixpoint after 100000 iterations"));
  }

  @Test
  void testComplexSequence() {
    var opt1 = new TestOptimization(true, false, false);
    var opt2 = new TestOptimization(false, true, false);
    var module = testModule();
    var feedback = new MockModuleFeedback();

    var fixpoint = new ModuleFixpointSequence("testSequence", opt1, opt2);
    var changed = fixpoint.run(feedback, module);

    assertTrue(changed);
    assertEquals(3, opt1.callCount);
    assertEquals(3, opt2.callCount);
  }

  @Test
  void testRunOnFunctionThrows() {
    var optimization = new TestOptimization(false);
    var module = testModule();
    var feedback = new MockModuleFeedback();
    var function = module.localFunctions().iterator().next();

    var fixpoint = new ModuleFixpointSequence("testSequence", optimization);

    assertThrows(UnsupportedOperationException.class, () -> fixpoint.run(feedback, function));
  }

  @Test
  void testName() {
    var optimization = new TestOptimization(false);
    var fixpoint = new ModuleFixpointSequence("mySequence", optimization);

    assertEquals("mySequence", fixpoint.name());
  }
}
