package org.prlprg.examples;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertNotEquals;

import java.util.stream.IntStream;
import org.junit.jupiter.api.Test;
import org.prlprg.examples.SexpResult.Ok;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

class SexpResultTest {
  private static Ok reals(double last) {
    var data = IntStream.range(0, 12).asDoubleStream().toArray();
    data[11] = last;
    return new Ok(SEXPs.real(data));
  }

  private static Ok strings(String last) {
    return new Ok(
        SEXPs.vec(
            IntStream.range(0, 12)
                .<SEXP>mapToObj(i -> SEXPs.string(i == 11 ? last : "x"))
                .toList()));
  }

  @Test
  void comparesElementsAfterThePrintLimit() {
    assertEquals(reals(11), reals(11));
    assertNotEquals(reals(11), reals(12));
    assertNotEquals(reals(11).withoutCompiledCode(), reals(12).withoutCompiledCode());
    assertNotEquals(strings("a"), strings("b"));
    assertNotEquals(strings("a").withoutCompiledCode(), strings("b").withoutCompiledCode());
  }
}
