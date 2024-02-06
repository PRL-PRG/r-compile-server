package org.prlprg.bc;

import org.junit.jupiter.api.Test;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.Pair;

import java.util.HashSet;

import static com.google.common.truth.Truth.assertThat;

public class ContextTest {
    @Test
    public void testFindLocals() {
        var fun = R.eval("""
                function (x) {
                    y$a$b <- 1
                    z$b <- 2
                    zz <- a$b
                    x + zz + z
                }
                """).cast(CloSXP.class);

        var ctx = Context.functionContext(fun);
        var locals = new HashSet<>();
        locals.addAll(ctx.findLocals(fun.formals()));
        locals.addAll(ctx.findLocals(fun.body()));
        assertThat(locals).containsExactly("y", "z", "zz");
    }

    @Test
    public void testFindLocalsWithShadowing() {
        var fun = R.eval("""
                function (f, x, y) {
                    local <- f
                    local(x <- y)
                    x
                }
                """).cast(CloSXP.class);

        var ctx = Context.functionContext(fun);
        var locals = new HashSet<>();
        locals.addAll(ctx.findLocals(fun.formals()));
        locals.addAll(ctx.findLocals(fun.body()));
        assertThat(locals).containsExactly("local", "x");
    }

    @SuppressWarnings("OptionalGetWithoutIsPresent")
    @Test
    public void testBindingInNestedFunction() {
        var fun = R.eval("""
                f <- function(x, y=1) {
                    a <- 1
                    function (z) {
                        b <- 2
                        x + y + z + a + b
                    }
                }
                f()
                """).cast(CloSXP.class);

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

        var fun = R.eval("""
                f <- function() {
                    local <- function(a) a
                    function (y) {
                        local(x <- y)
                        x
                    }
                }
                f()
                """).cast(CloSXP.class);

        var ctx = Context.functionContext(fun);
        assertThat(ctx.findLocals(fun.body())).containsExactly("x");
    }

    @Test
    public void testFrameTypes() {
        var fun = R.eval("tools:::Rcmd").cast(CloSXP.class);
        System.out.println(fun);
    }
}
