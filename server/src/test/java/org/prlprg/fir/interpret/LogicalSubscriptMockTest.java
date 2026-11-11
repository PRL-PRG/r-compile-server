package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.ValueSource;
import org.prlprg.fir.interpret.internal.InternalInterpretUnsupportedException;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;

/// A logical subscript of `[` and `[<-` is a mask (`x[TRUE]` selects every element), which the
/// generic mocks don't implement, so they must not read it as a position.
class LogicalSubscriptMockTest {
  @ParameterizedTest
  @ValueSource(
      strings = {
        "`[`%< *@!,*,dots,*@! -+> V >(x, <lgl TRUE>, d, <missing>)",
        "`[<-`%< *@!,*,*,dots -+> V >(x, <lgl TRUE>, <real 9.0>, d)"
      })
  void logicalSubscriptIsUnsupported(String call) {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V {
                x: v(R)o = v(R)[1.0, 2.0];
                d: dots = dots[];
                r: V = %s;
                return r;
              }
            }
            """
                .formatted(call));
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);

    assertThrows(InternalInterpretUnsupportedException.class, () -> interpreter.call("main"));
  }
}
