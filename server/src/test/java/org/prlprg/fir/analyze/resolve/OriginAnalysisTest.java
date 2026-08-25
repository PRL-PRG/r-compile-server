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
import org.prlprg.primitive.Logical;
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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();

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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();

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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
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
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(SEXPs.integer(10, 99, 30)), analysis.get(reg(main, "result")));
  }

  @Test
  void testConstantFoldCEmpty() {
    var firText =
        """
      fun main() {
        () --> V {
          mkenv;
          vargs: dots = dots[];
          result: V = c< dots --> V >(vargs);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(SEXPs.NULL), analysis.get(reg(main, "result")));
  }

  @Test
  void testConstantFoldCLogical() {
    var firText =
        """
      fun main() {
        () --> V {
          mkenv;
          vargs: dots = dots[<lgl TRUE>, <lgl FALSE>];
          result: V = c< dots --> V >(vargs);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    var analysis = new OriginAnalysis(main);

    assertEquals(
        new Constant(SEXPs.logical(Logical.TRUE, Logical.FALSE)),
        analysis.get(reg(main, "result")));
  }

  @Test
  void testConstantFoldCReal() {
    var firText =
        """
      fun main() {
        () --> V {
          mkenv;
          vargs: dots = dots[<real 1.5>, <real 2.5>];
          result: V = c< dots --> V >(vargs);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(SEXPs.real(1.5, 2.5)), analysis.get(reg(main, "result")));
  }

  @Test
  void testConstantFoldCString() {
    var firText =
        """
      fun main() {
        () --> V {
          mkenv;
          vargs: dots = dots[<str "hello">, <str "world">];
          result: V = c< dots --> V >(vargs);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(SEXPs.string("hello", "world")), analysis.get(reg(main, "result")));
  }

  @Test
  void testConstantFoldCTypePromotion() {
    // logical + int → int (widest type)
    var firText =
        """
      fun main() {
        () --> V {
          mkenv;
          vargs: dots = dots[<lgl TRUE>, <int 2>];
          result: V = c< dots --> V >(vargs);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    var analysis = new OriginAnalysis(main);

    assertEquals(new Constant(SEXPs.integer(1, 2)), analysis.get(reg(main, "result")));
  }

  @Test
  void testConstantFoldCNamedElementsNotFolded() {
    var firText =
        """
      fun main() {
        () --> V {
          mkenv;
          vargs: dots = dots[x = <int 1>];
          result: V = c< dots --> V >(vargs);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    var analysis = new OriginAnalysis(main);

    assertInstanceOf(Read.class, analysis.get(reg(main, "result")));
  }

  @Test
  void testConstantFoldSubscriptWriteOutOfBounds() {
    var firText =
        """
      fun main() {
        () --> v(I) {
          mkenv;
          vec: v1(I) = box< I --> v1(I) >(42);
          result: v(I) = `[<-`< v(I),I,I,miss --> v(I) >(vec, 2, 99, <missing>);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    var analysis = new OriginAnalysis(main);

    // box(42) creates a size-1 vector; writing at index 2 is out of bounds → no fold
    assertInstanceOf(Read.class, analysis.get(reg(main, "result")));
  }

  @Test
  void testConstantFoldDoubleSubscriptWriteOutOfBounds() {
    var firText =
        """
      fun main() {
        () --> v(I) {
          mkenv;
          vec: v1(I) = box< I --> v1(I) >(42);
          result: v(I) = `[[<-`< v(I),I,I --> v(I) >(vec, 2, 99);
          return result;
        }
      }
      """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    var analysis = new OriginAnalysis(main);

    // box(42) creates a size-1 vector; writing at index 2 is out of bounds → no fold
    assertInstanceOf(Read.class, analysis.get(reg(main, "result")));
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
          () -+> V {
            mkenv;
            pr:p(V +) = prom<V +>{ st a = <int 99>; return <int 0>; };
            st p = pr;
            st a = <int 1>;
            q:p(V +) = ld p;
            f:V = force q;
            r:V = ld a;
            popenv;
            return r;
          }
        }
        """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
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
    assertEquals(new Constant(SEXPs.integer(99)), analysis.get(reg(main, "r")));
    assertEquals(new Constant(SEXPs.integer(0)), analysis.get(reg(main, "f")));
  }

  /// A promise that stores to `a` is super-stored into the (untracked) global env, so it leaks: it
  /// may now be forced from anywhere. After reassigning `a` and calling a function that has the
  /// effects to force it, `a` is ambiguous — either the value stored before the call, or the one
  /// the promise stores.
  @Test
  void testLeakedPromiseMaybeForcedAtCall() {
    var firText =
        """
        fun main() {
          () -+> V {
            mkenv;
            pr:p(V ~) = prom<V ~>{ st a = <int 99>; return <int 0>; };
            st-super gp = pr;
            st a = <int 1>;
            c:V = g< -~> V >();
            popenv;
            return c;
          }
        }

        fun g() {
          () -~> V { return <int 0>; }
        }
        """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
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

  /// Same as [#testLeakedPromiseMaybeForcedAtCall], except the call is effect-free. Forcing the
  /// promise would run its store, which the call would have to declare, so it can't be the thing
  /// that forces it, and `a` keeps the value stored before the call.
  @Test
  void testEffectFreeCallDoesntForceLeakedPromise() {
    var firText =
        """
        fun main() {
          () -+> V {
            mkenv;
            pr:p(V ~) = prom<V ~>{ st a = <int 99>; return <int 0>; };
            st-super gp = pr;
            st a = <int 1>;
            c:V = g< --> V >();
            popenv;
            return c;
          }
        }

        fun g() {
          () --> V { return <int 0>; }
        }
        """;

    var module = parseModule(firText);
    var main = Objects.requireNonNull(module.localFunction(Variable.named("main"))).baseline();
    var entry = Objects.requireNonNull(main.cfg()).entry();

    var analysis = new OriginAnalysis(main);

    assertEquals(
        Set.of(new Constant(SEXPs.integer(1))),
        analysis.getPossible(entry, 4, Variable.named("a")));
  }

  /// The shape `bench_ai_awf_permute`'s `permute` compiles to: `list` is seeded before the loop
  /// with the promise `_p` (its default argument), and each iteration reassigns it twice, so the
  /// last store (`list22`) is the only one that reaches the back edge. Inside the body, before the
  /// first `swap` call, `list` is therefore the phi of `_p` and `list22` — `list16` never survives
  /// an iteration.
  ///
  /// `_p` escapes (the loop merge sees a promise on one edge and a plain value on the other), and
  /// so do the wrapper promises the body builds, so the reflective calls in the loop may force one
  /// of them and pick up whatever bindings it leaves behind. The loop header can't: an increment
  /// and a comparison have no effects to run a reflective promise body with, so the phi reaches
  /// the query point intact.
  @Test
  void testLoopVariableResolvesToPhiOfSeedAndBackEdge() {
    var firText =
        """
        fun permute(n) {
          (reg n:I) -+> I {
            mkenv~;
            _p: p(v(I) +) = prom<v(I) +>{ r: v(I) = seq< I -+> v(I) >(n); return r; };
            st list = _p;
            goto L1(0);
          L1(k: I):
            k1: I = `+`< I,I --> I >(k, 1);
            _cond: L = `<`< I,I --> L >(k1, n);
            _cond1: B = naToFalse< L --> B >(_cond);
            if _cond1 then L2() else L3();
          L2():
            _p1: p(v(I) +) = prom<v(I) +>{
              l1: * = ld list;
              l2: V = force? l1;
              l3: v(I) = l2 ?: v(I);
              return l3;
            };
            list16: v(I) = swap< p(v(I) +)@!,I -+> v(I) >(_p1, k1);
            st list = list16;
            _p6: p(v(I) +) = prom<v(I) +>{
              l4: * = ld list;
              l5: V = force? l4;
              l6: v(I) = l5 ?: v(I);
              return l6;
            };
            list22: v(I) = swap< p(v(I) +)@!,I -+> v(I) >(_p6, k1);
            st list = list22;
            goto L1(k1);
          L3():
            popenv;
            return k1;
          }
        }

        fun swap(l, i) {
          (reg l:p(v(I) +)@!, reg i:I) -+> v(I) { ... }
        }

        fun seq(i) {
          (reg i:I) -+> v(I) { ... }
        }
        """;

    var module = parseModule(firText);
    var permute =
        Objects.requireNonNull(module.localFunction(Variable.named("permute"))).baseline();
    var cfg = Objects.requireNonNull(permute.cfg());
    var l1 = Objects.requireNonNull(cfg.bb("L1"));
    var l2 = Objects.requireNonNull(cfg.bb("L2"));

    var analysis = new OriginAnalysis(permute);

    var phi = Set.of(new Read(reg(permute, "_p")), new Read(reg(permute, "list22")));
    assertEquals(phi, analysis.getPossible(l1, -1, Variable.named("list")));
    // The loop header's pure statements leave it alone, so it still holds where `_p1` is built and
    // passed to `swap`.
    assertEquals(phi, analysis.getPossible(l2, 0, Variable.named("list")));
    // Two origins, so there's no unique one.
    assertNull(analysis.get(l2, 0, Variable.named("list")));
    // `list16` is excluded because the second store overwrites it before the back edge.
    assertEquals(
        Set.of(new Read(reg(permute, "list16"))),
        analysis.getPossible(l2, 2, Variable.named("list")));
    assertEquals(
        Set.of(new Read(reg(permute, "list22"))),
        analysis.getPossible(l2, 5, Variable.named("list")));
  }
}
