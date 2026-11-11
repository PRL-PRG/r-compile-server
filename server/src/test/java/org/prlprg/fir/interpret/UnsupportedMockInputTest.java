package org.prlprg.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.prlprg.fir.interpret.internal.Builtins.registerBuiltins;

import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.ValueSource;
import org.prlprg.fir.interpret.internal.InternalInterpretUnsupportedException;
import org.prlprg.fir.interpret.internal.InternalInterpreter;
import org.prlprg.fir.ir.ParseUtil;

/// Inputs for which GNU-R warns or does something that the mocks don't implement, so that they must
/// fail as unsupported instead of returning a value, and inputs for which GNU-R fails.
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
        """,
        // A real outside the integers: `NA` with a warning.
        "b: cls = ldf bitwAnd; r: V = dyn b(<real 2147483648.0>, <real 1.0>);"
      })
  void isUnsupported(String body) {
    assertThrows(InternalInterpretUnsupportedException.class, () -> run(body));
  }

  @ParameterizedTest
  @ValueSource(
      strings = {
        "b: cls = ldf bitwAnd; r: V = dyn b(<lgl TRUE>, <int 1>);",
        "r: v(I) = seq_len%< *@! -+> v(I) >(<int -1>);",
        "r: v(I) = seq_len%< *@! -+> v(I) >(NA_INT);",
        "r: V = vector%< *,* -+> V >(<str \"list\">, <lgl TRUE>);"
      })
  void failsLikeGnuR(String body) {
    var e = assertThrows(InterpretException.class, () -> run(body));
    assertFalse(e instanceof InternalInterpretUnsupportedException, e::getMessage);
  }

  private static void run(String body) {
    var module = ParseUtil.parseModule("fun main() {\n  () -+> V {\n" + body + "return r;\n}\n}");
    var interpreter = new InternalInterpreter(module);
    registerBuiltins(interpreter);
    interpreter.call("main");
  }
}
