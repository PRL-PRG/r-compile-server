package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.*;

import java.io.File;
import java.util.Set;
import java.util.function.Consumer;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.TestInfo;
import org.prlprg.AbstractGNURBasedTest;
import org.prlprg.bc.BCCompiler;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler;
import org.prlprg.sexp.*;
import org.prlprg.util.Files;

public class BC2CCompilerTest extends AbstractGNURBasedTest {

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
  public void testCallSpecial() throws Exception {
    compileAndCall(
        """
                  function (...) { return(...) }
                  """,
        "list(1L)",
        (IntSXP v) -> {
          assertEquals(1, v.size());
          assertEquals(1, v.asInt(0));
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

  <T extends SEXP> void compileAndCall(String code, String env, Consumer<T> validator)
      throws Exception {
    // FIXME: this is stupid - we just want to have the test name generate the same name
    var name = Math.abs(code.hashCode());

    var funName = "f_" + name;
    var fileName = "test-" + name;

    var tempDir = java.nio.file.Files.createTempDirectory("test-" + name + "-").toFile();
    var cFile = new File(tempDir, funName + ".c");
    var cpFile = new File(tempDir, fileName + ".RDS");
    var soFile = new File(tempDir, funName + ".so");
    var rFile = new File(tempDir, "driver.R");

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

      RDSWriter.writeFile(rsession, cpFile, SEXPs.vec(cConsts));

      Files.writeString(cFile.toPath(), cCode.toString());

      RshCompiler.getInstance().compileShared(cFile, soFile);

      String testDriver =
          "dyn.load('%s')\n".formatted(soFile.getAbsolutePath())
              + "cp <- readRDS('%s')\n".formatted(cpFile.getAbsolutePath())
              + "env <- as.environment(%s)\n".formatted(env)
              + "parent.env(env) <- globalenv()\n"
              + "res <- .Call('%s', env, cp, '%s')\n".formatted(funName, name)
              + "dyn.unload('%s')\n".formatted(soFile.getAbsolutePath())
              + "res\n";

      Files.writeString(rFile.toPath(), testDriver);

      var res = R.eval("source('%s', local=F)$value".formatted(rFile.getAbsolutePath()));

      System.out.println(res);

      validator.accept((T) res);

      Set.of(cFile, cpFile, soFile, rFile).forEach(File::deleteOnExit);
    } catch (AssertionError | Exception e) {
      throw new RuntimeException("BC2C compilation failed. Temp: " + tempDir.getAbsolutePath(), e);
    }
  }
}
