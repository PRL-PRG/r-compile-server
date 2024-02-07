package org.prlprg;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.CsvSource;

/** Unit test for simple App. */
public class DumbTests {
  @Test
  @DisplayName("2 + 2 = 4")
  void addsTwoNumbers() {
    assertEquals(4, 2 + 2, "2 + 2 should equal 4");
  }

  @ParameterizedTest(name = "{0} + {1} = {2}")
  @CsvSource({"0,    1,   1", "1,    2,   3", "49,  51, 100", "1,  100, 101"})
  void add(int first, int second, int expectedResult) {
    assertEquals(
        expectedResult,
        first + second,
        () -> first + " + " + second + " should equal " + expectedResult);
  }
}
