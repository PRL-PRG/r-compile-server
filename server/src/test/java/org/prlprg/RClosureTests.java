package org.prlprg;

import org.junit.jupiter.api.Test;

public interface RClosureTests {

  @Test
  default void testEmptyList() throws Exception {
    verify(
        """
                    function ()
                    {
                        function(other = list()) 1
                    }
                """);
  }

  @Test
  default void testEmptyBlock() throws Exception {
    verify("function() {}");
  }

  @Test
  default void testSingleExpressionBlock() throws Exception {
    verify("function() { 1 }");
  }

  @Test
  default void testMultipleExpressionBlock() throws Exception {
    verify("function() { 1; 2 }");
  }

  @Test
  default void testIf() throws Exception {
    verify("function(x) if (x) 1");
  }

  @Test
  default void testIfElse() throws Exception {
    verify("function(x) if (x) 1 else 2");
  }

  @Test
  default void testFunctionInlining() throws Exception {
    verify("function(x) function(y) 1");
  }

  @Test
  default void testFunctionLeftParenInlining() throws Exception {
    verify("function(x) (x)");
    verify("function(x) (...)");
  }

  @Test
  default void builtinsInlining() throws Exception {
    // expecting a guard
    verify("function() invisible(1)", 2);

    // no guard
    verify("function() invisible(1)", 3);

    // guard and regular function call
    verify("function(...) invisible(...)", 2);
  }

  @Test
  default void specialsInlining() throws Exception {
    verify("function() rep(1, 10)");
  }

  @Test
  default void inlineLocal() throws Exception {
    verify("function(x) local(x)");
  }

  @Test
  default void inlineReturn() throws Exception {
    verify("function(x) return(x)");
  }

  @Test
  default void inlineBuiltinsInternal() throws Exception {
    verify("function(x) .Internal(inspect(x))");
    verify("function(x) .Internal(inspect2(x))");
  }

  @Test
  default void inlineLogicalAnd() throws Exception {
    verify("function(x, y) x && y");
    verify("function(x, y, z) x && y && z");
    verify("function(x, y) x && y && (x && y)");
  }

  @Test
  default void inlineLogicalOr() throws Exception {
    verify("function(x, y) x || y");
    verify("function(x, y, z) x || y || z");
    verify("function(x, y) x || y || (x || y)");
  }

  @Test
  default void inlineLogicalAndOr() throws Exception {
    verify("function(x, y) x && y || y");
    verify("function(x, y, z) x || y && z");
  }

  @Test
  default void inlineRepeat() throws Exception {
    verify("function(x) repeat(x) ");
    verify("function(x, y) repeat({ if (x) break() else y }) ");
    verify("function(x, y) repeat({ if (x) next() else y }) ");
    verify("function(x, y=break()) repeat({ if (x) y else 1 }) ");
  }

  @Test
  default void inlineWhile() throws Exception {
    verify("function(x) while(x) 1 ");
    verify("function(x, y) while(x) { break() } ");
    verify("function(x, y) while(x) { if (y) break() else 1 } ");
  }

  @Test
  default void inlineFor() throws Exception {
    verify("function(x) for (i in x) 1 ");
    verify("function(x) for (i in x) if (i) break() else 1 ");
  }

  @Test
  default void inlineArithmetics() throws Exception {
    verify("function(x, y) x + y");
    verify("function(x, y) x - y");
    verify("function(x, y) list(x + y - x + 10, -x + 1, +y)");
    verify("function(x, y) list(x * y / x * 10, exp(x) ^ 2, sqrt(exp(x)))");
    verify("function(x, y) list(log(x), log(x, y))");
  }

