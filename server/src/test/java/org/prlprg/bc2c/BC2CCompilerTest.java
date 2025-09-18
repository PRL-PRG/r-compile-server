package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.util.function.Function;
import org.junit.Ignore;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.prlprg.bc2c.BC2CSnapshotTestExtension.BC2CSnapshot;
import org.prlprg.bc2c.BC2CSnapshotTestExtension.TestResultCheck;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.gnur.GNUR;
import org.prlprg.util.gnur.GNURTestSupport;

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
    public void testStack(BC2CSnapshot snapshot) {
        snapshot.verify("a <- 1; b <- 2; c <- 3; (a + b) * (a + c)");
        snapshot.verify("a <- 1; b <- 2; c <- 3; x <- if (a) b + c else b; x + 1");
    }

  @Test
  public void testDdVal(BC2CSnapshot snapshot) {
    snapshot.verify(
        "e <- new.env(parent = emptyenv()); e$x <- 42; " + "get('x', envir = e, inherits = FALSE)");
    snapshot.verify("f <- function(...) x <- ..1; f(42)", returns(42.0));
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
  public void testVecsubsetN(BC2CSnapshot snapshot) {
    snapshot.verify("x <- c(1, 2, 3); x[2]", returns(2.0), fastSubset());
    snapshot.verify("x <- c(1, 2, 3); x[2L]", returns(2.0), fastSubset());
    snapshot.verify("x <- c(1L, 2L, 3L); x[2L]", returns(2), fastSubset());
    snapshot.verify("x <- list(1, 2, 3); x[3L]", fastSubset());
    snapshot.verify("x <- list('a', 'b'); x[2]", fastSubset());
    snapshot.verify(
        "x <- data.frame(a=1, b=2, row.names=NULL); x['a']",
        x -> assertEquals(x.pc().dispatchedSubset(), 1));
    snapshot.verify("x <- list(a=1, b=2); x['a']", slowSubset());
    // FIXME: allow to test errors
    // snapshot.verify("x <- c(1, 2, 3); x[42]", slowSubset());
    snapshot.verify("x <- list(a=1, b=2); x['c']", slowSubset());
  }

  @Test
  public void testVecsubset2N(BC2CSnapshot snapshot) {
    snapshot.verify("x <- c(1, 2, 3); x[[2]]", fastSubset());
    snapshot.verify("x <- c(1, 2, 3); x[[2L]]", fastSubset());
    snapshot.verify("x <- c(1L, 2L, 3L); x[[2L]]", fastSubset());
    snapshot.verify("x <- list(1, 2, 3); x[[3L]]", fastSubset());
    snapshot.verify("x <- list('a', 'b'); x[[2]]", fastSubset());
    snapshot.verify(
        "x <- data.frame(a=1, b=2, row.names=NULL); x[['a']]",
        x -> assertEquals(x.pc().dispatchedSubset(), 1));
    snapshot.verify("x <- list(a=1, b=2); x[['a']]", slowSubset());
    // FIXME: allow to test errors
    // snapshot.verify("x <- c(1, 2, 3); x[[42]]", slowSubset());
    snapshot.verify("x <- list(a=1, b=2); x[['c']]", slowSubset());
  }

  @Test
  public void testMatsubset(BC2CSnapshot snapshot) {
    snapshot.verify("x <- matrix(1L:6L, nrow=2); x[1,2]", returns(3), fastSubset());
    snapshot.verify("x <- data.frame(a=c(1,2), b=c(3,4)); x[1,2]", returns(3.0));
  }

  @Test
  public void testMatsubset2(BC2CSnapshot snapshot) {
    snapshot.verify("x <- matrix(1L:6L, nrow=2); x[[1,2]]", returns(3), fastSubset());
    snapshot.verify("x <- data.frame(a=c(1,2), b=c(3,4)); x[[1,2]]", returns(3.0));
  }

  @Test
  public void testDfltsubset(BC2CSnapshot snapshot) {
    snapshot.verify("x <- c(1,2,3); x[]");
  }

  @Test
  public void testDfltsubset2(BC2CSnapshot snapshot) {
    snapshot.verify("a <- c(1,2,3); a[[x=1]]");
  }

  @Test
  public void testSubsetN(BC2CSnapshot snapshot) {
    snapshot.verify("a <- array(1:8, dim=c(2,2,2)); a[1,2,1]", fastSubset());
    snapshot.verify("a <- structure(array(1:8, dim=c(2,2,2)), class='a'); a[1,2,1]", slowSubset());
  }

  @Test
  public void testSubset2N(BC2CSnapshot snapshot) {
    snapshot.verify("a <- array(1:8, dim=c(2,2,2)); a[[1,2,1]]", fastSubset());
    snapshot.verify("a <- array(1:8, dim=c(2,2,2)); a[[1,2,TRUE]]", slowSubset());
  }

  @Test
  public void testSubassignN(BC2CSnapshot snapshot) {
    snapshot.verify("a <- array(1:8, dim=c(2,2,2)); a[1,2,1] <- 42L; a", fastSubassign());
    snapshot.verify(
        "a <- structure(array(1:8, dim=c(2,2,2)), class='a'); a[1,2,1] <- 42; a", slowSubassign());
  }

  @Test
  public void testSubassign2N(BC2CSnapshot snapshot) {
    snapshot.verify("a <- array(1:8, dim=c(2,2,2)); a[[1,2,1]] <- 42L; a", fastSubassign());

    snapshot.verify(
        "a <- structure(array(1:8, dim=c(2,2,2)), class='a'); a[[1,2,1]] <- 42; a",
        slowSubassign());
  }

  @Test
  public void testMatsubassign(BC2CSnapshot snapshot) {
    snapshot.verify("x <- matrix(1L:6L, nrow=2); x[1,2] <- 42L; x", fastSubassign());
    snapshot.verify("x <- matrix(1L:6L, nrow=2); x[1,2] <- 42; x", slowSubassign());
    snapshot.verify(
        "x <- data.frame(a=c(1,2), b=c(3,4)); x[1,2] <- 42; x",
        x -> assertEquals(x.pc().dispatchedSubassign(), 1));
    snapshot.verify("x <- matrix(1L:6L, nrow=2); x[[1,2]] <- 42L; x", fastSubassign());
    snapshot.verify("x <- data.frame(a=c(1,2), b=c(3,4)); x[[1,2]] <- 42; x");
  }

  @Test
  public void testVecsubassign(BC2CSnapshot snapshot) {
    snapshot.verify("x <- c(1,2,3); x[1] <- 2; x", fastSubassign());
    snapshot.verify(
        "x <- data.frame(a=1, b=2, row.names=NULL); x['a'] <- 42; x",
        r -> assertEquals(r.pc().dispatchedSubassign(), 1));
    snapshot.verify("x <- list(1,2,3); x[[1]] <- x; x", fastSubassign());
  }

  @Test
  public void testDfltSubassign(BC2CSnapshot snapshot) {
    snapshot.verify("x <- c(1,2,3); x[] <- 42; x");
    snapshot.verify("y <- c(1,2,3); y[[x=1]] <- 42; y");
    snapshot.verify(
        "x <- data.frame(a=1, b=2, row.names=NULL); x[] <- 42; x",
        r -> assertEquals(r.pc().dispatchedSubassign(), 1));
  }

  @Test
  public void testSuperAssign(BC2CSnapshot snapshot) {
    snapshot.verify(
        """
                  x <- c(1,2)
                  g <- function() {
                    x <<- 42
                  }
                  g()
                  x
                """);
    snapshot.verify(
        """
                  x <- c(1,2)
                  g <- function() {
                    x[] <<- 42
                  }
                  g()
                  x
                """);
    snapshot.verify(
        """
                  y <- c(1,2)
                  g <- function() {
                    y[[x=1]] <<- 42
                  }
                  g()
                  y
                """);
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

  @Test
  public void testGetterCalls(BC2CSnapshot snapshot) {
    // test SETTER_CALL with builtin
    snapshot.verify("x <- 1:3; names(x)[3] <- 'a'; x");
    //        // test SETTER_CALL with special
    //        snapshot.verify(
    //                "setClass('C', slots = list(x = 'numeric')); o <- new('C', x = 1); o@x <- 42;
    // str(o)");
    //        // test SETTER_CALL with closure
    //        snapshot.verify("x <- data.frame(a=1); colnames(x) <- 'b'; x");
  }

  @Test
  public void testFor(BC2CSnapshot snapshot) {
    // sequence is INT
    snapshot.verify(
        """
                        s <- 0
                        for (i in 1:10) s <- s + i
                        s
                        """,
        returns(55.0));
    // sequence is REAL
    snapshot.verify(
        """
                        s <- 0
                        for (i in seq(0,1,.1)) s <- s + i
                        s
                        """);
    // sequence is LGL
    snapshot.verify(
        """
                        s <- 0L
                        for (i in c(T,F,T)) s <- s + i
                        s
                        """,
        returns(2));
    // sequence is STR
    snapshot.verify(
        """
                x <- ""
                for (i in letters)  x <- paste0(x, i)
                x
                """);
    // sequence is CPL
    snapshot.verify(
        """
                s <- 0
                for (i in c(0+1i,1+2i))  s <- s + i
                s
                """);
    // sequence is VEC
    snapshot.verify(
        """
                s <- 0
                for (i in list(1,2,3))  s <- s + i
                s
                """);
    // sequence is RAW
    snapshot.verify(
        """
                s <- 0
                for (i in as.raw(c(1,2,3)))  s <- s + as.integer(i)
                s
                """);
  }

  @Test
  public void testNestedFor(BC2CSnapshot snapshot) {
    // this for loop will not use ISQ as it will be constant folded
    snapshot.verify(
        """
  s <- 0L
  for (i in 1:10) {
      for (j in 1:10) {
          s <- s + j + i
      }
  }
  s
  """,
        returns(1100));
  }

  @Test
  public void testColon(BC2CSnapshot snapshot) {
    snapshot.verify(
        """
    x <- 1
    y <- 10
    x:y
      """,
        x -> assertEquals(x.pc().isq(), 1));
  }

  @Test
  public void testISQFor(BC2CSnapshot snapshot) {
    snapshot.verify(
        """
                    n <- 1
                    m <- 10
                    s <- 0
                    for (i in n:m) s <- s + i
                    s
                    """,
        returns(55.0),
        x -> {
          assertEquals(x.pc().isq(), 1);
          assertEquals(x.pc().isqFor(), 10);
        });
    snapshot.verify(
        """
                    xs <- list(10, 20, 30)
                    s <- 0
                    for (i in seq_along(xs)) s <- s + xs[[i]]
                    s
                    """,
        returns(60.0),
        x -> {
          assertEquals(x.pc().isq(), 1);
          assertEquals(x.pc().isqFor(), 3);
        });
    snapshot.verify(
        """
                    xs <- list(11, 21, 31)
                    s <- 0
                    for (i in seq_len(3)) s <- s + xs[[i]]
                    s
                    """,
        returns(63.0),
        x -> {
          assertEquals(x.pc().isq(), 1);
          assertEquals(x.pc().isqFor(), 3);
        });
  }

  @Test
  public void testIs(BC2CSnapshot snapshot) {
    snapshot.verify("x <- NULL; is.null(x)");
    snapshot.verify("x <- 1; is.null(x)");
    snapshot.verify("x <- ''; is.null(x)");
    snapshot.verify("x <- 1; is.logical(x)");
    snapshot.verify("x <- T; is.logical(x)");
    snapshot.verify("x <- c(T, F); is.logical(x)");
    snapshot.verify("x <- 'a'; is.integer(x)");
    snapshot.verify("x <- 1L; is.integer(x)");
    snapshot.verify("x <- c(1L, 2L); is.integer(x)");
    snapshot.verify("a <- 10; x <- 1:a; is.integer(x)");
    snapshot.verify("x <- 'a'; is.double(x)");
    snapshot.verify("x <- 1; is.double(x)");
    snapshot.verify("x <- c(1, 2); is.double(x)");
    snapshot.verify("a <- 10; x <- 1:a; is.double(x)");
    // TODO: missing other is.xxx
  }

  @Test
  public void testIf(BC2CSnapshot snapshot) {
    snapshot.verify(
        """
            x <- 10
            if (x > 0) {
              3
            }
            x
            """);
    snapshot.verify(
        """
      function(x) {
        if (x > 0) {
        }
        1
      }

      1
      """);
  }

  @Test
  public void testSubsetAndComplexAssign(BC2CSnapshot snapshot) {
    // from bounce benchmark
    snapshot.verify(
        """
            b <- list()
            b[[1]] <- c(1,2,3)
            names(b[[1]]) <- c("x","y","z")
            b
            """);
  }

  @Test
  public void testVectorizedBooleanOperations(BC2CSnapshot snapshot) {
    // TODO test empty vector
    snapshot.verify("x <- TRUE; y <- FALSE; x & y");
    snapshot.verify("x <- TRUE; y <- FALSE; x | y");
    snapshot.verify("x <- c(T,F,T,F,NA,NA,T,F); y <- c(T,T,F,F,T,F,NA,NA); x & y");
    snapshot.verify("x <- c(T,F,T,F,NA,NA,T,F); y <- c(T,T,F,F,T,F,NA,NA); x & y");
    snapshot.verify("x <- c(); y <- T; x & y");
    snapshot.verify("x <- T; y <- c(); x & y");
    snapshot.verify("x <- TRUE; !x");
    snapshot.verify("x <- 42; !!x");
    snapshot.verify("x <- c(T,F,T,F); y <- c(T,T,F,F); x | y");
  }

  @Test
  public void testScalarBooleanOperations(BC2CSnapshot snapshot) {
    snapshot.verify("a <- TRUE; b <- TRUE; a && b");
    snapshot.verify("a <- TRUE; b <- FALSE; a && b");
    snapshot.verify("a <- FALSE; b <- TRUE; a && b");
    snapshot.verify("a <- FALSE; b <- FALSE; a && b");
    snapshot.verify("a <- NA; b <- FALSE; a && b");
    snapshot.verify("a <- NA; b <- TRUE; a && b");
    snapshot.verify("a <- TRUE; b <- NA; a && b");
    snapshot.verify("a <- FALSE; b <- NA; a && b");
    snapshot.verify("a <- NA; b <- NA; a && b");

    snapshot.verify("a <- TRUE; b <- TRUE; a || b");
    snapshot.verify("a <- TRUE; b <- FALSE; a || b");
    snapshot.verify("a <- FALSE; b <- TRUE; a || b");
    snapshot.verify("a <- FALSE; b <- FALSE; a || b");
    snapshot.verify("a <- NA; b <- FALSE; a || b");
    snapshot.verify("a <- NA; b <- TRUE; a || b");
    snapshot.verify("a <- TRUE; b <- NA; a || b");
    snapshot.verify("a <- FALSE; b <- NA; a || b");
    snapshot.verify("a <- NA; b <- NA; a || b");
  }

  @Test
  public void testLog(BC2CSnapshot snapshot) {
    snapshot.verify("log(1)");
    snapshot.verify("log(c(1,10,100, NA))");
    snapshot.verify("log(2, 2)");
    snapshot.verify("log(c(1,10,100, NA), 2)");
    snapshot.verify("log(10, 10)");
    snapshot.verify("log(c(1,10,100, NA), 10)");
    snapshot.verify("log(5, 5)");
    snapshot.verify("log(c(1,10,100, NA), 5)");
  }

  @Test
  public void testMath1(BC2CSnapshot snapshot) {
    snapshot.verify("x <- 1; sin(x)", fastMath1());
    snapshot.verify("x <- 1L; sin(x)");
    snapshot.verify("x <- c(1,2); sin(x)");
  }

  @Test
  public void testDotCall(BC2CSnapshot snapshot) {
    snapshot.verify(".Call(tools:::C_nonASCII, 'Ř')", returns(SEXPs.TRUE));
    snapshot.verify(".Call(tools:::C_check_nonASCII, 'Ř', TRUE)", returns(SEXPs.TRUE));

    // tests the case with over 16 arguments which has to go through do_dotCall builtin
    snapshot.verify(
        """
            src <- '
              int sum = INTEGER(a1)[0] + INTEGER(a2)[0] + INTEGER(a3)[0] + INTEGER(a4)[0] +
                        INTEGER(a5)[0] + INTEGER(a6)[0] + INTEGER(a7)[0] + INTEGER(a8)[0] +
                        INTEGER(a9)[0] + INTEGER(a10)[0] + INTEGER(a11)[0] + INTEGER(a12)[0] +
                        INTEGER(a13)[0] + INTEGER(a14)[0] + INTEGER(a15)[0] + INTEGER(a16)[0] +
                        INTEGER(a17)[0];

              SEXP out = PROTECT(Rf_allocVector(INTSXP, 1));
              INTEGER(out)[0] = sum;
              UNPROTECT(1);
              return out;
            '
            manyargs <- inline::cfunction(
              sig = setNames(rep("integer", 17), paste0("a", 1:17)),
              body = src,
              convention = ".Call",
              name = "manyargs"
            )

            manyargs(1L,2L,3L,4L,5L,6L,7L,8L,9L,10L,11L,12L,13L,14L,15L,16L,17L)
            """,
        returns(153));
  }

  @Test
  public void testDoDots(BC2CSnapshot snapshot) {
    snapshot.verify("f <- function(...) { list(...) }; f(1,2)");
  }

  //  @Test
  //  public void testForWithBreak(BC2CSnapshot snapshot) {
  //    snapshot.verify("""
  //            f <- function() {
  //              for (i in 1:10) {
  //                  break()
  //              }
  //            }
  //
  //            f()
  //            """);
  //  }

  @Test
  public void testForWithReturn(BC2CSnapshot snapshot) {
    snapshot.verify(
        """
            f <- function() {
              for (i in 1:10) {
                  return(i)
              }
            }

            f()
            """);
  }

  @Test
  public void testPromiseCompilation(BC2CSnapshot snapshot) {
        snapshot.setClean(false);
        snapshot.verify(
                """
                        f <- function(x) {
                          print(x)
                        }
                        
                        f({
                          x <- 1
                          x + 2
                        })
                        """);
  }

  @Test
  public void testDollarGets(BC2CSnapshot snapshot) {
    snapshot.verify(
        """
  # Basic list assignment
  x1 <- x2 <- list(a = 1)
  x1$b <- 2
  eval(quote(x2$b <- 2))

  # Method dispatch
  obj <- structure(list(val = 1), class = "myobj")
  `$<-.myobj` <- function(x, name, value) {
    x[[paste0("modified_", name)]] <- value
    x
  }
  obj1 <- obj2 <- obj
  obj1$test <- 10
  eval(quote(obj2$test <- 10))

  # Copy-on-write
  original <- list(a = 1)
  x3 <- x4 <- original
  x3$b <- 2
  eval(quote(x4$b <- 2))

  identical(x1, x2) && identical(obj1, obj2) && !identical(x3, original) && !identical(x4, original) && identical(x3, x4)
  """,
        returns(SEXPs.TRUE));
  }

  // TODO: test for errors - and stack pointers
  //  - try with R BC interpreter
  //  - a tryCatch / just an error in a call called from REPL

  @Ignore
  @Test
  public void testAdhoc(BC2CSnapshot snapshot) {
    snapshot.setClean(false);
    snapshot.verify(
        """
        """);
  }

  // API

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

  private TestResultCheck slowSubset() {
    return (r) -> {
      assertEquals(1, r.pc().slowSubset(), "Expected slow subset");
    };
  }

  private TestResultCheck slowSubassign() {
    return (r) -> {
      assertEquals(1, r.pc().slowSubassign(), "Expected slow subassign");
    };
  }

  private TestResultCheck fastSubassign() {
    return (r) -> {
      assertEquals(0, r.pc().slowSubassign(), "Expected fast subassign");
      assertEquals(0, r.pc().dispatchedSubassign(), "Expected no dispatched subassign");
    };
  }

  private TestResultCheck noSlow(Function<PerformanceCounters, Integer> metric, String message) {
    return (r) -> assertEquals(0, metric.apply(r.pc()), message);
  }

  private TestResultCheck returns(double expected) {
    return (r) ->
        assertEquals(
            expected,
            r.value()
                .asScalarReal()
                .orElseThrow(() -> new IllegalStateException("Expected double, got: " + r.value()))
                .doubleValue());
  }

  private TestResultCheck returns(int expected) {
    return (r) ->
        assertEquals(
            expected,
            r.value()
                .asScalarInteger()
                .orElseThrow(() -> new IllegalStateException("Expected integer, got: " + r.value()))
                .intValue());
  }

  private TestResultCheck returns(SEXP expected) {
    return (r) -> assertEquals(expected, r.value());
  }
}
