package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.*;
import static org.junit.jupiter.api.Assertions.assertEquals;

import java.io.File;
import java.util.Objects;
import java.util.function.Consumer;
import java.util.function.Function;
import org.junit.jupiter.api.Test;
import org.prlprg.GNURBasedTests;
import org.prlprg.RDSSnapshotTest;
import org.prlprg.bc.BCCompiler;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler;
import org.prlprg.session.RSession;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.sexp.VecSXP;
import org.prlprg.util.Either;
import org.prlprg.util.Files;
import org.prlprg.util.Pair;
import org.prlprg.util.ThrowingSupplier;

public class BC2CCompilerTest extends RDSSnapshotTest<BC2CCompilerTest.TestResult>
    implements GNURBasedTests {

  @Test
  public void testReturn() throws Exception {
    verify("42");
  }

  @Test
  public void testSetAndGetVar() throws Exception {
    verify("x <- 42; x");
    verify("y <- 42; x <- y; x");
  }

  @Test
  public void testAdd() throws Exception {
    verify("x <- 42; x + 21", fastArith());

    verify("x <- 42L; x + 21L", fastArith());

    verify("x <- 42L; x + 21", fastArith());

    verify("x <- 42; x + c(1, 2)");

    verify("x <- c(42, 43); x + c(1, 2)");

    verify("x <- 42L; x + c(1, 2)");

    verify("x <- c(42, 43); x + c(1, 2)");
  }

  @Test
  public void testRealScalarArith() throws Exception {
    verify("x <- 42; x + 21", fastArith());
    verify("x <- 42; x - 21", fastArith());
    verify("x <- 42; x * 2", fastArith());
    verify("x <- 42; x / 2", fastArith());
    verify("x <- 42; x ^ 2", fastArith());
  }

  @Test
  public void testIntScalarArith() throws Exception {
    verify("x <- 42L; x + 21L", fastArith());
    verify("x <- 42L; x - 21L", fastArith());
    verify("x <- 42L; x * 2L", fastArith());
    verify("x <- 42L; x / 2L", fastArith());
  }

  // TODO: do some property based testing including NA using R as an oracle

  @Test
  public void testArithBuiltins() throws Exception {
    verify("x <- 42; x %% 5");
    verify("x <- 42; x %/% 5");
  }

  @Test
  public void testMath1Builtins() throws Exception {
    verify("sqrt(4)", fastMath1());
    verify("sqrt(4L)", fastMath1());
    verify("exp(0L)", fastMath1());
    verify("exp(0)", fastMath1());
    verify("sqrt(c(4,9))", fastMath1());
  }

  @Test
  public void testUnaryBuiltins() throws Exception {
    verify("x <- 42; +x", fastUnary());
    verify("x <- 42; -x", fastUnary());
    verify("x <- -42; +x", fastUnary());
    verify("x <- -42; -x", fastUnary());
    verify("x <- 42L; +x", fastUnary());
    verify("x <- 42L; -x", fastUnary());
    verify("x <- -42L; +x", fastUnary());
    verify("x <- -42L; -x", fastUnary());
    verify("x <- c(1, -2); -x");
  }

  @Test
  public void testScalarCompare() throws Exception {
    verify("x <- 42; x < 100", fastRelop());
    verify("x <- 42; x > 100", fastRelop());
    verify("x <- 42; x <= 42", fastRelop());
    verify("x <- 42; x >= 42", fastRelop());
    verify("x <- 42; x == 42", fastRelop());
    verify("x <- 42; x == 100", fastRelop());
    verify("x <- 42; x != 42", fastRelop());
    verify("x <- 42; x != 100", fastRelop());
  }

  @Test
  public void testBooleanOperators() throws Exception {
    verify("x <- TRUE; y <- FALSE; x & y");
    verify("x <- TRUE; y <- FALSE; x | y");
    verify("x <- TRUE; !x");
    verify("x <- 42; !!x");
    verify("x <- c(T,F,T,F); y <- c(T,T,F,F); x | y");
  }

  @Test
  public void testClosure() throws Exception {
    verify(
        """
                        y <- 21
                        f <- function (x) { x + y }
                        f(42)
                        """,
        fastArith());
  }

  @Test
  public void testNonBytecodeClosure() throws Exception {
    verify(
        """
                        f <- function (x) { if (x) { browser() }; 1 }
                        f(FALSE)
                        """);
  }

  @Test
  public void testNestedClosures() throws Exception {
    verify(
        """
                        a <- 1
                        f <- function(z) {
                          c <- 2
                          g <- function(y) {
                            e <- 3
                            h <- function(x) {
                                a + c + e + x + y + z
                            }
                            h
                          }
                          g(20)
                        }
                        f(10)(30)
                        """,
        returns(66.0));
  }

  @Test
  public void testCall() throws Exception {
    verify("str(42)");
  }

  @Test
  public void testSumIn0Loop() throws Exception {
    verify(
        """
                        n <- 100
                        s <- 0
                        i <- 0
                        while (i < n) {
                          s <- s + i
                          i <- i + 1
                        }
                        s
                        """,
        returns(4950.0));
  }

  @Test
  public void testNA() throws Exception {
    verify("x <- TRUE;  y <- x; is.na(y)");
    verify("x <- FALSE; y <- x; is.na(y)");
    verify("x <- NA;    y <- x; is.na(y)");
    verify("y <- NA_integer_; is.na(y)");
  }

  @Test
  public void testPromise() throws Exception {
    verify("f <- function(x) x + 1;  y <- 2; f(y*2)", returns(5.0));
  }

  @Test
  public void testIfElse() throws Exception {
    verify("x <- 1; if (x == 1) 1 else if (x == 2) 2 else 3", returns(1.0));
    verify("x <- 2; if (x == 1) 1 else if (x == 2) 2 else 3", returns(2.0));
    verify("x <- 3; if (x == 1) 1 else if (x == 2) 2 else 3", returns(3.0));
  }

  @Test
  public void testDollar() throws Exception {
    verify("x <- list(a=1, b=2); x$a", returns(1.0));
    verify("x <- list(a=2); x$b");
  }

  @Test
  public void testSubset() throws Exception {
    verify("x <- c(1, 2, 3); x[2]", returns(2.0));
    verify("x <- c(1, 2, 3); x[2L]", returns(2.0));
    verify("x <- c(1L, 2L, 3L); x[2L]", returns(2));
    verify("x <- list(1, 2, 3); x[3L]");
    verify("x <- list('a', 'b'); x[2]");
    verify("x <- data.frame(a=1, b=2, row.names=NULL); x['a']");
  }

  @Test
  public void testSubset2() throws Exception {
    verify("x <- c(1, 2, 3); x[[2]]");
    verify("x <- c(1, 2, 3); x[[2L]]");
    verify("x <- c(1L, 2L, 3L); x[[2L]]");
    verify("x <- list(1, 2, 3); x[[3L]]");
    verify("x <- list('a', 'b'); x[[2]]");
    verify("x <- data.frame(a=1, b=2, row.names=NULL); x[['a']]");
  }

  @Test
  public void testSubassign() throws Exception {
    verify("x <- c(1,2,3); x[1] <- 2; x");
    verify("x <- list(1,2,3); x[[1]] <- x; x");
  }

  @Test
  public void testGetIntBuiltin() throws Exception {
    verify("vector(length=2)");
  }

  // ----------------------------------------------------------------
  // Internals
  // ----------------------------------------------------------------

  record TestArtifact(Either<Exception, TestResult> result, File tempDir) {
    public void destroy() {
      Files.deleteRecursively(tempDir.toPath());
    }
  }

  // we do not persist the performance counters
  public record TestResult(String code, SEXP value, PerformanceCounters pc, String output) {}

  private int verifySeq = 0;

  @Override
  protected void checkEqual(TestResult expected, TestResult actual) {
    assertEquals(expected.code(), actual.code(), "Code is different");
    assertEquals(expected.value(), actual.value(), "Result is different");
    assertEquals(expected.output(), actual.output(), "Output is different");
  }

  @Override
  protected RSession getRSession() {
    return GNURBasedTests.Rsession;
  }

  @Override
  protected TestResult deserialize(SEXP sexp) {
    if (!(sexp instanceof VecSXP v) || v.size() != 3) {
      throw new IllegalArgumentException("Value must be a vector of size 3, got: " + sexp);
    }

    var codeSxp = v.get(0);
    var code =
        codeSxp
            .asScalarString()
            .orElseThrow(
                () -> new IllegalArgumentException("Expected code as string, got: " + codeSxp));

    var value = v.get(1);

    var outputSxp = v.get(2);
    var output =
        outputSxp
            .asScalarString()
            .orElseThrow(
                () -> new IllegalArgumentException("Expected a string output, got: " + outputSxp));

    // the performance counters are not kept in the snapshot
    return new TestResult(code, value, PerformanceCounters.EMPTY, output);
  }

  private Pair<SEXP, PerformanceCounters> splitValueAndPC(SEXP value) {
    if (!(value instanceof VecSXP v) || v.size() != 2) {
      throw new IllegalArgumentException(
          "Value first item must be a vector of size 2, got: " + value);
    }
    var res = v.get(0);
    var pc = PerformanceCounters.from(v.get(1));

    return Pair.of(res, pc);
  }

  @Override
  protected SEXP serialize(TestResult result) {
    return SEXPs.vec(SEXPs.string(result.code()), result.value(), SEXPs.string(result.output()));
  }

  TestArtifact compileAndCall(String code) throws Exception {
    // this has to be the same as in the test/resources/.../Makefile
    var prefix = "test";

    var tempDir = Files.createTempDirectory("test-bc2cc").toFile();
    var cFile = new File(tempDir, prefix + ".c");
    var cpFile = new File(tempDir, prefix + ".RDS");
    var soFile = new File(tempDir, prefix + ".so");
    var rFile = new File(tempDir, prefix + ".R");

    Files.clearDirectory(tempDir.toPath());

    var funCode = "function() {" + code + "}";
    var closure = (CloSXP) R.eval(funCode);
    var ast2bc = new BCCompiler(closure, rsession);

    // FIXME: just for now as we do not support guards
    ast2bc.setOptimizationLevel(3);
    var bc =
        ast2bc
            .compile()
            .orElseThrow(() -> new RuntimeException("Compilation did not produce byte code"));

    try {
      var name = "f_" + (bc.hashCode() < 0 ? "n" + -bc.hashCode() : bc.hashCode());
      var bc2c = new BC2CCompiler(bc, name);
      var module = bc2c.finish();

      RDSWriter.writeFile(cpFile, module.constantPool());

      Files.writeString(cFile.toPath(), module.file().toString());

      RshCompiler.getInstance(0)
          .createBuilder(cFile.getPath(), soFile.getPath())
          .flag("-shared")
          .flag("-DRSH_TESTS")
          .flag("-DRSH_PC")
          .compile();

      // FIXME: try global env
      String testDriver =
          "options(warn=1)\n"
              + "dyn.load('%s')\n".formatted(soFile.getAbsolutePath())
              + "cp <- readRDS('%s')\n".formatted(cpFile.getAbsolutePath())
              + "env <- new.env()\n"
              + "parent.env(env) <- globalenv()\n"
              + "invisible(.Call('Rsh_initialize_runtime'))\n"
              + "res <- .Call('%s', env, cp)\n".formatted(module.topLevelFunName())
              + "pc <- .Call('Rsh_pc_get')\n"
              + "dyn.unload('%s')\n".formatted(soFile.getAbsolutePath())
              + "list(res, pc)\n";

      Files.writeString(rFile.toPath(), testDriver);

      var nestedWithOutput =
          R.capturingEval("source('%s', local=F)$value".formatted(rFile.getAbsolutePath()));
      var pair = splitValueAndPC(nestedWithOutput.first());
      var res = new TestResult(code, pair.first(), pair.second(), nestedWithOutput.second());

      return new TestArtifact(Either.right(res), tempDir);
    } catch (Exception e) {
      return new TestArtifact(Either.left(e), tempDir);
    }
  }

  @SafeVarargs
  final void verify(String code, Consumer<TestResult>... extraChecks) throws Exception {
    var artifact = compileAndCall(code);
    try {
      if (artifact.result.isLeft()) {
        throw artifact.result.getLeft();
      } else {
        var res = artifact.result.getRight();
        doVerify(String.valueOf(++verifySeq), res, oracle(code));

        for (var check : extraChecks) {
          check.accept(res);
        }
        artifact.destroy();
      }
    } catch (Throwable e) {
      var makeFile = new File(artifact.tempDir, "Makefile");

      Files.copyURL(Objects.requireNonNull(getClass().getResource("Makefile")), makeFile.toPath());
      throw new RuntimeException(
          "Test failed - compilation dir: " + artifact.tempDir.getAbsolutePath(), e);
    }
  }

  private ThrowingSupplier<TestResult> oracle(String code) {
    return () -> {
      var res = R.capturingEval(code);
      return new TestResult(code, res.first(), PerformanceCounters.EMPTY, res.second());
    };
  }

  private Consumer<TestResult> fastArith() {
    return noSlow(PerformanceCounters::slowArith, "Expected fast arithmetics");
  }

  private Consumer<TestResult> fastMath1() {
    return noSlow(PerformanceCounters::slowArith, "Expected fast math1");
  }

  private Consumer<TestResult> fastUnary() {
    return noSlow(PerformanceCounters::slowUnary, "Expected fast math1");
  }

  private Consumer<TestResult> fastRelop() {
    return noSlow(PerformanceCounters::slowRelop, "Expected fast relop");
  }

  private Consumer<TestResult> noSlow(
      Function<PerformanceCounters, Integer> metric, String message) {
    return (r) -> assertEquals(0, metric.apply(r.pc()), message);
  }

  private Consumer<TestResult> returns(double expected) {
    return (r) -> assertEquals(expected, r.value().asScalarReal().orElseThrow(), expected);
  }

  private Consumer<TestResult> returns(int expected) {
    return (r) -> assertEquals(expected, r.value().asScalarInteger().orElseThrow(), expected);
  }
}
