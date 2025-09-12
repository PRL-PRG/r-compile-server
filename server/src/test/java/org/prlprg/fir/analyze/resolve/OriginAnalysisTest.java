package org.prlprg.fir.analyze.resolve;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.SEXPs;

class OriginAnalysisTest {
  @Test
  void testBasicRegisterTracking() {
    var firText =
        """
      fun main() {
        () --> I { reg r0:I, reg r1:I |
          mkenv;
              r0 = 42;
          r1 = r0;
          return r1;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.lookupFunction("main")).version(0);

    var analysis = new OriginAnalysis(main);

    var r0Origin = analysis.get(Variable.register("r0"));
    assertEquals(new Constant(SEXPs.integer(42)), r0Origin);

    var r1Origin = analysis.get(Variable.register("r1"));
    assertEquals(r0Origin, r1Origin);
  }

  @Test
  void testVariableTracking() {
    var firText =
        """
      fun main() {
        () --> I { var x:I?, reg r0:I, reg r1:I? |
          mkenv;
          r0 = 42;
          st x = r0;
          r1 = ld x;
          return r0;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.lookupFunction("main")).version(0);

    var analysis = new OriginAnalysis(main);

    var cfg = Objects.requireNonNull(main.cfg());
    var bb = cfg.entry();

    // After store statement, variable x should have r0's origin
    var xOrigin = analysis.get(bb, 2, Variable.named("x"));
    assertEquals(new Constant(SEXPs.integer(42)), xOrigin);

    // After load statement, r1 should have x's origin (the constant)
    var r1Origin = analysis.get(Variable.register("r1"));
    assertEquals(xOrigin, r1Origin);
  }

  @Test
  void testPhiMerging() {
    var firText =
        """
      fun main() {
        (reg r0:I) --> V { reg r1:I, reg r2:I, reg r3:I, reg r4:I, reg r5:I |
          mkenv;
              r1 = 42;
          if r0 then BB1() else BB2();
        BB1():
          r2 = r1;
          goto BB3(100, r2);
        BB2():
          r3 = r1;
          goto BB3(200, r3);
        BB3(r4, r5):
          return r4;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.lookupFunction("main")).version(0);

    var analysis = new OriginAnalysis(main);

    // In bb3, r4 should have itself as origin due to conflicting inputs
    var r4Origin = analysis.get(Variable.register("r4"));
    var r5Origin = analysis.get(Variable.register("r5"));
    assertEquals(new Read(Variable.register("r4")), r4Origin);
    assertEquals(new Constant(SEXPs.integer(42)), r5Origin);
  }
}
