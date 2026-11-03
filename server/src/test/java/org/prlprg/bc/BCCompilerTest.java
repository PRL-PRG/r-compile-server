package org.prlprg.bc;

import static com.google.common.truth.Truth.assertThat;

import org.junit.jupiter.api.Test;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.LangSXP;

public class BCCompilerTest {
  @Test
  public void testMatchCall() {
    var R = GNUR.instance();

    var def = (CloSXP) R.eval("f <- function(a=1,b,c=100,d) {}");
    var call = (LangSXP) R.eval("quote(f(d=1,3,a=2))");

    var matched = BCCompiler.matchCall(def, call);

    assertThat(matched).isEqualTo(R.eval("quote(f(d=1,a=2,b=3))"));
  }

  /// A call whose function is a closure (not a symbol or call) compiles like GNU-R's: the
  /// closure is a constant.
  @Test
  public void testCallOfClosure() {
    var R = GNUR.instance();

    var def = "{ f <- function() NULL; body(f) <- as.call(list(function(x) x, 1)); f }";
    var fun = (CloSXP) R.eval(def);
    var expected = ((BCodeSXP) ((CloSXP) R.eval("compiler::cmpfun(" + def + ")")).body()).bc();

    var actual = new BCCompiler(fun, R.getSession()).compile().orElseThrow();

    assertThat(actual.code()).isEqualTo(expected.code());
  }
}
