package org.prlprg.bc;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.prlprg.util.StructuralUtils.printStructurally;

import com.google.common.collect.Streams;
import java.io.File;
import java.io.IOException;
import java.util.List;
import java.util.Objects;
import java.util.stream.Stream;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.Arguments;
import org.junit.jupiter.params.provider.MethodSource;
import org.prlprg.rsession.TestRSession;
import org.prlprg.sexp.*;
import org.prlprg.util.*;
import org.prlprg.util.AbstractGNURBasedTest;

public class CompilerTest extends AbstractGNURBasedTest implements Tests {

  @Test
  public void testEmptyBlock() {
    assertBytecode(
        """
        function() {}
    """);
  }

  @Test
  public void testSingleExpressionBlock() {
    assertBytecode(
        """
        function() { 1 }
    """);
  }

  @Test
  public void testMultipleExpressionBlock() {
    assertBytecode(
        """
        function() { 1; 2 }
    """);
  }

  @Test
  public void testIf() {
    assertBytecode(
        """
        function(x) if (x) 1
    """);
  }

  @Test
  public void testIfElse() {
    assertBytecode(
        """
        function(x) if (x) 1 else 2
    """);
  }

  @Test
  public void testFunctionInlining() {
    assertBytecode(
        """
        function(x) function(y) 1
    """);
  }

  @Test
  public void testFunctionLeftParenInlining() {
    assertBytecode(
        """
        function(x) (x)
    """);

    assertBytecode(
        """
        function(x) (...)
    """);

    // TODO: (x <- 1)
  }

  @Test
  public void builtinsInlining() {
    // expecting a guard
    assertBytecode(
        """
      function() invisible(1)
    """,
        2);

    // no guard
    assertBytecode(
        """
      function() invisible(1)
    """,
        3);

    // guard and regular function call
    assertBytecode(
        """
      function(...) invisible(...)
    """,
        2);
  }

  @Test
  public void specialsInlining() {
    assertBytecode(
        """
      function() rep(1, 10)
    """);
  }

  @Test
  public void inlineLocal() {
    assertBytecode(
        """
function(x) local(x)
""");
  }

  @Test
  public void inlineReturn() {
    assertBytecode(
        """
function(x) return(x)
""");
  }

  @Test
  public void inlineBuiltinsInternal() {
    assertBytecode(
        """
function(x) .Internal(inspect(x))
""");

    assertBytecode(
        """
function(x) .Internal(inspect2(x))
""");
  }

  @Test
  public void inlineLogicalAnd() {
    assertBytecode(
        """
function(x, y) x && y
""");

    assertBytecode(
        """
function(x, y, z) x && y && z
""");

    assertBytecode(
        """
function(x, y) x && y && (x && y)
""");
  }

  @Test
  public void inlineLogicalOr() {
    assertBytecode(
        """
function(x, y) x || y
""");

    assertBytecode(
        """
function(x, y, z) x || y || z
""");

    assertBytecode(
        """
function(x, y) x || y || (x || y)
""");
  }

  @Test
  public void inlineLogicalAndOr() {
    assertBytecode(
        """
function(x, y) x && y || y
""");

    assertBytecode(
        """
function(x, y, z) x || y && z
""");
  }

  @Test
  public void inlineRepeat() {
    assertBytecode(
        """
          function(x) repeat(x)
        """);

    assertBytecode(
        """
      function(x, y) repeat({ if (x) break() else y })
    """);

    assertBytecode(
        """
          function(x, y) repeat({ if (x) next() else y })
        """);

    assertBytecode(
        """
          function(x, y=break()) repeat({ if (x) y else 1 })
        """);
  }

  @Test
  public void inlineWhile() {
    assertBytecode(
        """
          function(x) while(x) 1
        """);

    assertBytecode(
        """
      function(x, y) while(x) { break() }
    """);

    assertBytecode(
        """
      function(x, y) while(x) { if (y) break() else 1 }
    """);
  }

  @Test
  public void inlineFor() {
    assertBytecode(
        """
function(x) for (i in x) 1
""");

    assertBytecode(
        """
function(x) for (i in x) if (i) break() else 1
""");
  }

