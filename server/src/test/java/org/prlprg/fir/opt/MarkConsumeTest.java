package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.parseprint.Printer;

public class MarkConsumeTest implements AbstractionOptimizationUnitTest {
  @Override
  public AbstractionOptimization optimization() {
    return new MarkConsume();
  }

  @Test
  void returnConsume() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
      (reg x: v1(I)) --> v1(I) {
        return x;
      }
    """);

    assertTrue(run(abstraction), "'return x' should be 'return consume x'");
    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("return consume x"));
  }

  @Test
  void dupConsume() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
      (reg x: v1(I)b) --> v1(I)o {
        x_dup : v1(I)o = dup x;
        return x_dup;
      }
    """);

    assertTrue(run(abstraction), "'dup x' should be 'dup consume x'");
    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("dup consume x"));
  }

  @Test
  void noConsumeWhenUsedMultipleTimes() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
      (reg x: v1(I)b) --> v1(I)o {
        x_dup : v1(I)o = dup x;
        return x_dup;
      }
    """);

    assertTrue(run(abstraction), "'dup x' should be 'dup consume x'");
    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("dup consume x"));
  }
}
