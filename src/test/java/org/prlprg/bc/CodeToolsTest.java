package org.prlprg.bc;

import org.junit.jupiter.api.Test;
import org.prlprg.compile.CodeTools;
import org.prlprg.rds.RDSReader;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;

import java.io.File;
import java.io.PrintWriter;

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

            var code = String.format("saveRDS(eval(parse(file=\"%s\")), \"%s\")", sourceFile.getAbsoluteFile(), targetFile.getAbsoluteFile());
            runCode(code);

            var sxp = RDSReader.readFile(targetFile).cast();

            assert (sourceFile.delete());
            assert (targetFile.delete());

            return sxp;
        } catch (Exception e) {
            throw new RuntimeException("Unable to parse R source", e);
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

public class CodeToolsTest {
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

        var locals = CodeTools.findLocals(fun.formals(), fun.body());
        assertThat(locals).containsExactly("y", "z", "zz");
    }
}
