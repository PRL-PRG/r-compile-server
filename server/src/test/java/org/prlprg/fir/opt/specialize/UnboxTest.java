package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.opt.AbstractionOptimization;
import org.prlprg.fir.opt.AbstractionOptimizationUnitTest;
import org.prlprg.parseprint.Printer;

class UnboxTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new Unbox();
  }

  @Test
  void intrinsicWithScalarVersion_unboxed() {
    // naToFalse has versions for both v(L) and L.
    // Passing v1(L) should unbox to L and call the scalar version.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:v1(L)) --> B { reg r:B |
              r = naToFalse< v1(L) --> B >(x);
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("unbox<"), "should insert unbox instruction; got:\n" + printed);
    assertTrue(printed.contains("naToFalse<"), "should still call naToFalse; got:\n" + printed);
  }

  @Test
  void intrinsicWithoutScalarVersion_notUnboxed() {
    // unbox itself takes v1(X), there's no version taking X.
    // So we should NOT try to unbox the argument to unbox.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:v1(I)) --> I { reg r:I |
              r = unbox< v1(I) --> I >(x);
              return r;
            }
            """);

    assertFalse(run(abstraction), "optimization should report no change");
  }

  @Test
  void userDefinedCall_unboxedAndVersionCreated() {
    // Calling a user-defined function with a v1(I) argument.
    // The function only has a v1(I) version, so a new version accepting I should be created.
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:v1(I)) --> V { ... }
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
              (reg x:v(I)) --> V { ... }
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
              (reg x:I) --> V { ... }
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
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg x:v1(I), reg callee:cls) --> V { reg r:V |
              r = dyn callee(x);
              return r;
            }
            """);

    assertFalse(run(abstraction), "optimization should report no change for dynamic call");
  }

  @Test
  void multipleV1Args_allUnboxed() {
    // Two v1(I) arguments in the same call to a user-defined function.
    var module =
        ParseUtil.parseModule(
            """
            fun main(x, y) {
              (reg x:v1(I), reg y:v1(I)) --> V { ... }
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
  void alreadyUnboxed_noSecondUnbox() {
    // If the optimization already ran and inserted an unbox, running it again
    // should not insert a duplicate unbox for the same register.
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:v1(I)) --> V { ... }
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

  @Test
  void userDefinedCall_v1Return_boxedAndVersionCreated() {
    // f takes scalar I and returns v1(I). The optimization should:
    // - Create a new version of f that returns I (with unbox before returns)
    // - At the call site, change the return type to I and insert box after
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:I) --> V { ... }
              (reg x:I) --> V { reg r:V |
                r = f< I --> v1(I) >(x);
                return r;
              }
            }
            fun f(a) {
              (reg a:I) --> v1(I) { reg b:v1(I) |
                b = box< I --> v1(I) >(a);
                return b;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    // Callee new version should have unbox before return
    assertTrue(
        printed.contains("unbox<"),
        "should create version with unbox before return; got:\n" + printed);
    // Call site should have box after call (boxing scalar return back to v1)
    // Note: original callee already has 1 box; copied version has 1 box; call site adds 1 box
    var boxCount = countOccurrences(printed, "box<");
    assertTrue(
        boxCount >= 3,
        "should have box at call site and in callee versions; got "
            + boxCount
            + " in:\n"
            + printed);
  }

  @Test
  void userDefinedCall_v1ParamAndReturn_bothUnboxed() {
    // f takes v1(I) and returns v1(I). Both param and return should be unboxed.
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:v1(I)) --> V { ... }
              (reg x:v1(I)) --> V { reg r:V |
                r = f< v1(I) --> v1(I) >(x);
                return r;
              }
            }
            fun f(a) {
              (reg a:v1(I)) --> v1(I) { |
                return a;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    // Should have both unbox (for param at call site + callee return version)
    // and box (for return at call site + callee param version entry)
    assertTrue(printed.contains("unbox<"), "should insert unbox; got:\n" + printed);
    assertTrue(printed.contains("box<"), "should insert box; got:\n" + printed);
  }

  @Test
  void v1Return_noAssignee_returnTypeStillChanged() {
    // Call returns v1(I) but the result is not assigned. The return type in the signature
    // should still change to I (no box needed since no one uses the result).
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:I) --> V { ... }
              (reg x:I) --> V { |
                f< I --> v1(I) >(x);
                return x;
              }
            }
            fun f(a) {
              (reg a:I) --> v1(I) { reg b:v1(I) |
                b = box< I --> v1(I) >(a);
                return b;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    // Should create callee version with unbox before return
    assertTrue(
        printed.contains("unbox<"),
        "should create version with unbox before return; got:\n" + printed);
  }

  @Test
  void nonV1Return_notBoxed() {
    // f returns V (not v1(X)), so no return type unboxing should happen.
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:V) --> V { ... }
              (reg x:V) --> V { reg r:V |
                r = f< V --> V >(x);
                return r;
              }
            }
            fun f(a) {
              (reg a:V) --> V { |
                return a;
              }
            }
            """);

    assertFalse(run(module), "optimization should report no change for non-v1 return");
  }

  private static int countUnboxOccurrences(String text) {
    return countOccurrences(text, "unbox<");
  }

  private static int countOccurrences(String text, String needle) {
    int count = 0;
    int idx = 0;
    while ((idx = text.indexOf(needle, idx)) != -1) {
      count++;
      idx += needle.length();
    }
    return count;
  }
}
