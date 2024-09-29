package org.prlprg.bc;

import org.junit.jupiter.api.Test;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.LangSXP;

import static com.google.common.truth.Truth.assertThat;

/**
 * Test our {@linkplain BCCompiler bytecode compiler} specifically.
 */
public class BCCompilerTest extends AbstractBCCompilerTest implements RClosureTests {

    @Test
    public void testMatchCall() {
        var def = (CloSXP) R.eval("f <- function(a=1,b,c=100,d) {}");
        var call = (LangSXP) R.eval("quote(f(d=1,3,a=2))");

        var matched = BCCompiler.matchCall(def, call);

        assertThat(matched).isEqualTo(R.eval("quote(f(d=1,a=2,b=3))"));
    }

    @Test
    public void constantFoldNamedC() throws Exception {
        verify("""
                function(x) c(i = 1, d = 1, s = 1)
                """);
    }

    @Test
    public void constantFoldMul2() throws Exception {
        verify("""
                function(x) {
                  2 * 3 * x
                }
                """);
    }

    @Test
    public void constantFoldAdd() throws Exception {
        verify("""
                function(x) 1 + 2
                """);
    }

    @Test
    public void constantFoldAdd2() throws Exception {
        verify("""
                function(x) TRUE + c(10, 11)
                """);
    }

}
