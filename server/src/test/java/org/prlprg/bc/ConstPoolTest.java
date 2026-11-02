package org.prlprg.bc;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.util.List;
import org.junit.jupiter.api.Test;
import org.prlprg.sexp.SEXPs;

public class ConstPoolTest {
  /// GNU-R pools can have entries that are `equals` in Java (e.g. `NA` and `NaN`, or strings that
  /// differ only in bytes Java can't decode), and the bytecode indexes each of them.
  @Test
  public void builderFromPoolKeepsEqualEntries() {
    var a = SEXPs.string("a");
    var b = SEXPs.real(1);
    var builder = new ConstPool.Builder(List.of(a, a, b));

    assertEquals(b, builder.build().get(builder.index(2)));
    assertEquals(3, builder.build().size());
    assertEquals(0, builder.add(a).idx());
  }
}
