package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

class StrictifyPhiTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new StrictifyPhi();
  }

  @Test
  void loopCarriedPhi_valueAndTrivialPromise_isStrictified() {
    // The shape `StrictifyPromise` leaves behind: it rewrote this version to take `x` by value,
    // so the copied body rewrapped it, and the wrapper is what enters the loop.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg c:B, reg x:v(I)) -+> V {
              p: p(v(I) -) = prom<v(I) ->{
                return x;
              };
              goto L0(p);
            L0(y: *):
              if c then L1() else L2();
            L1():
              z: v(I) = v(I)[1];
              goto L0(z);
            L2():
              r: V = force? y;
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("L0(y: v(I))"), "phi should be a value phi; got:\n" + printed);
    assertTrue(
        printed.contains("goto L0(x)"), "wrapper edge should carry the value; got:\n" + printed);
  }

  @Test
  void phi_severalTrivialPromises_eachUnwrapped() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg c:B, reg x1:v(I), reg x2:v(I)) -+> V {
              p1: p(v(I) -) = prom<v(I) ->{
                return x1;
              };
              p2: p(v(I) -) = prom<v(I) ->{
                return x2;
              };
              if c then L0(p1) else L1();
            L1():
              if c then L0(p2) else L0(<int 3>);
            L0(y: *):
              r: V = force? y;
              return r;
            }
            """);

    assertTrue(run(abstraction), "optimization should report a change");

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("L0(x1)"), "first wrapper should be unwrapped; got:\n" + printed);
    assertTrue(printed.contains("L0(x2)"), "second wrapper should be unwrapped; got:\n" + printed);
  }

  @Test
  void phi_onlyValues_notChanged() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg c:B, reg x:v(I)) --> v(I) {
              goto L0(x);
            L0(y: v(I)):
              if c then L1() else L2();
            L1():
              z: v(I) = v(I)[1];
              goto L0(z);
            L2():
              return y;
            }
            """);

    assertFalse(run(abstraction), "value phi: optimization should report no change");
  }

  @Test
  void phi_nonTrivialPromise_notChanged() {
    // Unwrapping this edge would hoist the promise's body into the predecessor, which is
    // `StrictifyPromise`'s job at a call, not this one's at a merge.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg c:B) -+> V {
              p: p(v(I) -) = prom<v(I) ->{
                w: v(I) = v(I)[1];
                return w;
              };
              goto L0(p);
            L0(y: *):
              if c then L1() else L2();
            L1():
              z: v(I) = v(I)[2];
              goto L0(z);
            L2():
              r: V = force? y;
              return r;
            }
            """);

    assertFalse(run(abstraction), "non-trivial promise: optimization should report no change");
  }

  @Test
  void phi_onlyTrivialPromises_notChanged() {
    // No edge already delivers a value, so nothing shows that the phi's consumers handle one.
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg c:B, reg x1:v(I), reg x2:v(I)) -+> V {
              p1: p(v(I) -) = prom<v(I) ->{
                return x1;
              };
              p2: p(v(I) -) = prom<v(I) ->{
                return x2;
              };
              if c then L0(p1) else L0(p2);
            L0(y: *):
              r: V = force? y;
              return r;
            }
            """);

    assertFalse(run(abstraction), "all-promise phi: optimization should report no change");
  }

  @Test
  void idempotent_afterStrictify_noFurtherChange() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (reg c:B, reg x:v(I)) -+> V {
              p: p(v(I) -) = prom<v(I) ->{
                return x;
              };
              goto L0(p);
            L0(y: *):
              if c then L1() else L2();
            L1():
              z: v(I) = v(I)[1];
              goto L0(z);
            L2():
              r: V = force? y;
              return r;
            }
            """);

    assertTrue(run(abstraction), "first run should strictify the phi");
    assertFalse(run(abstraction), "second run should be a no-op");
  }
}
