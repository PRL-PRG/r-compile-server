package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.*;

import java.io.File;
import java.util.Objects;
import java.util.function.Consumer;
import org.junit.jupiter.api.Test;
import org.prlprg.AbstractGNURBasedTest;
import org.prlprg.bc.BCCompiler;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler;
import org.prlprg.sexp.*;
import org.prlprg.util.Files;

// FIXME: move to the compiler
class CCompilationException extends Exception {
  private final String command;
  private final File cFile;

  public CCompilationException(String command, File cFile, Throwable cause) {
    super(cause);
    this.command = command;
    this.cFile = cFile;
  }

  @Override
  public String getMessage() {
    var sb = new StringBuilder();
    sb.append("Compilation failed\n").append("Command: ").append(command).append("\n");
    if (cFile.exists()) {
      sb.append("File: ")
          .append(cFile.getAbsolutePath())
          .append("\n")
          .append(Files.readString(cFile.toPath()))
          .append("\n");
    } else {
      sb.append("No file\n");
    }
    return sb.toString();
  }
}

public class BC2CCompilerTest extends AbstractGNURBasedTest {

  @Test
  public void testReturn() throws Exception {
    verify("42", (RealSXP v) -> assertEquals(42.0, v.asReal(0)));
  }

  //  @Test
  //  public void testGetVar() throws Exception {
  //    verify(
  //        """
  //           function (x) { x }
  //           """,
  //        "list(x=42)",
  //        (RealSXP v) -> assertEquals(42.0, v.asReal(0)));
  //  }

  @Test
  public void testSetVar() throws Exception {
    verify("x <- 42; x", (RealSXP v) -> assertEquals(42.0, v.asReal(0)));
  }

  //  @Test
  //  public void testGetAndSetVar() throws Exception {
  //    verify(
  //        """
  //          function (x) { y <- x; y }
  //          """,
  //        "list(x=42)",
  //        (RealSXP v) -> {
  //          assertEquals(42.0, v.asReal(0));
  //        });
  //  }

  @Test
  public void testSetVar2() throws Exception {
    verify("y <- 42; x <- y; x", (RealSXP v) -> assertEquals(42.0, v.asReal(0)));
  }

  @Test
  public void testAdd() throws Exception {
    verify("x <- 42; x + 21", (RealSXP v) -> assertEquals(63.0, v.asReal(0)));

    verify("x <- 42L; x + 21L", (IntSXP v) -> assertEquals(63, v.asInt(0)));

    verify("x <- 42L; x + 21", (RealSXP v) -> assertEquals(63.0, v.asReal(0)));

    verify(
        "x <- 42; x + c(1, 2)",
        (RealSXP v) -> {
          assertEquals(2, v.size());
          assertEquals(43.0, v.asReal(0));
          assertEquals(44.0, v.asReal(1));
        });

    verify(
        "x <- c(42, 43); x + c(1, 2)",
        (RealSXP v) -> {
          assertEquals(2, v.size());
          assertEquals(43.0, v.asReal(0));
          assertEquals(45.0, v.asReal(1));
        });
  }

  @Test
  public void testCompareScalars() throws Exception {
    verify("x <- 42; x < 100", (LglSXP v) -> assertEquals(SEXPs.TRUE, v));
  }

