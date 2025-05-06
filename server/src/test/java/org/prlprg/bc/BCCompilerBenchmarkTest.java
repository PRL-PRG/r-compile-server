package org.prlprg.bc;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.TestInstance;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.StrSXP;
import org.prlprg.sexp.VecSXP;
import org.prlprg.util.Files;
import org.prlprg.util.Strings;
import org.prlprg.util.gnur.GNUR;
import org.prlprg.util.gnur.GNURTestSupport;

@GNURTestSupport
@TestInstance(TestInstance.Lifecycle.PER_CLASS)
public class BCCompilerBenchmarkTest implements StdlibClosuresSource {
  private final GNUR R;

  public BCCompilerBenchmarkTest(GNUR R) {
    this.R = R;
  }

  @Override
  public SEXP eval(String source) {
    return R.eval(source);
  }

  @Test
  public void testBenchmark() {
    var funStrings =
        (VecSXP)
            eval(
                """
                    pkgs <- c("base", "utils", "compiler", "tools", "stats")
                    orig <- do.call(c, sapply(pkgs, \\(name) {
                        namespace <- getNamespace(name)
                        names <- ls(namespace, all.names = TRUE)
                        vars <- sapply(names, \\(n) get(n, envir=namespace))
                        funs <- Filter(\\(v) typeof(v) == "closure" && identical(environment(v), namespace), vars)
                        sapply(funs, deparse)
                    }))
                    attributes(orig) <- NULL
                    orig
                    """);

    var funs =
        funStrings.stream()
            .map(
                code -> {
                  var temp =
                      Files.writeString(((StrSXP) code).stream().collect(Strings.joining("\n")));
                  try {
                    return (CloSXP) R.eval("eval(parse('" + temp + "'))");
                  } finally {
                    Files.delete(temp);
                  }
                })
            .toList();

    // Warmup the JVM
    for (int i = 0; i < 10; i++) {
      var compiler = new BCCompiler(funs.get(i), R.getSession());
      compiler.setOptimizationLevel(3);
      compiler.compile();
    }

    var start = System.currentTimeMillis();
    for (var fun : funs) {
      var compiler = new BCCompiler(fun, R.getSession());
      compiler.setOptimizationLevel(3);
      compiler.compile();
    }
    var end = System.currentTimeMillis();

    System.err.println("Total: " + funs.size());
    System.out.println("" + (end - start) / 1000.0);
  }
}
