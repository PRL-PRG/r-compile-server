package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.Printer;

class StrictifyPromiseTest {
  private static final StrictifyPromise OPT = new StrictifyPromise();

  private static boolean run(Module module) {
    var changed = false;
    for (var fn : module.localFunctions()) {
      for (var version : fn.versions()) {
        if (OPT.run(new AbstractionFeedback(), version)) {
          changed = true;
        }
      }
    }
    return changed;
  }

  // ---------------------------------------------------------------------------
  // Tests: static callee
  // ---------------------------------------------------------------------------

  @Test
  void staticCallee_nonEffectfulPromise_isInlined() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { reg rx:p(I -), reg ry:I, reg rz:I |
                rx = prom<I ->{
                  ry = 1;
                  return ry;
                };
                rz = f.1(rx);
                return rz;
              }
            }
            fun f(r) {
              (reg r:V) -+> V { ... }
              (reg r:p(I -)) --> I { ... }
              (reg r:I) --> I { |
                return r;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    // The promise assignment is gone and its body is inlined before the call
    assertFalse(printed.contains("prom<"), "promise should be inlined");
    // The call argument is now the inlined result, not the promise register
    assertFalse(printed.contains("f.1(rx)"), "old promise-taking call should be gone");
    // A suitable non-promise version is used
    assertTrue(printed.contains("f.2(ry)"), "call should use the integer-taking version");
    assertTrue(printed.contains("ry = 1"), "promise body should appear in outer scope");
  }

  @Test
  void staticCallee_effectfulCallee_notChanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> V { reg rx:p(I -), reg ry:I, reg rz:V |
                rx = prom<I ->{
                  ry = 1;
                  return ry;
                };
                rz = f.0(rx);
                return rz;
              }
            }
            fun f(r) {
              (reg r:V) -+> V { |
                return r;
              }
            }
            """);

    assertFalse(run(module), "effectful callee: optimization should report no change");
  }

  @Test
  void staticCallee_effectfulPromise_notChanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { reg rx:p(I +), reg rz:I |
                rx = prom<I +>{
                  return 42;
                };
                rz = f.1(rx);
                return rz;
              }
            }
            fun f(r) {
              (reg r:V) -+> V { ... }
              (reg r:p(I +)) --> I { ... }
              (reg r:I) --> I { |
                return r;
              }
            }
            """);

    assertFalse(run(module), "effectful promise: optimization should report no change");
  }

  @Test
  void staticCallee_noCompatibleVersion_notChanged() {
    // Non-effectful callee, non-effectful promise, but no version that accepts the
    // unwrapped type exists → optimization must not apply.
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { reg rx:p(I -), reg ry:I, reg rz:I |
                rx = prom<I ->{
                  ry = 1;
                  return ry;
                };
                rz = f.1(rx);
                return rz;
              }
            }
            fun f(r) {
              (reg r:V) -+> V { ... }
              (reg r:p(I -)) --> I { ... }
            }
            """);

    // f has no version that accepts a plain I, so guess() returns null → skip
    assertFalse(run(module), "no compatible version: optimization should report no change");
  }

  // ---------------------------------------------------------------------------
  // Tests: dispatch callee
  // ---------------------------------------------------------------------------

  @Test
  void dispatchCallee_mixedArgs_onlyNonEffectfulInlined() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { reg ra:I, reg rb:I, reg rc:I, reg rx:p(I -), reg ry:p(I +), reg rz:I |
                ra = 1;
                rb = 2;
                rx = prom<I ->{
                  rc = `+`.0(ra, rb);
                  return rc;
                };
                ry = prom<I +>{
                  return 5;
                };
                rz = f< p(I -),p(I +) --> I >(rx, ry);
                return rz;
              }
            }
            fun f(r1, r2) {
              (reg r1:V, reg r2:V) -+> V { ... }
              (reg r1:p(I -), reg r2:p(I +)) --> I { ... }
              (reg r1:I, reg r2:p(I +)) --> I { ... }
            }
            fun `+`(r1, r2) {
              (reg r1:I, reg r2:I) --> I { ... }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    // rx (non-effectful) is inlined; ry (effectful) stays
    assertFalse(printed.contains("prom<I ->"), "non-effectful promise should be inlined");
    assertTrue(printed.contains("prom<I +>"), "effectful promise should remain");
    // Dispatch signature updated for the inlined argument
    assertTrue(
        printed.contains("f< I, p(I +) --> I >"),
        "dispatch signature should reflect inlined param type");
    assertTrue(printed.contains("rc = `+`.0(ra, rb)"), "promise body should be inlined");
  }

  @Test
  void dispatchCallee_effectfulCallee_notChanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> V { reg rx:p(I -), reg ry:I, reg rz:V |
                rx = prom<I ->{
                  ry = 1;
                  return ry;
                };
                rz = f< p(I -) -+> V >(rx);
                return rz;
              }
            }
            fun f(r) {
              (reg r:V) -+> V { |
                return r;
              }
            }
            """);

    assertFalse(run(module), "effectful dispatch callee: optimization should report no change");
  }

  // ---------------------------------------------------------------------------
  // Tests: promise used multiple times
  // ---------------------------------------------------------------------------

  @Test
  void promiseUsedMultipleTimes_notInlined() {
    // The promise register rx is used twice: once in the call and once in force.
    // We skip it to avoid code duplication.
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { reg rx:p(I -), reg ry:I, reg rz:I, reg rw:I |
                rx = prom<I ->{
                  ry = 1;
                  return ry;
                };
                rz = f.1(rx);
                rw = force rx;
                return rz;
              }
            }
            fun f(r) {
              (reg r:V) -+> V { ... }
              (reg r:p(I -)) --> I { ... }
              (reg r:I) --> I { |
                return r;
              }
            }
            """);

    assertFalse(run(module), "multiply-used promise: optimization should report no change");
  }
}
