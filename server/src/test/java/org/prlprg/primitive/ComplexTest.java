package org.prlprg.primitive;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.jupiter.api.Test;
import org.prlprg.sexp.RealSXP;

public class ComplexTest {

  @Test
  void testPow() {
    var a = new Complex(1, 2);
    var b = new Complex(3, 4);
    var res = a.pow(b);
    assertEquals(0.1290095, res.real(), RealSXP.DOUBLE_CMP_DELTA);
    assertEquals(0.0339241, res.imag(), RealSXP.DOUBLE_CMP_DELTA);
  }

  /// Expected values are from GNU-R on arm64 macOS. They need no `libm`, so they're exact.
  @Test
  void testDivAndIntegerPowMatchGnuR() {
    var x = new Complex(0x1.25d44e3be41bdp4, -0x1.3dd97837c4f03p-3);
    var y = new Complex(0x1.2a4abf38e755dp6, 0x1.36e25a726acf9p-10);
    assertEquals(new Complex(0x1.f8570d39da04fp-3, -0x1.114c46535ea12p-9), x.div(y));

    var z = new Complex(-0x1.78ee30cb8b3dep-15, -0x1.34e7b6350e8dbp-1);
    assertEquals(
        new Complex(-0x1.4bbbb74e69ce7p4, -0x1.2f96d9d72e0bbp-7), z.pow(Complex.fromReal(-6)));
    var negPi = Complex.fromReal(-Math.PI);
    assertEquals(new Complex(-0x1.45f306dc9c883p-2, -0.0), negPi.pow(Complex.fromReal(-1)));
    assertEquals(negPi, negPi.pow(Complex.fromReal(1)));
  }
}