  @Test
  default void inlineMath1() throws Exception {
    verify(
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
  default void inlineLogical() throws Exception {
    verify(
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
  default void inlineDollar() throws Exception {
    verify(
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
  default void inlineIsXYZ() throws Exception {
    verify(
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
  default void inlineDotCall() throws Exception {
    verify(
        """
                  function(x) {
                    .Call("bar")
                    .Call("foo", x, 1, TRUE)
                  }
                """);
  }

  @Test
  default void inlineIntGeneratingSequences() throws Exception {
    verify("function(x, xs) { list(x:100, seq_along(xs), seq_len(x)) } ");
  }

  @Test
  default void multiColon() throws Exception {
    verify("function() { list(compiler::cmpfun, compiler:::makeCenv) } ");
  }

  @Test
  default void inlineSwitch() throws Exception {
    verify(
        """
                  function(x) {
                    if (switch(x, 1, 2, g(3))) {
                      if (y) 4 else 5
                    }
                  }
                """);
  }

  @Test
  default void inlineAssign1() throws Exception {
    verify("function() { x <- 1 } ");
    verify("function() { y <<- 2 } ");

    verify(
        """
                  function() {
                    a::b <- 1
                    a:::b <- 3
                    a:::b <<- 3
                  }
                """);
  }

  @Test
  default void inlineAssign2() throws Exception {
    verify("function() { f(x) <- 1 }");
    verify("function() { pkg::f(x) <- 1 }");
  }

  @Test
  default void inlineAssign3() throws Exception {
    verify("function() { f(g(h(x, k), j), i) <- v }");
  }

  @Test
  default void inlineDollarAssign() throws Exception {
    verify(
        """
                  function() {
                   x$y <- 1
                   x$"z" <- 2
                   a::b$c <- 3
                  }
                """);
  }

  @Test
  default void inlineSquareAssign1() throws Exception {
    verify(
        """
                  function() {
                    x[y == 1] <- 1
                    x[[y == 1]] <- 1
                  }
                """);
  }

  @Test
  default void inlineSquareAssign2() throws Exception {
    verify(
        """
                  function() {
                    x[y == 1, z == 2] <- 1
                    x[[y == 1, z == 2]] <- 1
                  }
                """);
  }

  @Test
  default void inlineSquareAssign3() throws Exception {
    verify(
        """
                  function() {
                    x[y == 1, ] <- 1
                    x[[y == 1, ]] <- 1
                  }
                """);
  }

  @Test
  default void inlineSquareAssign4() throws Exception {
    verify("function() { x$y[-c(1,2)] <- 1 }");
  }

  @Test
  default void inlineSquareSubset1() throws Exception {
    verify(
        """
                  function() {
                    x[y == 1]
                    x[[y == 1]]
                  }
                """);
  }

  @Test
  default void inlineSquareSubset2() throws Exception {
    verify(
        """
                  function() {
                    x[y == 1, z == 2]
                    x[[y == 1, z == 2]]
                  }
                """);
  }

  @Test
  default void inlineSquareSubset3() throws Exception {
    verify(
        """
                  function() {
                    x[y == 1,]
                    x[[y == 1,]]
                  }
                """);
  }

  @Test
  default void inlineSquareSubset4() throws Exception {
    verify(
        """
                  function() {
                    x[a=1,]
                    x[[a=1,]]
                  }
                """);
  }

  @Test
  default void inlineSlotAssign() throws Exception {
    verify(
        """
                  function() {
                    setClass("A", slots = list(x = "numeric"))
                    a <- new("A", x = 42)
                    a@x <- 43
                  }
                """);
  }

  @Test
  default void inlineIdentical() throws Exception {
    verify("function(x) { identical(unzip, 'internal') }");
  }

  @Test
  default void constantFoldingC() throws Exception {
    // no constant folding - c is resolved from baseenv()
    verify("function () { c('%Y-%m-%d', '%d-%m-%Y', '%m-%d-%Y') }");

    // constant folding - optlevel 3
    verify("function () { c('%Y-%m-%d', '%d-%m-%Y', '%m-%d-%Y') }", 3);
  }

  @Test
  default void constantFoldMul() throws Exception {
    verify("function() { 2 * 3 * 4 }");
  }

  void verify(String code) throws Exception;

  void verify(String code, int optimizationLevel) throws Exception;
}
