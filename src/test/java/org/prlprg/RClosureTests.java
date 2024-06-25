package org.prlprg;

import com.google.common.collect.Streams;
import java.util.stream.Stream;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.Arguments;
import org.junit.jupiter.params.provider.MethodSource;
import org.prlprg.bc.Compiler;
import org.prlprg.sexp.StrSXP;

/**
 * Shared base class for tests that run on various R closures.
 *
 * <p>The source code for the closures is shared between each subclass. The subclasses differ in
 * what the test from the source code (e.g. compiling to bytecode, compiling to IR, compiling to C,
 * interpreting, etc.). Subclasses can also have their own additional closures to test.
 */
public abstract class RClosureTests extends AbstractGNURBasedTest {
  @Test
  public void testEmptyList() {
    testClosure(
        """
        function ()
        {
            function(other = list()) 1
        }
    """);
  }

  @Test
  public void testEmptyBlock() {
    testClosure(
        """
        function() {}
    """);
  }

  @Test
  public void testSingleExpressionBlock() {
    testClosure(
        """
        function() { 1 }
    """);
  }

  @Test
  public void testMultipleExpressionBlock() {
    testClosure(
        """
        function() { 1; 2 }
    """);
  }

  @Test
  public void testIf() {
    testClosure(
        """
        function(x) if (x) 1
    """);
  }

  @Test
  public void testIfElse() {
    testClosure(
        """
        function(x) if (x) 1 else 2
    """);
  }

  @Test
  public void testFunctionInlining() {
    testClosure(
        """
        function(x) function(y) 1
    """);
  }

  @Test
  public void testFunctionLeftParenInlining() {
    testClosure(
        """
        function(x) (x)
    """);

    testClosure(
        """
        function(x) (...)
    """);
  }

  @Test
  public void builtinsInlining() {
    // expecting a guard
    testClosure(
        """
      function() invisible(1)
    """,
        2);

    // no guard
    testClosure(
        """
      function() invisible(1)
    """,
        3);

    // guard and regular function call
    testClosure(
        """
      function(...) invisible(...)
    """,
        2);
  }

  @Test
  public void specialsInlining() {
    testClosure(
        """
      function() rep(1, 10)
    """);
  }

  @Test
  public void inlineLocal() {
    testClosure(
        """
      function(x) local(x)
    """);
  }

  @Test
  public void inlineReturn() {
    testClosure(
        """
      function(x) return(x)
    """);
  }

  @Test
  public void inlineBuiltinsInternal() {
    testClosure(
        """
      function(x) .Internal(inspect(x))
    """);

    testClosure(
        """
      function(x) .Internal(inspect2(x))
    """);
  }

  @Test
  public void inlineLogicalAnd() {
    testClosure(
        """
      function(x, y) x && y
    """);

    testClosure(
        """
      function(x, y, z) x && y && z
    """);

    testClosure(
        """
      function(x, y) x && y && (x && y)
    """);
  }

  @Test
  public void inlineLogicalOr() {
    testClosure(
        """
      function(x, y) x || y
    """);

    testClosure(
        """
      function(x, y, z) x || y || z
    """);

    testClosure(
        """
      function(x, y) x || y || (x || y)
    """);
  }

  @Test
  public void inlineLogicalAndOr() {
    testClosure(
        """
      function(x, y) x && y || y
    """);

    testClosure(
        """
      function(x, y, z) x || y && z
    """);
  }

  @Test
  public void inlineRepeat() {
    testClosure(
        """
      function(x) repeat(x)
    """);

    testClosure(
        """
      function(x, y) repeat({ if (x) break() else y })
    """);

    testClosure(
        """
      function(x, y) repeat({ if (x) next() else y })
    """);

    testClosure(
        """
      function(x, y=break()) repeat({ if (x) y else 1 })
    """);
  }

  @Test
  public void inlineWhile() {
    testClosure(
        """
      function(x) while(x) 1
    """);

    testClosure(
        """
      function(x, y) while(x) { break() }
    """);

    testClosure(
        """
      function(x, y) while(x) { if (y) break() else 1 }
    """);
  }

  @Test
  public void inlineFor() {
    testClosure(
        """
      function(x) for (i in x) 1
    """);

    testClosure(
        """
      function(x) for (i in x) if (i) break() else 1
    """);
  }

  @Test
  public void inlineArithmetics() {
    testClosure(
        """
      function(x, y) x + y
    """);

    testClosure(
        """
      function(x, y) x - y
    """);

    testClosure(
        """
      function(x, y) {
        list(x + y - x + 10, -x + 1, +y)
      }
    """);

    testClosure(
        """
      function(x, y) {
        list(x * y / x * 10, exp(x) ^ 2, sqrt(exp(x)))
      }
    """);

    testClosure(
        """
      function(x, y) {
        list(log(x), log(x, y))
      }
    """);
  }

