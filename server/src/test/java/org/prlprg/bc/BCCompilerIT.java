package org.prlprg.bc;

import org.prlprg.sexp.SEXP;
import org.prlprg.util.GNUR;

public class BCCompilerIT extends AbstractBCCompilerTest implements StdlibClosureTests {

    public BCCompilerIT(GNUR R) {
        super(R);
    }

    @Override
    public SEXP eval(String source) {
        return R.eval(source);
    }
}
