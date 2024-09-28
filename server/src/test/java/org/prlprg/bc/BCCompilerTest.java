package org.prlprg.bc;

import org.junit.jupiter.api.Test;
import org.prlprg.sexp.*;
import org.prlprg.util.Files;
import org.prlprg.util.ThrowingSupplier;

import static com.google.common.truth.Truth.assertThat;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;

/**
 * Test our {@linkplain BCCompiler bytecode compiler} specifically.
 */
public class BCCompilerTest extends RClosureTestsUsingBytecodeCompiler<BCCompilerTest.TestResult> {

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

    // Internals

    @Override
    protected void verify(String name, String code, int optimizationLevel) {
        var body = compileBody(code, optimizationLevel);
        var res = new TestResult(code, optimizationLevel, body);
        doVerify(name, res, oracle(name, code, optimizationLevel));
    }

    private ThrowingSupplier<TestResult> oracle(String name, String code, int optimizationLevel) {
        return () -> {
            System.out.println("Running oracle for " + name);
            var temp = Files.writeString(code);
            try {
                var value = R.eval("compiler::cmpfun(eval(parse('" + temp + "')))");
                if (!(value instanceof CloSXP closure)) {
                    throw new IllegalArgumentException("Expected a closure, got: " + value);
                }

                return new TestResult(code, optimizationLevel, closure.body());
            } finally {
                Files.delete(temp);
            }
        };
    }

    public record TestResult(String code, int optimizationLevel, SEXP body) {
    }

    @Override
    protected void checkEqual(TestResult expected, TestResult actual) {
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
    protected SEXP serialize(TestResult value) {
        return SEXPs.vec(SEXPs.string(value.code()), SEXPs.integer(value.optimizationLevel()), value.body());
    }

    @Override
    protected TestResult deserialize(SEXP value) {
        if (!(value instanceof VecSXP v) || v.size() != 3) {
            throw new IllegalArgumentException("Expected a vector of length 3, got: " + value);
        }

        var code = v.get(0).asScalarString().orElseThrow(() -> new IllegalArgumentException("Expected a string"));
        var optimizationLevel = v.get(1).asScalarInteger().orElseThrow(() -> new IllegalArgumentException("Expected an integer"));
        var body = v.get(2);

        return new TestResult(code, optimizationLevel, body);
    }
}