  @Test
  public void inlineMath1() {
    testClosure(
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
  public void inlineLogical() {
    testClosure(
        """
      function(x, y) {
          list(
            x == y, x != y, x < y, x <= y, x > y, x >= y, x & y, x | y, !x
          )
      }
    """);
  }

  @Test
  public void inlineDollar() {
    testClosure(
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
  public void inlineIsXYZ() {
    testClosure(
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
  public void inlineDotCall() {
    testClosure(
        """
      function(x) {
        .Call("bar")
        .Call("foo", x, 1, TRUE)
      }
    """);
  }

  @Test
  public void inlineIntGeneratingSequences() {
    testClosure(
        """
      function(x, xs) {
        list(x:100, seq_along(xs), seq_len(x))
      }
    """);
  }

  @Test
  public void multiColon() {
    testClosure(
        """
      function() {
        list(compiler::cmpfun, compiler:::makeCenv)
      }
    """);
  }

  @Test
  public void inlineSwitch() {
    testClosure(
        """
      function(x) {
        if (switch(x, 1, 2, g(3))) {
          if (y) 4 else 5
        }
      }
    """);
  }

  @Test
  public void inlineAssign1() {
    testClosure(
        """
      function() {
        x <- 1
      }
    """);

    testClosure(
        """
      function() {
        y <<- 2
      }
    """);

    testClosure(
        """
      function() {
        a::b <- 1
        a:::b <- 3
        a:::b <<- 3
      }
    """);
  }

  @Test
  public void inlineAssign2() {
    testClosure(
        """
      function() {
        f(x) <- 1
      }
    """);

    testClosure(
        """
      function() {
        pkg::f(x) <- 1
      }
    """);
  }

  @Test
  public void inlineAssign3() {
    testClosure(
        """
      function() {
        f(g(h(x, k), j), i) <- v
      }
    """);
  }

  @Test
  public void inlineDollarAssign() {
    testClosure(
        """
      function() {
       x$y <- 1
       x$"z" <- 2
       a::b$c <- 3
      }
    """);
  }

  @Test
  public void inlineSquareAssign1() {
    testClosure(
        """
      function() {
        x[y == 1] <- 1
        x[[y == 1]] <- 1
      }
    """);
  }

  @Test
  public void inlineSquareAssign2() {
    testClosure(
        """
      function() {
        x[y == 1, z == 2] <- 1
        x[[y == 1, z == 2]] <- 1
      }
    """);
  }

  @Test
  public void inlineSquareAssign3() {
    testClosure(
        """
      function() {
        x[y == 1, ] <- 1
        x[[y == 1, ]] <- 1
      }
    """);
  }

  @Test
  public void inlineSquareAssign4() {
    testClosure(
        """
      function() {
        x$y[-c(1,2)] <- 1
      }
    """);
  }

  @Test
  public void inlineSquareSubset1() {
    testClosure(
        """
      function() {
        x[y == 1]
        x[[y == 1]]
      }
    """);
  }

  @Test
  public void inlineSquareSubset2() {
    testClosure(
        """
      function() {
        x[y == 1, z == 2]
        x[[y == 1, z == 2]]
      }
    """);
  }

  @Test
  public void inlineSquareSubset3() {
    testClosure(
        """
      function() {
        x[y == 1,]
        x[[y == 1,]]
      }
    """);
  }

  @Test
  public void inlineSquareSubset4() {
    testClosure(
        """
      function() {
        x[a=1,]
        x[[a=1,]]
      }
    """);
  }

  @Test
  public void inlineSlotAssign() {
    testClosure(
        """
      function() {
        setClass("A", slots = list(x = "numeric"))
        a <- new("A", x = 42)
        a@x <- 43
      }
    """);
  }

  @Test
  public void inlineIdentical() {
    testClosure(
        """
      function(x) {
        identical(unzip, "internal")
      }
    """);
  }

  @Test
  public void constantFoldingC() {
    // no constant folding - c is resolved from baseenv()
    testClosure(
        """
        function () {
           c("%Y-%m-%d", "%d-%m-%Y", "%m-%d-%Y")
        }
        """);

    // constant folding - optlevel 3
    testClosure(
        """
            function () {
               c("%Y-%m-%d", "%d-%m-%Y", "%m-%d-%Y")
            }
            """,
        3);
  }

  @Test
  public void constantFoldMul() {
    testClosure(
        """
      function() {
        2 * 3 * 4
      }
    """);
  }

  @ParameterizedTest
  @MethodSource("stdlibFunctionsList")
  public void stdlibFunctions(String name) {
    testClosure(name);
  }

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

    return Streams.stream(base.iterator()).map(Arguments::of);
  }

  protected void testClosure(String closure) {
    testClosure(closure, Compiler.DEFAULT_OPTIMIZATION_LEVEL);
  }

  protected abstract void testClosure(String closure, int optimizationLevel);
}