  @Test
  public void testCall() throws Exception {
    verify(
        "timestamp()",
        (StrSXP v) -> {
          assertEquals(1, v.size());
          assertTrue(v.get(0).startsWith("##------"));
          assertTrue(v.get(0).endsWith("------##"));
        });
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
        (RealSXP v) -> assertEquals(4950.0, v.asReal(0)));
  }

  @Test
  public void testNA() throws Exception {
    verify("x <- TRUE;  y <- x; is.na(y)", (LglSXP v) -> assertEquals(SEXPs.FALSE, v));
    verify("x <- FALSE; y <- x; is.na(y)", (LglSXP v) -> assertEquals(SEXPs.FALSE, v));
    verify("x <- NA;    y <- x; is.na(y)", (LglSXP v) -> assertEquals(SEXPs.TRUE, v));
    verify("y <- NA_integer_; is.na(y)", (LglSXP v) -> assertEquals(SEXPs.TRUE, v));
  }

  //  @Test
  //  public void testList(TestInfo info) throws Exception {
  //    compileAndCall(
  //        """
  //                function (x) { list(1,2,3,x=x) }
  //            """,
  //        "list(x=4)",
  //        (VecSXP v) -> {
  //          assertArrayEquals(new Double[] {1.0, 2.0, 3.0, 4.0}, v.coerceTo(Double.class));
  //          assertEquals("x", v.names().get(3));
  //        });
  //  }
  //
  //  @Test
  //  public void testEq(TestInfo info) throws Exception {
  //    compileAndCall(
  //        """
  //                            function (x) { x == 1 }
  //                        """,
  //        "list(x=1)",
  //        (LglSXP v) -> {
  //          assertEquals(SEXPs.TRUE, v);
  //        });
  //  }
  //
  //  @Test
  //  public void testIfElse(TestInfo info) throws Exception {
  //    compileAndCall(
  //        """
  //                    function (x) { if (x == 1) 1 else if (x == 2) 2 else 3 }
  //                """,
  //        "list(x=2)",
  //        (RealSXP v) -> {
  //          assertEquals(2.0, v.asReal(0));
  //          assertEquals(1, v.size());
  //        });
  //  }

  <T extends SEXP> T verify(String code) throws Exception {
    var funName = "f";
    var fileName = "test";

    var tempDir = java.nio.file.Files.createTempDirectory("test-bc2cc").toFile();
    var cFile = new File(tempDir, funName + ".c");
    var cpFile = new File(tempDir, fileName + ".RDS");
    var soFile = new File(tempDir, funName + ".so");
    var rFile = new File(tempDir, "driver.R");
    var makeFile = new File(tempDir, "Makefile");

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
      var bc2c =
          new BC2CCompiler(funName, bc) {
            @Override
            protected void beforeCompile() {
              super.beforeCompile();
              body.line("Rsh_initialize_runtime();");
            }
          };

      var cCode = bc2c.compile();
      var cConsts = bc2c.constants();

      RDSWriter.writeFile(rsession, cpFile, SEXPs.vec(cConsts));

      Files.writeString(cFile.toPath(), cCode.toString());

      RshCompiler.getInstance(0)
          .createBuilder(cFile.getPath(), soFile.getPath())
          .flag("-shared")
          .flag("-DRSH_TESTS")
          .compile();

      String testDriver =
          "dyn.load('%s')\n".formatted(soFile.getAbsolutePath())
              + "cp <- readRDS('%s')\n".formatted(cpFile.getAbsolutePath())
              + "env <- new.env()\n"
              + "parent.env(env) <- globalenv()\n"
              + "res <- .Call('%s', env, cp)\n".formatted(funName)
              + "dyn.unload('%s')\n".formatted(soFile.getAbsolutePath())
              + "res\n";

      Files.writeString(rFile.toPath(), testDriver);

      // FIXME: UGLY - define a utility to copy file from resource folder
      // FIXME: do this only when we do not delete the directory
      Files.writeString(
          makeFile.toPath(),
          Files.readString(
              Files.pathFromFileUrl(
                  Objects.requireNonNull(getClass().getResource("Makefile")).toURI().toURL())));

      var res = R.eval("source('%s', local=F)$value".formatted(rFile.getAbsolutePath()));

      System.out.println(res);
      System.out.println(tempDir.getAbsolutePath());

      return (T) res;
      // Set.of(cFile, cpFile, soFile, rFile, makeFile).forEach(File::deleteOnExit);
    } catch (AssertionError | ClassCastException e) {
      throw new CCompilationException("<no command>", cFile, e);
    }
  }

  <T extends SEXP> void verify(String code, Consumer<T> validator) throws Exception {
    validator.accept(verify(code));
  }
}
