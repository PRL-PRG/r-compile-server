package org.prlprg.bc;

import org.junit.jupiter.api.Test;
import org.prlprg.compile.Compiler;
import org.prlprg.rds.RDSReader;
import org.prlprg.sexp.CloSXP;
import org.prlprg.util.Tests;

public class CompilerTest implements Tests {
  @Test
  public void testBasic() throws Exception {
    var source = (CloSXP) RDSReader.readStream(getResourceAsStream("f1.rds"));
    var bc = Compiler.compileFun(source);
    System.out.println(bc);
  }
}
