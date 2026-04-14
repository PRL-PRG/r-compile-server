package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.parseprint.Printer;

class DefUseSchedulingTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new DefUseScheduling();
  }

  @Test
  void boxIsDeferredAcrossBasicBlocks() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I, reg c:B) --> v1(I) { reg boxed:v1(I), reg other:v1(I) |
              boxed = box< I --> v1(I) >(x);
              if c then L0() else L1();
            L0():
              return boxed;
            L1():
              other = box< I --> v1(I) >(x);
              return other;
            }
            """);

    assertTrue(run(abstraction), "box should move to the first use block");

    var printed = Printer.toString(abstraction);
    assertOrder(printed, "L0():", "boxed = box< I --> v1(I) >(x);");
    assertOrder(printed, "boxed = box< I --> v1(I) >(x);", "return boxed;");
    assertFalse(
        printed.contains("$ENTRY:\n  boxed = box< I --> v1(I) >(x);"),
        "box should leave the entry block; got:\n" + printed);
  }

  @Test
  void boxIsDeferredIntoPromiseWhenAllUsesAreThere() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I) -~> p(v1(I) -) { reg boxed:v1(I), reg p:p(v1(I) -) |
              boxed = box< I --> v1(I) >(x);
              p = prom<v1(I) ->{
                return boxed;
              };
              return p;
            }
            """);

    assertTrue(run(abstraction), "box should be deferred into the promise");

    var printed = Printer.toString(abstraction);
    assertOrder(printed, "prom<v1(I) ->{", "boxed = box< I --> v1(I) >(x);");
    assertOrder(printed, "boxed = box< I --> v1(I) >(x);", "return boxed;");
  }

  @Test
  void promiseCountsAsUseWhenBoxAlsoUsedOutside() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I) -~> v1(I) { reg boxed:v1(I), reg q:p(I -), var q:*, reg p:p(v1(I) -), var p:* |
              boxed = box< I --> v1(I) >(x);
              q = prom<I ->{
                return x;
              };
              st q = q;
              p = prom<v1(I) ->{
                return boxed;
              };
              st p = p;
              return boxed;
            }
            """);

    assertTrue(run(abstraction), "box should move to the promise boundary, not into the promise");

    var printed = Printer.toString(abstraction);
    var boxIndex = printed.indexOf("boxed = box< I --> v1(I) >(x);");
    var qIndex = printed.indexOf("q = prom<I ->{");
    assertTrue(qIndex >= 0, "missing `q = prom<I ->{` in:\n" + printed);
    assertTrue(qIndex < boxIndex, "box should move after the earlier promise; got:\n" + printed);
    assertOrder(printed, "boxed = box< I --> v1(I) >(x);", "p = prom<v1(I) ->{");
  }

  @Test
  void unboxIsHoistedAcrossBasicBlocks() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I, reg c:B) --> I { reg boxed:v1(I), reg unboxed:I |
              boxed = box< I --> v1(I) >(x);
              if c then L0() else L1();
            L0():
              unboxed = unbox< v1(I) --> I >(boxed);
              return unboxed;
            L1():
              return x;
            }
            """);

    assertTrue(run(abstraction), "unbox should move to the boxed definition");

    var printed = Printer.toString(abstraction);
    assertOrder(
        printed, "boxed = box< I --> v1(I) >(x);", "unboxed = unbox< v1(I) --> I >(boxed);");
    assertOrder(printed, "unboxed = unbox< v1(I) --> I >(boxed);", "if c then L0() else L1();");
  }

  @Test
  void unboxIsHoistedOutOfPromiseWhenArgumentIsOuter() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I) -~> p(I -) { reg boxed:v1(I), reg p:p(I -), reg unboxed:I |
              boxed = box< I --> v1(I) >(x);
              p = prom<I ->{
                unboxed = unbox< v1(I) --> I >(boxed);
                return unboxed;
              };
              return p;
            }
            """);

    assertTrue(run(abstraction), "unbox should hoist before the promise");

    var printed = Printer.toString(abstraction);
    assertOrder(
        printed, "boxed = box< I --> v1(I) >(x);", "unboxed = unbox< v1(I) --> I >(boxed);");
    assertOrder(printed, "unboxed = unbox< v1(I) --> I >(boxed);", "p = prom<I ->{");
  }

  @Test
  void unboxStaysInPromiseWhenArgumentIsDefinedThere() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I) -~> p(I -) { reg p:p(I -), reg boxed:v1(I), reg unboxed:I |
              p = prom<I ->{
                boxed = box< I --> v1(I) >(x);
                unboxed = unbox< v1(I) --> I >(boxed);
                return unboxed;
              };
              return p;
            }
            """);

    assertFalse(run(abstraction), "nothing should hoist out of the promise");
  }

  @Test
  void secondRunIsIdempotent() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:I, reg c:B) --> I { reg boxed:v1(I), reg r:I |
              boxed = box< I --> v1(I) >(x);
              if c then L0() else L1();
            L0():
              r = unbox< v1(I) --> I >(boxed);
              return r;
            L1():
              return x;
            }
            """);

    assertTrue(run(abstraction), "first run should move the unbox");
    assertFalse(run(abstraction), "second run should be a no-op");
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
