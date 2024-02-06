package org.prlprg.bc;

import org.junit.jupiter.api.Test;
import org.prlprg.sexp.CloSXP;
import org.prlprg.util.Tests;

public class CompilerTest implements Tests {

    @Test
    public void testInlineBlock() {
        var fun = R.eval("""
                function (x) {}
                """).cast(CloSXP.class);

        var compiler = new Compiler(3);
        var bc = compiler.compileFun(fun);
        System.out.println(bc);
    }

//    @Test
//    public void testBasic() throws Exception {
//        var source = (CloSXP) RDSReader.readStream(getResourceAsStream("f1.rds"));
//        var bc = Compiler.compileFun(source);
//        System.out.println(bc);
//        System.out.println("---");
//        var target = (CloSXP) RDSReader.readStream(getResourceAsStream("f1-O0.rds"));
//        System.out.println(target);
//    }
}
