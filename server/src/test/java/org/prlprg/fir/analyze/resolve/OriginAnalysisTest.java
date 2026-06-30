package org.prlprg.fir.analyze.resolve;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.ir.ParseUtil.parseModule;

import java.util.Objects;
import java.util.Set;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.primitive.Logical;
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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);

    var analysis = new OriginAnalysis(main);

    var r0Origin = analysis.get(Variable.register("r0"));
    assertEquals(new Constant(new Value.Int(42)), r0Origin);

    var r1Origin = analysis.get(Variable.register("r1"));
    assertEquals(r0Origin, r1Origin);
  }

  @Test
  void testVariableTracking() {
    var firText =
        """
      fun main() {
        () --> v1(I)? { var x:v1(I)?, reg r0:v1(I), reg r1:v1(I)? |
          mkenv;
          r0 = <int 42>;
          st x = r0;
          r1 = ld x;
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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);

    var analysis = new OriginAnalysis(main);
    // In bb3, r4 should have itself as origin due to conflicting inputs
    var r4Origin = analysis.get(Variable.register("r4"));
    var r5Origin = analysis.get(Variable.register("r5"));
    assertEquals(new Read(Variable.register("r4")), r4Origin);
    assertEquals(new Constant(new Value.Int(42)), r5Origin);
  }

  @Test
  void testVariableMergeRetainsAllKnownOrigins() {
    var firText =
        """
      fun main(cond) {
        (reg cond:B) --> v1(I) { var x:v1(I)?, reg x1:v1(I)?, reg x2:v1(I) |
          mkenv;
          if cond then BB1() else BB2();
        BB1():
          st x = <int 1>;
          goto BB3();
        BB2():
          st x = <int 2>;
          goto BB3();
        BB3():
          x1 = ld x;
          x2 = x1 as v1(I);
          return x2;
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
             () -~> I { var x:v1(I)?, var y:v1(I)? |
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
             (reg r:B) -~> I { var x:v1(I)? |
               mkenv;
               st x = <int 1>;
               mkenv;
               if b then BB1() else BB2();
             BB1():
               st x = <int 2>;
               goto BB2();
             BB2():
               popenv;
               popenv;
               return 42;
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
          () -~> V { reg f:cls, var x:v1(I)? |
            mkenv;
            st x = <int 1>;
            f = clos f;
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
          () -~> V { reg f:cls, var x:v1(I)? |
            mkenv;
            st x = <int 1>;
            f = clos f;
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
        () --> V { reg vargs:dots, reg result:V |
          mkenv;
          vargs = dots[<int 1>, <int 2>, <int 3>];
          result = c< dots --> V >(vargs);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(SEXPs.integer(1, 2, 3)), analysis.get(Variable.register("result")));
  }

  @Test
  void testConstantFoldSubscriptRead() {
    var firText =
        """
      fun main() {
        () --> I { reg vec:v1(I), reg result:I |
          mkenv;
          vec = box< I --> v1(I) >(42);
          result = `[`< v(I),I,miss,miss --> I >(vec, 2, <missing>, <missing>);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    // box(<int 42>) = v1(I)[42], then [2] on a size-1 vector is out of bounds → no fold
    assertNotEquals(new Constant(new Value.Int(42)), analysis.get(Variable.register("result")));
  }

  @Test
  void testConstantFoldSubscriptReadInBounds() {
    var firText =
        """
      fun main() {
        () --> I { reg vec:v1(I), reg result:I |
          mkenv;
          vec = box< I --> v1(I) >(42);
          result = `[`< v(I),I,miss,miss --> I >(vec, 1, <missing>, <missing>);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(new Value.Int(42)), analysis.get(Variable.register("result")));
  }

  @Test
  void testConstantFoldDoubleSubscriptRead() {
    var firText =
        """
      fun main() {
        () --> I { reg vec:v1(I), reg result:I |
          mkenv;
          vec = box< I --> v1(I) >(42);
          result = `[[`< v(I),I,miss,miss --> I >(vec, 1, <missing>, <missing>);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(new Value.Int(42)), analysis.get(Variable.register("result")));
  }

  @Test
  void testConstantFoldSubscriptWrite() {
    var firText =
        """
      fun main() {
        () --> v(I) { reg vec:v1(I), reg result:v(I) |
          mkenv;
          vec = box< I --> v1(I) >(42);
          result = `[<-`< v(I),I,I,miss --> v(I) >(vec, 1, 99, <missing>);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(SEXPs.integer(99)), analysis.get(Variable.register("result")));
  }

  @Test
  void testConstantFoldDoubleSubscriptWrite() {
    var firText =
        """
      fun main() {
        () --> v(I) { reg vec:v1(I), reg result:v(I) |
          mkenv;
          vec = box< I --> v1(I) >(42);
          result = `[[<-`< v(I),I,I --> v(I) >(vec, 1, 99);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(SEXPs.integer(99)), analysis.get(Variable.register("result")));
  }

  @Test
  void testConstantFoldSubscriptWriteChain() {
    // Tests that c + [ + [<- can all chain together
    var firText =
        """
      fun main() {
        () --> v(I) { reg vargs:dots, reg vec:V, reg result:v(I) |
          mkenv;
          vargs = dots[<int 10>, <int 20>, <int 30>];
          vec = c< dots --> V >(vargs);
          result = `[<-`< v(I),I,I,miss --> v(I) >(vec, 2, 99, <missing>);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(
        new Constant(SEXPs.integer(10, 99, 30)), analysis.get(Variable.register("result")));
  }

  @Test
  void testConstantFoldCEmpty() {
    var firText =
        """
      fun main() {
        () --> V { reg vargs:dots, reg result:V |
          mkenv;
          vargs = dots[];
          result = c< dots --> V >(vargs);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(SEXPs.NULL), analysis.get(Variable.register("result")));
  }

  @Test
  void testConstantFoldCLogical() {
    var firText =
        """
      fun main() {
        () --> V { reg vargs:dots, reg result:V |
          mkenv;
          vargs = dots[<lgl TRUE>, <lgl FALSE>];
          result = c< dots --> V >(vargs);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(
        new Constant(SEXPs.logical(Logical.TRUE, Logical.FALSE)),
        analysis.get(Variable.register("result")));
  }

  @Test
  void testConstantFoldCReal() {
    var firText =
        """
      fun main() {
        () --> V { reg vargs:dots, reg result:V |
          mkenv;
          vargs = dots[<real 1.5>, <real 2.5>];
          result = c< dots --> V >(vargs);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(SEXPs.real(1.5, 2.5)), analysis.get(Variable.register("result")));
  }

  @Test
  void testConstantFoldCString() {
    var firText =
        """
      fun main() {
        () --> V { reg vargs:dots, reg result:V |
          mkenv;
          vargs = dots[<str "hello">, <str "world">];
          result = c< dots --> V >(vargs);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(
        new Constant(SEXPs.string("hello", "world")), analysis.get(Variable.register("result")));
  }

  @Test
  void testConstantFoldCTypePromotion() {
    // logical + int → int (widest type)
    var firText =
        """
      fun main() {
        () --> V { reg vargs:dots, reg result:V |
          mkenv;
          vargs = dots[<lgl TRUE>, <int 2>];
          result = c< dots --> V >(vargs);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(SEXPs.integer(1, 2)), analysis.get(Variable.register("result")));
  }

  @Test
  void testConstantFoldCNamedElementsNotFolded() {
    var firText =
        """
      fun main() {
        () --> V { reg vargs:dots, reg result:V |
          mkenv;
          vargs = dots[x = <int 1>];
          result = c< dots --> V >(vargs);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    assertInstanceOf(Read.class, analysis.get(Variable.register("result")));
  }

  @Test
  void testConstantFoldSubscriptWriteOutOfBounds() {
    var firText =
        """
      fun main() {
        () --> v(I) { reg vec:v1(I), reg result:v(I) |
          mkenv;
          vec = box< I --> v1(I) >(42);
          result = `[<-`< v(I),I,I,miss --> v(I) >(vec, 2, 99, <missing>);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    // box(42) creates a size-1 vector; writing at index 2 is out of bounds → no fold
    assertInstanceOf(Read.class, analysis.get(Variable.register("result")));
  }

  @Test
  void testConstantFoldDoubleSubscriptWriteOutOfBounds() {
    var firText =
        """
      fun main() {
        () --> v(I) { reg vec:v1(I), reg result:v(I) |
          mkenv;
          vec = box< I --> v1(I) >(42);
          result = `[[<-`< v(I),I,I --> v(I) >(vec, 2, 99);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var analysis = new OriginAnalysis(main);

    // box(42) creates a size-1 vector; writing at index 2 is out of bounds → no fold
    assertInstanceOf(Read.class, analysis.get(Variable.register("result")));
  }

  /// A promise that stores to `a` is itself stored in variable `p`, then `a` is reassigned, then
  /// `p` is loaded and forced. The promise's body must run at the *force* (not its creation), with
  /// the env state at that point, so its store to `a` definitely takes effect there. This is the
  /// case the old "run the promise once at its creation" handling got wrong (it couldn't follow the
  /// promise through `p`, nor force it with the later state).
  @Test
  void testPromiseForcedThroughVariableRunsAtForce() {
    var firText =
        """
        fun main() {
          () -+> V { reg pr:p(V +), reg q:p(V +), reg f:V, reg r:V, var a:V, var p:p(V +) |
            mkenv;
            pr = prom<V +>{ st a = <int 99>; return <int 0>; };
            st p = pr;
            st a = <int 1>;
            q = ld p;
            f = force q;
            r = ld a;
            popenv;
            return r;
          }
        }
        """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var entry = Objects.requireNonNull(main.cfg()).entry();

    var analysis = new OriginAnalysis(main);

    // Before the force, `a` is the value stored after the promise was created.
    assertEquals(
        Set.of(new Constant(SEXPs.integer(1))),
        analysis.getPossible(entry, 3, Variable.named("a")));
    // The force definitely runs the promise body for the first time, so its store replaces `a`.
    assertEquals(
        Set.of(new Constant(SEXPs.integer(99))),
        analysis.getPossible(entry, 5, Variable.named("a")));
    // The load and the forced value resolve to those constants.
    assertEquals(new Constant(SEXPs.integer(99)), analysis.get(Variable.register("r")));
    assertEquals(new Constant(SEXPs.integer(0)), analysis.get(Variable.register("f")));
  }

  /// A promise that stores to `a` is super-stored into the (untracked) global env, so it leaks: it
  /// may now be forced from anywhere. After reassigning `a` and calling a function (which may force
  /// the leaked promise), `a` is ambiguous — either the value stored before the call, or the one
  /// the promise stores.
  @Test
  void testLeakedPromiseMaybeForcedAtCall() {
    var firText =
        """
        fun main() {
          () -+> V { reg pr:p(V +), reg c:V, var a:V, var gp:p(V +) |
            mkenv;
            pr = prom<V +>{ st a = <int 99>; return <int 0>; };
            st-super gp = pr;
            st a = <int 1>;
            c = g< --> V >();
            popenv;
            return c;
          }
        }

        fun g() {
          () --> V { reg v:V | v = <int 0>; return v; }
        }
        """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).version(0);
    var entry = Objects.requireNonNull(main.cfg()).entry();

    var analysis = new OriginAnalysis(main);

    // Before the call, `a` is just the value stored after the promise was created.
    assertEquals(
        Set.of(new Constant(SEXPs.integer(1))),
        analysis.getPossible(entry, 3, Variable.named("a")));
    // The call may force the leaked promise, so `a` is either its prior value or what the promise
    // stores.
    assertEquals(
        Set.of(new Constant(SEXPs.integer(1)), new Constant(SEXPs.integer(99))),
        analysis.getPossible(entry, 4, Variable.named("a")));
  }
}
