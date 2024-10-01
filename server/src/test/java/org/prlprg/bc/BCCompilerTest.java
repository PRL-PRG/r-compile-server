package org.prlprg.bc;

import static com.google.common.truth.Truth.assertThat;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.prlprg.GNURTestSupport;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.util.GNUR;

@GNURTestSupport
@ExtendWith(BCSnapshotTestExtension.class)
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

  @Test
  public void constantFoldNamedC(BCCodeSnapshot snapshot) {
    snapshot.verify("function(x) c(i = 1, d = 1, s = 1)");
  }

  @Test
  public void constantFoldMul2(BCCodeSnapshot snapshot) {
    snapshot.verify("function(x) { 2 * 3 * x }");
  }

  @Test
  public void constantFoldAdd(BCCodeSnapshot snapshot) {
    snapshot.verify("function(x) 1 + 2");
  }

  @Test
  public void constantFoldAdd2(BCCodeSnapshot snapshot) {
    snapshot.verify("function(x) TRUE + c(10, 11)");
  }
}
