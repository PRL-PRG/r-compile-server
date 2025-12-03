package org.prlprg.bc;

import static com.google.common.truth.Truth.assertThat;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.session.gnur.GNUR;

@ExtendWith(BCQuery.class)
public class BCCompilerTest {

  private final GNUR R;

  public BCCompilerTest(GNUR R) {
    this.R = R;
  }

  @Test
  public void testMatchCall() {
    var def = (CloSXP) R.eval("f <- function(a=1,b,c=100,d) {}");
    var call = (LangSXP) R.eval("quote(f(d=1,3,a=2))");

    var matched = BCCompiler.matchCall(def, call);

    assertThat(matched).isEqualTo(R.eval("quote(f(d=1,a=2,b=3))"));
  }
}
