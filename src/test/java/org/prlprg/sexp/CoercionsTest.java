package org.prlprg.sexp;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.prlprg.sexp.Coercions.isNA;

import org.junit.jupiter.api.Test;
import org.prlprg.primitive.Constants;

public class CoercionsTest {

  @Test
  public void testComplexFromString() {
    var c = Coercions.complexFromString("1+2i");
    assertEquals(1.0, c.real());
    assertEquals(2.0, c.imag());

    c = Coercions.complexFromString("1-2i");
    assertEquals(1.0, c.real());
    assertEquals(-2.0, c.imag());

    c = Coercions.complexFromString("  - 1-2i");
    assertEquals(-1.0, c.real());
    assertEquals(-2.0, c.imag());

    c = Coercions.complexFromString("1");
    assertEquals(1.0, c.real());
    assertEquals(0.0, c.imag());

    c = Coercions.complexFromString("-1");
    assertEquals(-1.0, c.real());
    assertEquals(0.0, c.imag());

    c = Coercions.complexFromString("-1i");
    assertEquals(0.0, c.real());
    assertEquals(-1.0, c.imag());

    c = Coercions.complexFromString("1i");
    assertEquals(0.0, c.real());
    assertEquals(1.0, c.imag());

    c = Coercions.complexFromString(Constants.NA_STRING);
    assertTrue(isNA(c.real()));
    assertTrue(isNA(c.imag()));
  }
}
