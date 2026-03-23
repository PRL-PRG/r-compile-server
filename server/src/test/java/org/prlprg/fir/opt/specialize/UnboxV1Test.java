package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.Optimization;
import org.prlprg.fir.opt.OptimizationUnitTest;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Printer;

class UnboxV1Test implements OptimizationUnitTest {
  @Override
  public Optimization optimization() {
    return new Specialize("unboxV1", new UnboxV1());
  }

  @Test
  void intrinsicWithScalarVersion_unboxed() {
    // naToFalse has versions for both v(L) and L.
    // Passing v1(L) should unbox to L and call the scalar version.
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:v1(L)) --> B { reg r:B |
                r = naToFalse< v1(L) --> B >(x);
                return r;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertTrue(printed.contains("unbox<"), "should insert unbox instruction; got:\n" + printed);
    assertTrue(printed.contains("naToFalse<"), "should still call naToFalse; got:\n" + printed);
  }

  @Test
  void intrinsicWithoutScalarVersion_notUnboxed() {
    // unbox itself takes v1(X), there's no version taking X.
    // So we should NOT try to unbox the argument to unbox.
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:v1(I)) --> I { reg r:I |
                r = unbox< v1(I) --> I >(x);
                return r;
              }
            }
            """);

    assertFalse(run(module), "optimization should report no change");
  }

  @Test
  void userDefinedCall_unboxedAndVersionCreated() {
    // Calling a user-defined function with a v1(I) argument.
    // The function only has a v1(I) version, so a new version accepting I should be created.
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:v1(I)) --> V { reg r:V |
                r = f< v1(I) --> V >(x);
                return r;
              }
            }
            fun f(a) {
              (reg a:v1(I)) --> V { |
                return a;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    // Should insert unbox
    assertTrue(printed.contains("unbox<"), "should insert unbox instruction; got:\n" + printed);
    // Should create a new version of f that accepts I
    assertTrue(
        printed.contains("box<"), "should create version with box instruction; got:\n" + printed);
  }

  @Test
  void nonV1Type_notUnboxed() {
    // Argument type is v(I) (vector, not scalar vector), so no unboxing.
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:v(I)) --> V { reg r:V |
                r = f< v(I) --> V >(x);
                return r;
              }
            }
            fun f(a) {
              (reg a:v(I)) --> V { |
                return a;
              }
            }
            """);

    assertFalse(run(module), "optimization should report no change for v(I)");
  }

  @Test
  void scalarType_notUnboxed() {
    // Argument type is already I (scalar), so no unboxing needed.
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:I) --> V { reg r:V |
                r = f< I --> V >(x);
                return r;
              }
            }
            fun f(a) {
              (reg a:I) --> V { |
                return a;
              }
            }
            """);

    assertFalse(run(module), "optimization should report no change for scalar");
  }

  @Test
  void dynamicCall_notUnboxed() {
    // Dynamic calls are not handled.
    var module =
        ParseUtil.parseModule(
            """
            fun main(x, callee) {
              (reg x:v1(I), reg callee:cls) --> V { reg r:V |
                r = dyn callee(x);
                return r;
              }
            }
            """);

    assertFalse(run(module), "optimization should report no change for dynamic call");
  }

  @Test
  void multipleV1Args_allUnboxed() {
    // Two v1(I) arguments in the same call to a user-defined function.
    var module =
        ParseUtil.parseModule(
            """
            fun main(x, y) {
              (reg x:v1(I), reg y:v1(I)) --> V { reg r:V |
                r = f< v1(I),v1(I) --> V >(x, y);
                return r;
              }
            }
            fun f(a, b) {
              (reg a:v1(I), reg b:v1(I)) --> V { |
                return a;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    // Both args should be unboxed
    var unboxCount = countUnboxOccurrences(printed);
    assertTrue(
        unboxCount >= 2,
        "should insert at least 2 unbox instructions; got " + unboxCount + " in:\n" + printed);
  }

  @Test
  void sameRegisterUsedTwice_onlyOneUnbox() {
    // Two calls in the same BB both use the same v1(I) register.
    // Only one unbox instruction should be inserted, not two.
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:v1(I)) --> V { reg r1:V, reg r2:V |
                r1 = f< v1(I) --> V >(x);
                r2 = f< v1(I) --> V >(x);
                return r2;
              }
            }
            fun f(a) {
              (reg a:v1(I)) --> V { |
                return a;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    var unboxCount = countUnboxOccurrences(printed);
    assertEquals(
        1,
        unboxCount,
        "should insert exactly 1 unbox instruction for the same register; got "
            + unboxCount
            + " in:\n"
            + printed);
  }

  @Test
  void alreadyUnboxed_noSecondUnbox() {
    // If the optimization already ran and inserted an unbox, running it again
    // should not insert a duplicate unbox for the same register.
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:v1(I)) --> V { reg r:V |
                r = f< v1(I) --> V >(x);
                return r;
              }
            }
            fun f(a) {
              (reg a:v1(I)) --> V { |
                return a;
              }
            }
            """);

    assertTrue(run(module), "first run should report a change");
    var printedAfterFirst = Printer.toString(module);
    assertEquals(
        1,
        countUnboxOccurrences(printedAfterFirst),
        "first run should insert exactly 1 unbox; got:\n" + printedAfterFirst);

    assertFalse(run(module), "second run should report no change");
    var printedAfterSecond = Printer.toString(module);
    assertEquals(
        1,
        countUnboxOccurrences(printedAfterSecond),
        "second run should not insert another unbox; got:\n" + printedAfterSecond);
  }

  private static int countUnboxOccurrences(String text) {
    int count = 0;
    int idx = 0;
    while ((idx = text.indexOf("unbox<", idx)) != -1) {
      count++;
      idx += "unbox<".length();
    }
    return count;
  }
}
