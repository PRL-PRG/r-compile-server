package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.util.function.Function;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.prlprg.bc2c.BC2CSnapshotTestExtension.BC2CSnapshot;
import org.prlprg.bc2c.BC2CSnapshotTestExtension.TestResultCheck;
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
    snapshot.setClean(false);
    //    snapshot.verify("""
    //            if (T) 1 else 2
    //            2
    //            """);
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
  public void testA(BC2CSnapshot snapshot) {
    snapshot.setClean(false);
    // snapshot.verify("x <- 1; if (x) print(x) else 2");
    snapshot.verify("x <- 1; x == 1");
  }

  @Test
  public void testMath1(BC2CSnapshot snapshot) {
    snapshot.verify("x <- 1; sin(x)", fastMath1());
    snapshot.verify("x <- 1L; sin(x)");
    snapshot.verify("x <- c(1,2); sin(x)");
  }

  @Test
  public void testDoDots(BC2CSnapshot snapshot) {
    snapshot.verify("f <- function(...) { list(...) }; f(1,2)");
  }

  @Test
  public void testB(BC2CSnapshot snapshot){
    // TODO: add support for GC torture
    snapshot.verify("""
            f <- function(n) {
              s <- 0
              for (i in 1:n) {
                for (j in 1:n) {
                  s <- s + 1
                }
              }
              s
            }
            
            n <- 100
            s <- 0
            for (i in 1:n) {
              for (j in 1:n) {
                s <- s + f(n)
              }
            }
            s
            """);
  }
  @Test
  public void testAdhoc2(BC2CSnapshot snapshot) {
    snapshot.verify("""
            n=5
              fname <- "/tmp/aloi-8d.csv.gz"
              alldata <- read.csv(gzfile(fname), header=F, sep=" ")
              data <- alldata[,1:8]
            
              list2object = function(from, to){
                  n = names(from)
                  s = slotNames(to)
                  p = pmatch(n, s)
                  if(any(is.na(p)))
                      stop(paste("\\nInvalid slot name(s) for class",
                                to, ":", paste(n[is.na(p)], collapse=" ")))
                  names(from) = s[p]
                  do.call("new", c(from, Class=to))
              }
            
              setClass("ModelEnv",
                  representation(
                      env = "environment",
                      get = "function",
                      set = "function",
                      hooks = "list"))
            
              setClass("flexclustControl",
                      representation(iter.max="numeric",
                                      tolerance="numeric",
                                      verbose="numeric",
                                      classify="character",
                                      initcent="character",
                                      gamma="numeric",          # for kcca
                                      simann="numeric",         # for kcca
                                      ntry="numeric",           # for qtclust
                                      min.size="numeric",       # for qtclust and ockc
                                      subsampling="numeric"     # for ockc
                                      ),
                      prototype(iter.max=200,
                                tolerance=10e-7,
                                verbose=0,
                                classify="auto",
                                initcent="randomcent",
                                gamma=1,
                                simann=c(0.3, 0.95, 10),
                                ntry=5,
                                min.size=2,
                                subsampling=1))
            
            
              setAs("list", "flexclustControl",
              function(from, to){
                  z <- list2object(from, to)
                  z@classify <- match.arg(z@classify,
                                          c("auto", "weighted", "hard", "simann"))
                  z
              })
            
              setAs("NULL", "flexclustControl",
              function(from, to){
                  new(to)
              })
            
              setClass("kccaFamily",
                      representation(name="character",
                                      dist="function",
                                      cent="function",
                                      allcent="function",
                                      wcent="function",
                                      weighted="logical",
                                      cluster="function",
                                      preproc="function",
                                      groupFun="function"),
                      prototype(weighted=FALSE,
                                preproc=function(x) x))
            
              setClass("flexclust",
                      representation(k="integer",
                                      cluster="integer",
                                      iter="integer",
                                      converged="logical",
                                      clusinfo="data.frame",
                                      index="numeric",
                                      call="call",
                                      control="flexclustControl",
                                      data="ModelEnv"))
            
            
              setClass("kccasimple",
                      contains="flexclust",
                      representation(centers="ANY",
                                      family="kccaFamily",
                                      cldist="matrix"))
              setClass("kcca",
                      contains="kccasimple",
                      representation(second="integer",
                                      xrange="ANY",           # range of all data
                                      xcent="ANY",            # centroid of all data
                                      totaldist="numeric",    # total dist data<->xcent
                                      clsim="matrix"))
            
              clusinfo <- function(cluster, cldist, simple=FALSE)
            ### cluster: vector of cluster memberships
            ### cldist: matrix with 1 or 2 columns
              {
                  size <- as.vector(table(cluster))
            
                  clusinfo <-
                      data.frame(size=size,
                                av_dist = as.vector(tapply(cldist[,1], cluster, sum))/size)
            
                  if(!simple){
                      clusinfo <- cbind(clusinfo,
                                        max_dist = as.vector(tapply(cldist[,1], cluster, max)),
                                        separation = as.vector(tapply(cldist[,2], cluster, min)))
                  }
                  clusinfo
              }
            
              simple2kcca <- function(x, from, group=NULL, distmat=NULL)
              {
                  if(is.null(distmat))
                      distmat <- from@family@dist(x, from@centers)
            
                  cluster <- from@family@cluster(n=2, distmat=distmat)
                  if(!is.null(group))
                      cluster <- from@family@groupFun(cluster, group, distmat)
            
                  if(ncol(distmat)>1){
                      ## at least 2 clusters
                      cldist <- cbind(distmat[cbind(1:nrow(x), cluster[[1]])],
                                      distmat[cbind(1:nrow(x), cluster[[2]])])
                      clsim <- computeClusterSim(distmat,cluster)
                  }
                  else{
                      ## only one cluster
                      cldist <- distmat
                      clsim <- as.matrix(1)
                  }
            
                  xcent <- from@family@cent(x)
                  totaldist <- sum(from@family@dist(x, matrix(xcent,nrow=1)))
            
                  z <- as(from, "kcca")
                  z@second <- as(cluster[[2]], "integer")
                  z@xcent <- xcent
                  z@xrange <- apply(x, 2, range, na.rm=TRUE)
                  z@totaldist <- totaldist
                  z@clsim <- clsim
                  z@clusinfo <- clusinfo(cluster[[1]], cldist, simple=FALSE)
                  z@cldist <- cldist
            
                  z
              }
            
              computeClusterSim <- function(distmat, cluster)
              {
                  K <- max(cluster[[1]])
                  z <- matrix(0, ncol=K, nrow=K)
            
                  for(k in 1:K){
                      ok1 <- cluster[[1]]==k
                      if(any(ok1)){
                          for(n in 1:K){
                              if(k!=n){
                                  ok2 <- ok1 & cluster[[2]]==n
                                  if(any(ok2)){
                                      z[k,n] <- 2*sum(distmat[ok2,k]/
                                                      (distmat[ok2,k]+distmat[ok2,n]))
                                  }
                              }
                          }
                          z[k,] <- z[k,]/sum(ok1)
                      }
                  }
                  diag(z) <- 1
                  z
              }
            
              distEuclidean <- function(x, centers)
              {
                  if(ncol(x)!=ncol(centers))
                      stop(sQuote("x")," and ",sQuote("centers"),
                          " must have the same number of columns")
                  z <- matrix(0, nrow=nrow(x), ncol=nrow(centers))
                  for(k in 1:nrow(centers)){
                      z[,k] <- sqrt( colSums((t(x) - centers[k,])^2) )
                  }
                  z
              }
            
              kccaFamily <- function(which=NULL, dist=NULL,
                                    cent=NULL, name=which,
                                    preproc=NULL,
                                    trim=0, groupFun="minSumClusters")
              {
                  if(is.null(which) && is.null(dist))
                      stop("either ", sQuote("which")," or ", sQuote("dist"),
                          " must be specified\\n")
            
                  if(is.null(name)) name <- deparse(substitute(dist))
            
                  z <- new("kccaFamily", name=name)
            
                  if(!is.null(preproc)) z@preproc <- preproc
            
                  if(!is.null(which)){
                      which <- match.arg(which, c("kmeans", "kmedians",
                                                  "angle", "jaccard",
                                                  "ejaccard"))
                      if(!is.null(name)) z@name <- which
            
                      if(which == "kmeans"){
                          z@dist <- distEuclidean
                          if(trim==0){
                              z@cent <- function(x) colMeans(x)
                              z@wcent <- function(x, weights)
                                  colMeans(x*normWeights(weights))
                          }
                          else{
                              z@cent <- function(x)
                                  apply(x, 2, mean, trim=trim)
                              z@wcent <- function(x, weights)
                                  apply(x*normWeights(weights), 2, mean, trim=trim)
                          }
                          z@weighted <- TRUE
                      }
                      else if(which == "kmedians"){
                          z@dist <- distManhattan
                          z@cent <- function(x) apply(x, 2, median)
                      }
                      else if(which == "angle"){
                          z@dist <- distAngle
                          z@cent <- centAngle
                          z@wcent <- wcentAngle
                          z@weighted <- TRUE
                          z@preproc <- function(x) x/sqrt(rowSums(x^2))
                      }
                      else if(which == "jaccard"){
                          z@dist <- distJaccard
                          z@cent <- function(x) centOptim01(x, dist=distJaccard)
                      }
                      else if(which == "ejaccard"){
                          z@dist <- distJaccard
                          z@cent <- function(x) colMeans(x)
                      }
                  }
                  else{
                      if(is.character(dist))
                          z@dist <- get(dist, mode="function")
                      else
                          z@dist <- dist
            
                      if(is.null(cent))
                          z@cent <- function(x)
                              centOptim(x, dist=dist)
                      else if(is.character(cent))
                          z@cent <- get(cent, mode="function")
                      else
                          z@cent <- cent
                  }
            
                  ## fill in z@cluster and z@allcent which use lexical scoping
                  eval(FAMILY_CLUSTER_ALLCENT)
            
                  if(is.character(groupFun))
                      groupFun <- get(groupFun, mode="function")
                  z@groupFun <- groupFun
            
                  z
              }
            
            
              FAMILY_CLUSTER_ALLCENT <- expression({
            
                  z@cluster <- function(x, centers, n=1, distmat=NULL){
            
                      if(is.null(distmat))
                          distmat <- z@dist(x, centers)
            
                      if(n==1){
                          return(max.col(-distmat))
                      }
                      else{
                          r <- t(matrix(apply(distmat, 1,
                                              rank, ties.method="random"),
                                        nrow=ncol(distmat)))
                          z <- list()
                          for(k in 1:n)
                              z[[k]] <- apply(r, 1, function(x) which(x==k))
                      }
                      return(z)
                  }
            
                  z@allcent <- function(x, cluster, k=max(cluster, na.rm=TRUE))
                  {
                      centers <- matrix(NA, nrow=k, ncol=ncol(x))
                      for(n in 1:k){
                          if(sum(cluster==n, na.rm=TRUE)>0){
                              centers[n,] <- z@cent(x[cluster==n,,drop=FALSE])
                          }
                      }
                      centers
                  }
              })
            
              minSumClusters <- function(cluster, group, distmat)
              {
                  G <- levels(group)
                  x <- matrix(0, ncol=ncol(distmat), nrow=length(G))
            
                  for(n in 1:length(G)){
                      x[n,] <- colSums(distmat[group==G[n],,drop=FALSE])
                  }
            
                  m <- max.col(-x)
                  names(m) <- G
                  z <- m[group]
                  names(z) <- NULL
            
                  if(is.list(cluster))
                  {
                      ## get second best
                      x[cbind(1:nrow(x), m)] <- Inf
                      m <- max.col(-x)
                      names(m) <- G
                      z1 <- m[group]
                      names(z1) <- NULL
                      z <- list(z, z1)
                  }
                  z
              }
            
              initCenters <- function(x, k, family, control)
              {
                  cluster <- integer(nrow(x))
                  if(is.matrix(k)){
                      centers <- k
                      if(any(duplicated(centers)))
                          stop("initial centers are not distinct")
                      k <- nrow(k)
                  }
                  else{
                      if(length(k)>1){
                          cluster <- rep(k, length=nrow(x))
                          k <- max(cluster)
                          centers <- family@allcent(x, cluster=cluster, k=k)
                      }
                      else{
                          k <- as.integer(k)
                          if(k<2) stop("number of clusters must be at least 2")
                          ## we need to avoid duplicates here
                          x <- na.omit(unique(x))
                          if(nrow(x) < k)
                              stop("k larger than number of distinct complete data points in x")
                          centers <- do.call(control@initcent,
                                            list(x=x, k=k, family=family))
                      }
                  }
                  list(centers=centers, cluster=cluster, k=k)
              }
            
              kmeanspp <- function(x, k, family)
              {
                  centers <- matrix(0, nrow=k, ncol=ncol(x))
                  centers[1,] <- x[sample(1:nrow(x), 1), , drop=FALSE]
                  d <- family@dist(x, centers[1L,,drop=FALSE])^2
                  for(l in 2:k){
                      centers[l,] <- x[sample(1:nrow(x), 1, prob=d), , drop=FALSE]
                      d <- pmin(d, family@dist(x, centers[l,,drop=FALSE])^2)
                  }
                  centers
              }
            
              newKccaObject <- function(x, family, centers, group=NULL, simple=FALSE,
                                        ...)
              {
                  distmat <- family@dist(x, centers)
            
                  z <- newKccasimpleObject(x=x, family=family, centers=centers,
                                          group=group, distmat=distmat, ...)
            
                  if(!simple){
                      z <- simple2kcca(x=x, from=z, group=group, distmat=distmat)
                  }
            
                  z
              }
            
              newKccasimpleObject <- function(x, family, centers, group=NULL,
                                              distmat=NULL, ...)
              {
                  if(is.null(distmat))
                      distmat <- family@dist(x, centers)
            
                  cluster <- family@cluster(distmat=distmat)
                  if(!is.null(group))
                      cluster <- family@groupFun(cluster, group, distmat)
                  names(cluster) <- rownames(x)
                  colnames(centers) <- colnames(x)
            
                  size <- as.vector(table(cluster))
                  cldist <- as(distmat[cbind(1:nrow(x), cluster)], "matrix")
                  cluster <- as(cluster, "integer")
            
                  new("kccasimple",
                      k=as(nrow(centers),"integer"),
                      centers=centers,
                      cluster=cluster,
                      family=family,
                      clusinfo=clusinfo(cluster, cldist, simple=TRUE),
                      cldist=cldist,
                      ...)
              }
            
            
              flexclust_kcca <-
              function (x, k, family = kccaFamily("kmeans"), weights = NULL,\s
                  group = NULL, control = NULL, simple = FALSE, save.data = FALSE)\s
              {
                  MYCALL <- match.call()
                  control <- as(control, "flexclustControl")
                  x <- as(x, "matrix")
                  x <- family@preproc(x)
                  N <- nrow(x)
                  if (control@classify == "auto") {
                      control@classify = "hard"
                  }
                  if (!is.null(group)) {
                      if (length(group) > N)\s
                          warning("group vector longer than nrow(x)")
                      group <- rep(group, length = N)
                      group <- as.factor(group)
                  }
                  if (!is.null(weights)) {
                      control@classify = "weighted"
                      if (!family@weighted)\s
                          stop("Centroid function of family cannot use weights")
                      if (!is.null(group))\s
                          stop("Weighted clustering for grouped data is not implemented yet.")
                      weights <- rep(weights, length = N)
                  }
                  centers <- initCenters(x, k, family, control)
                  cluster <- centers$cluster
                  k <- centers$k
                  centers <- centers$centers
                  sannprob <- control@simann[1]
                  if (control@classify %in% c("hard", "simann")) {
                      for (iter in 1:control@iter.max) {
                          clustold <- cluster
                          distmat <- family@dist(x, centers)
                          cluster <- family@cluster(x, distmat = distmat)
                          if (control@classify == "simann") {
                              cluster <- perturbClusters(cluster, sannprob)
                              sannprob <- sannprob * control@simann[2]
                          }
                          if (!is.null(group))\s
                              cluster <- family@groupFun(cluster, group, distmat)
                          centers <- family@allcent(x, cluster = cluster, k = k)
                          centers <- centers[complete.cases(centers), , drop = FALSE]
                          k <- nrow(centers)
                          changes <- sum(cluster != clustold)
                          if (control@verbose && (iter%%control@verbose ==\s
                              0)) {
                              td <- sum(distmat[cbind(1:N, cluster)])
                              printIter(iter, paste(changes, format(td), sep = " / "),\s
                                "Changes / Distsum")
                          }
                          if (changes == 0)\s
                              break
                      }
                  }
                  else if (control@classify == "weighted") {
                      td <- -1
                      for (iter in 1:control@iter.max) {
                          td.old <- td
                          distmat <- family@dist(x, centers)
                          cluster <- family@cluster(distmat = distmat)
                          td <- sum(distmat[cbind(1:N, cluster)])
                          if (control@verbose && (iter%%control@verbose ==\s
                              0))\s
                              printIter(iter, td, "Sum of distances")
                          if (abs(td - td.old)/(abs(td) + 0.1) < control@tolerance)\s
                              break
                          distmat <- mlogit(distmat)
                          for (n in 1:k) {
                              w <- weights * distmat[, n]
                              w[cluster == n] <- w[cluster == n] + control@gamma
                              centers[n, ] <- family@wcent(x, weights = w)
                          }
                      }
                      for (n in 1:k) {
                          centers[n, ] <- family@cent(x[cluster == n, , drop = FALSE])
                      }
                  }
                  else stop("Unknown classification method")
                  centers <- centers[complete.cases(centers), , drop = FALSE]
                  z <- newKccaObject(x = x, family = family, centers = centers,\s
                      group = group, iter = iter, converged = (iter < control@iter.max),\s
                      call = MYCALL, control = control, simple = simple)
                  if (save.data)\s
                      z@data <- ModelEnvMatrix(designMatrix = x)
                  z
              }
            
            
              flexclust <- function(k) {
                km <- flexclust_kcca(data, k=k, control=list(initcent="kmeanspp", iter.max=10000))
                sum(km@cldist[,1]**2)
              }
            
              set.seed(42)
              checksum = flexclust(n)
              # cat("Flexclust::kcca ", n, " " , checksum, "\\n")g
              checksum
            """);
  }

  @Test
  public void testAdhoc(BC2CSnapshot snapshot) {
    snapshot.verify(
        """
                  bench_rays <- function(height.map = volcano, sun.angle = 45) {
                      shadow <- matrix(1, ncol = ncol(height.map), nrow = nrow(height.map))
                      sunangle <- sun.angle / 180 * pi
                      angle <- -90 / 180 * pi
                      diffangle <- 90 / 180 * pi
                      numberangles <- 25
                      # anglebreaks <- seq(angle, diffangle, length.out = numberangles)
                      anglebreaks <- sapply(seq(angle, diffangle, length.out = numberangles), tan)
                      maxdistance <- floor(sqrt(ncol(height.map)^2 + nrow(height.map)^2))
                      sinsun <- sin(sunangle)
                      cossun <- cos(sunangle)
                
                      for (i in 1:nrow(height.map)) {
                          for (j in 1:ncol(height.map)) {
                              for (anglei in anglebreaks) {
                                  for (k in 1:maxdistance) {
                                      # xcoord <- i + sin(sunangle) * k
                                      xcoord <- i + sinsun * k
                                      # ycoord <- j + cos(sunangle) * k
                                      ycoord <- j + cossun * k
                
                                      if (xcoord > nrow(height.map) ||
                                          ycoord > ncol(height.map) ||
                                          xcoord < 0 || ycoord < 0) break
                
                                      # tanangheight <- height.map[i, j] + tan(anglei) * k
                                      tanangheight <- height.map[i, j] + anglei * k
                
                                      if (all(c(height.map[ceiling(xcoord), ceiling(ycoord)],
                                                height.map[floor(xcoord),   ceiling(ycoord)],
                                                height.map[ceiling(xcoord), floor(ycoord)],
                                                height.map[floor(xcoord),   floor(ycoord)]) < tanangheight)) next
                
                                      if (tanangheight < bilinear(height.map, xcoord, ycoord)) {
                                          shadow[i, j] <- shadow[i, j] - 1 / length(anglebreaks)
                                          break
                                      }
                                  }
                              }
                          }
                      }
                
                      shadow
                  }
                
                  bilinear <- function(data, x0, y0) {
                      i <- max(1, floor(x0))
                      j <- max(1, floor(y0))
                      XT <- (x0 - i)
                      YT <- (y0 - j)
                      result <- (1 - YT) * (1 - XT) * data[i, j]
                      nx <- nrow(data)
                      ny <- ncol(data)
                      if (i + 1 <= nx) {
                          result <- result + (1 - YT) * XT * data[i + 1, j]
                      }
                      if (j + 1 <= ny) {
                          result <- result + YT * (1 - XT) * data[i, j + 1]
                      }
                      if (i + 1 <= nx && j + 1 <= ny) {
                          result <- result + YT * XT * data[i + 1, j + 1]
                      }
                      result
                  }
                
                points <- rep(181L, 10) # 181 takes the longest to compute
                
                n = 1
                s = 0
                for (j in 1:n) {
                  for (i in points) {
                    s = s+sum(bench_rays(height.map = volcano, sun.angle = i))
                  }
                }
                # print(s)
                s
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
                .orElseThrow(() -> new IllegalStateException("Expected integer, got: " + r.value()))
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
}
