package org.prlprg.fir.analyze.generic;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.SEXPs;

class ScopeAnalysisTest {

  @Test
  void testBasicRegisterTracking() {
    var firText =
        """
      fun test {
        () --> Any { reg r0:I, reg r1:I |
          r0 = 42;
          r1 = r0;
          return r1;
        }
      }
      """;

    var module = parseModule(firText);
    var function = module.lookupFunction("test");
    assertNotNull(function);

    var version = function.version(0);
    var analysis = new ScopeAnalysis(version);

    var cfg = version.cfg();
    var bb = cfg.entry();

    // After first statement (r0 = 42), r0 should have constant source
    var state = analysis.at(bb, 0);
    var r0Source = state.getRegisterSource(Variable.register("r0"));
    assertNotNull(r0Source);
    assertTrue(r0Source instanceof Constant);

    // After second statement (r1 = r0), r1 should have r0's source (the constant)
    state = analysis.at(bb, 1);
    var r1Source = state.getRegisterSource(Variable.register("r1"));
    assertNotNull(r1Source);
    assertTrue(r1Source instanceof Constant);
    assertEquals(r0Source, r1Source);
  }

  @Test
  void testVariableTracking() {
    var firText =
        """
      fun test {
        () --> Any { var x:I?, reg r0:I, reg r1:I |
          r0 = 42;
          st x = r0;
          r1 = ld x;
          return r1;
        }
      }
      """;

    var module = parseModule(firText);
    var function = module.lookupFunction("test");
    assertNotNull(function);

    var version = function.version(0);
    var analysis = new ScopeAnalysis(version);

    var cfg = version.cfg();
    var bb = cfg.entry();

    // After store statement, variable x should have r0's source
    var state = analysis.at(bb, 1);
    var xSource = state.getVariableSource(Variable.named("x"));
    assertNotNull(xSource);
    assertTrue(xSource instanceof Constant);

    // After load statement, r1 should have x's source (the constant)
    state = analysis.at(bb, 2);
    var r1Source = state.getRegisterSource(Variable.register("r1"));
    assertNotNull(r1Source);
    assertTrue(r1Source instanceof Constant);
    assertEquals(xSource, r1Source);
  }

  @Test
  void testPhiMerging() {
    var firText =
        """
      fun test(r0: Any) -> Any {
      bb0:
        r1 = 42
        if r0 bb1 bb2
      bb1:
        r2 = 100
        goto bb3(r2)
      bb2:
        r3 = 200
        goto bb3(r3)
      bb3(r4: Any):
        return r4
      }
      """;

    var module = parseModule(firText);
    var function = module.lookupFunction("test");
    assertNotNull(function);

    var version = function.version(0);
    var analysis = new ScopeAnalysis(version);

    var cfg = version.cfg();
    var bb3 = cfg.bb("bb3");
    assertNotNull(bb3);

    // In bb3, r4 should have itself as source due to conflicting inputs
    var state = analysis.at(bb3, 0);
    var r4Source = state.getRegisterSource(Variable.register("r4"));
    assertNotNull(r4Source);
    assertTrue(r4Source instanceof Read);
    assertEquals(Variable.register("r4"), ((Read) r4Source).variable());
  }

  @Test
  void testStateEquality() {
    var state1 = new ScopeAnalysis.ScopeState();
    var state2 = new ScopeAnalysis.ScopeState();

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
    var state1 = new ScopeAnalysis.ScopeState();
    var state2 = new ScopeAnalysis.ScopeState();

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
}
