package org.prlprg.bc2fir;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.util.regex.Pattern;
import org.intellij.lang.annotations.Language;
import org.junit.jupiter.api.Test;
import org.prlprg.bc.BCCompiler;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.Printer;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXPs;

/// Tests that bc2fir compiles a `BASEGUARD` into an assumption whose deopt is the guard.
class BaseGuardTest {
  @Test
  void guardIsAnAssumption() {
    var printed = compile("function() sin(0)");
    assertTrue(printed.contains("_guard ?= TRUE;"), printed);
    assertFalse(printed.contains("dyn _base"), printed);
    assertFalse(printed.contains("if _guard"), printed);
    // `BASEGUARD` is the first instruction.
    assertEquals("deopt 0 [];", guardDeopt(printed));
  }

  @Test
  void deoptStackHasTheValuesBelowTheGuard() {
    var printed = compile("function(x) x + sin(x)");
    // `GETVAR x` is at 0 and `BASEGUARD` at 1.
    assertTrue(guardDeopt(printed).matches("deopt 1 \\[\\w+\\];"), printed);
  }

  /// The `deopt` of the checkpoint after `_guard`.
  private static String guardDeopt(String printed) {
    var check =
        Pattern.compile("_guard: B = .*\n\\s*check \\w+\\(\\) else (\\w+)\\(\\);").matcher(printed);
    assertTrue(check.find(), printed);
    var deopt = Pattern.compile("\n\\s*" + check.group(1) + "\\(\\):\n\\s*(.*)").matcher(printed);
    assertTrue(deopt.find(), printed);
    return deopt.group(1);
  }

  private static String compile(@Language("R") String source) {
    var session = GNUR.instance().getSession();
    var closure0 = (CloSXP) GNUR.instance().eval(source);
    var bc =
        new BCCompiler(closure0, session)
            .compile()
            .orElseThrow(() -> new AssertionError("example didn't compile"));
    var closure = SEXPs.closure(closure0.parameters(), SEXPs.bcode(bc), closure0.env());
    var module = new Module();
    BC2FirClosureCompiler.compile(session, module, "f", closure).baseline().body();
    return Printer.toString(module);
  }
}
