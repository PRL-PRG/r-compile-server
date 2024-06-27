package org.prlprg.bc2c;

import com.google.common.io.Files;
import java.io.File;
import java.io.OutputStreamWriter;
import java.nio.charset.Charset;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.TestInfo;
import org.prlprg.bc.BCCompiler;
import org.prlprg.service.RshCompiler;
import org.prlprg.sexp.CloSXP;
import org.prlprg.util.AbstractGNURBasedTest;
import org.prlprg.util.Tests;

public class BC2CCompilerTest extends AbstractGNURBasedTest implements Tests {

  @Test
  public void test3(TestInfo info) throws Exception {
    testCall(
        info,
        """
                function (x) { y <- x + 42; y + 42 }
            """,
        "42");
  }

  @Test
  public void testList(TestInfo info) throws Exception {
    testCall(
        info,
        """
                function (x) { list(1,2,3) }
            """,
        "42");
  }

  public void testCall(TestInfo testInfo, String code, String args) throws Exception {
    var tempDir =
        java.nio.file.Files.createTempDirectory(
                "test-" + testInfo.getTestMethod().get().getName() + "-")
            .toFile();
    System.out.println(tempDir);

    var funName = "f";

    var closure = (CloSXP) R.eval(code);
    var ast2bc = new BCCompiler(closure, rsession);
    ast2bc.setOptimizationLevel(3);
    var bc = ast2bc.compile().get();

    var bc2c = new BC2CCompiler(funName, bc);
    var c = bc2c.compile();

    var cFile = new File(tempDir, "code.c");
    try (var cOut = Files.asCharSink(cFile, Charset.defaultCharset()).openBufferedStream()) {
      c.writeTo(cOut);
    }
    c.writeTo(new OutputStreamWriter(System.out));

    var oFile = new File(tempDir, "code.o");
    var soFile = new File(tempDir, "code.so");
    RshCompiler.getInstance().compileShared(cFile, soFile);

    var res =
        R.eval(
            """
        dyn.load('%s')
        cp <- list(1,2,3)
        env <- new.env()
        .Call("f", env, cp, "code")
        """
                .formatted(soFile.getAbsolutePath()));

    System.out.println(res);
    // GNUR.cmd("SHLIB", "-o", soFile.getPath(), oFile.getPath());
  }
}
