package org.prlprg.bc2c;

import java.io.OutputStreamWriter;
import org.junit.jupiter.api.Test;
import org.prlprg.bc.BCCompiler;
import org.prlprg.sexp.CloSXP;
import org.prlprg.util.AbstractGNURBasedTest;
import org.prlprg.util.Tests;

public class BC2CCompilerTest extends AbstractGNURBasedTest implements Tests {

  @Test
  public void testEmptyList() {
    test(
        """
                function (x) { y <- x + 42; y + 42 }
            """);
  }

  private void test(String code) {
    var gnurFun = (CloSXP) R.eval(code);
    var compiler = new BCCompiler(gnurFun, rsession);
    var bc = compiler.compile().get();
    var cc = new BC2CCompiler("f", bc);
    var file = cc.compile();
    file.writeTo(new OutputStreamWriter(System.out));
    System.out.flush();
  }
}
