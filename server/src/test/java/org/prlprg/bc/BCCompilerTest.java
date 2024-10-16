package org.prlprg.bc;

import static com.google.common.truth.Truth.assertThat;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.prlprg.bc.BCSnapshotTestExtension.BCSnapshot;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.LangSXP;
import org.prlprg.util.gnur.GNUR;
import org.prlprg.util.gnur.GNURTestSupport;

@GNURTestSupport
@ExtendWith(BCSnapshotTestExtension.class)
public class BCCompilerTest {

  private final GNUR R;

  public BCCompilerTest(GNUR R) {
    this.R = R;
  }

  @Test
  public void testEmptyList(BCSnapshot snapshot) {
    snapshot.verify(
        """
                            function ()
                            {
                                function(other = list()) 1
                            }
                        """);
  }

  @Test
  public void testEmptyBlock(BCSnapshot snapshot) {
    snapshot.verify("function() {}");
  }

  @Test
  public void testSingleExpressionBlock(BCSnapshot snapshot) {
    snapshot.verify("function() { 1 }");
  }

  @Test
  public void testMultipleExpressionBlock(BCSnapshot snapshot) {
    snapshot.verify("function() { 1; 2 }");
  }

  @Test
  public void testIf(BCSnapshot snapshot) {
    snapshot.verify("function(x) if (x) 1");
  }

  @Test
  public void testIfElse(BCSnapshot snapshot) {
    snapshot.verify("function(x) if (x) 1 else 2");
  }

  @Test
  public void testFunctionInlining(BCSnapshot snapshot) {
    snapshot.verify("function(x) function(y) 1");
  }

  @Test
  public void testFunctionLeftParenInlining(BCSnapshot snapshot) {
    snapshot.verify("function(x) (x)");
    snapshot.verify("function(x) (...)");
  }

  @Test
  public void builtinsInlining(BCSnapshot snapshot) {
    // expecting a guard
    snapshot.verify("function() invisible(1)", 2);

    // no guard
    snapshot.verify("function() invisible(1)", 3);

    // guard and regular function call
    snapshot.verify("function(...) invisible(...)", 2);
  }

  @Test
  public void specialsInlining(BCSnapshot snapshot) {
    snapshot.verify("function() rep(1, 10)");
  }

  @Test
  public void inlineLocal(BCSnapshot snapshot) {
    snapshot.verify("function(x) local(x)");
  }

  @Test
  public void inlineReturn(BCSnapshot snapshot) {
    snapshot.verify("function(x) return(x)");
  }

  @Test
  public void inlineBuiltinsInternal(BCSnapshot snapshot) {
    snapshot.verify("function(x) .Internal(inspect(x))");
    snapshot.verify("function(x) .Internal(inspect2(x))");
  }

  @Test
  public void inlineLogicalAnd(BCSnapshot snapshot) {
    snapshot.verify("function(x, y) x && y");
    snapshot.verify("function(x, y, z) x && y && z");
    snapshot.verify("function(x, y) x && y && (x && y)");
  }

  @Test
  public void inlineLogicalOr(BCSnapshot snapshot) {
    snapshot.verify("function(x, y) x || y");
    snapshot.verify("function(x, y, z) x || y || z");
    snapshot.verify("function(x, y) x || y || (x || y)");
  }

  @Test
  public void inlineLogicalAndOr(BCSnapshot snapshot) {
    snapshot.verify("function(x, y) x && y || y");
    snapshot.verify("function(x, y, z) x || y && z");
  }

  @Test
  public void inlineRepeat(BCSnapshot snapshot) {
    snapshot.verify("function(x) repeat(x) ");
    snapshot.verify("function(x, y) repeat({ if (x) break() else y }) ");
    snapshot.verify("function(x, y) repeat({ if (x) next() else y }) ");
    snapshot.verify("function(x, y=break()) repeat({ if (x) y else 1 }) ");
  }

  @Test
  public void inlineWhile(BCSnapshot snapshot) {
    snapshot.verify("function(x) while(x) 1 ");
    snapshot.verify("function(x, y) while(x) { break() } ");
    snapshot.verify("function(x, y) while(x) { if (y) break() else 1 } ");
  }

