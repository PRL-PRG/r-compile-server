package org.prlprg.bc;

import static com.google.common.truth.Truth.assertThat;
import static org.junit.jupiter.api.Assertions.assertEquals;

import java.util.List;
import org.junit.jupiter.api.Test;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.sexp.RealSXP;

/** Test our {@linkplain Compiler bytecode compiler} specifically. */
public class CompilerTest extends RClosureTestsUsingBytecodeCompiler {
  @Test
  public void testMatchCall() {
    var def = (CloSXP) R.eval("f <- function(a=1,b,c=100,d) {}");
    var call = (LangSXP) R.eval("quote(f(d=1,3,a=2))");

    var matched = Compiler.matchCall(def, call);

    assertThat(matched).isEqualTo(R.eval("quote(f(d=1,a=2,b=3))"));
  }

  @Test
  public void constantFoldNamedC() {
    var code =
        """
            function(x) c(i = 1, d = 1, s = 1)
            """;
    var sexp = compileBody(code, 3);
    var bc = ((BCodeSXP) sexp).bc();
    // FIXME: use some matchers
    var i = (BcInstr.LdConst) bc.code().getFirst();
    var v = ((RealSXP) bc.consts().get(i.constant()));
    assertEquals(3, v.size());
    assertEquals(List.of("i", "d", "s"), v.names());
    assertBytecode(code, 3);
  }

  @Test
  public void constantFoldMul2() {
    var code =
        """
            function(x) {
              2 * 3 * x
            }
            """;
    var sexp = compileBody(code, 2);
    var bc = ((BCodeSXP) sexp).bc();
    // FIXME: use some matchers
    var i = (BcInstr.LdConst) bc.code().getFirst();
    var v = ((RealSXP) bc.consts().get(i.constant()));
    assertEquals(1, v.size());
    assertEquals(6.0, v.get(0));
    assertBytecode(code, 2);
  }

  @Test
  public void constantFoldAdd() {
    var code =
        """
            function(x) 1 + 2
            """;
    var sexp = compileBody(code, 3);
    var bc = ((BCodeSXP) sexp).bc();

    // FIXME: use some matchers
    var i = (BcInstr.LdConst) bc.code().getFirst();
    var v = ((RealSXP) bc.consts().get(i.constant()));
    assertEquals(1, v.size());
    assertEquals(3.0, v.get(0));
  }

  @Test
  public void constantFoldAdd2() {
    var code =
        """
            function(x) TRUE + c(10, 11)
            """;
    var sexp = compileBody(code, 3);
    var bc = ((BCodeSXP) sexp).bc();
    // FIXME: use some matchers
    var i = (BcInstr.LdConst) bc.code().getFirst();
    var v = ((RealSXP) bc.consts().get(i.constant()));
    assertEquals(2, v.size());
    assertEquals(11.0, v.get(0));
    assertEquals(12.0, v.get(1));
  }

  @Override
  protected void testClosure(String code, int optimizationLevel) {
    assertBytecode(code, optimizationLevel);
  }
}
