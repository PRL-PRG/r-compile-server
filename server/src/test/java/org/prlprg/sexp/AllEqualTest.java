package org.prlprg.sexp;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.prlprg.primitive.Constants.NA_REAL;

import java.util.Objects;
import org.junit.jupiter.api.Test;
import org.prlprg.primitive.Complex;

class AllEqualTest {
  private static boolean allEqual(SEXP expected, SEXP actual) {
    return AllEqual.difference(expected, actual, Objects::equals) == null;
  }

  private static Attributes names(String... names) {
    return new Attributes.Builder().put("names", SEXPs.string(names)).build();
  }

  @Test
  void reals() {
    var x = 2.291387992437486;
    assertTrue(allEqual(SEXPs.real(x), SEXPs.real(Math.nextUp(x))));
    assertFalse(allEqual(SEXPs.real(x), SEXPs.real(x * (1 + 1e-6))));
    assertTrue(allEqual(SEXPs.real(0), SEXPs.real(1e-9)));
    assertFalse(allEqual(SEXPs.real(0), SEXPs.real(1e-7)));
    assertTrue(allEqual(SEXPs.real(0.0), SEXPs.real(-0.0)));
    assertFalse(allEqual(SEXPs.real(1, 2), SEXPs.real(1)));
  }

  @Test
  void nonFiniteReals() {
    assertTrue(allEqual(SEXPs.real(NA_REAL), SEXPs.real(NA_REAL)));
    assertTrue(allEqual(SEXPs.real(Double.NaN), SEXPs.real(-Double.NaN)));
    assertFalse(allEqual(SEXPs.real(NA_REAL), SEXPs.real(Double.NaN)));
    assertFalse(allEqual(SEXPs.real(Double.NaN), SEXPs.real(1)));
    assertTrue(
        allEqual(SEXPs.real(Double.POSITIVE_INFINITY), SEXPs.real(Double.POSITIVE_INFINITY)));
    assertFalse(
        allEqual(SEXPs.real(Double.POSITIVE_INFINITY), SEXPs.real(Double.NEGATIVE_INFINITY)));
    assertFalse(allEqual(SEXPs.real(Double.POSITIVE_INFINITY), SEXPs.real(Double.MAX_VALUE)));
  }

  @Test
  void complexes() {
    assertTrue(allEqual(SEXPs.complex(1e10, 1e-20), SEXPs.complex(1e10, 2e-20)));
    assertFalse(allEqual(SEXPs.complex(1, 1), SEXPs.complex(1, 1 + 1e-6)));
    assertTrue(allEqual(SEXPs.complex(NA_REAL, 1), SEXPs.complex(NA_REAL, 1 + 1e-12)));
    assertFalse(allEqual(SEXPs.complex(NA_REAL, 1), SEXPs.complex(Double.NaN, 1)));
    assertFalse(
        allEqual(
            SEXPs.complex(new Complex(Double.POSITIVE_INFINITY, 0)),
            SEXPs.complex(new Complex(Double.NEGATIVE_INFINITY, 0))));
  }

  @Test
  void otherValuesAreExact() {
    assertTrue(allEqual(SEXPs.integer(1, 2), SEXPs.integer(1, 2)));
    assertFalse(allEqual(SEXPs.integer(1, 2), SEXPs.integer(1, 3)));
    assertFalse(allEqual(SEXPs.integer(1), SEXPs.real(1)));
    assertFalse(allEqual(SEXPs.string("a"), SEXPs.string("b")));
  }

  @Test
  void recursesThroughListsAndAttributes() {
    var x = 0.1 + 0.2;
    var expected =
        SEXPs.vec(SEXPs.vec(SEXPs.real(0.3), SEXPs.string("a")), SEXPs.real(1, names("y")));
    var actual =
        SEXPs.vec(
            SEXPs.vec(SEXPs.real(x), SEXPs.string("a")), SEXPs.real(Math.nextUp(1.0), names("y")));
    assertTrue(allEqual(expected, actual));

    assertFalse(
        allEqual(
            SEXPs.vec(SEXPs.vec(SEXPs.real(NA_REAL))),
            SEXPs.vec(SEXPs.vec(SEXPs.real(Double.NaN)))));
    assertFalse(allEqual(SEXPs.real(1, names("y")), SEXPs.real(1, names("z"))));
    assertFalse(allEqual(SEXPs.real(1, names("y")), SEXPs.real(1)));
    assertTrue(
        allEqual(
            SEXPs.real(1, new Attributes.Builder().put("a", SEXPs.real(0.3)).build()),
            SEXPs.real(1, new Attributes.Builder().put("a", SEXPs.real(x)).build())));
    assertTrue(
        allEqual(
            SEXPs.list(new TaggedElem("a", SEXPs.real(0.3))),
            SEXPs.list(new TaggedElem("a", SEXPs.real(x)))));
    assertFalse(
        allEqual(
            SEXPs.list(new TaggedElem("a", SEXPs.real(0.3))),
            SEXPs.list(new TaggedElem("b", SEXPs.real(0.3)))));
  }
}
