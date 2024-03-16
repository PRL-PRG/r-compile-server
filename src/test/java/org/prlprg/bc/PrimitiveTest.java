package org.prlprg.bc;

import static com.google.common.truth.Truth.assertThat;

import org.junit.jupiter.api.Test;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.util.AbstractGNURBasedTest;

public class PrimitiveTest extends AbstractGNURBasedTest {

  @Test
  public void testMatchCall() {
    var def = (CloSXP) R.eval("f <- function(a=1,b,c=100,d) {}");
    var call = (LangSXP) R.eval("quote(f(d=1,3,a=2))");

    var matched = Primitives.matchCall(def, call);

    assertThat(matched).isEqualTo(R.eval("quote(f(d=1,a=2,b=3))"));
  }
}