  @Test
  public void inlineFor(BCSnapshot snapshot) {
    snapshot.verify("function(x) for (i in x) 1 ");
    snapshot.verify("function(x) for (i in x) if (i) break() else 1 ");
  }

  @Test
  public void inlineArithmetics(BCSnapshot snapshot) {
    snapshot.verify("function(x, y) x + y");
    snapshot.verify("function(x, y) x - y");
    snapshot.verify("function(x, y) list(x + y - x + 10, -x + 1, +y)");
    snapshot.verify("function(x, y) list(x * y / x * 10, exp(x) ^ 2, sqrt(exp(x)))");
    snapshot.verify("function(x, y) list(log(x), log(x, y))");
  }

  @Test
  public void inlineMath1(BCSnapshot snapshot) {
    snapshot.verify(
        """
                          function(x) {
                            list(
                              floor(x), ceiling(x), sign(x),
                              expm1(x), log1p(x),
                              cos(x), sin(x), tan(x), acos(x), asin(x), atan(x),
                              cosh(x), sinh(x), tanh(x), acosh(x), asinh(x), atanh(x),
                              lgamma(x), gamma(x), digamma(x), trigamma(x),
                              cospi(x), sinpi(x), tanpi(x)
                            )
                          }
                        """);
  }

  @Test
  public void inlineLogical(BCSnapshot snapshot) {
    snapshot.verify(
        """
                          function(x, y) {
                              list(
                                x == y,
                                x != y,
                                x < y,
                                x <= y,
                                x > y,
                                x >= y,
                                x & y,
                                x | y,
                                !x
                              )
                          }
                        """);
  }

  @Test
  public void inlineDollar(BCSnapshot snapshot) {
    snapshot.verify(
        """
                          # xs <- list(a=1, b=list(c=2))
                          function(xs) {
                              xs$a
                              xs$"a"
                              xs$b$c
                              xs$"b"$c
                              xs$"b"$"c"
                          }
                        """);
  }

  @Test
  public void inlineIsXYZ(BCSnapshot snapshot) {
    snapshot.verify(
        """
                          function(x) {
                            list(
                              is.character(x),
                              is.complex(x),
                              is.double(x),
                              is.integer(x),
                              is.logical(x),
                              is.name(x),
                              is.null(x),
                              is.object(x),
                              is.symbol(x)
                            )
                          }
                        """);
  }

  @Test
  public void inlineDotCall(BCSnapshot snapshot) {
    snapshot.verify(
        """
                          function(x) {
                            .Call("bar")
                            .Call("foo", x, 1, TRUE)
                          }
                        """);
  }

  @Test
  public void inlineIntGeneratingSequences(BCSnapshot snapshot) {
    snapshot.verify("function(x, xs) { list(x:100, seq_along(xs), seq_len(x)) } ");
  }

  @Test
  public void multiColon(BCSnapshot snapshot) {
    snapshot.verify("function() { list(compiler::cmpfun, compiler:::makeCenv) } ");
  }

  @Test
  public void inlineSwitch(BCSnapshot snapshot) {
    snapshot.verify(
        """
                          function(x) {
                            if (switch(x, 1, 2, g(3))) {
                              if (y) 4 else 5
                            }
                          }
                        """);
  }

  @Test
  public void inlineAssign1(BCSnapshot snapshot) {
    snapshot.verify("function() { x <- 1 } ");
    snapshot.verify("function() { y <<- 2 } ");

    snapshot.verify(
        """
                          function() {
                            a::b <- 1
                            a:::b <- 3
                            a:::b <<- 3
                          }
                        """);
  }

  @Test
  public void inlineAssign2(BCSnapshot snapshot) {
    snapshot.verify("function() { f(x) <- 1 }");
    snapshot.verify("function() { pkg::f(x) <- 1 }");
  }

  @Test
  public void inlineAssign3(BCSnapshot snapshot) {
    snapshot.verify("function() { f(g(h(x, k), j), i) <- v }");
  }

