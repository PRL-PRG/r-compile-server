package org.prlprg.bc;

import org.prlprg.RClosureTests;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/**
 * {@link RClosureTests} but has methods to assert that our bytecode compiler works.
 */
public abstract class RClosureTestsUsingBytecodeCompiler<T> extends RClosureTests<T> {

    /**
     * Parse the given function, compile with our bytecode compiler, and return the body.
     *
     * <p>Note that if the function can't be compiled (uses the browser function), the body will just
     * be an AST.
     */
    protected SEXP compileBody(String fun, int optimizationLevel) {
        var code = "eval(parse(text = '" + fun + "'))";
        return compileBody((CloSXP) R.eval(code), optimizationLevel);
    }

    private SEXP compileBody(CloSXP fun, int optimizationLevel) {
        var compiler = new BCCompiler(fun, Rsession);
        compiler.setOptimizationLevel(optimizationLevel);
        return compiler.compile().<SEXP>map(SEXPs::bcode).orElse(fun.body());
    }
}
