package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import java.util.List;
import java.util.Set;
import java.util.regex.Pattern;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.check.Checker;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXPs;

class SchedulePureTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new SchedulePure();
  }

  @Test
  void unboxIsntHoistedIntoACheckpointsAssumptions() {
    // `y` is hoisted to right after `x1`, which would put it between the checkpoint's assumptions
    // -- and an assumption after another statement is never checked.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:*) -+> I {
              mkenv;
              check L1() else D0();
            L1():
              x1: v1(I) = x ?: v1(I);
              x2: v1(I) = x ?: v1(I);
              y: I = unbox< v1(I) --> I >(x1);
              y2: I = unbox< v1(I) --> I >(x2);
              s: I = `+`< I,I --> I >(y, y2);
              popenv;
              return s;
            D0():
              deopt 0 [];
            }
            """);

    run(abstraction);
    assertFalse(run(abstraction), "unboxes hoisted past the same assumptions should be stable");

    var printed = Printer.toString(abstraction);
    assertOrder(printed, "x2: v1(I) = x ?: v1(I);", "y: I = unbox< v1(I) --> I >(x1);");
    assertOrder(printed, "x2: v1(I) = x ?: v1(I);", "y2: I = unbox< v1(I) --> I >(x2);");
  }

  @Test
  void boxIsDeferredAcrossBasicBlocks() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:I, c:B) --> v1(I) {
              boxed: v1(I) = box< I --> v1(I) >(x);
              if c then L0() else L1();
            L0():
              return boxed;
            L1():
              other: v1(I) = box< I --> v1(I) >(x);
              return other;
            }
            """);

    assertTrue(run(abstraction), "box should move to the first use block");

    var printed = Printer.toString(abstraction);
    assertOrder(printed, "L0():", "boxed: v1(I) = box< I --> v1(I) >(x);");
    assertOrder(printed, "boxed: v1(I) = box< I --> v1(I) >(x);", "return boxed;");
    assertFalse(
        printed.contains("$ENTRY:\n  boxed: v1(I) = box< I --> v1(I) >(x);"),
        "box should leave the entry block; got:\n" + printed);
  }

  @Test
  void boxIsDeferredIntoPromiseWhenAllUsesAreThere() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:I) -~> p(v1(I) -) {
              boxed: v1(I) = box< I --> v1(I) >(x);
              p: p(v1(I) -) = prom<v1(I) ->{
                return boxed;
              };
              return p;
            }
            """);

    assertTrue(run(abstraction), "box should be deferred into the promise");

    var printed = Printer.toString(abstraction);
    assertOrder(printed, "prom<v1(I) ->{", "boxed: v1(I) = box< I --> v1(I) >(x);");
    assertOrder(printed, "boxed: v1(I) = box< I --> v1(I) >(x);", "return boxed;");
  }

  @Test
  void promiseCountsAsUseWhenBoxAlsoUsedOutside() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:I) -~> v1(I) {
              boxed: v1(I) = box< I --> v1(I) >(x);
              q: p(I -) = prom<I ->{
                return x;
              };
              st q = q;
              p: p(v1(I) -) = prom<v1(I) ->{
                return boxed;
              };
              st p = p;
              return boxed;
            }
            """);

    assertTrue(run(abstraction), "box should move to the promise boundary, not into the promise");

    var printed = Printer.toString(abstraction);
    var boxIndex = printed.indexOf("boxed: v1(I) = box< I --> v1(I) >(x);");
    var qIndex = printed.indexOf("q: p(I -) = prom<I ->{");
    assertTrue(qIndex >= 0, "missing `q = prom<I ->{` in:\n" + printed);
    assertTrue(qIndex < boxIndex, "box should move after the earlier promise; got:\n" + printed);
    assertOrder(printed, "boxed: v1(I) = box< I --> v1(I) >(x);", "p: p(v1(I) -) = prom<v1(I) ->{");
  }

  @Test
  void unboxIsHoistedAcrossBasicBlocks() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:v(I), c:B) --> I {
              boxed: v1(I) = x as v1(I);
              if c then L0() else L1();
            L0():
              unboxed: I = unbox< v1(I) --> I >(boxed);
              return unboxed;
            L1():
              return x;
            }
            """);

    assertTrue(run(abstraction), "unbox should move to the boxed definition");

    var printed = Printer.toString(abstraction);
    assertOrder(printed, "boxed: v1(I) = x as v1(I);", "unboxed: I = unbox< v1(I) --> I >(boxed);");
    assertOrder(printed, "unboxed: I = unbox< v1(I) --> I >(boxed);", "if c then L0() else L1();");
  }

  @Test
  void cyclicDependency() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:I, c:B) --> I {
              boxed: v1(I) = box< I --> v1(I) >(x);
              if c then L0() else L1();
            L0():
              unboxed: I = unbox< v1(I) --> I >(boxed);
              return unboxed;
            L1():
              return x;
            }
            """);

    assertTrue(run(abstraction), "either `boxed` is deferred after the `if`, or `unboxed` before");

    var printed = Printer.toString(abstraction);
    assertOrder(
        printed,
        "boxed: v1(I) = box< I --> v1(I) >(x);",
        "unboxed: I = unbox< v1(I) --> I >(boxed);");
  }

  @Test
  void unboxIsHoistedOutOfPromiseWhenArgumentIsOuter() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:v(I)) -~> p(I -) {
              boxed: v1(I) = x as v1(I);
              p: p(I -) = prom<I ->{
                unboxed: I = unbox< v1(I) --> I >(boxed);
                return unboxed;
              };
              return p;
            }
            """);

    assertTrue(run(abstraction), "unbox should hoist before the promise");

    var printed = Printer.toString(abstraction);
    assertOrder(printed, "boxed: v1(I) = x as v1(I);", "unboxed: I = unbox< v1(I) --> I >(boxed);");
    assertOrder(printed, "unboxed: I = unbox< v1(I) --> I >(boxed);", "p: p(I -) = prom<I ->{");
  }

  @Test
  void cyclicDependencyInPromise() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:I) -~> p(I -) {
              boxed: v1(I) = box< I --> v1(I) >(x);
              p: p(I -) = prom<I ->{
                unboxed: I = unbox< v1(I) --> I >(boxed);
                return unboxed;
              };
              return p;
            }
            """);

    assertTrue(run(abstraction), "`boxed` should move into the promise, or `unbox` out");

    var printed = Printer.toString(abstraction);
    assertOrder(
        printed,
        "boxed: v1(I) = box< I --> v1(I) >(x);",
        "unboxed: I = unbox< v1(I) --> I >(boxed);");
  }

  @Test
  void unboxStaysInPromiseWhenArgumentIsDefinedThere() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:I) -~> p(I -) {
              p: p(I -) = prom<I ->{
                boxed: v1(I) = box< I --> v1(I) >(x);
                unboxed: I = unbox< v1(I) --> I >(boxed);
                return unboxed;
              };
              return p;
            }
            """);

    assertFalse(run(abstraction), "nothing should hoist out of the promise");
  }

  @Test
  void siblingUnboxesWithSameAnchorDoNotOscillate() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:I) --> I {
              boxed: v1(I) = box< I --> v1(I) >(x);
              y: I = `+`< I,I --> I >(x, <int 1>);
              b: I = unbox< v1(I) --> I >(boxed);
              a: I = unbox< v1(I) --> I >(boxed);
              r: I = `+`< I,I --> I >(a, b);
              return r;
            }
            """);

    assertTrue(run(abstraction), "unboxes should hoist next to the box once");
    assertFalse(run(abstraction), "sibling unboxes with the same anchor should be stable");

    var printed = Printer.toString(abstraction);
    assertOrder(
        printed, "boxed: v1(I) = box< I --> v1(I) >(x);", "b: I = unbox< v1(I) --> I >(boxed);");
    assertOrder(
        printed, "b: I = unbox< v1(I) --> I >(boxed);", "a: I = unbox< v1(I) --> I >(boxed);");
  }

  @Test
  void secondRunIsIdempotent() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:I, c:B) --> I {
              boxed: v1(I) = box< I --> v1(I) >(x);
              if c then L0() else L1();
            L0():
              r: I = unbox< v1(I) --> I >(boxed);
              return r;
            L1():
              return x;
            }
            """);

    assertTrue(run(abstraction), "first run should move the unbox");
    assertFalse(run(abstraction), "second run should be a no-op");
  }

  @Test
  void boxUsedInIncomparableBranchesIsCopiedAndEveryUseRewritten() {
    // `boxed`'s two uses are the checkpoint's success and deopt branches, which don't dominate
    // each other, so the box is copied into both. Every use has to be rewritten to the copy that
    // reaches it -- leaving one behind refers to a register nothing defines there.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:I) --> I {
              boxed: v1(I) = box< I --> v1(I) >(x);
              check L0() else D0();
            L0():
              u: I = unbox< v1(I) --> I >(boxed);
              return u;
            D0():
              deopt 0 [boxed];
            }
            """);

    assertTrue(run(abstraction), "box should be copied into both branches");
    assertFalse(run(abstraction), "the copies should be stable");

    var printed = Printer.toString(abstraction);
    assertFalse(
        printed.contains("$ENTRY:\n  boxed:"), "box should leave the entry block:\n" + printed);
    assertOrder(printed, "L0():", "u: I = unbox< v1(I) --> I >(boxed);");
    // The deopt branch got its own copy, under a fresh name, and its argument now names that copy.
    var deopt = printed.substring(printed.indexOf("D0():"));
    assertTrue(
        deopt.matches("(?s).*boxed\\d+: v1\\(I\\) = box< I --> v1\\(I\\) >\\(x\\);.*"),
        "the deopt branch should get its own copy:\n" + printed);
    assertTrue(
        deopt.matches("(?s).*deopt 0 \\[boxed\\d+];.*"),
        "the deopt argument should name that copy, not the original:\n" + printed);
  }

  @Test
  void valuePromiseUsedOnlyInDeoptBranches_isCopiedIntoEach() {
    var module = ParseUtil.parseModule(DEOPT_ONLY_PROMISE);

    assertTrue(run(module), Printer.toString(module));
    assertFalse(run(module), "a second run should change nothing:\n" + module);

    var full = Printer.toString(module);
    var printed = full.substring(full.indexOf("(n:v1(I))"));
    assertTrue(Checker.checkAll(module), "should type-check:\n" + printed);
    // Each deopt branch has a promise, under its own names.
    for (var pattern : List.of("(\\w+): p\\(v1\\(I\\) -\\) = prom-", "(\\w+): v1\\(I\\) = box")) {
      var names = Pattern.compile(pattern).matcher(printed).results().map(m -> m.group(1)).toList();
      assertEquals(2, Set.copyOf(names).size(), pattern + " in:\n" + printed);
    }
    assertOrder(printed, "D():", "st x = p");
    assertFalse(
        printed.substring(0, printed.indexOf("check")).contains("prom-"),
        "the entry has no promise:\n" + printed);
  }

  @Test
  void valuePromiseUsedOnTheMainPath_isLeftAlone() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (i:I) --> p(v1(I) -) {
              p: p(v1(I) -) = prom-<v1(I) ->{
                pb: v1(I) = box< I --> v1(I) >(i);
                return pb;
              };
              mkenv;
              check B() else D();
            B():
              popenv;
              return p;
            D():
              st x = p;
              deopt 0 [];
            }
            """);

    assertFalse(run(abstraction), Printer.toString(abstraction));
  }

  @Test
  void promiseThatLoads_isLeftAlone() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            () --> I {
              mkenv;
              p: p(V -) = prom<V ->{
                r: V = ld y;
                return r;
              };
              check B() else D();
            B():
              popenv;
              return 0;
            D():
              st x = p;
              deopt 0 [];
            }
            """);

    assertFalse(run(abstraction), Printer.toString(abstraction));
  }

  /// The two uses are in incomparable branches, so without the loop limit the `box` is copied
  /// into the deopt branch and into the loop body.
  @Test
  void boxIsNotDeferredIntoALoop() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:I, c:B) --> I {
              boxed: v1(I) = box< I --> v1(I) >(x);
              check H() else D();
            H():
              if c then Body() else Exit();
            Body():
              u: V = `==`< v1(I),v1(I) -+> V >(boxed, boxed);
              goto H();
            Exit():
              return x;
            D():
              deopt 0 [boxed];
            }
            """);

    assertFalse(run(abstraction), Printer.toString(abstraction));
  }

  /// The version deopts when `n` is at least 3; the baseline then forces the promise the deopt
  /// branch stored. The result and the checkpoint snapshots are the same before and after.
  @Test
  void valuePromiseInDeoptBranch_keepsTheDeoptState() {
    for (var n : new int[] {1, 5}) {
      var argument = new Value.Sexp(SEXPs.integer(n));
      var module = ParseUtil.parseModule(DEOPT_ONLY_PROMISE);
      var interpreter = new InternalInterpreter(module);
      registerBuiltins(interpreter);
      var before = new Value[1];
      var after = new Value[1];
      var beforeTrace =
          interpreter.checkpointTrace().track(() -> before[0] = interpreter.call("f", argument));
      assertTrue(run(module));
      var afterTrace =
          interpreter.checkpointTrace().track(() -> after[0] = interpreter.call("f", argument));

      var printed = Printer.toString(module);
      assertEquals(argument, after[0], printed);
      assertEquals(before[0], after[0], printed);
      assertEquals(beforeTrace, afterTrace, printed);
      assertFalse(afterTrace.isEmpty(), printed);
    }
  }

  @Language("FIR")
  private static final String DEOPT_ONLY_PROMISE =
      """
      fun f(n) {
        (n:*) -+> V {
          mkenv;
          check B() else D();
        B():
          r: * = ld x;
          v: V = force? r;
          popenv;
          return v;
        D():
          deopt 0 [];
        }
        (n:v1(I)) -+> V {
          i: I = unbox< v1(I) --> I >(n);
          p: p(v1(I) -) = prom-<v1(I) ->{
            pb: v1(I) = box< I --> v1(I) >(i);
            return pb;
          };
          mkenv-;
          k: L = `<`< I,I --> L >(i, 3);
          kk: B = naToFalse< L --> B >(k);
          check B() else D();
        B():
          kk ?= TRUE;
          check B2() else D2();
        B2():
          popenv;
          return n;
        D():
          st x = p;
          deopt 0 [];
        D2():
          st x = p;
          deopt 0 [];
        }
      }
      """;

  private static void assertOrder(String printed, String first, String second) {
    var firstIndex = printed.indexOf(first);
    var secondIndex = printed.indexOf(second);
    assertTrue(firstIndex >= 0, "missing `" + first + "` in:\n" + printed);
    assertTrue(secondIndex >= 0, "missing `" + second + "` in:\n" + printed);
    assertTrue(
        firstIndex < secondIndex,
        "expected order `" + first + "` before `" + second + "` in:\n" + printed);
  }
}
