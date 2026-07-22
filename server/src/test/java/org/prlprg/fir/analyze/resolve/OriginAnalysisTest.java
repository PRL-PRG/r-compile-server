package org.prlprg.fir.analyze.resolve;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.Objects;
import java.util.Set;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.sexp.SEXPs;

class OriginAnalysisTest {
  /// The register named `name` defined in `version` (registers are identity-based, so tests look
  /// them up by name rather than reconstructing them).
  private static Register reg(Abstraction version, String name) {
    return version
        .streamRegisters()
        .filter(r -> r.name().equals(name))
        .findFirst()
        .orElseThrow(() -> new AssertionError("no register named '" + name + "'"));
  }

  @Test
  void testVariableTracking() {
    var firText =
        """
      fun main() {
        () --> v1(I)? {
          mkenv;
          st x = <int 42>;
          r1: v1(I)? = ld x;
          return r1;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);

    var analysis = new OriginAnalysis(main);

    var cfg = Objects.requireNonNull(main.cfg());
    var bb = cfg.entry();

    // After store statement, variable x should have r0's origin
    var xOrigin = analysis.get(bb, 2, Variable.named("x"));
    assertEquals(new Constant(SEXPs.integer(42)), xOrigin);

    // After load statement, r1 should have x's origin (the constant)
    var r1Origin = analysis.get(reg(main, "r1"));
    assertEquals(xOrigin, r1Origin);
  }

  @Test
  void testPhiMerging() {
    var firText =
        """
      fun main() {
        (reg r0:I) --> V {
          mkenv;
          if r0 then BB1() else BB2();
        BB3(r4: I, r5: I):
          return r4;
        BB1():
          goto BB3(100, 42);
        BB2():
          goto BB3(200, 42);
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);

    var analysis = new OriginAnalysis(main);
    // In bb3, r4 should have itself as origin due to conflicting inputs
    var r4Origin = analysis.get(reg(main, "r4"));
    var r5Origin = analysis.get(reg(main, "r5"));
    assertEquals(new Read(reg(main, "r4")), r4Origin);
    assertEquals(new Constant(new Value.Int(42)), r5Origin);
  }

  @Test
  void testVariableMergeRetainsAllKnownOrigins() {
    var firText =
        """
      fun main(cond) {
        (reg cond:B) --> v1(I) {
          mkenv;
          if cond then BB1() else BB2();
        BB3():
          x1: v1(I)? = ld x;
          x2: v1(I) = x1 as v1(I);
          return x2;
        BB1():
          st x = <int 1>;
          goto BB3();
        BB2():
          st x = <int 2>;
          goto BB3();
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var bb3 = Objects.requireNonNull(Objects.requireNonNull(main.cfg()).bb("BB3"));

    var analysis = new OriginAnalysis(main);

    assertNull(analysis.get(bb3, -1, Variable.named("x")));
    assertEquals(
        Set.of(new Constant(SEXPs.integer(1)), new Constant(SEXPs.integer(2))),
        analysis.getPossible(bb3, -1, Variable.named("x")));
  }

  @Test
  void testNestedEnvironments() {
    var firText =
        """
           fun main() {
             () -~> I {
               mkenv;
               st x = <int 1>;
               st y = <int 2>;
               mkenv;
               st x = <int 3>;
               popenv;
               popenv;
               return 42;
             }
           }
           """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var entry = Objects.requireNonNull(main.cfg()).entry();

    var analysis = new OriginAnalysis(main);

    assertEquals(Set.of(), analysis.getPossible(entry, 0, Variable.named("x")));
    assertEquals(Set.of(), analysis.getPossible(entry, 0, Variable.named("y")));

    assertEquals(
        Set.of(new Constant(SEXPs.integer(1))),
        analysis.getPossible(entry, 3, Variable.named("x")));
    assertEquals(
        Set.of(new Constant(SEXPs.integer(2))),
        analysis.getPossible(entry, 3, Variable.named("y")));

    assertEquals(
        Set.of(new Constant(SEXPs.integer(3))),
        analysis.getPossible(entry, 4, Variable.named("x")));
    assertEquals(
        Set.of(new Constant(SEXPs.integer(2))),
        analysis.getPossible(entry, 4, Variable.named("y")));

    assertEquals(
        Set.of(new Constant(SEXPs.integer(1))),
        analysis.getPossible(entry, 5, Variable.named("x")));
    assertEquals(
        Set.of(new Constant(SEXPs.integer(2))),
        analysis.getPossible(entry, 5, Variable.named("y")));

    assertEquals(Set.of(), analysis.getPossible(entry, 6, Variable.named("x")));
    assertEquals(Set.of(), analysis.getPossible(entry, 6, Variable.named("y")));
  }

  @Test
  void testAmbiguityWithNestedEnvironments() {
    var firText =
        """
           fun main() {
             (reg r:B) -~> I {
               mkenv;
               st x = <int 1>;
               mkenv;
               if r then BB1() else BB2();
             BB2():
               popenv;
               popenv;
               return 42;
             BB1():
               st x = <int 2>;
               goto BB2();
             }
           }
           """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var bb2 = Objects.requireNonNull(Objects.requireNonNull(main.cfg()).bb("BB2"));

    var analysis = new OriginAnalysis(main);

    assertEquals(
        Set.of(new Constant(SEXPs.integer(1)), new Constant(SEXPs.integer(2))),
        analysis.getPossible(bb2, -1, Variable.named("x")));
    assertEquals(
        Set.of(new Constant(SEXPs.integer(1))), analysis.getPossible(bb2, 0, Variable.named("x")));
  }

  @Test
  void testStaticCallWithClosureEnvTaintsNestedEnvironment() {
    var firText =
        """
        fun main() {
          () -~> V {
            mkenv;
            st x = <int 1>;
            f: cls = clos f;
            f@f< -~> V >();
            popenv;
            return <nil>;
          }
        }

        fun f() {
          () -~> V { ... }
        }
        """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var entry = Objects.requireNonNull(main.cfg()).entry();
    var analysis = new OriginAnalysis(main);

    assertEquals(
        Set.of(new Constant(SEXPs.integer(1))),
        analysis.getPossible(entry, 2, Variable.named("x")));
    assertEquals(Set.of(), analysis.getPossible(entry, 3, Variable.named("x")));
  }

  @Test
  void testStaticCallWithoutClosureEnvDoesntTaintNestedEnvironment() {
    var firText =
        """
        fun main() {
          () -~> V {
            mkenv;
            st x = <int 1>;
            f: cls = clos f;
            f< -~> V >();
            popenv;
            return <nil>;
          }
        }

        fun f() {
          () -~> V { ... }
        }
        """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var entry = Objects.requireNonNull(main.cfg()).entry();
    var analysis = new OriginAnalysis(main);

    assertEquals(
        Set.of(new Constant(SEXPs.integer(1))),
        analysis.getPossible(entry, 2, Variable.named("x")));
    assertEquals(
        Set.of(new Constant(SEXPs.integer(1))),
        analysis.getPossible(entry, 3, Variable.named("x")));
  }

  @Test
  void testConstantFoldC() {
    var firText =
        """
      fun main() {
        () --> V {
          mkenv;
          vargs: dots = dots[<int 1>, <int 2>, <int 3>];
          result: V = c< dots --> V >(vargs);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(SEXPs.integer(1, 2, 3)), analysis.get(reg(main, "result")));
  }

  @Test
  void testConstantFoldSubscriptRead() {
    var firText =
        """
      fun main() {
        () --> I {
          mkenv;
          vec: v1(I) = box< I --> v1(I) >(42);
          result: I = `[`< v(I),I,miss,miss --> I >(vec, 2, <missing>, <missing>);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    // box(<int 42>) = v1(I)[42], then [2] on a size-1 vector is out of bounds → no fold
    assertNotEquals(new Constant(new Value.Int(42)), analysis.get(reg(main, "result")));
  }

  @Test
  void testConstantFoldSubscriptReadInBounds() {
    var firText =
        """
      fun main() {
        () --> I {
          mkenv;
          vec: v1(I) = box< I --> v1(I) >(42);
          result: I = `[`< v(I),I,miss,miss --> I >(vec, 1, <missing>, <missing>);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(new Value.Int(42)), analysis.get(reg(main, "result")));
  }

  @Test
  void testConstantFoldDoubleSubscriptRead() {
    var firText =
        """
      fun main() {
        () --> I {
          mkenv;
          vec: v1(I) = box< I --> v1(I) >(42);
          result: I = `[[`< v(I),I,miss,miss --> I >(vec, 1, <missing>, <missing>);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(new Value.Int(42)), analysis.get(reg(main, "result")));
  }

  @Test
  void testConstantFoldSubscriptWrite() {
    var firText =
        """
      fun main() {
        () --> v(I) {
          mkenv;
          vec: v1(I) = box< I --> v1(I) >(42);
          result: v(I) = `[<-`< v(I),I,I,miss --> v(I) >(vec, 1, 99, <missing>);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(SEXPs.integer(99)), analysis.get(reg(main, "result")));
  }

  @Test
  void testConstantFoldDoubleSubscriptWrite() {
    var firText =
        """
      fun main() {
        () --> v(I) {
          mkenv;
          vec: v1(I) = box< I --> v1(I) >(42);
          result: v(I) = `[[<-`< v(I),I,I --> v(I) >(vec, 1, 99);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(SEXPs.integer(99)), analysis.get(reg(main, "result")));
  }

  @Test
  void testConstantFoldSubscriptWriteChain() {
    // Tests that c + [ + [<- can all chain together
    var firText =
        """
      fun main() {
        () --> v(I) {
          mkenv;
          vargs: dots = dots[<int 10>, <int 20>, <int 30>];
          vec: V = c< dots --> V >(vargs);
          result: v(I) = `[<-`< v(I),I,I,miss --> v(I) >(vec, 2, 99, <missing>);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(SEXPs.integer(10, 99, 30)), analysis.get(reg(main, "result")));
  }
}
