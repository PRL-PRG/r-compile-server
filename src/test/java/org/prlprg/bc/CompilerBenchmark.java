package org.prlprg.bc;

import com.google.common.collect.Streams;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.stream.Stream;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.Arguments;
import org.junit.jupiter.params.provider.MethodSource;
import org.prlprg.sexp.*;
import org.prlprg.util.AbstractGNURBasedTest;
import org.prlprg.util.Tests;

public class CompilerBenchmark extends AbstractGNURBasedTest implements Tests {
  private PrintWriter output;

  @BeforeAll
  void setupOutput() throws IOException {
    var outputFilename = System.getenv("OUTPUT_FILENAME");
    outputFilename = outputFilename == null ? "benchmark.csv" : outputFilename;
    output = new PrintWriter(new FileWriter(outputFilename, true));
  }

  @AfterAll
  void tearDownOutput() throws IOException {
    output.close();
  }

  @ParameterizedTest
  @MethodSource("stdlibFunctionsList")
  public void benchmarkAll(String name) {
    assertBytecode(name, 2, output);
    assertBytecode(name, 3, output);
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

  private static final int TIMES = 15;

  private void assertBytecode(String funName, int optimizationLevel, PrintWriter output) {
    String compileCode =
        "compiler::cmpfun(" + funName + ", options = list(optimize=" + optimizationLevel + "))";

    String code =
        "b <- microbenchmark::microbenchmark("
            + compileCode
            + ", times="
            + TIMES
            + "); list(as.integer(summary(b$time)), "
            + compileCode
            + ")";

    var res = (VecSXP) R.eval(code);
    var gnurTimesNS = ((IntSXP) res.get(0));
    var gnurFun = (CloSXP) res.get(1);
    var astFun =
        SEXPs.closure(gnurFun.formals(), gnurFun.bodyAST(), gnurFun.env(), gnurFun.attributes());

    // if a function calls browser() it won't be compiled into bytecode
    if (gnurFun.body() instanceof BCodeSXP gnurBc) {
      var ourTimesNS = new long[TIMES];
      var eq = false;

      for (int i = 0; i < TIMES; i++) {
        var ourTimeNS = System.nanoTime();
        var ourBody = compile(astFun, optimizationLevel);
        ourTimesNS[i] = System.nanoTime() - ourTimeNS;

        if (ourBody instanceof BCodeSXP ourBc) {
          eq = gnurBc.equals(ourBc);
          if (!eq) {
            System.err.println("EE: Bytecode mismatch for " + funName);
            return;
          }
        } else {
          System.err.println("EE: Bytecode mismatch for " + funName);
          return;
        }
      }

      var ourMeanNS = mean(ourTimesNS);
      var gnurMeanNS = gnurTimesNS.get(4);

      output.printf(
          "\"%s\",%d,%d,%d,%f,%f%n",
          funName,
          optimizationLevel,
          gnurBc.bc().code().size(),
          gnurBc.bc().consts().size(),
          gnurMeanNS / 1e6,
          ourMeanNS / 1e6);
    }
  }

  private long mean(long[] ourTimesNS) {
    return Arrays.stream(ourTimesNS).sum() / ourTimesNS.length;
  }

  private long median(long[] ourTimesNS) {
    Arrays.sort(ourTimesNS);
    return ourTimesNS[ourTimesNS.length / 2];
  }

  private SEXP compile(CloSXP fun, int optimizationLevel) {
    var compiler = new Compiler(fun, rsession);
    compiler.setOptimizationLevel(optimizationLevel);
    return compiler.compile().<SEXP>map(SEXPs::bcode).orElse(fun.body());
  }
}
