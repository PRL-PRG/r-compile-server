package org.prlprg.bc;

import org.junit.jupiter.api.BeforeEach;
import org.prlprg.RDSSnapshotTest;
import org.prlprg.RSession;
import org.prlprg.sexp.*;
import org.prlprg.util.Files;
import org.prlprg.util.GNUR;
import org.prlprg.util.ThrowingSupplier;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

public class AbstractBCCompilerTest extends RDSSnapshotTest<AbstractBCCompilerTest.TestResult> implements BCCompilation {

    public record TestResult(String code, int optimizationLevel, SEXP body) {
    }

    public void verify(String name, String code, int optimizationLevel) {
        var body = compileBody(code, optimizationLevel);
        var res = new BCCompilerTest.TestResult(code, optimizationLevel, body);
        doVerify(name, res, oracle(name, code, optimizationLevel));
    }

    private ThrowingSupplier<BCCompilerTest.TestResult> oracle(String name, String code, int optimizationLevel) {
        return () -> {
            System.out.println("Running oracle for " + name);
            var temp = Files.writeString(code);
            try {
                var value = R.eval("compiler::cmpfun(eval(parse('" + temp + "')))");
                if (!(value instanceof CloSXP closure)) {
                    throw new IllegalArgumentException("Expected a closure, got: " + value);
                }

                return new BCCompilerTest.TestResult(code, optimizationLevel, closure.body());
            } finally {
                Files.delete(temp);
            }
        };
    }

    public GNUR R() {
        return R;
    }

    public void verify(String code) throws Exception {
        verify(code, BCCompiler.DEFAULT_OPTIMIZATION_LEVEL);
    }

    private int verifySeq = 0;

    @BeforeEach
    public void resetVerifySeq() {
        verifySeq = 0;
    }

    public void verify(String s, int optimizationLevel) throws Exception {
        verify(String.valueOf(verifySeq++), s, optimizationLevel);
    }

    @Override
    protected void checkEqual(BCCompilerTest.TestResult expected, BCCompilerTest.TestResult actual) {
        assertEquals(expected.code(), actual.code(), "Source code mismatch");
        assertEquals(expected.optimizationLevel(), actual.optimizationLevel(), "Optimization level mismatch");

        if ((expected.body() instanceof BCodeSXP ours) && (actual.body() instanceof BCodeSXP theirs)) {
            if (!ours.equals(theirs)) {

                // bytecode can be large, so we only want to do it when it is different
                assertEquals(
                        theirs.toString(), ours.toString(), "`compile(read(ast)) == read(R.compile(ast))`");

                fail("Produced bytecode is different, but the toString() representation is the same.");
            }
        } else {
            assertEquals(expected.body(), actual.body(), "Bytecode mismatch");
        }
    }

    @Override
    protected SEXP serialize(BCCompilerTest.TestResult value) {
        return SEXPs.vec(SEXPs.string(value.code()), SEXPs.integer(value.optimizationLevel()), value.body());
    }

    @Override
    protected RSession getRSession() {
        return Rsession;
    }

    @Override
    protected BCCompilerTest.TestResult deserialize(SEXP value) {
        if (!(value instanceof VecSXP v) || v.size() != 3) {
            throw new IllegalArgumentException("Expected a vector of length 3, got: " + value);
        }

        var code = v.get(0).asScalarString().orElseThrow(() -> new IllegalArgumentException("Expected a string"));
        var optimizationLevel = v.get(1).asScalarInteger().orElseThrow(() -> new IllegalArgumentException("Expected an integer"));
        var body = v.get(2);

        return new BCCompilerTest.TestResult(code, optimizationLevel, body);
    }
}
