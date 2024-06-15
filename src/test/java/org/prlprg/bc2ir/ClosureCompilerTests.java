package org.prlprg.bc2ir;

import static org.junit.Assume.assumeNoException;
import static org.junit.jupiter.api.Assumptions.abort;
import static org.prlprg.util.Tests.assumeEquals;
import static org.prlprg.util.Tests.printlnIfVerbose;

import com.google.common.collect.Streams;
import java.util.List;
import java.util.stream.Stream;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.Arguments;
import org.junit.jupiter.params.provider.MethodSource;
import org.prlprg.bc.BcInstr;
import org.prlprg.bc.Compiler;
import org.prlprg.primitive.Names;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.StrSXP;
import org.prlprg.util.AbstractGNURBasedTest;
import org.prlprg.util.UnreachableError;

/**
 * These are currently copied from {@link org.prlprg.bc.CompilerTest}, but I didn't bother
 * abstracting because we probably want to test different things here very soon (some tests are
 * redundant and will need to test new things).
 */
public class ClosureCompilerTests extends AbstractGNURBasedTest {
  @Test
  public void emptyList() {
    testAllIr(
        """
        function ()
        {
            function(other = list()) 1
        }
    """);
  }

  @Test
  public void emptyBlock() {
    testAllIr(
        """
        function() {}
    """);
  }

  @Test
  public void singleExpressionBlock() {
    testAllIr(
        """
        function() { 1 }
    """);
  }

  @Test
  public void multipleExpressionBlock() {
    testAllIr(
        """
        function() { 1; 2 }
    """);
  }

  @Test
  public void if_() {
    testAllIr(
        """
        function(x) if (x) 1
    """);
  }

  @Test
  public void ifElse() {
    testAllIr(
        """
        function(x) if (x) 1 else 2
    """);
  }

  @Test
  public void functionInlining() {
    testAllIr(
        """
        function(x) function(y) 1
    """);
  }

  @Test
  public void functionLeftParenInlining() {
    testAllIr(
        """
        function(x) (x)
    """);

    testAllIr(
        """
        function(x) (...)
    """);
  }

  @Test
  public void builtinsInlining() {
    // expecting a guard
    testAllIr(
        """
      function() invisible(1)
    """,
        2);

    // no guard
    testAllIr(
        """
      function() invisible(1)
    """,
        3);

    // guard and regular function call
    testAllIr(
        """
      function(...) invisible(...)
    """,
        2);
  }

  @Test
  public void specialsInlining() {
    testAllIr(
        """
      function() rep(1, 10)
    """);
  }

  @Test
  public void inlineLocal() {
    testAllIr(
        """
      function(x) local(x)
    """);
  }

  @Test
  public void inlineReturn() {
    testAllIr(
        """
      function(x) return(x)
    """);
  }

  @Test
  public void inlineBuiltinsInternal() {
    testAllIr(
        """
      function(x) .Internal(inspect(x))
    """);

    testAllIr(
        """
      function(x) .Internal(inspect2(x))
    """);
  }

  @Test
  public void inlineLogicalAnd() {
    testAllIr(
        """
      function(x, y) x && y
    """);

    testAllIr(
        """
      function(x, y, z) x && y && z
    """);

    testAllIr(
        """
      function(x, y) x && y && (x && y)
    """);
  }

  @Test
  public void inlineLogicalOr() {
    testAllIr(
        """
      function(x, y) x || y
    """);

    testAllIr(
        """
      function(x, y, z) x || y || z
    """);

    testAllIr(
        """
      function(x, y) x || y || (x || y)
    """);
  }

  @Test
  public void inlineLogicalAndOr() {
    testAllIr(
        """
      function(x, y) x && y || y
    """);

    testAllIr(
        """
      function(x, y, z) x || y && z
    """);
  }

  @Test
  public void inlineRepeat() {
    testAllIr(
        """
      function(x) repeat(x)
    """);

    testAllIr(
        """
      function(x, y) repeat({ if (x) break() else y })
    """);

    testAllIr(
        """
      function(x, y) repeat({ if (x) next() else y })
    """);

    testAllIr(
        """
      function(x, y=break()) repeat({ if (x) y else 1 })
    """);
  }

  @Test
  public void inlineWhile() {
    testAllIr(
        """
      function(x) while(x) 1
    """);

    testAllIr(
        """
      function(x, y) while(x) { break() }
    """);

    testAllIr(
        """
      function(x, y) while(x) { if (y) break() else 1 }
    """);
  }

  @Test
  public void inlineFor() {
    testAllIr(
        """
      function(x) for (i in x) 1
    """);

    testAllIr(
        """
      function(x) for (i in x) if (i) break() else 1
    """);
  }

