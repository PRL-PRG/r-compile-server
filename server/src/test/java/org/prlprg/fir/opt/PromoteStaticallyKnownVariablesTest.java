package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXPs;

class PromoteStaticallyKnownVariablesTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new PromoteStaticallyKnownVariables();
  }

  @Test
  void branchMerge_promotesVariableIntoPhi() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (cond:B) --> I {
              mkenv;
              if cond then L1() else L2();
            L1():
              st x = 1;
              goto L3();
            L2():
              st x = 2;
              goto L3();
            L3():
              x1: I = ld x;
              return x1;
            }
            """);

    assertTrue(run(abstraction), "branch merge should be promoted");

    var printed = Printer.toString(abstraction);
    assertNoVariableTraffic(printed, "x");
    assertFalse(printed.contains("var x:"), "named variable should be removed:\n" + printed);
    assertTrue(printed.contains("L3("), "merge block should receive a phi parameter:\n" + printed);
    assertTrue(printed.contains("goto L3("), "predecessors should pass phi arguments:\n" + printed);
  }

  @Test
  void repeatedMerges_insertPhiAtEachMergePoint() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (cond1:B, cond2:B) --> I {
              mkenv;
              st x = 0;
              if cond1 then L1() else L2();
            L1():
              st x = 1;
              goto L3();
            L2():
              st x = 2;
              goto L3();
            L3():
              if cond2 then L4() else L5();
            L4():
              st x = 3;
              goto L6();
            L5():
              goto L6();
            L6():
              x1: I = ld x;
              return x1;
            }
            """);

    assertTrue(run(abstraction), "both merge points should be promoted");

    var printed = Printer.toString(abstraction);
    assertNoVariableTraffic(printed, "x");
    assertTrue(printed.contains("L3("), "first merge should have a phi:\n" + printed);
    assertTrue(printed.contains("L6("), "second merge should have a phi:\n" + printed);
    assertTrue(
        ParseUtil.countOccurrences(printed, "goto L3(") >= 2,
        "both predecessors should pass values into the first phi:\n" + printed);
    assertTrue(
        ParseUtil.countOccurrences(printed, "goto L6(") >= 2,
        "both predecessors should pass values into the second phi:\n" + printed);
  }

  @Test
  void loopHeader_getsPhiWhenBackedgeChangesValue() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (cond1:B, cond2:B) --> I {
              mkenv;
              st x = 0;
              goto Loop();
            Loop():
              if cond1 then Guard() else Exit();
            Guard():
              check Body() else Deopt();
            Body():
              st x = 1;
              if cond2 then Loop() else Exit();
            Exit():
              x1: I = ld x;
              return x1;
            Deopt():
              deopt 0 [];
            }
            """);

    assertTrue(run(abstraction), "loop header should get a phi");

    var printed = Printer.toString(abstraction);
    assertFalse(printed.contains("ld x"), "load should be removed:\n" + printed);
    assertTrue(printed.contains("Loop("), "loop header should have a phi parameter:\n" + printed);
    assertTrue(
        printed.contains("goto Loop("),
        "entry and backedge should pass phi arguments:\n" + printed);
    // The bytecode we deopt into reads `x` out of the environment, so the store the fast path no
    // longer does has to happen here instead.
    assertOnlyStoredBeforeDeopt(printed, "x");
  }

  @Test
  void reflectiveCfg_isLeftUnchanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () -+> I {
              mkenv;
              st x = 0;
              g: V = ldf g;
              x1: I = ld x;
              return x1;
            }
            """);

    assertFalse(run(abstraction), "reflective CFG should not be promoted");

    var printed = Printer.toString(abstraction);
    // (Named-variable declared types are no longer printed — the old `var x:I` check is gone. That
    // the variable wasn't promoted is shown by its store surviving and no phi/Exit blocks
    // appearing.)
    assertTrue(printed.contains("st x = 0"), "store should remain:\n" + printed);
    assertFalse(printed.contains("Exit("), "promotion should not insert phis:\n" + printed);
  }

  @Test
  void nonReflectiveEnv_promotesAcrossReflection() {
    // Same shape as `branchMerge_promotesVariableIntoPhi`, plus a function lookup, which may force
    // a promise and so counts as reflective. `mkenv~` is the speculation that this environment is
    // never reflectively accessed, so whatever that lookup runs still can't see `x`.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (cond:B) -+> I {
              mkenv~;
              if cond then L1() else L2();
            L1():
              st x = 1;
              goto L3();
            L2():
              st x = 2;
              goto L3();
            L3():
              g: V = ldf g;
              x1: I = ld x;
              return x1;
            }
            """);

    assertTrue(run(abstraction), "non-reflective env should be promoted");

    var printed = Printer.toString(abstraction);
    assertNoVariableTraffic(printed, "x");
    assertTrue(printed.contains("L3("), "merge block should receive a phi parameter:\n" + printed);
  }

  @Test
  void maybeBoundAtDeopt_isLeftAlone() {
    // `x` is only stored on one of the two paths into L2, so at D0 it may or may not be bound. The
    // promoted register has no value to restore there, and dropping the store would leave the
    // bytecode we deopt into without the binding the storing path gave it.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (cond:B) --> V {
              mkenv;
              if cond then L1() else L2();
            L1():
              st x = <int 1>;
              x1: V = ld x;
              goto L2();
            L2():
              check L3() else D0();
            L3():
              popenv;
              return <nil>;
            D0():
              deopt 0 [];
            }
            """);

    assertFalse(run(abstraction), "maybe-bound-at-deopt variable should not be promoted");
    assertTrue(
        Printer.toString(abstraction).contains("st x ="),
        "store should remain:\n" + Printer.toString(abstraction));
  }

  @Test
  void promiseArgument_capturesTheValueWhereItWasBuilt() {
    // A promise body loads the variable when it's *forced*. Here the promise goes straight to a
    // strict parameter, so it's forced inside that call, before anything can store `x` again --
    // which is what lets the body read the value from the creation site instead.
    var module =
        ParseUtil.parseModule(
            """
            fun main(cond) {
              (cond:B) -+> V { ... }
              (cond:B) -+> V {
                mkenv~;
                st x = <int 1>;
                if cond then L1() else L2();
              L1():
                st x = <int 2>;
                goto L3();
              L2():
                goto L3();
              L3():
                p: p(V -) = prom-<V ->{ x1: V = ld x; return x1; };
                r: V = f< p(V -)@! -+> V >(p);
                popenv;
                return r;
              }
            }

            fun f(r) {
              (r:*@!) -+> V { ... }
              (r:p(V -)@!) -+> V { ... }
            }
            """);

    assertTrue(run(module), "promise load should be promoted");

    var printed = Printer.toString(module);
    assertNoVariableTraffic(printed, "x");
    assertTrue(printed.contains("L3("), "merge block should receive a phi parameter:\n" + printed);
  }

  @Test
  void promiseArgument_atNonStrictParameter_isLeftAlone() {
    // Same, except the callee may hold onto the promise and force it whenever, so the body can't
    // be given the value `x` happened to have where the promise was built.
    var module =
        ParseUtil.parseModule(
            """
            fun main(cond) {
              (cond:B) -+> V { ... }
              (cond:B) -+> V {
                mkenv~;
                st x = <int 1>;
                if cond then L1() else L2();
              L1():
                st x = <int 2>;
                goto L3();
              L2():
                goto L3();
              L3():
                p: p(V -) = prom-<V ->{ x1: V = ld x; return x1; };
                r: V = f< p(V -) -+> V >(p);
                popenv;
                return r;
              }
            }

            fun f(r) {
              (r:*@!) -+> V { ... }
              (r:p(V -)) -+> V { ... }
            }
            """);

    assertFalse(run(module), "non-strict promise argument should not be promoted");
    assertTrue(
        Printer.toString(module).contains("ld x"),
        "load should remain:\n" + Printer.toString(module));
  }

  /// `ld ..1` reads the `...` binding, and the promotion can't rewrite it.
  @Test
  void dotsReadByDdNum_isLeftAlone() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (ddd:dots) --> * {
              mkenv~;
              st `...` = ddd;
              a: * = ld `..1`;
              b: * = ld `...`;
              popenv;
              return a;
            }
            """);

    assertFalse(run(abstraction), Printer.toString(abstraction));
  }

  /// The shape of a `while` loop whose variable is only stored: the loop has no store, and the
  /// deopt branch at the loop head stores the value of the current trip.
  @Test
  void storeOnlyLoopVariable_isStoredOnlyBeforeDeopt() {
    var module = ParseUtil.parseModule(STORE_ONLY_LOOP);

    assertTrue(run(module), "store-only variable should be promoted");

    var printed = Printer.toString(module);
    var version = printed.substring(printed.indexOf("(n:v1(I))"));
    assertOnlyStoredBeforeDeopt(version, "x");
    assertTrue(version.contains("H(i: I, x"), "loop head should get a phi:\n" + printed);
    assertFalse(run(module), "a second run should change nothing:\n" + printed);
  }

  /// The version's assumption fails in the fourth trip and the baseline continues. The result and
  /// every checkpoint snapshot (including the deopt's frame) are the same before and after the
  /// promotion.
  @Test
  void storeOnlyLoopVariable_keepsTheDeoptState() {
    var module = ParseUtil.parseModule(STORE_ONLY_LOOP);
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);
    var argument = new Value.Sexp(SEXPs.integer(1));

    var before = new Value[1];
    var after = new Value[1];
    var beforeTrace =
        interpreter.checkpointTrace().track(() -> before[0] = interpreter.call("f", argument));
    assertTrue(run(module));
    var afterTrace =
        interpreter.checkpointTrace().track(() -> after[0] = interpreter.call("f", argument));

    var printed = Printer.toString(module);
    assertEquals(new Value.Sexp(SEXPs.integer(5)), after[0], printed);
    assertEquals(before[0], after[0], printed);
    assertEquals(beforeTrace, afterTrace, printed);
    // The deopt in the fourth trip (`i` is 3) has the `x` of the third trip.
    assertTrue(
        beforeTrace.stream()
            .anyMatch(
                s -> s.pc() == 0 && s.toString().contains("[3]") && s.toString().contains("(x=3)")),
        beforeTrace.toString());
  }

  /// The shape of a `for` variable: a store in the body only, so the variable is maybe unbound at
  /// the loop-head deopt.
  @Test
  void storeOnlyVariableMaybeUnboundAtDeopt_isLeftAlone() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (cond:B) --> I {
              mkenv;
              goto H();
            H():
              check B() else D();
            B():
              if cond then Body() else Exit();
            Body():
              st x = <int 1>;
              goto H();
            Exit():
              popenv;
              return 0;
            D():
              deopt 0 [];
            }
            """);

    assertFalse(run(abstraction), Printer.toString(abstraction));
  }

  /// An inlined callee's frame reads the variable with `ld-super`.
  @Test
  void storeOnlyVariableReadBySuperLoad_isLeftAlone() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () --> V {
              mkenv;
              st x = <int 1>;
              mkenv;
              y: * = ld-super x;
              popenv;
              popenv;
              return y;
            }
            """);

    assertFalse(run(abstraction), Printer.toString(abstraction));
  }

  @Language("FIR")
  private static final String STORE_ONLY_LOOP =
      """
      fun f(n) {
        (n:*) --> V {
          mkenv;
          st x = <int 0>;
          goto H(0);
        H(i: I):
          check B() else D();
        B():
          l: L = `<`< I,I --> L >(i, 5);
          c: B = naToFalse< L --> B >(l);
          if c then Body() else Exit();
        Body():
          i1: I = `+`< I,I --> I >(i, 1);
          xb: v1(I) = box< I --> v1(I) >(i1);
          st x = xb;
          goto H(i1);
        Exit():
          r: * = ld x;
          popenv;
          return r;
        D():
          ib: v1(I) = box< I --> v1(I) >(i);
          deopt 0 [ib];
        }
        (n:v1(I)) --> V {
          mkenv;
          st x = <int 0>;
          goto H(0);
        H(i: I):
          k: L = `<`< I,I --> L >(i, 3);
          kk: B = naToFalse< L --> B >(k);
          check B() else D();
        B():
          kk ?= TRUE;
          l: L = `<`< I,I --> L >(i, 5);
          c: B = naToFalse< L --> B >(l);
          if c then Body() else Exit();
        Body():
          i1: I = `+`< I,I --> I >(i, 1);
          xb: v1(I) = box< I --> v1(I) >(i1);
          st x = xb;
          goto H(i1);
        Exit():
          ib: v1(I) = box< I --> v1(I) >(i);
          popenv;
          return ib;
        D():
          ib2: v1(I) = box< I --> v1(I) >(i);
          deopt 0 [ib2];
        }
      }
      """;

  private static void assertNoVariableTraffic(String printed, String variable) {
    assertFalse(printed.contains("st " + variable + " ="), "store should be removed:\n" + printed);
    assertFalse(printed.contains("ld " + variable), "load should be removed:\n" + printed);
  }

  /// Asserts every surviving store of `variable` is in a block that ends in `deopt`.
  private static void assertOnlyStoredBeforeDeopt(String printed, String variable) {
    var store = "st " + variable + " =";
    assertTrue(printed.contains(store), "deopt branch should restore the binding:\n" + printed);
    for (var block : printed.split("\n(?=\\S)")) {
      if (block.contains(store)) {
        assertTrue(
            block.contains("deopt "),
            "store outside a deopt branch:\n" + block + "\nin:\n" + printed);
      }
    }
  }
}
