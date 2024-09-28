package org.prlprg;

import com.google.common.collect.Streams;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.TestInstance;
import org.junit.jupiter.params.provider.Arguments;
import org.prlprg.bc.BCCompiler;
import org.prlprg.sexp.StrSXP;
import org.prlprg.util.Predicates;

import java.util.stream.Stream;

/**
 * Shared base class for tests that run on various R closures.
 *
 * <p>The source code for the closures is shared between each subclass. The subclasses differ in
 * what the test from the source code (e.g. compiling to bytecode, compiling to IR, compiling to C,
 * interpreting, etc.). Subclasses can also have their own additional closures to test.
 */
@TestInstance(TestInstance.Lifecycle.PER_CLASS)
public abstract class RClosureTests<T> extends RDSSnapshotTest<T> implements GNURBasedTests {

//    @Test
//    public void testEmptyList() throws Exception {
//        verify(
//                """
//                            function ()
//                            {
//                                function(other = list()) 1
//                            }
//                        """);
//    }
//
//    @Test
//    public void testEmptyBlock() throws Exception {
//        verify(
//                """
//                            function() {}
//                        """);
//    }
//
//    @Test
//    public void testSingleExpressionBlock() throws Exception {
//        verify(
//                """
//                            function() { 1 }
//                        """);
//    }
//
//    @Test
//    public void testMultipleExpressionBlock() throws Exception {
//        verify(
//                """
//                            function() { 1; 2 }
//                        """);
//    }
//
//    @Test
//    public void testIf() throws Exception {
//        verify(
//                """
//                            function(x) if (x) 1
//                        """);
//    }
//
//    @Test
//    public void testIfElse() throws Exception {
//        verify(
//                """
//                            function(x) if (x) 1 else 2
//                        """);
//    }
//
//    @Test
//    public void testFunctionInlining() throws Exception {
//        verify(
//                """
//                            function(x) function(y) 1
//                        """);
//    }
//
//    @Test
//    public void testFunctionLeftParenInlining() throws Exception {
//        verify(
//                """
//                            function(x) (x)
//                        """);
//
//        verify(
//                """
//                            function(x) (...)
//                        """);
//    }
//
//    @Test
//    public void builtinsInlining() throws Exception {
//        // expecting a guard
//        verify(
//                """
//                          function() invisible(1)
//                        """,
//                2);
//
//        // no guard
//        verify(
//                """
//                          function() invisible(1)
//                        """,
//                3);
//
//        // guard and regular function call
//        verify(
//                """
//                          function(...) invisible(...)
//                        """,
//                2);
//    }
//
//    @Test
//    public void specialsInlining() throws Exception {
//        verify(
//                """
//                          function() rep(1, 10)
//                        """);
//    }
//
//    @Test
//    public void inlineLocal() throws Exception {
//        verify(
//                """
//                          function(x) local(x)
//                        """);
//    }
//
//    @Test
//    public void inlineReturn() throws Exception {
//        verify(
//                """
//                          function(x) return(x)
//                        """);
//    }
//
//    @Test
//    public void inlineBuiltinsInternal() throws Exception {
//        verify(
//                """
//                          function(x) .Internal(inspect(x))
//                        """);
//
//        verify(
//                """
//                          function(x) .Internal(inspect2(x))
//                        """);
//    }
//
//    @Test
//    public void inlineLogicalAnd() throws Exception {
//        verify(
//                """
//                          function(x, y) x && y
//                        """);
//
//        verify(
//                """
//                          function(x, y, z) x && y && z
//                        """);
//
//        verify(
//                """
//                          function(x, y) x && y && (x && y)
//                        """);
//    }
//
//    @Test
//    public void inlineLogicalOr() throws Exception {
//        verify(
//                """
//                          function(x, y) x || y
//                        """);
//
//        verify(
//                """
//                          function(x, y, z) x || y || z
//                        """);
//
//        verify(
//                """
//                          function(x, y) x || y || (x || y)
//                        """);
//    }
//
//    @Test
//    public void inlineLogicalAndOr() throws Exception {
//        verify(
//                """
//                          function(x, y) x && y || y
//                        """);
//
//        verify(
//                """
//                          function(x, y, z) x || y && z
//                        """);
//    }
//
//    @Test
//    public void inlineRepeat() throws Exception {
//        verify(
//                """
//                          function(x) repeat(x)
//                        """);
//
//        verify(
//                """
//                          function(x, y) repeat({ if (x) break() else y })
//                        """);
//
//        verify(
//                """
//                          function(x, y) repeat({ if (x) next() else y })
//                        """);
//
//        verify(
//                """
//                          function(x, y=break()) repeat({ if (x) y else 1 })
//                        """);
//    }
//
//    @Test
//    public void inlineWhile() throws Exception {
//        verify(
//                """
//                          function(x) while(x) 1
//                        """);
//
//        verify(
//                """
//                          function(x, y) while(x) { break() }
//                        """);
//
//        verify(
//                """
//                          function(x, y) while(x) { if (y) break() else 1 }
//                        """);
//    }
//
//    @Test
//    public void inlineFor() throws Exception {
//        verify(
//                """
//                          function(x) for (i in x) 1
//                        """);
//
//        verify(
//                """
//                          function(x) for (i in x) if (i) break() else 1
//                        """);
//    }
//
//    @Test
//    public void inlineArithmetics() throws Exception {
//        verify(
//                """
//                          function(x, y) x + y
//                        """);
//
//        verify(
//                """
//                          function(x, y) x - y
//                        """);
//
//        verify(
//                """
//                          function(x, y) {
//                            list(x + y - x + 10, -x + 1, +y)
//                          }
//                        """);
//
//        verify(
//                """
//                          function(x, y) {
//                            list(x * y / x * 10, exp(x) ^ 2, sqrt(exp(x)))
//                          }
//                        """);
//
//        verify(
//                """
//                          function(x, y) {
//                            list(log(x), log(x, y))
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineMath1() throws Exception {
//        verify(
//                """
//                          function(x) {
//                            list(
//                              floor(x), ceiling(x), sign(x),
//                              expm1(x), log1p(x),
//                              cos(x), sin(x), tan(x), acos(x), asin(x), atan(x),
//                              cosh(x), sinh(x), tanh(x), acosh(x), asinh(x), atanh(x),
//                              lgamma(x), gamma(x), digamma(x), trigamma(x),
//                              cospi(x), sinpi(x), tanpi(x)
//                            )
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineLogical() throws Exception {
//        verify(
//                """
//                          function(x, y) {
//                              list(
//                                x == y, x != y, x < y, x <= y, x > y, x >= y, x & y, x | y, !x
//                              )
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineDollar() throws Exception {
//        verify(
//                """
//                          # xs <- list(a=1, b=list(c=2))
//                          function(xs) {
//                              xs$a
//                              xs$"a"
//                              xs$b$c
//                              xs$"b"$c
//                              xs$"b"$"c"
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineIsXYZ() throws Exception {
//        verify(
//                """
//                          function(x) {
//                            list(
//                              is.character(x),
//                              is.complex(x),
//                              is.double(x),
//                              is.integer(x),
//                              is.logical(x),
//                              is.name(x),
//                              is.null(x),
//                              is.object(x),
//                              is.symbol(x)
//                            )
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineDotCall() throws Exception {
//        verify(
//                """
//                          function(x) {
//                            .Call("bar")
//                            .Call("foo", x, 1, TRUE)
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineIntGeneratingSequences() throws Exception {
//        verify(
//                """
//                          function(x, xs) {
//                            list(x:100, seq_along(xs), seq_len(x))
//                          }
//                        """);
//    }
//
//    @Test
//    public void multiColon() throws Exception {
//        verify(
//                """
//                          function() {
//                            list(compiler::cmpfun, compiler:::makeCenv)
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineSwitch() throws Exception {
//        verify(
//                """
//                          function(x) {
//                            if (switch(x, 1, 2, g(3))) {
//                              if (y) 4 else 5
//                            }
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineAssign1() throws Exception {
//        verify(
//                """
//                          function() {
//                            x <- 1
//                          }
//                        """);
//
//        verify(
//                """
//                          function() {
//                            y <<- 2
//                          }
//                        """);
//
//        verify(
//                """
//                          function() {
//                            a::b <- 1
//                            a:::b <- 3
//                            a:::b <<- 3
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineAssign2() throws Exception {
//        verify(
//                """
//                          function() {
//                            f(x) <- 1
//                          }
//                        """);
//
//        verify(
//                """
//                          function() {
//                            pkg::f(x) <- 1
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineAssign3() throws Exception {
//        verify(
//                """
//                          function() {
//                            f(g(h(x, k), j), i) <- v
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineDollarAssign() throws Exception {
//        verify(
//                """
//                          function() {
//                           x$y <- 1
//                           x$"z" <- 2
//                           a::b$c <- 3
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineSquareAssign1() throws Exception {
//        verify(
//                """
//                          function() {
//                            x[y == 1] <- 1
//                            x[[y == 1]] <- 1
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineSquareAssign2() throws Exception {
//        verify(
//                """
//                          function() {
//                            x[y == 1, z == 2] <- 1
//                            x[[y == 1, z == 2]] <- 1
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineSquareAssign3() throws Exception {
//        verify(
//                """
//                          function() {
//                            x[y == 1, ] <- 1
//                            x[[y == 1, ]] <- 1
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineSquareAssign4() throws Exception {
//        verify(
//                """
//                          function() {
//                            x$y[-c(1,2)] <- 1
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineSquareSubset1() throws Exception {
//        verify(
//                """
//                          function() {
//                            x[y == 1]
//                            x[[y == 1]]
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineSquareSubset2() throws Exception {
//        verify(
//                """
//                          function() {
//                            x[y == 1, z == 2]
//                            x[[y == 1, z == 2]]
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineSquareSubset3() throws Exception {
//        verify(
//                """
//                          function() {
//                            x[y == 1,]
//                            x[[y == 1,]]
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineSquareSubset4() throws Exception {
//        verify(
//                """
//                          function() {
//                            x[a=1,]
//                            x[[a=1,]]
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineSlotAssign() throws Exception {
//        verify(
//                """
//                          function() {
//                            setClass("A", slots = list(x = "numeric"))
//                            a <- new("A", x = 42)
//                            a@x <- 43
//                          }
//                        """);
//    }
//
//    @Test
//    public void inlineIdentical() throws Exception {
//        verify(
//                """
//                          function(x) {
//                            identical(unzip, "internal")
//                          }
//                        """);
//    }
//
//    @Test
//    public void constantFoldingC() throws Exception {
//        // no constant folding - c is resolved from baseenv()
//        verify(
//                """
//                        function () {
//                           c("%Y-%m-%d", "%d-%m-%Y", "%m-%d-%Y")
//                        }
//                        """);
//
//        // constant folding - optlevel 3
//        verify(
//                """
//                        function () {
//                           c("%Y-%m-%d", "%d-%m-%Y", "%m-%d-%Y")
//                        }
//                        """,
//                3);
//    }
//
//    @Test
//    public void constantFoldMul() throws Exception {
//        verify(
//                """
//                          function() {
//                            2 * 3 * 4
//                          }
//                        """);
//    }
//
//    @ParameterizedTest
//    @MethodSource("stdlibFunctionsList")
//    public void stdlibFunctions(String name) throws Exception {
//        verify(name);
//    }

    private Stream<Arguments> stdlibFunctionsList() {
        StrSXP base =
                (StrSXP)
                        R.eval(
                                """
                                        list_functions <- function(name) {
                                            namespace <- getNamespace(name)
                                            p <- function(x) {
                                              f <- get(x, envir=namespace)
                                              is.function(f) && identical(environment(f), namespace)
                                            }
                                            Filter(p, ls(namespace, all.names = TRUE))
                                        }

                                        pkgs <- c("base", "tools", "utils", "graphics", "methods", "stats")
                                        funs <- sapply(pkgs, function(x) paste0(x, ":::`", list_functions(x), "`"))
                                        do.call(c, funs)
                                        """);

        return Streams.stream(base.iterator())
                .filter(Predicates.random(stdlibTestsRatio()))
                .map(Arguments::of);
    }

    /**
     * The ratio of closures in the standard library that are tested (via {@link #verify(String,
     * int)}).
     *
     * <p>By default this is 1. In particular, it's usually overridden to specify a lower value when
     * {@link TestConfig#FAST_TESTS} is set.
     */
    protected double stdlibTestsRatio() {
        return 1;
    }

    protected void verify(String code) throws Exception {
        verify(code, BCCompiler.DEFAULT_OPTIMIZATION_LEVEL);
    }

    private int verifySeq = 0;

    @BeforeEach
    public void resetVerifySeq() {
        verifySeq = 0;
    }

    protected abstract void verify(String name, String code, int optimizationLevel) throws Exception;

    protected void verify(String code, int optimizationLevel) throws Exception {
        verify(String.valueOf(verifySeq++), code, optimizationLevel);
    }

    @Override
    protected RSession getRSession() {
        return Rsession;
    }
}
