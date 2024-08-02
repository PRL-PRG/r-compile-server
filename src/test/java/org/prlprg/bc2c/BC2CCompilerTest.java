package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.*;

import org.prlprg.sexp.*;

/*
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
    compileAndCall(
        """
          function () { 42 }
          """,
        "list(x=42)",
        (RealSXP v) -> {
          assertEquals(42.0, v.asReal(0));
        });
  }

  @Test
  public void testGetVar() throws Exception {
    compileAndCall(
        """
              function (x) { x }
              """,
        "list(x=42)",
        (RealSXP v) -> {
          assertEquals(42.0, v.asReal(0));
        });
  }

  @Test
  public void testSetVar() throws Exception {
    compileAndCall(
        """
                  function () { x <- 42; x }
                  """,
        "list(x=42)",
        (RealSXP v) -> {
          assertEquals(42.0, v.asReal(0));
        });
  }

  @Test
  public void testGetAndSetVar() throws Exception {
    compileAndCall(
        """
                          function (x) { y <- x; y }
                          """,
        "list(x=42)",
        (RealSXP v) -> {
          assertEquals(42.0, v.asReal(0));
        });
  }

  @Test
  public void test3() throws Exception {
    compileAndCall(
        """
          function (x) { y <- x + 42; y + 42 }
          """,
        "list(x=1)",
        (RealSXP v) -> {
          assertEquals(85.0, v.asReal(0));
        });
  }

  @Test
  public void testCall() throws Exception {
    compileAndCall(
        """
          function () { timestamp() }
          """,
        "list()",
        (StrSXP v) -> {
          assertEquals(1, v.size());
          assertTrue(v.get(0).startsWith("##------"));
          assertTrue(v.get(0).endsWith("------##"));
        });
  }

  @Test
  public void testSumIn0Loop() throws Exception {
    compileAndCall(
        """
          function (n) {
            s <- 0
            i <- 0
            while (i < n) {
              s <- s + i
              i <- i + 1
            }
            s
          }
          """,
        "list(n=100)",
        (RealSXP v) -> {
          assertEquals(4950.0, v.asReal(0));
        });
  }

  @Test
  public void testList(TestInfo info) throws Exception {
    compileAndCall(
        """
                function (x) { list(1,2,3,x=x) }
            """,
        "list(x=4)",
        (VecSXP v) -> {
          assertArrayEquals(new Double[] {1.0, 2.0, 3.0, 4.0}, v.coerceTo(Double.class));
          assertEquals("x", v.names().get(3));
        });
  }

  @Test
  public void testEq(TestInfo info) throws Exception {
    compileAndCall(
        """
                            function (x) { x == 1 }
                        """,
        "list(x=1)",
        (LglSXP v) -> {
          assertEquals(SEXPs.TRUE, v);
        });
  }

  @Test
  public void testIfElse(TestInfo info) throws Exception {
    compileAndCall(
        """
                    function (x) { if (x == 1) 1 else if (x == 2) 2 else 3 }
                """,
        "list(x=2)",
        (RealSXP v) -> {
          assertEquals(2.0, v.asReal(0));
          assertEquals(1, v.size());
        });
  }

  <T extends SEXP> void compileAndCall(String code, String env, Consumer<T> validator)
      throws Exception {
    var funName = "f";
    var fileName = "test";

    var tempDir = java.nio.file.Files.createTempDirectory("test-bc2cc").toFile();
    var cFile = new File(tempDir, funName + ".c");
    var cpFile = new File(tempDir, fileName + ".RDS");
    var soFile = new File(tempDir, funName + ".so");
    var rFile = new File(tempDir, "driver.R");
    var makeFile = new File(tempDir, "Makefile");

    Files.clearDirectory(tempDir.toPath());

    var closure = (CloSXP) R.eval(code);
    var ast2bc = new BCCompiler(closure, rsession);

    // FIXME: just for now as we do not support guards
    ast2bc.setOptimizationLevel(3);
    var bc =
        ast2bc
            .compile()
            .orElseThrow(() -> new RuntimeException("Compilation did not produce byte code"));

    try {
      var bc2c = new BC2CCompiler(funName, bc);
      var cCode = bc2c.compile();
      var cConsts = bc2c.constants();

      RDSWriter.writeFile(cpFile, SEXPs.vec(cConsts));

      Files.writeString(cFile.toPath(), cCode.toString());

      RshCompiler.getInstance().compileShared(cFile, soFile);

      String testDriver =
          "dyn.load('%s')\n".formatted(soFile.getAbsolutePath())
              + "cp <- readRDS('%s')\n".formatted(cpFile.getAbsolutePath())
              + "env <- as.environment(%s)\n".formatted(env)
              + "parent.env(env) <- globalenv()\n"
              + "res <- .Call('%s', env, cp)\n".formatted(funName)
              + "dyn.unload('%s')\n".formatted(soFile.getAbsolutePath())
              + "res\n";

      Files.writeString(rFile.toPath(), testDriver);

      // FIXME: UGLY - define a utility to copy file from resource folder
      Files.writeString(
          makeFile.toPath(),
          Files.readString(
              Files.pathFromFileUrl(
                  Objects.requireNonNull(getClass().getResource("Makefile")).toURI().toURL())));

      var res = R.eval("source('%s', local=F)$value".formatted(rFile.getAbsolutePath()));

      System.out.println(res);

      validator.accept((T) res);

      System.out.println(tempDir.getAbsolutePath());
      // Set.of(cFile, cpFile, soFile, rFile, makeFile).forEach(File::deleteOnExit);
    } catch (AssertionError e) {
      throw new CCompilationException("<no command>", cFile, e);
    }
  }
}

*/