  @Test
  public void inlineArithmetics() {
    testAllIr(
        """
      function(x, y) x + y
    """);

    testAllIr(
        """
      function(x, y) x - y
    """);

    testAllIr(
        """
      function(x, y) {
        list(x + y - x + 10, -x + 1, +y)
      }
    """);

    testAllIr(
        """
      function(x, y) {
        list(x * y / x * 10, exp(x) ^ 2, sqrt(exp(x)))
      }
    """);

    testAllIr(
        """
      function(x, y) {
        list(log(x), log(x, y))
      }
    """);
  }

  @Test
  public void inlineMath1() {
    testAllIr(
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
    testAllIr(
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
    testAllIr(
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
    testAllIr(
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
    testAllIr(
        """
      function(x) {
        .Call("bar")
        .Call("foo", x, 1, TRUE)
      }
    """);
  }

  @Test
  public void inlineIntGeneratingSequences() {
    testAllIr(
        """
      function(x, xs) {
        list(x:100, seq_along(xs), seq_len(x))
      }
    """);
  }

  @Test
  public void multiColon() {
    testAllIr(
        """
      function() {
        list(compiler::cmpfun, compiler:::makeCenv)
      }
    """);
  }

  @Test
  public void inlineSwitch() {
    testAllIr(
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
    testAllIr(
        """
      function() {
        x <- 1
      }
    """);

    testAllIr(
        """
      function() {
        y <<- 2
      }
    """);

    testAllIr(
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
    testAllIr(
        """
      function() {
        f(x) <- 1
      }
    """);

    testAllIr(
        """
      function() {
        pkg::f(x) <- 1
      }
    """);
  }

  @Test
  public void inlineAssign3() {
    testAllIr(
        """
      function() {
        f(g(h(x, k), j), i) <- v
      }
    """);
  }

  @Test
  public void inlineDollarAssign() {
    testAllIr(
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
    testAllIr(
        """
      function() {
        x[y == 1] <- 1
        x[[y == 1]] <- 1
      }
    """);
  }

  @Test
  public void inlineSquareAssign2() {
    testAllIr(
        """
      function() {
        x[y == 1, z == 2] <- 1
        x[[y == 1, z == 2]] <- 1
      }
    """);
  }

  @Test
  public void inlineSquareAssign3() {
    testAllIr(
        """
      function() {
        x[y == 1, ] <- 1
        x[[y == 1, ]] <- 1
      }
    """);
  }

  @Test
  public void inlineSquareAssign4() {
    testAllIr(
        """
      function() {
        x$y[-c(1,2)] <- 1
      }
    """);
  }

  @Test
  public void inlineSquareSubset1() {
    testAllIr(
        """
      function() {
        x[y == 1]
        x[[y == 1]]
      }
    """);
  }

  @Test
  public void inlineSquareSubset2() {
    testAllIr(
        """
      function() {
        x[y == 1, z == 2]
        x[[y == 1, z == 2]]
      }
    """);
  }

  @Test
  public void inlineSquareSubset3() {
    testAllIr(
        """
      function() {
        x[y == 1,]
        x[[y == 1,]]
      }
    """);
  }

  @Test
  public void inlineSquareSubset4() {
    testAllIr(
        """
      function() {
        x[a=1,]
        x[[a=1,]]
      }
    """);
  }

  @Test
  public void inlineSlotAssign() {
    testAllIr(
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
    testAllIr(
        """
      function(x) {
        identical(unzip, "internal")
      }
    """);
  }

  @Test
  public void constantFoldingC() {
    // no constant folding - c is resolved from baseenv()
    testAllIr(
        """
        function () {
           c("%Y-%m-%d", "%d-%m-%Y", "%m-%d-%Y")
        }
        """);

    // constant folding - optlevel 3
    testAllIr(
        """
            function () {
               c("%Y-%m-%d", "%d-%m-%Y", "%m-%d-%Y")
            }
            """,
        3);
  }

  @Test
  public void constantFoldNamedC() {
    var code =
        """
            function(x) c(i = 1, d = 1, s = 1)
            """;
    var sexp = compileBody(code, 3);
    var bc = ((BCodeSXP) sexp).bc();
    // FIXME: use some matchers
    var i = (BcInstr.LdConst) bc.code().getFirst();
    var v = ((RealSXP) bc.consts().get(i.constant()));
    assumeEquals(3, v.size());
    assumeEquals(List.of("i", "d", "s"), v.names());
    testAllIr(code);
  }

  @Test
  public void constantFoldMul() {
    testAllIr(
        """
      function() {
        2 * 3 * 4
      }
    """);
  }

  @Test
  public void constantFoldMul2() {
    var code =
        """
            function(x) {
              2 * 3 * x
            }
            """;
    var sexp = compileBody(code, 2);
    var bc = ((BCodeSXP) sexp).bc();
    // FIXME: use some matchers
    var i = (BcInstr.LdConst) bc.code().getFirst();
    var v = ((RealSXP) bc.consts().get(i.constant()));
    assumeEquals(1, v.size());
    assumeEquals(6.0, v.get(0));
    testAllIr(code);
  }

  @Test
  public void constantFoldAdd() {
    var code =
        """
            function(x) 1 + 2
            """;
    var sexp = compileBody(code, 3);
    var bc = ((BCodeSXP) sexp).bc();

    // FIXME: use some matchers
    var i = (BcInstr.LdConst) bc.code().getFirst();
    var v = ((RealSXP) bc.consts().get(i.constant()));
    assumeEquals(1, v.size());
    assumeEquals(3.0, v.get(0));
  }

  @Test
  public void constantFoldAdd2() {
    var code =
        """
            function(x) TRUE + c(10, 11)
            """;
    var sexp = compileBody(code, 3);
    var bc = ((BCodeSXP) sexp).bc();
    // FIXME: use some matchers
    var i = (BcInstr.LdConst) bc.code().getFirst();
    var v = ((RealSXP) bc.consts().get(i.constant()));
    assumeEquals(2, v.size());
    assumeEquals(11.0, v.get(0));
    assumeEquals(12.0, v.get(1));
  }

  @ParameterizedTest
  @MethodSource("stdlibFunctionsList")
  public void stdlibFunctions(String reference) {
    var components = reference.split(":::");
    assert components.length == 2;
    var name = components[0] + "." + Names.unquoteIfNecessary(components[1]);

    testAllIr(name, reference, 2);
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

  /**
   * {@link #testAllIr(String, int)} with the closure's name set to the caller's name and the
   * bytecode compiled with the default optimization level (2).
   */
  private void testAllIr(String code) {
    testAllIr(code, Compiler.DEFAULT_OPTIMIZATION_LEVEL);
  }

  /**
   * {@link #testAllIr(String, int)} with the bytecode compiled with the default optimization level
   * (2).
   */
  private void testAllIr(String funName, String code) {
    testAllIr(funName, code, Compiler.DEFAULT_OPTIMIZATION_LEVEL);
  }

  /* {@link #testAllIr(String, int)} with the closure's name set to the caller's name. */
  private void testAllIr(String funCode, int optimizationLevel) {
    // https://stackoverflow.com/a/68674306
    var callerName =
        StackWalker.getInstance()
            .walk(
                stream ->
                    stream
                        .filter(m -> !m.getMethodName().equals("testAllIr"))
                        .findFirst()
                        .orElseThrow())
            .getMethodName();

    testAllIr(callerName, funCode, optimizationLevel);
  }

  /**
   * Test generating the IR and then later running it.
   *
   * <p>Maybe we want to separate, so some things are only generated, and we also load pre-generated
   * IR to run (in order to load pre-generated code, first we have to finalize the IR serialized
   * representation).
   */
  private void testAllIr(String funName, String funCode, int optimizationLevel) {
    var fun = compileSuccessfully(funCode, optimizationLevel);
    var ir = ClosureCompiler.compileBaselineClosure(funName, fun);

    printlnIfVerbose(ir);
  }

  /**
   * Parse the closure and then compile it with a bytecode body.
   *
   * <p>"Successfully" = we want to make sure that any reported failure is on the ir end. So, we
   * compare our bytecode compiler against GNU-R, and if they don't match (or any other error occurs
   * within this function), we abort the test.
   *
   * <p>In the future if this is too slow, we can memoize it across runs: save the RDS of a closure
   * compiled from the first run, and load it on subsequent runs (maybe under a flag or something
   * automatic to detect when we must clear the cache).
   */
  private CloSXP compileSuccessfully(String funCode, int optimizationLevel) {
    CloSXP fun;
    try {
      fun = assertBytecode(funCode, optimizationLevel);
    } catch (Throwable e) {
      assumeNoException("Failed to get compiled GNU-R bytecode, so we can't test IR", e);
      throw new UnreachableError();
    }
    if (!(fun.body() instanceof BCodeSXP)) {
      abort(
          "Failed to get compiled GNU-R bytecode, so we can't test the IR: Java compiler returned NULL, so it probably contains the browser function.");
    }
    return fun;
  }
}
