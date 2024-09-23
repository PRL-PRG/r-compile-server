package org.prlprg.bc2c;

import org.junit.jupiter.api.Test;
import org.prlprg.GNURBasedTests;
import org.prlprg.RDSSnapshotTest;
import org.prlprg.RSession;
import org.prlprg.bc.BCCompiler;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.VecSXP;
import org.prlprg.util.Either;
import org.prlprg.util.Files;
import org.prlprg.util.Pair;
import org.prlprg.util.ThrowingSupplier;

import java.io.File;
import java.util.Objects;
import java.util.function.Consumer;
import java.util.function.Function;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class BC2CCompilerTest extends RDSSnapshotTest<BC2CCompilerTest.TestResult> implements GNURBasedTests {

    // verify("1 + 1", noSlowPath());
    // TODO: benchmark for the assignment - we should be faster than R
    // verify("x <- 1; x", assertReal(2.0));

    @Test
    public void testReturn() throws Exception {
        verify("42");
    }

    @Test
    public void testSetAndGetVar() throws Exception {
        verify("x <- 42; x");
        verify("y <- 42; x <- y; x");
    }

    @Test
    public void testAdd() throws Exception {
        verify("x <- 42; x + 21", fastArith());

        verify("x <- 42L; x + 21L", fastArith());

        verify("x <- 42L; x + 21", fastArith());

        verify("x <- 42; x + c(1, 2)");

        verify("x <- c(42, 43); x + c(1, 2)");

        verify("x <- 42L; x + c(1, 2)");

        verify("x <- c(42, 43); x + c(1, 2)");
    }

    @Test
    public void testRealScalarArith() throws Exception {
        verify("x <- 42; x + 21", fastArith());
        verify("x <- 42; x - 21", fastArith());
        verify("x <- 42; x * 2", fastArith());
        verify("x <- 42; x / 2", fastArith());
        verify("x <- 42; x ^ 2", fastArith());
    }

    @Test
    public void testIntScalarArith() throws Exception {
        verify("x <- 42L; x + 21L", fastArith());
        verify("x <- 42L; x - 21L", fastArith());
        verify("x <- 42L; x * 2L", fastArith());
        verify("x <- 42L; x / 2L", fastArith());
    }

    // TODO: do some property based testing including NA using R as an oracle

    @Test
    public void testArithBuiltins() throws Exception {
        verify("x <- 42; x %% 5");
        verify("x <- 42; x %/% 5");
    }

    @Test
    public void testMath1Builtins() throws Exception {
        verify("sqrt(4)", fastMath1());
        verify("sqrt(4L)", fastMath1());
        verify("exp(0L)", fastMath1());
        verify("exp(0)", fastMath1());
        verify("sqrt(c(4,9))", fastMath1());
    }

/*
    @Test
    public void testUnaryBuiltins() throws Exception {
        verify("x <- 42; +x", assertReal(42.0));
        verify("x <- 42; -x", assertReal(-42.0));
        verify("x <- -42; +x", assertReal(-42.0));
        verify("x <- -42; -x", assertReal(42.0));
        verify("x <- 42L; +x", assertInt(42));
        verify("x <- 42L; -x", assertInt(-42));
        verify("x <- -42L; +x", assertInt(-42));
        verify("x <- -42L; -x", assertInt(42));
        verify("x <- c(1, -2); -x", assertReal(-1.0, 2.0));
    }

    @Test
    public void testScalarCompare() throws Exception {
        verify("x <- 42; x < 100", assertLogical(TRUE));
        verify("x <- 42; x > 100", assertLogical(FALSE));
        verify("x <- 42; x <= 42", assertLogical(TRUE));
        verify("x <- 42; x >= 42", assertLogical(TRUE));
        verify("x <- 42; x == 42", assertLogical(TRUE));
        verify("x <- 42; x == 100", assertLogical(FALSE));
        verify("x <- 42; x != 42", assertLogical(FALSE));
        verify("x <- 42; x != 100", assertLogical(TRUE));
    }

    @Test
    public void testBooleanOperators() throws Exception {
        verify("x <- TRUE; y <- FALSE; x & y", assertLogical(FALSE));
        verify("x <- TRUE; y <- FALSE; x | y", assertLogical(TRUE));
        verify("x <- TRUE; !x", assertLogical(FALSE));
        verify("x <- 42; !!x", assertLogical(TRUE));
        verify(
                "x <- c(T,F,T,F); y <- c(T,T,F,F); x | y",
                (LglSXP v) ->
                        assertArrayEquals(
                                new Logical[]{TRUE, TRUE, TRUE, FALSE},
                                v.coerceTo(Logical.class)));
    }

    @Test
    public void testClosure() throws Exception {
        verify(
                """
                        y <- 21
                        f <- function (x) { x + y }
                        f(42)
                        """,
                assertReal(63.0));
    }

    @Test
    public void testNonBytecodeClosure() throws Exception {
        verify(
                """
                        f <- function (x) { if (x) { browser() }; 1 }
                        f(FALSE)
                        """,
                assertReal(1.0));
    }

    @Test
    public void testNestedClosures() throws Exception {
        verify(
                """
                        a <- 1
                        f <- function(z) {
                          c <- 2
                          g <- function(y) {
                            e <- 3
                            h <- function(x) {
                                a + c + e + x + y + z
                            }
                            h
                          }
                          g(20)
                        }
                        f(10)(30)
                        """,
                assertReal(66.0));
    }

    @Test
    public void testCall() throws Exception {
        verify(
                "timestamp()",
                (StrSXP v) -> {
                    assertEquals(1, v.size());
                    assertTrue(v.get(0).startsWith("##------"));
                    assertTrue(v.get(0).endsWith("------##"));
                });
    }

    @Test
    public void testSumIn0Loop() throws Exception {
        verify(
                """
                        n <- 100
                        s <- 0
                        i <- 0
                        while (i < n) {
                          s <- s + i
                          i <- i + 1
                        }
                        s
                        """,
                assertReal(4950.0));
    }

    @Test
    public void testNA() throws Exception {
        verify("x <- TRUE;  y <- x; is.na(y)", assertLogical(FALSE));
        verify("x <- FALSE; y <- x; is.na(y)", assertLogical(FALSE));
        verify("x <- NA;    y <- x; is.na(y)", assertLogical(TRUE));
        verify("y <- NA_integer_; is.na(y)", assertLogical(TRUE));
    }

    @Test
    public void testPromise() throws Exception {
        verify("f <- function(x) x + 1;  y <- 2; f(y*2)", assertReal(5));
    }

    @Test
    public void testIfElse() throws Exception {
        verify("x <- 1; if (x == 1) 1 else if (x == 2) 2 else 3", assertReal(1.0));
        verify("x <- 2; if (x == 1) 1 else if (x == 2) 2 else 3", assertReal(2.0));
        verify("x <- 3; if (x == 1) 1 else if (x == 2) 2 else 3", assertReal(3.0));
    }

    @Test
    public void testDollar() throws Exception {
        verify("x <- list(a=1, b=2); x$a", assertReal(1.0));
    }

    @Test
    public void testSubset() throws Exception {
        verify("x <- c(1, 2, 3); x[2]", assertReal(2.0));
        verify("x <- c(1, 2, 3); x[2L]", assertReal(2.0));
        verify("x <- c(1L, 2L, 3L); x[2L]", assertInt(2));
        verify("x <- list(1, 2, 3); x[3L]", SEXPs.vec(SEXPs.real(3)));
        verify("x <- list('a', 'b'); x[2]", SEXPs.vec(SEXPs.string("b")));
        // FIXME: better testing
        // verify("x <- data.frame(a=1, b=2, row.names=NULL); x['a']", SEXPs.vec(SEXPs.real(1)).withNames("a"));
    }

    @Test
    public void testSubset2() throws Exception {
        verify("x <- c(1, 2, 3); x[[2]]", assertReal(2.0));
        verify("x <- c(1, 2, 3); x[[2L]]", assertReal(2.0));
        verify("x <- c(1L, 2L, 3L); x[[2L]]", assertInt(2));
        verify("x <- list(1, 2, 3); x[[3L]]", assertReal(3.0));
        verify("x <- list('a', 'b'); x[[2]]", SEXPs.string("b"));
        verify("x <- data.frame(a=1, b=2, row.names=NULL); x[['a']]", SEXPs.real(1));
    }

    @Test
    public void testSubassign() throws Exception {
        verify("x <- c(1,2,3); x[1] <- 2; x", assertReal(2.0, 2.0, 3.0));
        verify("x <- list(1,2,3); x[[1]] <- x; x", assertReal(2.0, 2.0, 3.0));
    }

    @Test
    public void testGetIntBuiltin() throws Exception {
        verify("vector(length=2)", assertLogical(FALSE, FALSE));
    }*/

    // Internals
    record TestArtifact(Either<Exception, TestResult> result, File tempDir) {
        public void destroy() {
            Files.deleteRecursively(tempDir.toPath());
        }
    }

    // we do not persist the performance counters
    public record TestResult(SEXP value, PerformanceCounters pc, String output) {
    }


    private int verifySeq = 0;

    @Override
    protected void checkEqual(TestResult expected, TestResult actual) {
        assertEquals(expected.value(), actual.value(), "Result is different");
        assertEquals(expected.output(), actual.output(), "Output is different");
    }

    @Override
    protected RSession getRSession() {
        return GNURBasedTests.Rsession;
    }

    @Override
    protected TestResult deserialize(SEXP sexp) {
        if (!(sexp instanceof VecSXP v) || v.size() != 2) {
            throw new IllegalArgumentException("Value must be a vector of size 2, got: " + sexp);
        }
        var value = v.get(0);
        var output = v.get(1).asScalarString().orElseThrow(() -> new IllegalArgumentException("Expected a string output, got: " + v.get(1)));

        // the performance counters are not kept in the snapshot
        return new TestResult(value, PerformanceCounters.EMPTY, output);
    }

    private Pair<SEXP, PerformanceCounters> splitValueAndPC(SEXP value) {
        if (!(value instanceof VecSXP v) || v.size() != 2) {
            throw new IllegalArgumentException("Value first item must be a vector of size 2, got: " + value);
        }
        var res = v.get(0);
        var pc = PerformanceCounters.from(v.get(1));

        return Pair.of(res, pc);
    }

    @Override
    protected SEXP serialize(TestResult result) {
        return SEXPs.vec(result.value(), SEXPs.string(result.output()));
    }

    TestArtifact compileAndCall(String code) throws Exception {
        // this has to be the same as in the test/resources/.../Makefile
        var prefix = "test";

        var tempDir = Files.createTempDirectory("test-bc2cc").toFile();
        var cFile = new File(tempDir, prefix + ".c");
        var cpFile = new File(tempDir, prefix + ".RDS");
        var soFile = new File(tempDir, prefix + ".so");
        var rFile = new File(tempDir, prefix + ".R");

        Files.clearDirectory(tempDir.toPath());

        var funCode = "function() {" + code + "}";
        var closure = (CloSXP) R.eval(funCode);
        var ast2bc = new BCCompiler(closure, Rsession);

        // FIXME: just for now as we do not support guards
        ast2bc.setOptimizationLevel(3);
        var bc =
                ast2bc
                        .compile()
                        .orElseThrow(() -> new RuntimeException("Compilation did not produce byte code"));

        try {
            var bc2c = new BC2CCompiler(bc);
            var module = bc2c.finish();

            RDSWriter.writeFile(cpFile, module.constantPool());

            Files.writeString(cFile.toPath(), module.file().toString());

            RshCompiler.getInstance(0)
                    .createBuilder(cFile.getPath(), soFile.getPath())
                    .flag("-shared")
                    .flag("-DRSH_TESTS")
                    .flag("-DRSH_PC")
                    .compile();

            // FIXME: try global env
            String testDriver =
                    "options(warn=1)\n"
                            + "dyn.load('%s')\n".formatted(soFile.getAbsolutePath())
                            + "cp <- readRDS('%s')\n".formatted(cpFile.getAbsolutePath())
                            + "env <- new.env()\n"
                            + "parent.env(env) <- globalenv()\n"
                            + "invisible(.Call('Rsh_initialize_runtime'))\n"
                            + "res <- .Call('%s', env, cp)\n".formatted(module.topLevelFunName())
                            + "pc <- .Call('Rsh_pc_get')\n"
                            + "dyn.unload('%s')\n".formatted(soFile.getAbsolutePath())
                            + "list(res, pc)\n";

            Files.writeString(rFile.toPath(), testDriver);

            var nestedWithOutput = R.capturingEval("source('%s', local=F)$value".formatted(rFile.getAbsolutePath()));
            var pair = splitValueAndPC(nestedWithOutput.first());
            var res = new TestResult(pair.first(), pair.second(), nestedWithOutput.second());

            return new TestArtifact(Either.right(res), tempDir);
        } catch (Exception e) {
            return new TestArtifact(Either.left(e), tempDir);
        }
    }

    @SafeVarargs
    final void verify(String code, Consumer<TestResult>... extraChecks) throws Exception {
        var artifact = compileAndCall(code);
        try {
            if (artifact.result.isLeft()) {
                throw artifact.result.getLeft();
            } else {
                var res = artifact.result.getRight();
                doVerify(String.valueOf(++verifySeq), res, oracle(code));

                for (var check : extraChecks) {
                    check.accept(res);
                }

                artifact.destroy();
            }
        } catch (Throwable e) {
            var makeFile = new File(artifact.tempDir, "Makefile");

            Files.copyURL(Objects.requireNonNull(getClass().getResource("Makefile")), makeFile.toPath());
            throw new RuntimeException(
                    "Test failed - compilation dir: " + artifact.tempDir.getAbsolutePath(), e);
        }
    }

    private ThrowingSupplier<TestResult> oracle(String code) {
        return () -> {
            var res = R.capturingEval(code);
            return new TestResult(res.first(), PerformanceCounters.EMPTY, res.second());
        };
    }

    private Consumer<TestResult> fastArith() {
        return noSlow(PerformanceCounters::slowArith, "Expected fast arithmetics");
    }

    private Consumer<TestResult> fastMath1() {
        return noSlow(PerformanceCounters::slowArith, "Expected fast math1");
    }

    private Consumer<TestResult> noSlow(Function<PerformanceCounters, Integer> metric, String message) {
        return (r) -> assertEquals(0, metric.apply(r.pc()), message);
    }
}
