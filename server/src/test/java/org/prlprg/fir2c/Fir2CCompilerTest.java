package org.prlprg.fir2c;

import static org.junit.jupiter.api.Assertions.assertNotNull;
import static org.junit.jupiter.api.Assertions.assertTrue;

import org.junit.jupiter.api.Test;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.session.gnur.GNUR;

class Fir2CCompilerTest {
  private static final String MAIN_FUNCTION = "main";

  private static final String ASSUME_LOAD_VAR_MODULE =
      """
      fun main() {
        () --> V { var target:* |
          check BBopt() else BBfail();
        BBopt():
          ld target ?= <int 1>;
          return <int 1>;
        BBfail():
          return <int 0>;
        }
      }
      """;

  @Test
  void emitsDedicatedGuardForAssumeLoadVar() {
    assertTrue(
        compileMainToC().contains("Fir_assume_load_var("),
        "generated C should use the dedicated var assumption helper");
  }

  private static String compileMainToC() {
    var module = ParseUtil.parseModule(Fir2CCompilerTest.ASSUME_LOAD_VAR_MODULE);
    var main = module.localFunction(Variable.named(MAIN_FUNCTION));
    assertNotNull(main, "FIR module missing main function");

    return Fir2CCompiler.compile(main, GNUR.instance().getSession(), Option.values())
        .code()
        .toString();
  }
}
