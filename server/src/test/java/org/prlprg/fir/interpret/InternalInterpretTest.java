package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertSame;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.sexp.SEXPs;

/// Test [InternalInterpreter] behavior with larger, parsed modules.
class InternalInterpretTest {
  @Test
  void deoptRestoreReverseEvaluatesBoxAndUnbox() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:v1(I)) --> v1(I) { reg xi:I, reg result:v1(I) |
                xi = unbox< v1(I) --> I >(x);
                result = f< I --> v1(I) >(xi);
                return result;
              }
            }

            fun f(x) {
              (reg x:v1(I)) --> v1(I) { reg checked:v1(I), reg i:I, reg roundTrip:v1(I) |
                check Ok() else Deopt();
              Ok():
                checked = x ?: v1(I);
                return checked;
              Deopt():
                i = unbox< v1(I) --> I >(x);
                roundTrip = box< I --> v1(I) >(i);
                deopt 0 [roundTrip];
              }
              (reg x:I) --> v1(I) { reg checked:v1(I), reg roundTrip:v1(I) |
                check Ok() else Deopt();
              Ok():
                checked = x ?: v1(I);
                return checked;
              Deopt():
                roundTrip = box< I --> v1(I) >(x);
                deopt 0 [roundTrip];
              }
            }
            """);
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);

    var result = interpreter.call("main", new Value.Sexp(SEXPs.integer(1)));

    assertEquals(new Value.Sexp(SEXPs.integer(1)), result);
  }

  @Test
  void checkpointSnapshotKeepsDeoptOnlyBoxedRegistersLocal() {
    var module =
        ParseUtil.parseModule(
            """
            fun main(x) {
              (reg x:I) --> v1(I) { reg boxed:v1(I), var y:v1(I) |
                check Ok() else Deopt();
              Ok():
                boxed = box< I --> v1(I) >(x);
                return boxed;
              Deopt():
                mkenv;
                boxed = box< I --> v1(I) >(x);
                st y = boxed;
                deopt 0 [];
              }
            }
            """);
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);

    var snapshots =
        interpreter.checkpointTrace().track(() -> interpreter.call("main", new Value.Int(1)));

    assertEquals(1, snapshots.size());
    assertEquals(SEXPs.integer(1), snapshots.getFirst().env().getLocal("y").orElseThrow());
    assertSame(snapshots.getFirst().env().parent(), interpreter.globalEnv());
  }
}
