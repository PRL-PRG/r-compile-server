package org.prlprg.sexp;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.jupiter.api.Test;
import org.prlprg.primitive.Constants;

public class CoercionsTest {

  @Test
  public void testComplexFromString() {
    var c = Coercions.complexFromString("1+2i");
    assertEquals(1.0, c.real());
    assertEquals(2.0, c.imaginary());

    c = Coercions.complexFromString("1-2i");
    assertEquals(1.0, c.real());
    assertEquals(-2.0, c.imaginary());

    c = Coercions.complexFromString("  - 1-2i");
    assertEquals(-1.0, c.real());
    assertEquals(-2.0, c.imaginary());

    c = Coercions.complexFromString("1");
    assertEquals(1.0, c.real());
    assertEquals(0.0, c.imaginary());

    c = Coercions.complexFromString("-1");
    assertEquals(-1.0, c.real());
    assertEquals(0.0, c.imaginary());

    c = Coercions.complexFromString("-1i");
    assertEquals(0.0, c.real());
    assertEquals(-1.0, c.imaginary());

    c = Coercions.complexFromString("1i");
    assertEquals(0.0, c.real());
    assertEquals(1.0, c.imaginary());

    c = Coercions.complexFromString(Constants.NA_STRING);
    assertEquals(Constants.NA_REAL, c.real());
    assertEquals(Constants.NA_REAL, c.imaginary());
  }
}
