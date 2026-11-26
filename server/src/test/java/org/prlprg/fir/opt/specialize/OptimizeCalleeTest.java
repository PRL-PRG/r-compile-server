package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.CsvSource;
import org.prlprg.fir.feedback.AbstractionFeedback;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.opt.Specialize;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.Printer;

class OptimizeCalleeTest {
  /// `toForSeq` has a `v(I)` version, and the feedback saw `v(I)` arguments, but an intrinsic
  /// call can't dispatch (fir2c rejects it), so it stays static.
  @Test
  void intrinsicWithABetterVersionAtRuntime_staysStatic() {
    var abstraction =
        ParseUtil.parseAbstraction(
            """
            (x:V) --> V {
              s: V = toForSeq< V --> V >(x);
              return s;
            }
            """);
    var feedback = AbstractionFeedback.standaloneForTesting(abstraction);
    for (var i = 0; i < 10; i++) {
      feedback.recordType(
          abstraction.parameters().getFirst(), Parser.fromString("v(I)", Type.class));
    }

    new Specialize(new OptimizeCallee(1)).run(null, feedback, abstraction);

    var printed = Printer.toString(abstraction);
    assertTrue(printed.contains("toForSeq<"), printed);
    assertFalse(printed.contains("toForSeq%"), printed);
  }

  /// `x[i]` uses the `[` that returns one element only if `i` is a constant of at least 1, or the
  /// feedback records subscripts and saw no result of another length.
  @ParameterizedTest
  @CsvSource({"i, false, true", "i, true, false", "<int 2>, true, true"})
  void scalarIndex_oneElementOnlyWithEvidence(
      String index, boolean withoutSubscripts, boolean oneElement) {
    var printed =
        optimize(
            """
            (x:v(R), i:v1(I)) -+> V {
              r: V = `[`< v(R),v1(I),miss,miss -+> V >(x, %s, <missing>, <missing>);
              return r;
            }
            """
                .formatted(index),
            withoutSubscripts);
    assertEquals(oneElement, printed.contains("--> v1(R) >"), printed);
  }

  /// `x[i] <- v` uses a typed `[<-`, which can't grow `x`, only if the feedback records subscripts
  /// and saw no growth. A constant index doesn't help: `x` may be shorter.
  @ParameterizedTest
  @CsvSource({"i, false, true", "i, true, false", "<int 1>, true, false"})
  void subAssign_typedOnlyWithEvidence(String index, boolean withoutSubscripts, boolean typed) {
    var printed =
        optimize(
            """
            (x:v(R), i:v1(I), v:v1(R)) -+> V {
              r: V = `[<-`< v(R),v1(I),v1(R),miss -+> V >(x, %s, v, <missing>);
              return r;
            }
            """
                .formatted(index),
            withoutSubscripts);
    assertEquals(typed, printed.contains("v(R)f >"), printed);
  }

  /// `abstraction` printed after [OptimizeCallee], with feedback that records nothing and, if
  /// `withoutSubscripts`, doesn't record subscripts.
  private static String optimize(String abstraction, boolean withoutSubscripts) {
    var parsed = ParseUtil.parseAbstraction(abstraction);
    var feedback = AbstractionFeedback.standaloneForTesting(parsed);
    if (withoutSubscripts) {
      ((MockModuleFeedback) feedback.module()).markWithoutSubscripts();
    }
    new Specialize(new OptimizeCallee(1)).run(null, feedback, parsed);
    return Printer.toString(parsed);
  }
}
