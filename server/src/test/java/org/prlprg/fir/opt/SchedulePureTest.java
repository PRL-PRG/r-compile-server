package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class SchedulePureTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new SchedulePure();
  }

  @Test
  void boxIsDeferredAcrossBasicBlocks() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I, reg c:B) --> v1(I) {
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
            (reg x:I) -~> p(v1(I) -) {
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
            (reg x:I) -~> v1(I) {
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
            (reg x:v(I), reg c:B) --> I {
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
            (reg x:I, reg c:B) --> I {
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
            (reg x:v(I)) -~> p(I -) {
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
            (reg x:I) -~> p(I -) {
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
            (reg x:I) -~> p(I -) {
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
            (reg x:I) --> I {
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
            (reg x:I, reg c:B) --> I {
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
            (reg x:I) --> I {
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
