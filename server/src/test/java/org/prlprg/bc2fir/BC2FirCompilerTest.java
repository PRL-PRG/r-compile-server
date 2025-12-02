package org.prlprg.bc2fir;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.bc2fir.BC2FirCompilerUtils.compile;

import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.MethodSource;
import org.prlprg.bc.StdlibClosuresSource;
import org.prlprg.bc2fir.BC2FirSnapshotTestExtension.BC2FirSnapshot;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.Parser;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.UserEnvSXP;
import org.prlprg.session.gnur.GNUR;

@ExtendWith(BC2FirSnapshotTestExtension.class)
public class BC2FirCompilerTest implements StdlibClosuresSource {
  private final GNUR R;

  public BC2FirCompilerTest(GNUR R) {
    this.R = R;
  }

  @Override
  public SEXP eval(String source) {
    return R.eval(source);
  }

  @Test
  public void testSimpleId() {
    testInline(
        """
            f <- function(x) x
            """,
        """
            fun f(x) {
              (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V |
                mkenv;
                st x = x;
                x1 = ld x;
                check L0() else D0();
              D0():
                deopt 0 [x1];
              L0():
                x2 = force? x1;
                checkMissing(x2);
                popenv;
                return x2;
              }
            }
            """);
  }

  @Test
  public void testSimpleAdd() {
    testInline(
        """
            f <- function(x) {
              x + 1
            }
            """,
        """
            fun f(x) {
              (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg r:V |
                mkenv;
                st x = x;
                x1 = ld x;
                check L0() else D0();
              D0():
                deopt 0 [x1];
              L0():
                x2 = force? x1;
                checkMissing(x2);
                r = `+`(x2, 1.0);
                popenv;
                return r;
              }
            }
          """);
  }

  @ParameterizedTest
  @MethodSource("stdlibFunctionNameSexpsAndCodes")
  public void testFromStlib(
      String name, CloSXP function, String functionCode, BC2FirSnapshot snapshot) {
    var envOfFunction = new UserEnvSXP();
    envOfFunction.set(name, function);
    var envOfFunctionCode = name + " <- " + functionCode;

    snapshot.verify(name, envOfFunctionCode, envOfFunction);
  }

  private void testInline(@Language("R") String rInput, String firOutput) {
    var rModuleEnv = R.evalEnvironment(rInput);
    var actualFirModule = compile(rModuleEnv, R.getSession());

    var expectedFirModule = Parser.fromString(firOutput, Module.class);
    assertEquals(
        expectedFirModule.toString(),
        actualFirModule.toString(),
        "Produced FIŘ module different from expected.");
  }
}
