package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.primitive.Logical.FALSE;
import static org.prlprg.primitive.Logical.TRUE;

import java.io.File;
import java.io.IOException;
import java.util.Objects;
import java.util.function.Consumer;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.junit.jupiter.api.parallel.Execution;
import org.junit.jupiter.api.parallel.ExecutionMode;
import org.prlprg.AbstractGNURBasedTest;
import org.prlprg.bc.BCCompiler;
import org.prlprg.primitive.Logical;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler;
import org.prlprg.sexp.*;
import org.prlprg.util.Either;
import org.prlprg.util.Files;

@Execution(ExecutionMode.CONCURRENT)
public class BC2CCompilerTest extends AbstractGNURBasedTest {

    @Test
    public void testReturn() throws Exception {
        verify("42", assertReal(42.0));
    }

    @Test
    public void testSetVar() throws Exception {
        verify("x <- 42; x", assertReal(42.0));
    }

    @Test
    public void testSetVar2() throws Exception {
        verify("y <- 42; x <- y; x", assertReal(42.0));
    }

    @Test
    public void testAdd() throws Exception {
        verify("x <- 42; x + 21", assertReal(63.0));

        verify("x <- 42L; x + 21L", assertInt(63));

        verify("x <- 42L; x + 21", assertReal(63.0));

        verify("x <- 42; x + c(1, 2)", assertReal(43.0, 44.0));

        verify("x <- c(42, 43); x + c(1, 2)", assertReal(43.0, 45.0));

//        verify("x <- 42L; x + c(1, 2)", assertReal(43.0, 44.0));
//
//        verify("x <- c(42, 43); x + c(1, 2)", assertReal(43.0, 45.0));
    }

    @Test
    public void testRealScalarArith() throws Exception {
        verify("x <- 42; x + 21", assertReal(63.0));
        verify("x <- 42; x - 21", assertReal(21.0));
        verify("x <- 42; x * 2", assertReal(84.0));
        verify("x <- 42; x / 2", assertReal(21.0));
        verify("x <- 42; x ^ 2", assertReal(1764.0));
    }

    @Test
    public void testIntScalarArith() throws Exception {
        verify("x <- 42L; x + 21L", assertInt(63));
        verify("x <- 42L; x - 21L", assertInt(21));
        verify("x <- 42L; x * 2L", assertInt(84));
        verify("x <- 42L; x / 2L", assertReal(21.0));
    }

    // TODO: do some property based testing including NA using R as an oracle

    @Test
    public void testArithBuiltins() throws Exception {
        verify("x <- 42; x %% 5", assertReal(2.0));
        verify("x <- 42; x %/% 5", assertReal(8.0));
    }

    @Test
    public void testMath1Builtins() throws Exception {
        verify("sqrt(4)", assertReal(2.0));
        verify("exp(0)", assertReal(1.0));
    }

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
        verify("x <- 2; if (x == 1) 1 else if (x == 2) 2 else 3", assertReal(2.0));
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

    private Consumer<SEXP> assertLogical(Logical... v) {
        return (SEXP s) -> {
            if (s instanceof LglSXP r) {
                assertEquals(v.length, r.size());
                for (int i = 0; i < v.length; i++) {
                    assertEquals(v[i], r.get(i));
                }
            } else {
                fail("Expected a scalar logical, but got: " + s);
            }
        };
    }


    private Consumer<SEXP> assertInt(int... v) {
        return (SEXP s) -> {
            if (s instanceof IntSXP r) {
                assertEquals(v.length, r.size());
                for (int i = 0; i < v.length; i++) {
                    assertEquals(v[i], r.asInt(i));
                }
            } else {
                fail("Expected a scalar int, but got: " + s);
            }
        };
    }

    private Consumer<SEXP> assertReal(double... v) {
        return (SEXP s) -> {
            if (s instanceof RealSXP r) {
                assertEquals(v.length, r.size());
                for (int i = 0; i < v.length; i++) {
                    assertEquals(v[i], r.asReal(i));
                }
            } else {
                fail("Expected a scalar real, but got: " + s);
            }
        };
    }

    record TestArtifact<T extends SEXP>(Either<Exception, T> result, File tempDir) {
        public void destroy() throws IOException {
            Files.deleteRecursively(tempDir.toPath());
        }
    }

    <T extends SEXP> TestArtifact<T> compileAndCall(String code) throws Exception {
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
        var ast2bc = new BCCompiler(closure, rsession);

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
                    .compile();

            String testDriver =
                    "dyn.load('%s')\n".formatted(soFile.getAbsolutePath())
                            + "cp <- readRDS('%s')\n".formatted(cpFile.getAbsolutePath())
                            + "env <- new.env()\n"
                            + "parent.env(env) <- globalenv()\n"
                            + "invisible(.Call('Rsh_initialize_runtime'))\n"
                            + "res <- .Call('%s', env, cp)\n".formatted(module.topLevelFunName())
                            + "dyn.unload('%s')\n".formatted(soFile.getAbsolutePath())
                            + "res\n";

            Files.writeString(rFile.toPath(), testDriver);

            var res = R.eval("source('%s', local=F)$value".formatted(rFile.getAbsolutePath()));

            return new TestArtifact<>(Either.right((T) res), tempDir);
        } catch (Exception e) {
            return new TestArtifact<>(Either.left(e), tempDir);
        }
    }

    <T extends SEXP> void verify(String code, SEXP expected) throws Exception {
        verify(code, (T v) -> assertEquals(expected, v));
    }

    <T extends SEXP> void verify(String code, Consumer<T> validator) throws Exception {
        TestArtifact<T> artifact = compileAndCall(code);
        try {
            if (artifact.result.isLeft()) {
                throw artifact.result.getLeft();
            } else {
                validator.accept(artifact.result.getRight());
                artifact.destroy();
            }
        } catch (Throwable e) {
            var makeFile = new File(artifact.tempDir, "Makefile");

            Files.copyURL(Objects.requireNonNull(getClass().getResource("Makefile")), makeFile.toPath());
            throw new RuntimeException(
                    "Test failed - compilation dir: " + artifact.tempDir.getAbsolutePath(), e);
        }
    }
}
