package org.prlprg.bc;

import org.junit.jupiter.api.BeforeEach;
import org.prlprg.GNURTestSupport;
import org.prlprg.RDSSnapshotTest;
import org.prlprg.RSession;
import org.prlprg.sexp.*;
import org.prlprg.util.Files;
import org.prlprg.util.GNUR;
import org.prlprg.util.Strings;
import org.prlprg.util.ThrowingSupplier;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

@GNURTestSupport
public class AbstractBCCompilerTest extends RDSSnapshotTest<AbstractBCCompilerTest.TestResult> {

    protected final GNUR R;

    public AbstractBCCompilerTest(GNUR R) {
        this.R = R;
    }

    public record TestResult(String code, int optimizationLevel, SEXP body) {
    }

    private int verifySeq = 0;

    @BeforeEach
    protected void resetVerifySeq() {
        verifySeq = 0;
    }

    public void verify(String code) {
        verify(code, BCCompiler.DEFAULT_OPTIMIZATION_LEVEL);
    }

    public void verify(String s, int optimizationLevel) {
        verify(String.valueOf(verifySeq++), s, optimizationLevel);
    }

    public void verify(String name, String code, int optimizationLevel) {
        var body = bcCompileBody(code, optimizationLevel);
        var res = new BCCompilerTest.TestResult(code, optimizationLevel, body);
        doVerify(name, res, oracle(name, code, optimizationLevel));
    }

    protected ThrowingSupplier<BCCompilerTest.TestResult> oracle(
            String name, String code, int optimizationLevel) {
        return () -> {
            var temp = Files.writeString(code);
            try {
                var value =
                        R.eval(
                                "compiler::cmpfun(eval(parse('"
                                        + temp
                                        + "')), options = list(optimize = "
                                        + optimizationLevel
                                        + "))");
                if (!(value instanceof CloSXP closure)) {
                    throw new IllegalArgumentException("Expected a closure, got: " + value);
                }

                return new BCCompilerTest.TestResult(code, optimizationLevel, closure.body());
            } finally {
                Files.delete(temp);
            }
        };
    }

    @Override
    protected void checkEqual(BCCompilerTest.TestResult expected, BCCompilerTest.TestResult actual) {
        assertEquals(expected.code(), actual.code(), "Source code mismatch");
        assertEquals(
                expected.optimizationLevel(), actual.optimizationLevel(), "Optimization level mismatch");

        if ((expected.body() instanceof BCodeSXP expectedBody)
                && (actual.body() instanceof BCodeSXP actualBody)) {
            if (!expectedBody.equals(actualBody)) {
                // bytecode can be large, so we only want to do it when it is different
                assertEquals(expectedBody.toString(), actualBody.toString(), "Bytecode mismatch");

                fail("Produced bytecode is different, but the toString() representation is the same.");
            }
        } else {
            assertEquals(expected.body(), actual.body(), "Bytecode mismatch");
        }
    }

    @Override
    protected SEXP serialize(BCCompilerTest.TestResult value) {
        return SEXPs.vec(
                SEXPs.string(value.code()), SEXPs.integer(value.optimizationLevel()), value.body());
    }

    @Override
    protected BCCompilerTest.TestResult deserialize(SEXP value) {
        if (!(value instanceof VecSXP v) || v.size() != 3) {
            throw new IllegalArgumentException("Expected a vector of length 3, got: " + value);
        }

        var code =
                v.get(0)
                        .asScalarString()
                        .orElseThrow(() -> new IllegalArgumentException("Expected a string"));
        var optimizationLevel =
                v.get(1)
                        .asScalarInteger()
                        .orElseThrow(() -> new IllegalArgumentException("Expected an integer"));
        var body = v.get(2);

        return new BCCompilerTest.TestResult(code, optimizationLevel, body);
    }

    /**
     * Parse the given function, compile with our bytecode compiler, and return the body.
     *
     * <p>Note that if the function can't be compiled (uses the browser function), the body will just
     * be an AST.
     */
    protected SEXP bcCompileBody(String fun, int optimizationLevel) {
        var code = "eval(parse(text = '" + Strings.escape(fun) + "'))";
        return bcCompileBody((CloSXP) R.eval(code), optimizationLevel);
    }

    protected SEXP bcCompileBody(CloSXP fun, int optimizationLevel) {
        var compiler = new BCCompiler(fun, getRSession());
        compiler.setOptimizationLevel(optimizationLevel);
        return compiler.compile().<SEXP>map(SEXPs::bcode).orElse(fun.body());
    }

    @Override
    public RSession getRSession() {
        return R.getSession();
    }
}
