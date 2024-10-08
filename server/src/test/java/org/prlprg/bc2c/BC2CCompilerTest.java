package org.prlprg.bc2c;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.prlprg.bc2c.BC2CSnapshotTestExtension.BC2CSnapshot;
import org.prlprg.bc2c.BC2CSnapshotTestExtension.TestResultCheck;
import org.prlprg.util.gnur.GNUR;
import org.prlprg.util.gnur.GNURTestSupport;

import java.util.function.Function;

import static org.junit.jupiter.api.Assertions.assertEquals;

@GNURTestSupport
@ExtendWith(BC2CSnapshotTestExtension.class)
public class BC2CCompilerTest {

    protected final GNUR R;

    public BC2CCompilerTest(GNUR R) {
        this.R = R;
    }

    @Test
    public void testReturn(BC2CSnapshot snapshot) {
        snapshot.verify("42");
    }

    @Test
    public void testSetAndGetVar(BC2CSnapshot snapshot) {
        snapshot.verify("x <- 42; x");
        snapshot.verify("y <- 42; x <- y; x");
    }

    @Test
    public void testAdd(BC2CSnapshot snapshot) {
        snapshot.verify("x <- 42; x + 21", fastArith());
        snapshot.verify("x <- 42L; x + 21L", fastArith());
        snapshot.verify("x <- 42L; x + 21", fastArith());
        snapshot.verify("x <- 42; x + c(1, 2)");
        snapshot.verify("x <- c(42, 43); x + c(1, 2)");
        snapshot.verify("x <- 42L; x + c(1, 2)");
        snapshot.verify("x <- c(42, 43); x + c(1, 2)");
    }

    @Test
    public void testRealScalarArith(BC2CSnapshot snapshot) {
        snapshot.verify("x <- 42; x + 21", fastArith());
        snapshot.verify("x <- 42; x - 21", fastArith());
        snapshot.verify("x <- 42; x * 2", fastArith());
        snapshot.verify("x <- 42; x / 2", fastArith());
        snapshot.verify("x <- 42; x ^ 2", fastArith());
    }

    @Test
    public void testIntScalarArith(BC2CSnapshot snapshot) {
        snapshot.verify("x <- 42L; x + 21L", fastArith());
        snapshot.verify("x <- 42L; x - 21L", fastArith());
        snapshot.verify("x <- 42L; x * 2L", fastArith());
        snapshot.verify("x <- 42L; x / 2L", fastArith());
    }

    // TODO: do some property based testing including NA using R as an oracle

    @Test
    public void testArithBuiltins(BC2CSnapshot snapshot) {
        snapshot.verify("x <- 42; x %% 5");
        snapshot.verify("x <- 42; x %/% 5");
    }

    @Test
    public void testMath1Builtins(BC2CSnapshot snapshot) {
        snapshot.verify("sqrt(4)", fastMath1());
        snapshot.verify("sqrt(4L)", fastMath1());
        snapshot.verify("exp(0L)", fastMath1());
        snapshot.verify("exp(0)", fastMath1());
        snapshot.verify("sqrt(c(4,9))", fastMath1());
    }

    @Test
    public void testUnaryBuiltins(BC2CSnapshot snapshot) {
        snapshot.verify("x <- 42; +x", fastUnary());
        snapshot.verify("x <- 42; -x", fastUnary());
        snapshot.verify("x <- -42; +x", fastUnary());
        snapshot.verify("x <- -42; -x", fastUnary());
        snapshot.verify("x <- 42L; +x", fastUnary());
        snapshot.verify("x <- 42L; -x", fastUnary());
        snapshot.verify("x <- -42L; +x", fastUnary());
        snapshot.verify("x <- -42L; -x", fastUnary());
        snapshot.verify("x <- c(1, -2); -x");
    }

    @Test
    public void testScalarCompare(BC2CSnapshot snapshot) {
        snapshot.verify("x <- 42; x < 100", fastRelop());
        snapshot.verify("x <- 42; x > 100", fastRelop());
        snapshot.verify("x <- 42; x <= 42", fastRelop());
        snapshot.verify("x <- 42; x >= 42", fastRelop());
        snapshot.verify("x <- 42; x == 42", fastRelop());
        snapshot.verify("x <- 42; x == 100", fastRelop());
        snapshot.verify("x <- 42; x != 42", fastRelop());
        snapshot.verify("x <- 42; x != 100", fastRelop());
    }

    @Test
    public void testBooleanOperators(BC2CSnapshot snapshot) {
        snapshot.verify("x <- TRUE; y <- FALSE; x & y");
        snapshot.verify("x <- TRUE; y <- FALSE; x | y");
        snapshot.verify("x <- TRUE; !x");
        snapshot.verify("x <- 42; !!x");
        snapshot.verify("x <- c(T,F,T,F); y <- c(T,T,F,F); x | y");
    }

    @Test
    public void testClosure(BC2CSnapshot snapshot) {
        snapshot.verify(
                """
                        y <- 21
                        f <- function (x) { x + y }
                        f(42)
                        """,
                fastArith());
    }

    @Test
    public void testNonBytecodeClosure(BC2CSnapshot snapshot) {
        snapshot.verify(
                """
                        f <- function (x) { if (x) { browser() }; 1 }
                        f(FALSE)
                        """);
    }

    @Test
    public void testNestedClosures(BC2CSnapshot snapshot) {
        snapshot.verify(
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
                returns(66.0));
    }

    @Test
    public void testCall(BC2CSnapshot snapshot) {
        snapshot.verify("str(42)");
    }

    @Test
    public void testSumIn0Loop(BC2CSnapshot snapshot) {
        snapshot.verify(
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
                returns(4950.0));
    }

