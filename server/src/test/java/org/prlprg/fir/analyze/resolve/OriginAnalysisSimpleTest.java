package org.prlprg.fir.analyze.resolve;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.analyze.resolve.OriginAnalysis.State;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.SEXPs;

/// Simple tests for ScopeAnalysis that don't require parsing FIR
class OriginAnalysisSimpleTest {

  @Test
  void testStateEquality() {
    var state1 = new State();
    var state2 = new State();

    assertEquals(state1, state2);

    var register = Variable.register("r0");
    var constant = new Constant(SEXPs.integer(42));

    state1.setRegisterSource(register, constant);
    assertNotEquals(state1, state2);

    state2.setRegisterSource(register, constant);
    assertEquals(state1, state2);
  }

  @Test
  void testStateMerging() {
    var state1 = new State();
    var state2 = new State();

    var register = Variable.register("r0");
    var constant1 = new Constant(SEXPs.integer(42));
    var constant2 = new Constant(SEXPs.integer(100));

    state1.setRegisterSource(register, constant1);
    state2.setRegisterSource(register, constant2);

    state1.merge(state2);

    // After merging conflicting sources, should default to register itself
    var mergedSource = state1.getRegisterSource(register);
    assertNotNull(mergedSource);
    assertTrue(mergedSource instanceof Read);
    assertEquals(register, ((Read) mergedSource).variable());
  }

  @Test
  void testBasicSourceTracking() {
    var state = new State();
    var register = Variable.register("r0");
    var variable = Variable.named("x");
    var constant = new Constant(SEXPs.integer(42));

    // Initially no sources
    assertNull(state.getRegisterSource(register));
    assertNull(state.getVariableSource(variable));

    // Set sources
    state.setRegisterSource(register, constant);
    state.setVariableSource(variable, constant);

    // Verify sources
    assertEquals(constant, state.getRegisterSource(register));
    assertEquals(constant, state.getVariableSource(variable));
  }

  @Test
  void testStateCopy() {
    var original = new State();
    var register = Variable.register("r0");
    var constant = new Constant(SEXPs.integer(42));

    original.setRegisterSource(register, constant);

    var copy = original.copy();
    assertEquals(original, copy);

    // Modifications to copy shouldn't affect original
    var variable = Variable.named("x");
    copy.setVariableSource(variable, constant);
    assertNotEquals(original, copy);
  }
}
