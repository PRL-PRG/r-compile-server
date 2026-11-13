package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.ValueSource;
import org.prlprg.fir.check.Checker;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXPs;

class HoistLoopAssumeTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new HoistLoopAssume();
  }

  /// The shape of the former example `bench_simple_empty_while`: the loop head checks `n ?: v1(R)`
  /// in each trip.
  @Test
  void invariantAssumeAtTheLoopHead_movesToTheEntryEdge() {
    var abstraction = ParseUtil.parseAbstraction(loop("n", "", "goto L1(1.0, m);"));

    assertTrue(run(abstraction), Printer.toString(abstraction));
    // Folds the deopt copy's `box(1.0)`, which only `DEBUG` does after each pass.
    Cleanup.cleanup(abstraction);
    var printed = Printer.toString(abstraction);
    assertTrue(Checker.checkAll(abstraction), "should type-check:\n" + printed);
    var head = printed.substring(printed.indexOf("L4():"), printed.indexOf("L0():"));
    assertFalse(head.contains("?:"), printed);
    assertTrue(printed.contains("n3: v1(R) = n ?: v1(R);\n  goto L1(1.0, m);"), printed);
    // The new deopt has the frame of the first trip (`x15` is 1.0).
    assertTrue(printed.contains("deopt 4 [<real 1.0>];"), printed);
    assertEquals(2, printed.split("deopt 4 \\[").length - 1, printed);
    assertFalse(run(abstraction), "a second run should change nothing:\n" + printed);
  }

  @Test
  void assumeOfAHeaderPhi_isLeftAlone() {
    var abstraction = ParseUtil.parseAbstraction(loop("p", "", "goto L1(1.0, m);"));
    assertFalse(run(abstraction), Printer.toString(abstraction));
  }

  @Test
  void assumeOfAnOwnedRegister_isLeftAlone() {
    var abstraction =
        ParseUtil.parseAbstraction(
            loop("o", "", "o: v1(R)o = dup <real 1.0>;\n  goto L1(1.0, m);", "o[1] = 2.0;"));
    assertFalse(run(abstraction), Printer.toString(abstraction));
  }

  @Test
  void headerWithAStatement_isLeftAlone() {
    var abstraction =
        ParseUtil.parseAbstraction(
            loop("n", "k: R = `+`< R,R --> R >(1.0, 1.0);", "goto L1(1.0, m);"));
    assertFalse(run(abstraction), Printer.toString(abstraction));
  }

  @Test
  void loopWithTwoEntryEdges_isLeftAlone() {
    var abstraction =
        ParseUtil.parseAbstraction(
            loop("n", "", "if c0 then L1(1.0, m) else LX();\n  LX():\n    goto L1(2.0, m);"));
    assertFalse(run(abstraction), Printer.toString(abstraction));
  }

  /// `n ?: v1(I)` passes for an integer and fails at the loop entry for a real; then the baseline
  /// continues. The new checkpoint's snapshot is the first trip's.
  @ParameterizedTest
  @ValueSource(booleans = {true, false})
  void invariantAssumeAtTheLoopHead_keepsTheDeoptState(boolean isInteger) {
    var module = ParseUtil.parseModule(COUNT_TO_N);
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);
    var argument = new Value.Sexp(isInteger ? SEXPs.integer(5) : SEXPs.real(5));

    var before = new Value[1];
    var after = new Value[1];
    var beforeTrace =
        interpreter.checkpointTrace().track(() -> before[0] = interpreter.call("f", argument));
    assertTrue(run(module));
    var afterTrace =
        interpreter.checkpointTrace().track(() -> after[0] = interpreter.call("f", argument));

    var printed = Printer.toString(module);
    assertEquals(new Value.Sexp(SEXPs.integer(5)), after[0], printed);
    assertEquals(before[0], after[0], printed);
    assertFalse(beforeTrace.isEmpty(), printed);
    if (isInteger) {
      assertEquals(beforeTrace.getFirst(), afterTrace.getFirst(), printed);
      assertEquals(beforeTrace, afterTrace.subList(1, afterTrace.size()), printed);
    } else {
      assertEquals(beforeTrace, afterTrace, printed);
    }
  }

  private static String loop(String assumed, String headStatement, String entry) {
    return loop(assumed, headStatement, entry, "");
  }

  /// `while (x < n) x <- x + 1`, where the head assumes `assumed ?: v1(R)` (`n` is a parameter,
  /// `p` a header phi that only carries `m`), the head has `headStatement`, `entry` jumps in, and
  /// the body starts with `bodyStatement`.
  private static String loop(
      String assumed, String headStatement, String entry, String bodyStatement) {
    return """
        (n:*, m:*, c0:B) -+> V {
          mkenv;
          %3$s
        L1(x15: R, p: *):
          %2$s
          check L4() else D2();
        L4():
          n3: v1(R) = %1$s ?: v1(R);
          n5: R = unbox< v1(R) --> R >(n3);
          r3: L = `<`< R,R --> L >(x15, n5);
          c: B = naToFalse< L --> B >(r3);
          if c then L7() else L0();
        L0():
          popenv;
          return <nil>;
        L7():
          %4$s
          x13: R = `+`< R,R --> R >(x15, 1.0);
          goto L1(x13, p);
        D2():
          x19: v1(R) = box< R --> v1(R) >(x15);
          deopt 4 [x19];
        }
        """
        .formatted(assumed, headStatement, entry, bodyStatement);
  }

  /// `f` counts `i` from 0 to 5 in the baseline and to `n` in the version, which assumes
  /// `n ?: v1(I)` at the loop head.
  private static final String COUNT_TO_N =
      """
      fun f(n) {
        (n:*) --> V {
          mkenv;
          goto H(0);
        H(i: I):
          check B() else D();
        B():
          l: L = `<`< I,I --> L >(i, 5);
          c: B = naToFalse< L --> B >(l);
          if c then Body() else Exit();
        Body():
          i1: I = `+`< I,I --> I >(i, 1);
          goto H(i1);
        Exit():
          ib: v1(I) = box< I --> v1(I) >(i);
          popenv;
          return ib;
        D():
          ib1: v1(I) = box< I --> v1(I) >(i);
          deopt 0 [ib1];
        }
        (n:V) --> V {
          mkenv;
          goto H(0);
        H(i: I):
          check B() else D();
        B():
          nv: v1(I) = n ?: v1(I);
          nu: I = unbox< v1(I) --> I >(nv);
          l: L = `<`< I,I --> L >(i, nu);
          c: B = naToFalse< L --> B >(l);
          if c then Body() else Exit();
        Body():
          i1: I = `+`< I,I --> I >(i, 1);
          goto H(i1);
        Exit():
          ib: v1(I) = box< I --> v1(I) >(i);
          popenv;
          return ib;
        D():
          ib1: v1(I) = box< I --> v1(I) >(i);
          deopt 0 [ib1];
        }
      }
      """;
}
