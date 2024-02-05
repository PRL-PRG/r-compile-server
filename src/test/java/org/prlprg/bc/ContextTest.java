package org.prlprg.bc;

import org.junit.jupiter.api.Test;
import org.prlprg.rds.RDSReader;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

import java.io.File;
import java.io.PrintWriter;
import java.util.HashSet;
import java.util.Optional;

import static com.google.common.truth.Truth.assertThat;

class R {
    public static final String R_BIN = "R";

    public static SEXP eval(String source) {
        try {
            var sourceFile = File.createTempFile("RCS-test", ".R");
            var targetFile = File.createTempFile("RCS-test", ".rds");

            try (var w = new PrintWriter(sourceFile)) {
                w.println(source);
            }

            var code = String.format("saveRDS(eval(parse(file=\"%s\")), \"%s\", compress=FALSE)", sourceFile.getAbsoluteFile(), targetFile.getAbsoluteFile());
            runCode(code);

            var sxp = RDSReader.readFile(targetFile).cast();

            assert (sourceFile.delete());
            assert (targetFile.delete());

            return sxp;
        } catch (Exception e) {
            throw new RuntimeException("Unable to eval R source", e);
        }
    }

    private static void runCode(String code) {
        try {
            var pb = new ProcessBuilder(R_BIN, "--slave", "--vanilla", "--no-save", "-e", code).redirectErrorStream(true);
            var proc = pb.start();
            var output = new String(proc.getInputStream().readAllBytes());
            var exit = proc.waitFor();
            if (exit != 0) {
                throw new RuntimeException("R exited with code " + exit + ":\n" + output);
            }
        } catch (Exception e) {
            throw new RuntimeException("Unable to run R code: " + code, e);
        }
    }
}

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

        var x = ctx.binding("x");
        assertThat(x).hasValue(new Binding(fun.env(), Optional.of(SEXPs.MISSING_ARG)));

        var y = ctx.binding("y").get();
        assertThat(y.env()).isEqualTo(fun.env());
        assertThat(y.value().get()).isInstanceOf(PromSXP.class);

        var a = ctx.binding("a").get();
        assertThat(a.env()).isEqualTo(fun.env());
        assertThat(a.value()).isEqualTo(Optional.of(SEXPs.real(1)));

        var z = ctx.binding("z").get();
        assertThat(z.value()).isEmpty();

        var b = ctx.binding("b").get();
        assertThat(b.value()).isEmpty();
    }

    @Test
    public void testFindLocalsWithShadowingInOtherEnvironment() {
    }

    @Test
    public void testFrameTypes() {
        var fun = R.eval("tools:::Rcmd").cast(CloSXP.class);
        System.out.println(fun);
    }
}
