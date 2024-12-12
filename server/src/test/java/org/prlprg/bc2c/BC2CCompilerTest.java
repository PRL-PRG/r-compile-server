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
  public void testAdhoc2(BC2CSnapshot snapshot) {
    snapshot.verify("""
            
              normWeights <- function(x) x/mean(x)
            
              kcca <- function(x, k, iter.max)
              {
                  x <- as.matrix(x)
                  k <- as.integer(k)
                  cluster <- integer(nrow(x))
            
                  # takes some time
                  centers <- kmeanspp(na.omit(unique(x)), k)
            
                  for(iter in 1:iter.max){
                      clustold <- cluster
                      # takes some time
                      distmat <- distEuclidean(x, centers)
            
                      cluster <- kmeansCluster(x, distmat=distmat)
                      centers <- kmeansAllcent(x, cluster=cluster, k=k)
                      ## NAs in centers are empty clusters
                      centers <- centers[complete.cases(centers),,drop=FALSE]
                      k <- nrow(centers)
                      changes <- sum(cluster!=clustold)
                      if(changes==0) break
                  }
            
                  centers <- centers[complete.cases(centers),,drop=FALSE]
                  r <- summarizeCenters(x, centers)
                  append(r, list(iter = iter))
              }
            
              kmeansCluster <- function(x, centers, n=1, distmat=NULL)
              {
            
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
            
              kmeansAllcent <- function(x, cluster, k=max(cluster, na.rm=TRUE))
              {
                  centers <- matrix(NA, nrow=k, ncol=ncol(x))
                  for(n in 1:k){
                      if(sum(cluster==n, na.rm=TRUE)>0){
                          centers[n,] <- colMeans(x[cluster==n,,drop=FALSE])
                      }
                  }
                  centers
              }
            
              kmeanspp <- function(x, k)
              {
                  centers <- matrix(0, nrow=k, ncol=ncol(x))
                  centers[1,] <- x[sample(1:nrow(x), 1), , drop=FALSE]
                  d <- distEuclidean(x, centers[1L,,drop=FALSE])^2
                  for(l in 2:k){
                      centers[l,] <- x[sample(1:nrow(x), 1, prob=d), , drop=FALSE]
                      d <- pmin(d, distEuclidean(x, centers[l,,drop=FALSE])^2)
                  }
                  centers
              }
              summarizeCenters <- function(x, centers)
              {
                  distmat <- distEuclidean(x, centers)
                  cluster <- kmeansCluster(n=2, distmat=distmat)
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
                  xcent <- colMeans(x)
                  totaldist <- sum(distEuclidean(x, matrix(xcent,nrow=1)))
                  clusinfo <- clusinfo(cluster[[1]], cldist)
                  sse <- sum(cldist[,1]**2)
            
                  list(xcent = xcent, totaldist = totaldist, clusinfo = clusinfo,
                      cldist = cldist, sse = sse)
              }
            
              clusinfo <- function(cluster, cldist)
            ### cluster: vector of cluster memberships
            ### cldist: matrix with 1 or 2 columns
              {
                  size <- as.vector(table(cluster))
                  clusinfo <-
                      data.frame(size=size,
                                av_dist = as.vector(tapply(cldist[,1], cluster, sum))/size)
            
                  clusinfo <- cbind(clusinfo,
                                    max_dist = as.vector(tapply(cldist[,1], cluster, max)),
                                    separation = as.vector(tapply(cldist[,2], cluster, min)))
                  clusinfo
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
            
            ## Assign each observation to the cluster minimizing the sum
            ## of distances to all group members.
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
            
            # ---------------------------------------------------
            
            k = 5
              fname <- "/tmp/aloi-8d.csv.gz"
              alldata <- read.csv(gzfile(fname), header=F, sep=" ")
              data <- alldata[,1:8]
            
              set.seed(42)
              km <- kcca(data, k=k, iter.max=10000)
              km
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
