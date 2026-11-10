package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import java.util.Arrays;
import java.util.List;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.check.Checker;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.parseprint.Printer;

class ElideRangeReadTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new ElideRangeRead();
  }

  /// `m:n` with `from <= to`, `from > to`, one element, and `1:0` (which counts down).
  private static final double[][] REAL_RANGES = {
    {1, 5}, {5, 1}, {1, 1}, {1, 0}, {-3, 2.5}, {2, -3}
  };

  @Test
  void realRange_readBecomesArithmetic() {
    var printed =
        assertSameResults(
            loop("(m:R, n:R)", "`:`< R,R --> V >(m, n)", true, "i: I = sq[[idx]];", "naToTrue"),
            Arrays.stream(REAL_RANGES)
                .map(r -> new Value[] {new Value.Real(r[0]), new Value.Real(r[1])})
                .toList());
    assertFalse(printed.contains("[["), printed);
    assertTrue(printed.contains("`<=`< R,R --> B >(m, n)"), printed);
    assertTrue(printed.contains("`as.integer`< R,miss --> I >(m, <missing>)"), printed);
  }

  @Test
  void constantFrom_readBecomesArithmetic() {
    var printed =
        assertSameResults(
            loop("(m:R, n:R)", "`:`< R,R --> V >(1.0, n)", true, "i: I = sq[[idx]];", "naToTrue"),
            Arrays.stream(REAL_RANGES)
                .map(r -> new Value[] {new Value.Real(r[0]), new Value.Real(r[1])})
                .toList());
    assertFalse(printed.contains("[["), printed);
    assertFalse(printed.contains("as.integer"), printed);
  }

  @Test
  void integerRange_readBecomesArithmetic() {
    var printed =
        assertSameResults(
            loop("(m:I, n:I)", "`:`< I,I --> v(I) >(m, n)", false, "i: I = sq[[idx]];", "naToTrue"),
            List.of(
                new Value[] {new Value.Int(1), new Value.Int(5)},
                new Value[] {new Value.Int(5), new Value.Int(-2)},
                new Value[] {new Value.Int(7), new Value.Int(7)}));
    assertFalse(printed.contains("[["), printed);
  }

  /// The counter and the length reach the back edge through the phis of an inner loop.
  @Test
  void counterThroughAnInnerLoop_readBecomesArithmetic() {
    var printed =
        assertSameResults(
            loop("(m:R, n:R)", "`:`< R,R --> V >(m, n)", true, "i: I = sq[[idx]];", "naToTrue")
                .replace(
                    "    goto H(len, k, acc2);\n",
                    """
                        goto IH(len, k, acc2, 0);
                      IH(l9: I, k9: I, a9: I, t: I):
                        t1: I = `+`< I,I --> I >(t, 1);
                        c9: L = `<`< I,I --> L >(t1, 3);
                        b9: B = naToFalse< L --> B >(c9);
                        if b9 then IL() else X();
                      IL():
                        goto IH(l9, k9, a9, t1);
                      X():
                        goto H(l9, k9, a9);
                    """),
            Arrays.stream(REAL_RANGES)
                .map(r -> new Value[] {new Value.Real(r[0]), new Value.Real(r[1])})
                .toList());
    assertFalse(printed.contains("[["), printed);
  }

  /// Both bounds are constants, so the direction is known and there is no block on the entry edge.
  @Test
  void constantDecreasingRange_needsNoDirectionTest() {
    var printed =
        assertSameResults(
            loop("(m:R, n:R)", "`:`< R,R --> V >(3.0, 1.0)", true, "i: I = sq[[idx]];", "naToTrue"),
            List.<Value[]>of(new Value[] {new Value.Real(0), new Value.Real(0)}));
    assertFalse(printed.contains("[["), printed);
    assertFalse(printed.contains("<="), printed);
    assertTrue(printed.contains("rangeElement< I,I,I --> I >(3, k, -1)"), printed);
  }

  @Test
  void deadRead_isRemoved() {
    var module =
        ParseUtil.parseModule(
            loop("(m:R, n:R)", "`:`< R,R --> V >(1.0, n)", true, "sq[[idx]];", "naToTrue"));
    assertTrue(run(module));
    var printed = Printer.toString(module);
    assertFalse(printed.contains("[["), printed);
    assertFalse(printed.contains("<="), printed);
    assertFalse(printed.contains("`-`"), printed);
  }

  /// The element's only use is dead, so `Cleanup` removes the element, the index decrement and the
  /// direction test: none of them can warn.
  @Test
  void deadElement_isRemoved() {
    var module =
        ParseUtil.parseModule(
            loop(
                "(m:R, n:R)",
                "`:`< R,R --> V >(1.0, n)",
                true,
                "j: I = sq[[idx]]; box< I --> v1(I) >(j);",
                "naToTrue"));
    assertTrue(run(module));
    while (Cleanup.cleanup(module)) {}
    var printed = Printer.toString(module);
    assertFalse(printed.contains("rangeElement"), printed);
    assertFalse(printed.contains("`-`"), printed);
    assertFalse(printed.contains("<="), printed);
  }

  /// `naToFalse` enters the body with an `NA` index (after `INT_MAX` trips), so the read is not
  /// proven in bounds.
  @Test
  void naToFalseGuard_isLeftAlone() {
    assertUnchanged(
        loop("(m:R, n:R)", "`:`< R,R --> V >(m, n)", true, "i: I = sq[[idx]];", "naToFalse"));
  }

  /// `I:R` has the static type `v(I)`, but `1L:3e9` is a real vector.
  @Test
  void staticIntegerTypeWithARealBound_isLeftAlone() {
    assertUnchanged(
        loop("(m:I, n:R)", "`:`< I,R --> v(I) >(m, n)", false, "i: I = sq[[idx]];", "naToTrue"));
  }

  @Test
  void counterThatStartsBelowZero_isLeftAlone() {
    assertUnchanged(
        loop("(m:R, n:R)", "`:`< R,R --> V >(m, n)", true, "i: I = sq[[idx]];", "naToTrue")
            .replace("goto H(len0, 0, 0)", "goto H(len0, -1, 0)"));
  }

  @Test
  void boundThatIsNotTheLength_isLeftAlone() {
    assertUnchanged(
        loop("(m:R, n:R)", "`:`< R,R --> V >(m, n)", true, "i: I = sq[[idx]];", "naToTrue")
            .replace("goto H(len0, 0, 0)", "goto H(5, 0, 0)"));
  }

  @Test
  void readAfterTheLoop_isLeftAlone() {
    assertUnchanged(
        loop(
                "(m:R, n:R)",
                "`:`< R,R --> V >(m, n)",
                true,
                "i: I = `+`< I,I --> I >(acc, 0);",
                "naToTrue")
            .replace(
                "  E():\n",
                "  E():\n    idx9: I = `-`< I,I --> I >(k, 1);\n    i9: I = sq[[idx9]];\n"));
  }

  private void assertUnchanged(String text) {
    var module = ParseUtil.parseModule(text);
    assertFalse(run(module), Printer.toString(module));
  }

  /// Run `f` on each of `inputs` before and after the optimization, and return the optimized
  /// module, printed.
  private String assertSameResults(String text, List<Value[]> inputs) {
    var module = ParseUtil.parseModule(text);
    var before = results(module, inputs);
    assertTrue(run(module), Printer.toString(module));
    var printed = Printer.toString(module);
    assertTrue(Checker.checkAll(module), "should type-check:\n" + printed);
    assertEquals(before, results(module, inputs), printed);
    assertFalse(run(module), "a second run should change nothing:\n" + printed);
    return printed;
  }

  private static List<Value> results(Module module, List<Value[]> inputs) {
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);
    return inputs.stream().map(input -> interpreter.call("f", input)).toList();
  }

  /// `acc <- 0; for (i in <range>) acc <- acc * 3 + i` (order-sensitive), where the body reads the
  /// element with `read` and the loop ends on `<guard>(len < k)`. With `assume`, the range is
  /// `?: v(I)` of the `:` call.
  private static String loop(
      String parameters, String range, boolean assume, String read, String guard) {
    return """
        fun f(m, n) {
          (m:*, n:*) -+> V { ... }
          %1$s -+> v1(I) {
            mkenv;
            r: %3$s = %2$s;
            check L1() else D0();
          L1():
            %4$s
            sq: v(I) = toForSeq< v(I) --> v(I) >(%8$s);
            len0: I = length< v(I) --> I >(sq);
            goto H(len0, 0, 0);
          H(len: I, r1: I, acc: I):
            k: I = forIndex< I --> I >(r1);
            c: L = `<`< I,I --> L >(len, k);
            b: B = %6$s< L --> B >(c);
            if b then E() else B1();
          E():
            res: v1(I) = box< I --> v1(I) >(acc);
            popenv;
            return res;
          B1():
            idx: I = `-`< I,I --> I >(k, 1);
            %5$s
            a3: I = `*`< I,I --> I >(acc, 3);
            acc2: I = `+`< I,I --> I >(a3, %7$s);
            goto H(len, k, acc2);
          D0():
            deopt 0 [r];
          }
        }
        """
        .formatted(
            parameters,
            range,
            assume ? "V" : "v(I)",
            assume ? "s: v(I) = r ?: v(I);" : "",
            read,
            guard,
            read.startsWith("i: I") ? "i" : "1",
            assume ? "s" : "r");
  }
}
