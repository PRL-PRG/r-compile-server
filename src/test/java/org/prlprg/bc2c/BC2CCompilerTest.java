package org.prlprg.bc2c;

import static org.junit.jupiter.api.Assertions.*;
import static org.prlprg.util.Files.clearDirectory;

import com.google.common.io.Files;
import java.io.File;
import java.io.OutputStreamWriter;
import java.nio.charset.Charset;
import java.util.function.Consumer;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.TestInfo;
import org.prlprg.AbstractGNURBasedTest;
import org.prlprg.bc.BCCompiler;
import org.prlprg.rds.RDSWriter;
import org.prlprg.service.RshCompiler;
import org.prlprg.sexp.*;

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

    clearDirectory(tempDir.toPath());

    var closure = (CloSXP) R.eval(code);
    var ast2bc = new BCCompiler(closure, rsession);

    // FIXME: just for now as we do not support guards
    ast2bc.setOptimizationLevel(3);
    var bc =
        ast2bc
            .compile()
            .orElseThrow(() -> new RuntimeException("Compilation did not produce byte code"));

    var bc2c = new BC2CCompiler(funName, bc);
    var cCode = bc2c.compile();
    var cConsts = bc2c.constants();

    try {
      RDSWriter.writeFile(rsession, cpFile, SEXPs.vec(cConsts));

      // TODO: a utility method
      try (var cOut = Files.asCharSink(cFile, Charset.defaultCharset()).openBufferedStream()) {
        cCode.writeTo(cOut);
      }
      cCode.writeTo(new OutputStreamWriter(System.out));

      RshCompiler.getInstance().compileShared(cFile, soFile);

      String testDriver =
          "dyn.load('%s')\n".formatted(soFile.getAbsolutePath())
              + "cp <- readRDS('%s')\n".formatted(cpFile.getAbsolutePath())
              + "env <- as.environment(%s)\n".formatted(env)
              + "res <- .Call('%s', env, cp, '%s')\n".formatted(funName, name)
              + "dyn.unload('%s')\n".formatted(soFile.getAbsolutePath())
              + "res\n";

      try (var out = Files.asCharSink(rFile, Charset.defaultCharset()).openBufferedStream()) {
        out.write(testDriver);
      }

      var res = R.eval("source('%s', local=F)$value".formatted(rFile.getAbsolutePath()));

      System.out.println(res);

      validator.accept((T) res);
      // GNUR.cmd("SHLIB", "-o", soFile.getPath(), oFile.getPath());
    } catch (AssertionError | Exception e) {
      System.err.println(tempDir.getAbsolutePath());
      throw e;
    }
  }
}
