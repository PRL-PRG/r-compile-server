package org.prlprg.fir.opt.specialize;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.feedback.AbstractionFeedback;
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
}
