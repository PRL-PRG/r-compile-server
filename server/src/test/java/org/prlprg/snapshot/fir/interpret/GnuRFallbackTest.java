package org.prlprg.snapshot.fir.interpret;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertInstanceOf;
import static org.junit.jupiter.api.Assertions.assertTrue;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.CsvSource;
import org.junit.jupiter.params.provider.ValueSource;
import org.prlprg.examples.SexpResult;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.sexp.SEXP;

/// The calls that [TestInterpreter] runs in GNU-R ([GnuRFallback]), and those it doesn't.
class GnuRFallbackTest {
  private static final String SETUP =
      """
      x: v(R)o = v(R)[1.5, 2.5, 3.5];
      i: v(I)o = v(I)[1, 3];
      d: dots = dots[];
      """;

  /// A FIŘ `main` body that assigns `r`, and the R expression it's equal to.
  @ParameterizedTest
  @CsvSource(
      delimiter = '|',
      textBlock =
          """
          # A mock that doesn't support its arguments: vector subscripts and arithmetic.
          r: V = `[`%< *@!,*,dots,*@! -+> V >(x, i, d, <missing>);              | c(1.5, 3.5)
          r: V = `[<-`%< *@!,*,*,dots -+> V >(x, i, <real 0.0>, d);             | c(0, 2.5, 0)
          y: v(R)o = v(R)[1.0, 2.0]; r: V = `+`%< *@!,*@! -+> V >(x, y);        | suppressWarnings(c(1.5, 2.5, 3.5) + c(1, 2))
          # A subscript's empty arguments: `m[, 2]` and `m[2, ]`.
          f: cls = ldf matrix; m: V = dyn f(x, <int 1>); e: dots = dots[<int 2>]; r: V = `[`%< *@!,*,dots,*@! -+> V >(m, <missing>, e, <missing>); | 2.5
          f: cls = ldf matrix; m: V = dyn f(x, <int 3>); e: dots = dots[<missing>]; r: V = `[`%< *@!,*,dots,*@! -+> V >(m, <int 2>, e, <missing>); | 2.5
          # What a base closure calls with `.Internal`.
          r: V = nchar%< *,*,*,* -+> V >(<str "abc">, <str "chars">, <lgl FALSE>, <lgl NA_LGL>); | 3L
          # A mock that doesn't support an argument: `sum(y, na.rm = TRUE)`.
          y: v(R)o = v(R)[1.5, NA_REAL]; e: dots = dots[y]; r: V = sum%< dots,*@! -+> V >(e, <lgl TRUE>); | 1.5
          # A base closure and a function of an attached package, with data.
          f: cls = ldf strsplit; r: V = dyn f(<str "a b">, <str " ">);          | strsplit("a b", " ")
          f: cls = ldf paste; r: V = dyn f[, , sep](x, <str "u">, <str "">);    | paste(c(1.5, 2.5, 3.5), "u", sep = "")
          f: cls = ldf matrix; r: V = dyn f[nrow, ncol](<int 1>, <int 2>);      | matrix(nrow = 1L, ncol = 2L)
          f: cls = ldf median; r: V = dyn f(x);                                 | 2.5
          # A function argument: a base function, and a closure of the interpreter (a callback).
          f: cls = ldf sapply; g: cls = ldf sqrt; r: V = dyn f(x, g);           | sqrt(c(1.5, 2.5, 3.5))
          f: cls = ldf sapply; g: cls = ldf twice; r: V = dyn f(x, g);          | c(3, 5, 7)
          f: cls = ldf Map; g: cls = ldf twice; r: V = dyn f(g, x);             | list(3, 5, 7)
          f: cls = ldf outer; g: cls = ldf mul; r: V = dyn f(i, i, g);          | outer(c(1L, 3L), c(1L, 3L), function(a, b) a * b)
          # A callback that runs a call in GNU-R again.
          f: cls = ldf sapply; g: cls = ldf chars; r: V = dyn f(x, g);          | c(3L, 3L, 3L)
          # The RNG state is the interpreter's.
          s: cls = ldf `set.seed`; n: V = dyn s(<int 1>); f: cls = ldf runif; r: V = dyn f(<int 2>); | {set.seed(1L); runif(2L)}
          s: cls = ldf `set.seed`; n: V = dyn s(<int 1>); f: cls = ldf sapply; g: cls = ldf rnd; r: V = dyn f(x, g); | {set.seed(1L); sapply(c(1.5, 2.5, 3.5), function(a) a + runif(1L))}
          """)
  void runsInGnuR(String body, String expected) {
    assertEquals(new SexpResult.Ok(GNUR.instance().eval(expected)), run(body));
  }

  @ParameterizedTest
  @ValueSource(
      strings = {
        // State that only one side has.
        "f: cls = ldf `Sys.time`; r: V = dyn f();",
        "f: cls = ldf tryCatch; r: V = dyn f(<int 1>);",
        // The RNG without a seed.
        "f: cls = ldf runif; r: V = dyn f(<int 2>);",
        // A result that isn't data.
        "f: cls = ldf globalenv; r: V = dyn f();",
        "f: cls = ldf `match.fun`; r: V = dyn f(<str \"sum\">);",
        // An error of the interpreter in a callback, which GNU-R could handle.
        "f: cls = ldf sapply; g: cls = ldf unsupported; r: V = dyn f(x, g);"
      })
  void isUnsupported(String body) {
    var result = assertInstanceOf(SexpResult.Error.class, run(body));
    assertTrue(result.isSimplyUnsupported(), result::toString);
  }

  @Test
  void errorInGnuRFails() {
    var result =
        assertInstanceOf(
            SexpResult.Error.class, run("f: cls = ldf strsplit; r: V = dyn f(<int 1>, x);"));
    assertFalse(result.isSimplyUnsupported(), result::toString);
    assertTrue(result.toString().contains("non-character argument"), result::toString);
  }

  /// The session's RNG state and options are as before.
  @Test
  void restoresSession() {
    var before = sessionState();
    run(
        """
        s: cls = ldf `set.seed`; n: V = dyn s(<int 1>);
        o: cls = ldf options; r: V = dyn o[digits](<int 3>);
        """);
    assertEquals(before, sessionState());
  }

  private static SEXP sessionState() {
    return GNUR.instance()
        .eval("list(get0('.Random.seed', globalenv(), inherits = FALSE), getOption('digits'))");
  }

  private static SexpResult run(String body) {
    var module =
        ParseUtil.parseModule(
            """
            fun main() {
              () -+> V {
            %s
            %s
                return r;
              }
            }

            fun twice(a) {
              (a:*) -+> V {
                v: V = force? a;
                r: V = `*`%%< *@!,*@! -+> V >(v, <real 2.0>);
                return r;
              }
            }

            fun mul(a, b) {
              (a:*, b:*) -+> V {
                v: V = force? a;
                w: V = force? b;
                r: V = `*`%%< *@!,*@! -+> V >(v, w);
                return r;
              }
            }

            fun chars(a) {
              (a:*) -+> V {
                v: V = force? a;
                f: cls = ldf nchar;
                r: V = dyn f(v);
                return r;
              }
            }

            fun rnd(a) {
              (a:*) -+> V {
                v: V = force? a;
                f: cls = ldf runif;
                u: V = dyn f(<int 1>);
                r: V = `+`%%< *@!,*@! -+> V >(v, u);
                return r;
              }
            }

            fun unsupported(a) {
              (a:*) -+> V {
                f: cls = ldf tryCatch;
                r: V = dyn f(a);
                return r;
              }
            }
            """
                .formatted(SETUP, body));
    return new TestInterpreter(module).call("main").result();
  }
}
