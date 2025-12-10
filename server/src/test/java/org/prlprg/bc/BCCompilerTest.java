package org.prlprg.bc;

import static com.google.common.truth.Truth.assertThat;

import org.prlprg.session.gnur.GNUR;
import org.prlprg.session.gnur.GNURTest;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.LangSXP;

public class BCCompilerTest {
  @GNURTest
  public void testMatchCall(GNUR R) {
    var def = (CloSXP) R.eval("f <- function(a=1,b,c=100,d) {}");
    var call = (LangSXP) R.eval("quote(f(d=1,3,a=2))");

    var matched = BCCompiler.matchCall(def, call);

    assertThat(matched).isEqualTo(R.eval("quote(f(d=1,a=2,b=3))"));
  }
}
