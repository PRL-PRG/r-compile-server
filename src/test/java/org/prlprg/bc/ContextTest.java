package org.prlprg.bc;

import static com.google.common.truth.Truth.assertThat;

import java.util.HashSet;
import org.junit.jupiter.api.Test;
import org.prlprg.RSession;
import org.prlprg.rsession.TestRSession;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.GNUR;
import org.prlprg.util.Pair;

public class ContextTest {

  private final RSession rsession = new TestRSession();
  private final GNUR R = new GNUR(rsession);

  @Test
  public void testFindLocals() {
    var fun =
        (CloSXP)
            R.eval(
                """
                                        function (x) {
                                          y$a$b <- 1
                                          z$b <- 2
                                          zz <- a$b
                                          x + zz + z
                                        }
                                        """);

    var ctx = Context.functionContext(fun);
    assertThat(ctx.findLocals(fun.body())).containsExactly("y", "z", "zz");
  }

  @Test
  public void testFindLocalsInFormals() {
    var fun =
        (CloSXP)
            R.eval(
                """
                                        function(x, y={ x<- 1}) {
                                          y; x
                                        }
                                        """);

    var ctx = Context.functionContext(fun);
    assertThat(ctx.findLocals(fun.formals())).containsExactly("x");
  }

  @Test
  public void testFindLocalsWithShadowing() {
    var fun =
        (CloSXP)
            R.eval(
                """
                                        function (f, x, y) {
                                            local <- f
                                            local(x <- y)
                                            x
                                        }
                                        """);

    var ctx = Context.functionContext(fun);
    var locals = new HashSet<>();
    locals.addAll(ctx.findLocals(fun.formals()));
    locals.addAll(ctx.findLocals(fun.body()));
    assertThat(locals).containsExactly("local", "x");
  }

  @SuppressWarnings("OptionalGetWithoutIsPresent")
  @Test
  public void testBindingInNestedFunction() {
    var fun =
        (CloSXP)
            R.eval(
                """
                                        f <- function(x, y=1) {
                                            a <- 1
                                            function (z) {
                                                b <- 2
                                                x + y + z + a + b
                                            }
                                        }
                                        f()
                                        """);

    var ctx = Context.functionContext(fun);
    System.out.println(ctx);

    var x = ctx.resolve("x");
    assertThat(x).hasValue(new Pair<>(fun.env(), SEXPs.MISSING_ARG));

    var y = ctx.resolve("y").get();
    assertThat(y.first()).isEqualTo(fun.env());
    assertThat(y.second()).isInstanceOf(PromSXP.class);

    var a = ctx.resolve("a").get();
    assertThat(a.first()).isEqualTo(fun.env());
    assertThat(a.second()).isEqualTo(SEXPs.real(1));

    var z = ctx.resolve("z").get();
    assertThat(z.second()).isEqualTo(SEXPs.UNBOUND_VALUE);

    var b = ctx.resolve("b").get();
    assertThat(b.second()).isEqualTo(SEXPs.UNBOUND_VALUE);
  }

  @Test
  public void testFindLocalsWithShadowingInOtherEnvironment() {
    /*
    > local <- function(a) a
    > f <- function(y) { local(x <- y); x }
    > compiler:::findLocals(body(f), compiler:::make.toplevelContext(compiler:::makeCenv(environment(f))))
    > [1] "x"
    > f(42)
    > [1] 42
    */

    var fun =
        (CloSXP)
            R.eval(
                """
                                        f <- function() {
                                            local <- function(a) a
                                            function (y) {
                                                local(x <- y)
                                                x
                                            }
                                        }
                                        f()
                                        """);

    var ctx = Context.functionContext(fun);
    assertThat(ctx.findLocals(fun.body())).containsExactly("x");
  }

  @Test
  public void testFrameTypes() {
    var fun = (CloSXP) R.eval("tools:::Rcmd");
    System.out.println(fun);
  }
}
