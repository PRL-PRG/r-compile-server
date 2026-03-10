package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class StrictifyPromiseTest implements OptimizationUnitTest {
  @Override
  public Optimization optimization() {
    return new StrictifyPromise();
  }

  @Test
  void staticCallee_nonEffectfulPromise_isInlined() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { reg rx:p(v(I) -), reg ry:v(I), reg rz:v(I) |
                rx = prom<v(I) ->{
                  ry = v(I)[1];
                  return ry;
                };
                rz = f.1(rx);
                return rz;
              }
            }
            fun f(r) {
              (reg r:*@!) -+> V { ... }
              (reg r:p(v(I) -)@!) --> v(I) { ... }
              (reg r:v(I)) --> v(I) { |
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
    assertTrue(
        printed.contains("f< v(I) --> v(I) >(rx)"), "call should use the integer-taking version");
    assertTrue(printed.contains("ry = v(I)[1]"), "promise body should appear in outer scope");
  }

  @Test
  void staticCallee_effectfulPromise_notChanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { reg rx:p(v(I) +), reg rz:v(I) |
                rx = prom<v(I) +>{
                  return v(I)[42];
                };
                rz = f.1(rx);
                return rz;
              }
            }
            fun f(r) {
              (reg r:*@!) -+> V { ... }
              (reg r:p(v(I) +)@!) --> v(I) { ... }
              (reg r:v(I)) --> v(I) { |
                return r;
              }
            }
            """);

    assertFalse(run(module), "effectful promise: optimization should report no change");
  }

  @Test
  void dispatchCallee_mixedArgs_onlyNonEffectfulInlined() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { reg ra:v(I), reg rb:v(I), reg rc:v(I), reg rx:p(v(I) -), reg ry:p(v(I) +), reg rz:v(I) |
                ra = v(I)[1];
                rb = v(I)[2];
                rx = prom<v(I) ->{
                  rc = `+`.5(ra, rb);
                  return rc;
                };
                ry = prom<v(I) +>{
                  return v(I)[5];
                };
                rz = f< p(v(I) -)@!,p(v(I) +)@! --> v(I) >(rx, ry);
                return rz;
              }
            }
            fun f(r1, r2) {
              (reg r1:*@!, reg r2:*@!) -+> V { ... }
              (reg r1:p(v(I) -)@!, reg r2:p(v(I) +)@!) --> v(I) { ... }
              (reg r1:v(I), reg r2:p(v(I) +)@!) --> v(I) { ... }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    // rx (non-effectful) is inlined; ry (effectful) stays
    assertFalse(printed.contains("prom<I ->"), "non-effectful promise should be inlined");
    assertTrue(printed.contains("prom<I +>"), "effectful promise should remain");
    // Dispatch signature updated for the inlined argument
    assertTrue(
        printed.contains("f< I,p(I +)@! --> I >"),
        "dispatch signature should reflect inlined param type");
    assertTrue(printed.contains("rc = `+`.5(ra, rb)"), "promise body should be inlined");
  }

  @Test
  void promiseUsedMultipleTimes_notInlined() {
    // The promise register rx is used twice: once in the call and once in force.
    // We skip it to avoid code duplication.
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { reg rx:p(v(I) -), reg ry:v(I), reg rz:v(I), reg rw:v(I) |
                rx = prom<v(I) ->{
                  ry = v(I)[1];
                  return ry;
                };
                rz = f.1(rx);
                rw = force rx;
                return rz;
              }
            }
            fun f(r) {
              (reg r:*@!) -+> V { ... }
              (reg r:p(v(I) -)@!) --> v(I) { ... }
              (reg r:v(I)) --> v(I) { |
                return r;
              }
            }
            """);

    assertFalse(run(module), "multiply-used promise: optimization should report no change");
  }
}
