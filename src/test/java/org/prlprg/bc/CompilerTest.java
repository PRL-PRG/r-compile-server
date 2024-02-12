package org.prlprg.bc;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.util.StructuralUtils.printStructurally;

import java.io.File;
import java.io.IOException;
import org.junit.jupiter.api.Test;
import org.prlprg.RSession;
import org.prlprg.rsession.TestRSession;
import org.prlprg.sexp.BCodeSXP;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.*;

public class CompilerTest implements Tests {

  private final RSession rsession = new TestRSession();
  private final GNUR R = new GNUR(rsession);

  @Test
  public void testEmptyBlock() {
    assertBytecode("""
        function() {}
    """);
  }

  @Test
  public void testSingleExpressionBlock() {
    assertBytecode("""
        function() { 1 }
    """);
  }

  @Test
  public void testMultipleExpressionBlock() {
    assertBytecode("""
        function() { 1; 2 }
    """);
  }

  @Test
  public void testIf() {
    assertBytecode("""
        function(x) if (x) 1
    """);
  }

  @Test
  public void testIfElse() {
    assertBytecode("""
        function(x) if (x) 1 else 2
    """);
  }

  @Test
  public void testFunctionInlining() {
    assertBytecode("""
        function(x) function(y) 1
    """);
  }

  @Test
  public void testFunctionLeftParenInlining() {
    assertBytecode("""
        function(x) (x)
    """);

    assertBytecode("""
        function(x) (...)
    """);

    // TODO: (x <- 1)
  }

  @Test
  public void builtinsInlining() {
    // expecting a guard
    assertBytecode("""
      function() invisible(1)
    """, 2);

    // no guard
    assertBytecode("""
      function() invisible(1)
    """, 3);

    // guard and regular function call
    assertBytecode("""
      function(...) invisible(...)
    """, 2);
  }

  @Test
  public void specialsInlining() {
    assertBytecode("""
      function() rep(1, 10)
    """);
  }

  @Test
  public void inlineLocal() {
    assertBytecode("""
function(x) local(x)
""");
  }

  @Test
  public void inlineReturn() {
    assertBytecode("""
function(x) return(x)
""");
  }

  @Test
  public void inlineBuiltinsInternal() {
    assertBytecode("""
function(x) .Internal(inspect(x))
""");

    assertBytecode("""
function(x) .Internal(inspect2(x))
""");
  }

  @Test
  public void inlineLogicalAnd() {
    assertBytecode("""
function(x, y) x && y
""");

    assertBytecode("""
function(x, y, z) x && y && z
""");

    assertBytecode("""
function(x, y) x && y && (x && y)
""");
  }

  @Test
  public void inlineLogicalOr() {
    assertBytecode("""
function(x, y) x || y
""");

    assertBytecode("""
function(x, y, z) x || y || z
""");

    assertBytecode("""
function(x, y) x || y || (x || y)
""");
  }

  @Test
  public void inlineLogicalAndOr() {
    assertBytecode("""
function(x, y) x && y || y
""");

    assertBytecode("""
function(x, y, z) x || y && z
""");
  }

  @Test
  public void inlineRepeat() {
    assertBytecode("""
          function(x) repeat(x)
        """);

    assertBytecode("""
      function(x, y) repeat({ if (x) break() else y })
    """);

    assertBytecode("""
          function(x, y) repeat({ if (x) next() else y })
        """);

    assertBytecode("""
          function(x, y=break()) repeat({ if (x) y else 1 })
        """);
  }

  @Test
  public void inlineWhile() {
    assertBytecode("""
          function(x) while(x) 1
        """);

    assertBytecode("""
      function(x, y) while(x) { break() }
    """);

    assertBytecode("""
      function(x, y) while(x) { if (y) break() else 1 }
    """);
  }

  @Test
  public void inlineFor() {
    assertBytecode("""
function(x) for (i in x) 1
""");

    assertBytecode("""
function(x) for (i in x) if (i) break() else 1
""");
  }

  @Test
  public void inlineArithmetics() {
    assertBytecode("""
  function(x, y) x + y
  """);

    assertBytecode("""
  function(x, y) x - y
  """);

    assertBytecode("""
  function(x, y) {
    list(x + y - x + 10, -x + 1, +y)
  }
  """);

    assertBytecode(
        """
  function(x, y) {
    list(x * y / x * 10, exp(x) ^ 2, sqrt(exp(x)))
  }
  """);

    assertBytecode("""
      function(x, y) {
        list(log(x), log(x, y))
      }
      """);
  }

  @Test
  public void inlineMath1() {
    assertBytecode(
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
    assertBytecode(
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
    assertBytecode(
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
    assertBytecode(
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

  private void assertBytecode(String code) {
    assertBytecode(code, 2);
  }

  private void assertBytecode(String funCode, int optimizationLevel) {
    File temp;
    try {
      temp = File.createTempFile("R-snapshot", ".R");
      Files.writeString(temp.toPath(), funCode);
    } catch (IOException e) {
      throw new RuntimeException(e);
    }

    String code =
        "parse(file = '"
            + temp.getAbsolutePath()
            + "', keep.source = TRUE)" // TODO: set conditionally
            + " |> eval()"
            + " |> compiler::cmpfun(options = list(optimize="
            + optimizationLevel
            + "))";

    var gnurfun = (CloSXP) R.eval(code);
    var gnurbc = ((BCodeSXP) gnurfun.body()).bc();
    var astfun =
        SEXPs.closure(
            gnurfun.formals(), gnurbc.consts().getFirst(), gnurfun.env(), gnurfun.attributes());

    var compiler = new Compiler(astfun, rsession);
    compiler.setOptimizationLevel(optimizationLevel);
    var ourbc = compiler.compile();

    assertEquals(
        printStructurally(gnurbc),
        printStructurally(ourbc),
        "`compile(read(ast)) == read(R.compile(ast))`");
  }
}
