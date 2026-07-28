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
}