  @Test
  public void inlineArithmetics() {
    assertBytecode(
        """
  function(x, y) x + y
  """);

    assertBytecode(
        """
  function(x, y) x - y
  """);

    assertBytecode(
        """
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

    assertBytecode(
        """
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

  @Test
  public void inlineDotCall() {
    assertBytecode(
        """
                    function(x) {
                      .Call("bar")
                      .Call("foo", x, 1, TRUE)
                    }
                """);
  }

  @Test
  public void inlineIntGeneratingSequences() {
    assertBytecode(
        """
                    function(x, xs) {
                      list(x:100, seq_along(xs), seq_len(x))
                    }
                """);
  }

  // TODO: with / require

  @Test
  public void multiColon() {
    assertBytecode(
        """
                        function() {
                          list(compiler::cmpfun, compiler:::makeCenv)
                        }
                    """);
  }

  @Test
  public void inlineSwitch() {
    assertBytecode(
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
    assertBytecode(
        """
function() {
  x <- 1
}
""");

    assertBytecode(
        """
function() {
  y <<- 2
}
""");

    assertBytecode(
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
    assertBytecode(
        """
function() {
  f(x) <- 1
}
""");
    assertBytecode(
        """
function() {
  pkg::f(x) <- 1
}
""");
  }

  @Test
  public void inlineAssign3() {
    assertBytecode(
        """
function() {
  f(g(h(x, k), j), i) <- v
}
""");
  }

  @Test
  public void inlineDollarAssign() {
    assertBytecode(
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
    assertBytecode(
        """
function() {
 x[y == 1] <- 1
 x[[y == 1]] <- 1
}
""");
  }

  @Test
  public void inlineSquareAssign2() {
    assertBytecode(
        """
function() {
 x[y == 1, z == 2] <- 1
 x[[y == 1, z == 2]] <- 1
}
""");
  }

  @Test
  public void inlineSquareAssign3() {
    assertBytecode(
        """
function() {
 x[y == 1, ] <- 1
 x[[y == 1, ]] <- 1
}
""");
  }

  @Test
  public void inlineSquareAssign4() {
    assertBytecode(
        """
function() {
 x$y[-c(1,2)] <- 1
}
""");
  }

  @Test
  public void inlineSquareSubset1() {
    assertBytecode(
        """
function() {
 x[y == 1]
 x[[y == 1]]
}
""");
  }

  @Test
  public void inlineSquareSubset2() {
    assertBytecode(
        """
function() {
 x[y == 1, z == 2]
 x[[y == 1, z == 2]]
}
""");
  }

  @Test
  public void inlineSquareSubset3() {
    assertBytecode(
        """
function() {
 x[y == 1,]
 x[[y == 1,]]
}
""");
  }

  @Test
  public void inlineSquareSubset4() {
    assertBytecode(
        """
function() {
 x[a=1,]
 x[[a=1,]]
}
""");
  }

  @Test
  public void inlineSlotAssign() {
    assertBytecode(
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
    assertBytecode(
        """
function(x) {
  identical(unzip, "internal")
}
""");
  }

  @Test
  public void baseFunctions1() {
    assertBytecode(
        """
function (zipfile, files = NULL, list = FALSE, overwrite = TRUE,
    junkpaths = FALSE, exdir = ".", unzip = "internal", setTimes = FALSE)
{
    if (identical(unzip, "internal")) {
        if (!list && !missing(exdir))
            dir.create(exdir, showWarnings = FALSE, recursive = TRUE)
        res <- .External(C_unzip, zipfile, files, exdir, list,
            overwrite, junkpaths, setTimes)
        if (list) {
            dates <- as.POSIXct(res[[3]], "%Y-%m-%d %H:%M", tz = "UTC")
            data.frame(Name = res[[1]], Length = res[[2]], Date = dates,
                stringsAsFactors = FALSE)
        }
        else invisible(attr(res, "extracted"))
    }
    else {
        WINDOWS <- .Platform$OS.type == "windows"
        if (!is.character(unzip) || length(unzip) != 1L || !nzchar(unzip))
            stop("'unzip' must be a single character string")
        zipfile <- path.expand(zipfile)
        if (list) {
            res <- if (WINDOWS)
                system2(unzip, c("-ql", shQuote(zipfile)), stdout = TRUE)
            else system2(unzip, c("-ql", shQuote(zipfile)), stdout = TRUE,
                env = c("TZ=UTC"))
            l <- length(res)
            res2 <- res[-c(2, l - 1, l)]
            res3 <- gsub(" *([^ ]+) +([^ ]+) +([^ ]+) +(.*)",
                "\\\\1 \\\\2 \\\\3 \\"\\\\4\\"", res2)
            con <- textConnection(res3)
            on.exit(close(con))
            z <- read.table(con, header = TRUE, as.is = TRUE)
            dt <- paste(z$Date, z$Time)
            formats <- if (max(nchar(z$Date) > 8))
                c("%Y-%m-%d", "%d-%m-%Y", "%m-%d-%Y")
            else c("%m-%d-%y", "%d-%m-%y", "%y-%m-%d")
            slash <- any(grepl("/", z$Date))
            if (slash)
                formats <- gsub("-", "/", formats, fixed = TRUE)
            formats <- paste(formats, "%H:%M")
            for (f in formats) {
                zz <- as.POSIXct(dt, tz = "UTC", format = f)
                if (all(!is.na(zz)))
                  break
            }
            z[, "Date"] <- zz
            z[c("Name", "Length", "Date")]
        }
        else {
            args <- character()
            if (junkpaths)
                args <- c(args, "-j")
            if (overwrite)
                args <- c(args, "-oq", shQuote(zipfile))
            else args <- c(args, "-nq", shQuote(zipfile))
            if (length(files))
                args <- c(args, shQuote(files))
            if (exdir != ".")
                args <- c(args, "-d", shQuote(exdir))
            if (WINDOWS)
                system2(unzip, args, stdout = NULL, stderr = NULL,
                  invisible = TRUE)
            else system2(unzip, args, stdout = NULL, stderr = NULL)
            invisible(NULL)
        }
    }
}
""");
  }

  @Test
  public void constantFolding2() {
    // no constant folding - c is resolved from baseenv()
    assertBytecode(
        """
        function () {
           c("%Y-%m-%d", "%d-%m-%Y", "%m-%d-%Y")
        }
        """);
    // constant folding - optlevel 3
    assertBytecode(
        """
            function () {
               c("%Y-%m-%d", "%d-%m-%Y", "%m-%d-%Y")
            }
            """,
        3);
  }

  @Test
  public void constantFoldMul1() {
    var code =
        """
        function() {
          2 * 3 * 4
        }
        """;
    assertBytecode(code);
  }

  @Test
  public void constantFoldMul2() {
    var code =
        """
            function(x) {
              2 * 3 * x
            }
            """;
    var bc = compile(code, 2);
    // FIXME: use some matchers
    var i = (BcInstr.LdConst) bc.code().getFirst();
    var v = ((RealSXP) bc.consts().get(i.constant()));
    assertEquals(1, v.size());
    assertEquals(6, v.get(0));
    assertBytecode(code);
  }

  @Test
  public void constantFold3() {
    var code =
        """
            function(x) c(i = 1, d = 1, s = 1)
            """;
    var bc = compile(code, 3);
    // FIXME: use some matchers
    var i = (BcInstr.LdConst) bc.code().getFirst();
    var v = ((RealSXP) bc.consts().get(i.constant()));
    assertEquals(3, v.size());
    assertEquals(List.of("i", "d", "s"), v.names());
    assertBytecode(code);
  }

  @Test
  public void test1() {
    assertBytecode(
        """
function() switch(x, integer = , complex = , numeric = all.equal.numeric(target,
                   current, ...), character = all.equal.character(target,
                   current, ...), logical = , raw = all.equal.raw(target,
                   current, ...), S4 = attr.all.equal(target, current, ...),
                   if (data.class(target) != data.class(current)) {
                       gettextf("target is %s, current is %s", data.class(target),
                           data.class(current))
                   } else NULL)
""",
        2);
  }

  @ParameterizedTest
  @MethodSource("stdlibFunctions")
  public void functions(String name) {
    assertBytecode(name);
  }

  private Stream<Arguments> stdlibFunctions() throws IOException {
    StrSXP names =
        (StrSXP)
            readRDS(
                Objects.requireNonNull(
                    TestRSession.class.getResourceAsStream("base-closures.RDS")));

    return Streams.stream(names.iterator())
        .map(x -> SEXPs.symbol(x).toString()) // escapes the symbol if necessary
        .map(Arguments::of);
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

    var ourbc = compile(astfun, optimizationLevel);

    assertEquals(
        printStructurally(gnurbc),
        printStructurally(ourbc),
        "`compile(read(ast)) == read(R.compile(ast))`");
  }

  private Bc compile(String fun, int optimizationLevel) {
    return compile((CloSXP) R.eval(fun), optimizationLevel);
  }

  private Bc compile(CloSXP fun, int optimizationLevel) {
    var compiler = new Compiler(fun, rsession);
    compiler.setOptimizationLevel(optimizationLevel);
    return compiler.compile();
  }
}
