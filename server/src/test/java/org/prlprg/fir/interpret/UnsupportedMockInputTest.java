package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.ValueSource;
import org.prlprg.fir.interpret.internal.InternalInterpretUnsupportedException;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;

/// Inputs for which GNU-R warns or does something that the mocks don't implement, so that they must
/// fail as unsupported instead of returning a value.
class UnsupportedMockInputTest {
  @ParameterizedTest
  @ValueSource(
      strings = {
        // Integer overflow: `NA` with a warning.
        "r: V = `+`%< *@!,*@! -+> V >(<int 2147483647>, <int 1>);",
        // A length that doesn't divide the other's: recycled with a warning.
        """
        x: v(R)o = v(R)[1.0, 2.0, 3.0];
        y: v(R)o = v(R)[1.0, 2.0];
        r: V = `+`%< *@!,*@! -+> V >(x, y);
        """,
        // An empty operand: an empty result.
        """
        x: v(R)o = v(R)[];
        r: V = `*`%< *@!,*@! -+> V >(x, <real 1.0>);
        """,
        // An argument with names: `c` keeps them.
        """
        x: v(R)o = v(R)[a=1.0];
        vargs: dots = dots[x, <real 2.0>];
        r: V = c%< dots --> V >(vargs);
        """
      })
  void isUnsupported(String body) {
    var module = ParseUtil.parseModule("fun main() {\n  () -+> V {\n" + body + "return r;\n}\n}");
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);

    assertThrows(InternalInterpretUnsupportedException.class, () -> interpreter.call("main"));
  }
}
