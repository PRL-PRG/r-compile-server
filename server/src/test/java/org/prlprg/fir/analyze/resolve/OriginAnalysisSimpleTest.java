package org.prlprg.fir.analyze.resolve;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.analyze.resolve.OriginAnalysis.State;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.SEXPs;

/// Simple tests for ScopeAnalysis that don't require parsing FIŘ
class OriginAnalysisSimpleTest {
  @Test
  void testStateEquality() {
    var state1 = new State();
    var state2 = new State();

    assertEquals(state1, state2);

    var nv = Variable.named("x");
    var constant = new Constant(SEXPs.integer(42));

    state1.variableOrigins.put(nv, constant);
    assertNotEquals(state1, state2);

    state2.variableOrigins.put(nv, constant);
    assertEquals(state1, state2);
  }

  @Test
  void testStateMerging() {
    var state1 = new State();
    var state2 = new State();

    var variable1 = Variable.named("x");
    var variable2 = Variable.named("y");
    var constant1 = new Constant(SEXPs.integer(42));
    var constant2 = new Constant(SEXPs.integer(100));

    state1.variableOrigins.put(variable1, constant1);
    state1.variableOrigins.put(variable2, constant1);
    state2.variableOrigins.put(variable1, constant1);
    state2.variableOrigins.put(variable2, constant2);

    state1.merge(state2);

    // After merging conflicting origins, should default to register itself
    var mergedOrigin1 = state1.variableOrigins.get(variable1);
    var mergedOrigin2 = state1.variableOrigins.get(variable2);
    assertNotNull(mergedOrigin1);
    assertEquals(constant1, mergedOrigin1);
    assertNull(mergedOrigin2);
  }

  @Test
  void testStateCopy() {
    var original = new State();
    var variable = Variable.named("x");
    var constant1 = new Constant(SEXPs.integer(42));
    var constant2 = new Constant(SEXPs.integer(100));

    original.variableOrigins.put(variable, constant1);

    var copy = original.copy();
    assertEquals(original, copy);

    // Modifications to copy shouldn't affect original
    copy.variableOrigins.put(variable, constant2);
    assertNotEquals(original, copy);
  }
}
