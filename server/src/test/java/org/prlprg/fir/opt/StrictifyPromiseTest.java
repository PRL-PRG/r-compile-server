package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import java.util.regex.Pattern;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class StrictifyPromiseTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new StrictifyPromise();
  }

  @Test
  void staticCallee_nonEffectfulPromise_isInlined() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I {
                rx: p(v(I) -) = prom<v(I) ->{
                  ry: v(I) = v(I)[1];
                  return ry;
                };
                rz: v(I) = f< p(v(I) -)@! --> v(I) >(rx);
                return rz;
              }
            }

            fun f(r) {
              (reg r:*@!) -+> V { ... }
              (reg r:p(v(I) -)@!) --> v(I) { ... }
              (reg r:v(I)) --> v(I) {
                return r;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    // The promise assignment is gone and its body is inlined before the call
    assertFalse(printed.contains("prom<"), "promise should be inlined");
    // The call argument is now the inlined result, not the promise register
    assertFalse(
        printed.contains("< p(v(I) -)@! --> v(I) >(rx)"), "old promise-taking call should be gone");
    // A suitable non-promise version is used. The registers the optimization creates get
    // disambiguated names, since the ones they replace are still around when they're created.
    assertMatches(
        printed,
        "< v\\(I\\) --> v\\(I\\) >\\(rx\\d*\\)",
        "call should use the integer-taking version");
    assertMatches(
        printed, "ry\\d*: v\\(I\\) = v\\(I\\)\\[1]", "promise body should appear in outer scope");
  }

  @Test
  void staticCallee_effectfulPromise_notChanged() {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I {
                rx: p(v(I) +) = prom<v(I) +>{
                  ry: v(I) = v(I)[42];
                  return ry;
                };
                rz: v(I) = f< p(v(I) +)@! --> v(I) >(rx);
                return rz;
              }
            }

            fun f(r) {
              (reg r:*@!) -+> V { ... }
              (reg r:p(v(I) +)@!) --> v(I) { ... }
              (reg r:v(I)) --> v(I) {
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
              () --> I { ... }
              () --> I {
                ra: v(I) = v(I)[1];
                rb: v(I) = v(I)[2];
                rx: p(v(I) -) = prom<v(I) ->{
                  rc: v(I) = `+`< v(I),v(I) --> v(I) >(ra, rb);
                  return rc;
                };
                ry: p(v(I) +) = prom<v(I) +>{
                  rs: v(I) = v(I)[5];
                  return rs;
                };
                rz: v(I) = f< p(v(I) -)@!,p(v(I) +)@! --> v(I) >(rx, ry);
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
    assertFalse(printed.contains("prom<v(I) ->"), "non-effectful promise should be inlined");
    assertTrue(printed.contains("prom<v(I) +>"), "effectful promise should remain");
    // Dispatch signature updated for the inlined argument
    assertTrue(
        printed.contains("< v(I),p(v(I) +)@! --> v(I) >"),
        "dispatch signature should reflect inlined param type");
    assertMatches(
        printed,
        "rc\\d*: v\\(I\\) = `\\+`< v\\(I\\),v\\(I\\) --> v\\(I\\) >\\(ra, rb\\)",
        "promise body should be inlined");
  }

  @Test
  void nonStrictCallee_purePromise_isInlined() {
    // `f` may never force `r`, but the promise only builds a vector out of constants, so
    // evaluating it at the call site computes the same value and can't be observed.
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I {
                rx: p(v(I) -) = prom<v(I) ->{
                  ry: v(I) = v(I)[1];
                  return ry;
                };
                rz: v(I) = f< p(v(I) -) --> v(I) >(rx);
                return rz;
              }
            }

            fun f(r) {
              (reg r:*) -+> V { ... }
              (reg r:p(v(I) -)) --> v(I) { ... }
              (reg r:v(I)) --> v(I) {
                return r;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertFalse(printed.contains("prom<"), "promise should be inlined");
    assertMatches(
        printed,
        "< v\\(I\\) --> v\\(I\\) >\\(rx\\d*\\)",
        "call should use the vector-taking version");
    assertMatches(
        printed, "ry\\d*: v\\(I\\) = v\\(I\\)\\[1]", "promise body should appear in outer scope");
  }

  @Test
  void nonStrictCallee_promiseReadsVariable_notInlined() {
    // `ld x` can see a store that happens between the call site and the force `f` may or may not
    // do, so the promise isn't time-invariant and only strictness could justify inlining it.
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () -~> V {
                mkenv;
                rv: v(I) = v(I)[1];
                st x = rv;
                rx: p(V -) = prom<V ->{
                  ry: V = ld x;
                  return ry;
                };
                rz: V = f< p(V -) -~> V >(rx);
                return rz;
              }
            }

            fun f(r) {
              (reg r:*) -+> V { ... }
              (reg r:p(V -)) -~> V { ... }
              (reg r:V) -~> V {
                return r;
              }
            }
            """);

    assertFalse(run(module), "environment-reading promise: optimization should report no change");
  }

  @Test
  void nonStrictCallee_promiseWithDeoptBranch_notInlined() {
    // The `deopt`'s bytecode position is relative to the promise's own code object, so its block
    // can't be moved into the enclosing version.
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I {
                rx: p(v(I) -) = prom<v(I) ->{
                  ry: v(I) = v(I)[1];
                  check L1() else L2();
                L1():
                  return ry;
                L2():
                  deopt 0 [ry];
                };
                rz: v(I) = f< p(v(I) -) --> v(I) >(rx);
                return rz;
              }
            }

            fun f(r) {
              (reg r:*) -+> V { ... }
              (reg r:p(v(I) -)) --> v(I) { ... }
              (reg r:v(I)) --> v(I) {
                return r;
              }
            }
            """);

    assertFalse(run(module), "promise with a deopt branch: optimization should report no change");
  }

  @Test
  void strictCallee_promiseReadsVariable_forcedFirst_isInlined() {
    // `f` forces `r` before it runs anything that could rebind `x`, so reading `x` at the call
    // site instead reads the same value.
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () -~> V {
                mkenv;
                rv: v(I) = v(I)[1];
                st x = rv;
                rx: p(V -) = prom<V ->{
                  ry: V = ld x;
                  return ry;
                };
                rz: V = f< p(V -)@! -~> V >(rx);
                return rz;
              }
            }

            fun f(r) {
              (reg r:*@!) -+> V { ... }
              (reg r:p(V -)@!) -~> V {
                mkenv;
                st y = <int 1>;
                v: V = force r;
                return v;
              }
              (reg r:V) -~> V {
                return r;
              }
            }
            """);

    assertTrue(run(module), "optimization should report a change");

    var printed = Printer.toString(module);
    assertFalse(printed.contains("prom<"), "promise should be inlined");
    assertMatches(printed, "< V -~> V >\\(rx\\d*\\)", "call should use the value-taking version");
  }

  @Test
  void strictCallee_promiseReadsVariable_superStoreFirst_notInlined() {
    // `f` is strict, so it definitely forces `r` -- but only after a `st-super`, which can rebind
    // the very `x` the promise reads. Strictness only orders the force before *reflection*.
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () -~> V {
                mkenv;
                rv: v(I) = v(I)[1];
                st x = rv;
                rx: p(V -) = prom<V ->{
                  ry: V = ld x;
                  return ry;
                };
                rz: V = f< p(V -)@! -~> V >(rx);
                return rz;
              }
            }

            fun f(r) {
              (reg r:*@!) -+> V { ... }
              (reg r:p(V -)@!) -~> V {
                mkenv;
                st-super x = <int 1>;
                v: V = force r;
                return v;
              }
              (reg r:V) -~> V {
                return r;
              }
            }
            """);

    assertFalse(
        run(module),
        "a callee that writes an enclosing frame before forcing: optimization should report no"
            + " change");
  }

  @Test
  void strictCallee_promiseReadsVariable_callsFirst_notInlined() {
    // Same, for a callee that calls something else first: whatever it runs could rebind `x`.
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () -~> V {
                mkenv;
                rv: v(I) = v(I)[1];
                st x = rv;
                rx: p(V -) = prom<V ->{
                  ry: V = ld x;
                  return ry;
                };
                rz: V = f< p(V -)@! -~> V >(rx);
                return rz;
              }
            }

            fun f(r) {
              (reg r:*@!) -+> V { ... }
              (reg r:p(V -)@!) -~> V {
                g: V = h< -~> V >();
                v: V = force r;
                return v;
              }
              (reg r:V) -~> V {
                return r;
              }
            }

            fun h() {
              () -~> V {
                st-super x = <int 1>;
                return <int 1>;
              }
            }
            """);

    assertFalse(
        run(module), "a callee that calls before forcing: optimization should report no change");
  }

  @Test
  void promiseUsedMultipleTimes_notInlined() {
    // The promise register rx is used twice: once in the call and once in force.
    // We skip it to avoid code duplication.
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () --> I { ... }
              () --> I {
                rx: p(v(I) -) = prom<v(I) ->{
                  ry: v(I) = v(I)[1];
                  return ry;
                };
                rz: v(I) = f< p(v(I) -)@! --> v(I) >(rx);
                rw: v(I) = force rx;
                return rz;
              }
            }

            fun f(r) {
              (reg r:*@!) -+> V { ... }
              (reg r:p(v(I) -)@!) --> v(I) { ... }
              (reg r:v(I)) --> v(I) {
                return r;
              }
            }
            """);

    assertFalse(run(module), "multiply-used promise: optimization should report no change");
  }

  private static void assertMatches(String printed, String regex, String message) {
    assertTrue(Pattern.compile(regex).matcher(printed).find(), () -> message + ", in:\n" + printed);
  }
}