    @Test
    public void testNA(BC2CSnapshot snapshot) {
        snapshot.verify("x <- TRUE;  y <- x; is.na(y)");
        snapshot.verify("x <- FALSE; y <- x; is.na(y)");
        snapshot.verify("x <- NA;    y <- x; is.na(y)");
        snapshot.verify("y <- NA_integer_; is.na(y)");
    }

    @Test
    public void testPromise(BC2CSnapshot snapshot) {
        snapshot.verify("f <- function(x) x + 1;  y <- 2; f(y*2)", returns(5.0));
    }

    @Test
    public void testIfElse(BC2CSnapshot snapshot) {
        snapshot.verify("x <- 1; if (x == 1) 1 else if (x == 2) 2 else 3", returns(1.0));
        snapshot.verify("x <- 2; if (x == 1) 1 else if (x == 2) 2 else 3", returns(2.0));
        snapshot.verify("x <- 3; if (x == 1) 1 else if (x == 2) 2 else 3", returns(3.0));
    }

    @Test
    public void testDollar(BC2CSnapshot snapshot) {
        snapshot.verify("x <- list(a=1, b=2); x$a", returns(1.0));
        snapshot.verify("x <- list(a=2); x$b");
    }

    @Test
    public void testSubsetN(BC2CSnapshot snapshot) {
        snapshot.verify("x <- c(1, 2, 3); x[2]", returns(2.0), fastSubset());
        snapshot.verify("x <- c(1, 2, 3); x[2L]", returns(2.0), fastSubset());
        snapshot.verify("x <- c(1L, 2L, 3L); x[2L]", returns(2), fastSubset());
        snapshot.verify("x <- list(1, 2, 3); x[3L]", fastSubset());
        snapshot.verify("x <- list('a', 'b'); x[2]", fastSubset());
        snapshot.verify(
                "x <- data.frame(a=1, b=2, row.names=NULL); x['a']",
                x -> assertEquals(x.pc().dispatchedSubset(), 1));
        snapshot.verify("x <- list(a=1, b=2); x['a']");
    }

    @Test
    public void testSubset2N(BC2CSnapshot snapshot) {
        snapshot.verify("x <- c(1, 2, 3); x[[2]]");
        snapshot.verify("x <- c(1, 2, 3); x[[2L]]");
        snapshot.verify("x <- c(1L, 2L, 3L); x[[2L]]");
        snapshot.verify("x <- list(1, 2, 3); x[[3L]]");
        snapshot.verify("x <- list('a', 'b'); x[[2]]");
        snapshot.verify("x <- data.frame(a=1, b=2, row.names=NULL); x[['a']]");
    }

    @Test
    public void testSubset(BC2CSnapshot snapshot) {
        snapshot.verify("x <- c(1,2,3); x[]");
    }

    @Test
    public void testSubset2(BC2CSnapshot snapshot) {
        snapshot.verify("a <- c(1,2,3); a[[x=1]]");
    }

    @Test
    public void testSubAssignN(BC2CSnapshot snapshot) {
        snapshot.verify("x <- c(1,2,3); x[1] <- 2; x");
        snapshot.verify("x <- list(1,2,3); x[[1]] <- x; x");
        snapshot.verify(
                "x <- data.frame(a=1, b=2, row.names=NULL); x['a'] <- 42",
                r -> assertEquals(r.pc().dispatchedSubassign(), 1));
    }

    @Test
    public void testSubAssign(BC2CSnapshot snapshot) {
        snapshot.verify("x <- c(1,2,3); x[] <- 42; x");
        snapshot.verify("y <- c(1,2,3); y[[x=1]] <- 42; y");
        snapshot.verify(
                "x <- data.frame(a=1, b=2, row.names=NULL); x[] <- 42",
                r -> assertEquals(r.pc().dispatchedSubassign(), 1));
    }

    @Test
    public void testGetIntBuiltin(BC2CSnapshot snapshot) {
        snapshot.verify("vector(length=2)");
    }

    @Test
    public void testSetterCalls(BC2CSnapshot snapshot) {
        // test SETTER_CALL with builtin
        snapshot.verify("x <- c(1,2,3); names(x) <- c('a', 'b', 'c'); x");
        // test SETTER_CALL with special
        snapshot.verify(
                "setClass('C', slots = list(x = 'numeric')); o <- new('C', x = 1); o@x <- 42; str(o)");
        // test SETTER_CALL with closure
        snapshot.verify("x <- data.frame(a=1); colnames(x) <- 'b'; x");
    }

    private TestResultCheck fastArith() {
        return noSlow(PerformanceCounters::slowArith, "Expected fast arithmetics");
    }

    private TestResultCheck fastMath1() {
        return noSlow(PerformanceCounters::slowArith, "Expected fast math1");
    }

    private TestResultCheck fastUnary() {
        return noSlow(PerformanceCounters::slowUnary, "Expected fast math1");
    }

    private TestResultCheck fastRelop() {
        return noSlow(PerformanceCounters::slowRelop, "Expected fast relop");
    }

    private TestResultCheck fastSubset() {
        return (r) -> {
            assertEquals(0, r.pc().slowSubset(), "Expected fast subset");
            assertEquals(0, r.pc().dispatchedSubset(), "Expected no dispatched subset");
        };
    }

    private TestResultCheck noSlow(Function<PerformanceCounters, Integer> metric, String message) {
        return (r) -> assertEquals(0, metric.apply(r.pc()), message);
    }

    private TestResultCheck returns(double expected) {
        return (r) -> assertEquals(expected, r.value().asScalarReal().orElseThrow(), expected);
    }

    private TestResultCheck returns(int expected) {
        return (r) -> assertEquals(expected, r.value().asScalarInteger().orElseThrow(), expected);
    }
}
