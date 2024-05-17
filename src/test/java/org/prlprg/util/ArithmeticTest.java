package org.prlprg.util;

import static org.junit.jupiter.api.Assertions.assertArrayEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.junit.jupiter.params.provider.Arguments.arguments;

import java.util.stream.Stream;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.Arguments;
import org.junit.jupiter.params.provider.MethodSource;
import org.prlprg.primitive.Complex;

public class ArithmeticTest {

  public static Stream<Arguments> complexAdd() {
    return Stream.of(
        arguments(
            new Complex[] {new Complex(1, 2), new Complex(3, 4)},
            new Complex[] {new Complex(5, 6), new Complex(7, 8)},
            new Complex[] {new Complex(6, 8), new Complex(10, 12)}),
        arguments(
            new Complex[] {new Complex(1, 2), new Complex(3, 4)},
            new Complex[] {new Complex(5, 6)},
            new Complex[] {new Complex(6, 8), new Complex(8, 10)}),
        arguments(
            new Complex[] {new Complex(1, 2)},
            new Complex[] {new Complex(5, 6), new Complex(3, 4)},
            new Complex[] {new Complex(6, 8), new Complex(4, 6)}),
        arguments(
            new Complex[] {new Complex(1, 2), new Complex(2, 3), new Complex(3, 4)},
            new Complex[] {new Complex(5, 6), new Complex(3, 4)},
            new Complex[] {new Complex(6, 8), new Complex(5, 7), new Complex(8, 10)}),
        arguments(
            new Complex[] {new Complex(1, 2), new Complex(2, 3), new Complex(3, 4)},
            new Complex[] {},
            new Complex[] {}));
  }

  @ParameterizedTest
  @MethodSource("complexAdd")
  public void testComplexBinary(Complex[] a, Complex[] b, Complex[] expected) {
    var res = Arithmetic.binary(Arithmetic.Operation.ADD, a, b, Arithmetic.COMPLEX);
    assertTrue(res.isPresent());
    assertArrayEquals(res.get(), expected);
  }
}
