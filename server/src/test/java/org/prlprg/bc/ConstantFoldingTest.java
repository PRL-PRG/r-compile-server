package org.prlprg.bc;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.util.List;
import org.junit.jupiter.api.Test;
import org.prlprg.primitive.Complex;
import org.prlprg.sexp.SEXPs;

public class ConstantFoldingTest {
  @Test
  public void testPlus() {
    var a = SEXPs.complex(1, 2);
    var b = SEXPs.integer(5);
    var res = ConstantFolding.add(List.of(a, b)).orElseThrow();
    var expected = SEXPs.complex(6, 2);
    assertEquals(res, expected);
  }

  @Test
  public void textExp() {
    var a = SEXPs.real(new double[] {2, 4});
    var b = SEXPs.real(new double[] {2, 3});
    var res = ConstantFolding.pow(List.of(a, b)).orElseThrow();
    var expected = SEXPs.real(new double[] {4, 64});
    assertEquals(res, expected);
  }

  @Test
  public void testComplexPow() {
    var a = SEXPs.complex(new Complex(0, 0), new Complex(0, 1));
    var b = SEXPs.integer(-3, -6);
    var res = ConstantFolding.pow(List.of(a, b)).orElseThrow();
    var expected = SEXPs.complex(new Complex(Double.POSITIVE_INFINITY, 0), new Complex(-1, -0.0));
    assertEquals(expected, res);
  }
}
