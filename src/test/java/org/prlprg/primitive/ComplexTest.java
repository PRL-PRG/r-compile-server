package org.prlprg.primitive;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.jupiter.api.Test;
import org.prlprg.util.Tests;

public class ComplexTest implements Tests {

  @Test
  void testPow() {
    var a = new Complex(1, 2);
    var b = new Complex(3, 4);
    var res = a.pow(b);
    assertEquals(res.real(), 0.1290095, DOUBLE_CMP_DELTA);
    assertEquals(res.imag(), 0.0339241, DOUBLE_CMP_DELTA);
  }
}
