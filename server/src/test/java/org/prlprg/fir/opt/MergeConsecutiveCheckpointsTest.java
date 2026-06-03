package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class MergeConsecutiveCheckpointsTest implements OptimizationUnitTest {
  @Override
  public Optimization optimization() {
    return new MergeConsecutiveCheckpoints();
  }

  @Test
  void sameDeoptThroughAssumption_merged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg r3:V, reg r9:v1(R) |
                r3 = blackBox< I --> V >(1);
                check L9() else D4();
              D4():
                deopt 13 [r3];
              L9():
                r9 = r3 ?: v1(R);
                check L10() else D5();
              D5():
                deopt 13 [r9];
              L10():
                return 0;
              }
            }
            fun blackBox(x) {
              (reg x:I) --> V { ... }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    // Only one checkpoint should remain
    var checkCount = countCheckOccurrences(printed);
    assertEquals(1, checkCount, "should have exactly one checkpoint, got:\n" + printed);
    // The assumption should still be present
    assertTrue(printed.contains("r9 = r3 ?: v1(R)"), "assumption should be preserved");
    // The return should be preserved
    assertTrue(printed.contains("return 0"), "return should be preserved");
  }

  @Test
  void differentDeoptPc_notMerged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg r3:V, reg r9:v1(R) |
                r3 = blackBox< I --> V >(1);
                check L9() else D4();
              D4():
                deopt 13 [r3];
              L9():
                r9 = r3 ?: v1(R);
                check L10() else D5();
              D5():
                deopt 14 [r9];
              L10():
                return 0;
              }
            }
            fun blackBox(x) {
              (reg x:I) --> V { ... }
            }
            """);

    assertFalse(run(module), "different deopt pc: should not merge");
  }

  @Test
  void differentDeoptStack_notMerged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg r3:V, reg r4:V, reg r9:v1(R) |
                r3 = blackBox< I --> V >(1);
                r4 = blackBox< I --> V >(2);
                check L9() else D4();
              D4():
                deopt 13 [r3];
              L9():
                r9 = r3 ?: v1(R);
                check L10() else D5();
              D5():
                deopt 13 [r4];
              L10():
                return 0;
              }
            }
            fun blackBox(x) {
              (reg x:I) --> V { ... }
            }
            """);

    assertFalse(run(module), "different deopt stack: should not merge");
  }

  @Test
  void nonAssumesInFirstSuccessBB_noConflict_merged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg r3:V, reg r9:v1(R), reg r10:v1(I) |
                r3 = blackBox< I --> V >(1);
                check L9() else D4();
              D4():
                deopt 13 [r3];
              L9():
                r9 = r3 ?: v1(R);
                r10 = `+`< I,I --> I >(0, 0);
                check L10() else D5();
              D5():
                deopt 13 [r9];
              L10():
                return r10;
              }
            }
            fun blackBox(x) {
              (reg x:I) --> V { ... }
            }
            """);

    assertTrue(run(module), "non-assume statements with no conflict: should merge");

    var printed = Printer.toString(module);
    var checkCount = countCheckOccurrences(printed);
    assertEquals(1, checkCount, "should have exactly one checkpoint, got:\n" + printed);
    assertTrue(printed.contains("r9 = r3 ?: v1(R)"), "assumption should be preserved");
    assertTrue(
        printed.contains("`+`< I,I --> I >(0, 0)"), "non-assume statement should be preserved");
  }

  @Test
  void nonAssumesInFirstSuccessBB_conflictWithSecondAssume_notMerged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg r3:V, reg r9:v1(R), reg r10:V, reg r11:I |
                r3 = blackBox< I --> V >(1);
                check L9() else D4();
              D4():
                deopt 13 [r3];
              L9():
                r9 = r3 ?: v1(R);
                r10 = blackBox< I --> V >(2);
                check L10() else D5();
              D5():
                deopt 13 [r9];
              L10():
                r11 = r10 ?: v1(I);
                return r11;
              }
            }
            fun blackBox(x) {
              (reg x:I) --> V { ... }
            }
            """);

    assertFalse(
        run(module),
        "second assume references register defined by non-assume in first: should not merge");
  }

  @Test
  void deoptBranchesWithSameStatements_merged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg r3:V, reg r9:v1(R) |
                r3 = blackBox< I --> V >(1);
                check L9() else D4();
              D4():
                mkenv;
                deopt 13 [r3];
              L9():
                r9 = r3 ?: v1(R);
                check L10() else D5();
              D5():
                mkenv;
                deopt 13 [r9];
              L10():
                return 0;
              }
            }
            fun blackBox(x) {
              (reg x:I) --> V { ... }
            }
            """);

    assertTrue(run(module), "same deopt branch statements: should merge");

    var printed = Printer.toString(module);
    var checkCount = countCheckOccurrences(printed);
    assertEquals(1, checkCount, "should have exactly one checkpoint, got:\n" + printed);
  }

  @Test
  void deoptBranchesWithDifferentStatements_notMerged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg r3:V, reg r9:v1(R) |
                r3 = blackBox< I --> V >(1);
                check L9() else D4();
              D4():
                deopt 13 [r3];
              L9():
                r9 = r3 ?: v1(R);
                check L10() else D5();
              D5():
                mkenv;
                deopt 13 [r9];
              L10():
                return 0;
              }
            }
            fun blackBox(x) {
              (reg x:I) --> V { ... }
            }
            """);

    assertFalse(run(module), "different deopt branch statements: should not merge");
  }

  @Test
  void noSecondCheckpoint_notChanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg r3:V, reg r9:v1(R) |
                r3 = blackBox< I --> V >(1);
                check L9() else D4();
              D4():
                deopt 13 [r3];
              L9():
                r9 = r3 ?: v1(R);
                return 0;
              }
            }
            fun blackBox(x) {
              (reg x:I) --> V { ... }
            }
            """);

    assertFalse(run(module), "no second checkpoint: should not change");
  }

  @Test
  void secondAssumesFromSecondSuccessBB_preserved() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I { reg r3:V, reg r9:v1(R), reg r10:v1(I) |
                r3 = blackBox< I --> V >(1);
                check L9() else D4();
              D4():
                deopt 13 [r3];
              L9():
                r9 = r3 ?: v1(R);
                check L10() else D5();
              D5():
                deopt 13 [r9];
              L10():
                r10 = r9 ?: v1(I);
                return r10;
              }
            }
            fun blackBox(x) {
              (reg x:I) --> V { ... }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    var checkCount = countCheckOccurrences(printed);
    assertEquals(1, checkCount, "should have exactly one checkpoint, got:\n" + printed);
    // Both assumptions should be present in the merged success BB
    assertTrue(printed.contains("r9 = r3 ?: v1(R)"), "first assumption should be preserved");
    assertTrue(printed.contains("r10 = r9 ?: v1(I)"), "second assumption should be preserved");
    assertTrue(printed.contains("return r10"), "return should be preserved");
  }

  private static int countCheckOccurrences(String text) {
    int count = 0;
    int index = 0;
    while ((index = text.indexOf("check ", index)) != -1) {
      count++;
      index += "check ".length();
    }
    return count;
  }
}
