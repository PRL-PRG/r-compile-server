package org.prlprg.bc;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.util.List;
import org.junit.jupiter.api.Test;
import org.prlprg.sexp.SEXPs;

public class ConstantFoldingTest {

  @Test
  public void testConstantFoldingPlus() {
    var a = SEXPs.complex(1, 2);
    var b = SEXPs.integer(5);
    var res = ConstantFolding.add(List.of(a, b)).get();
    var expected = SEXPs.complex(6, 2);
    assertEquals(res, expected);
  }
}
