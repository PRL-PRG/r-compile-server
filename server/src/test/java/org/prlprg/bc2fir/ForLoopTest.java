package org.prlprg.bc2fir;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

import org.junit.jupiter.api.Test;
import org.prlprg.bc.BCCompiler;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.parseprint.Printer;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXPs;

class ForLoopTest {
  /// After `INT_MAX` trips the index is `NA`, without the overflow warning of `+`, and the loop
  /// must end (a run that long is too slow for a test, so this checks the step and the exit test).
  @Test
  void indexNa_endsTheLoop() {
    var session = GNUR.instance().getSession();
    var closure0 = (CloSXP) GNUR.instance().eval("function(x) for (i in x) NULL");
    var bc = new BCCompiler(closure0, session).compile().orElseThrow();
    var closure = SEXPs.closure(closure0.parameters(), SEXPs.bcode(bc), closure0.env());
    var function = BC2FirClosureCompiler.compile(session, new Module(), "f", closure);
    var printed = Printer.toString(function.baseline().body());

    assertTrue(printed.contains("forIndex< v1(I) --> v1(I) >("), printed);
    assertFalse(printed.contains("`+`"), printed);
    assertTrue(printed.contains("naToTrue< v1(L) --> B >(_cond)"), printed);
    assertFalse(printed.contains("naToFalse"), printed);
  }
}
