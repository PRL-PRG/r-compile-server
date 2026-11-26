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

  /// Like GNU-R's `putconst`, which uses `identical`, `add` keeps `NA` and `NaN` apart.
  @Test
  public void addKeepsNaAndNaNApart() {
    var na = SEXPs.complex(Double.longBitsToDouble(0x7FF00000000007A2L), 0);
    var nan = SEXPs.complex(Double.NaN, 0);
    var builder = new ConstPool.Builder();

    assertEquals(0, builder.add(nan).idx());
    assertEquals(1, builder.add(na).idx());
    assertEquals(0, builder.add(SEXPs.complex(Double.NaN, 0)).idx());
    assertEquals(1, builder.add(na).idx());
  }
}