  @Test
  public void inlineDollarAssign(BCSnapshot snapshot) {
    snapshot.verify(
        """
                          function() {
                           x$y <- 1
                           x$"z" <- 2
                           a::b$c <- 3
                          }
                        """);
  }

  @Test
  public void inlineSquareAssign1(BCSnapshot snapshot) {
    snapshot.verify(
        """
                          function() {
                            x[y == 1] <- 1
                            x[[y == 1]] <- 1
                          }
                        """);
  }

  @Test
  public void inlineSquareAssign2(BCSnapshot snapshot) {
    snapshot.verify(
        """
                          function() {
                            x[y == 1, z == 2] <- 1
                            x[[y == 1, z == 2]] <- 1
                          }
                        """);
  }

  @Test
  public void inlineSquareAssign3(BCSnapshot snapshot) {
    snapshot.verify(
        """
                          function() {
                            x[y == 1, ] <- 1
                            x[[y == 1, ]] <- 1
                          }
                        """);
  }

  @Test
  public void inlineSquareAssign4(BCSnapshot snapshot) {
    snapshot.verify("function() { x$y[-c(1,2)] <- 1 }");
  }

  @Test
  public void inlineSquareSubset1(BCSnapshot snapshot) {
    snapshot.verify(
        """
                          function() {
                            x[y == 1]
                            x[[y == 1]]
                          }
                        """);
  }

  @Test
  public void inlineSquareSubset2(BCSnapshot snapshot) {
    snapshot.verify(
        """
                          function() {
                            x[y == 1, z == 2]
                            x[[y == 1, z == 2]]
                          }
                        """);
  }

  @Test
  public void inlineSquareSubset3(BCSnapshot snapshot) {
    snapshot.verify(
        """
                          function() {
                            x[y == 1,]
                            x[[y == 1,]]
                          }
                        """);
  }

  @Test
  public void inlineSquareSubset4(BCSnapshot snapshot) {
    snapshot.verify(
        """
                          function() {
                            x[a=1,]
                            x[[a=1,]]
                          }
                        """);
  }

  @Test
  public void inlineSlotAssign(BCSnapshot snapshot) {
    snapshot.verify(
        """
                          function() {
                            setClass("A", slots = list(x = "numeric"))
                            a <- new("A", x = 42)
                            a@x <- 43
                          }
                        """);
  }

  @Test
  public void inlineIdentical(BCSnapshot snapshot) {
    snapshot.verify("function(x) { identical(unzip, 'internal') }");
  }

  @Test
  public void constantFoldingC(BCSnapshot snapshot) {
    // no constant folding - c is resolved from baseenv()
    snapshot.verify("function () { c('%Y-%m-%d', '%d-%m-%Y', '%m-%d-%Y') }");

    // constant folding - optlevel 3
    snapshot.verify("function () { c('%Y-%m-%d', '%d-%m-%Y', '%m-%d-%Y') }", 3);
  }

  @Test
  public void constantFoldMul(BCSnapshot snapshot) {
    snapshot.verify("function() { 2 * 3 * 4 }");
  }

  @Test
  public void testMatchCall() {
    var def = (CloSXP) R.eval("f <- function(a=1,b,c=100,d) {}");
    var call = (LangSXP) R.eval("quote(f(d=1,3,a=2))");

    var matched = BCCompiler.matchCall(def, call);

    assertThat(matched).isEqualTo(R.eval("quote(f(d=1,a=2,b=3))"));
  }

  @Test
  public void constantFoldNamedC(BCSnapshot snapshot) {
    snapshot.verify("function(x) c(i = 1, d = 1, s = 1)");
  }

  @Test
  public void constantFoldMul2(BCSnapshot snapshot) {
    snapshot.verify("function(x) { 2 * 3 * x }");
  }

  @Test
  public void constantFoldAdd(BCSnapshot snapshot) {
    snapshot.verify("function(x) 1 + 2");
  }

  @Test
  public void constantFoldAdd2(BCSnapshot snapshot) {
    snapshot.verify("function(x) TRUE + c(10, 11)");
  }
}
