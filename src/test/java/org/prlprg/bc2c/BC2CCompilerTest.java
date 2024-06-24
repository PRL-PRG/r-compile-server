package org.prlprg.bc2c;

import com.google.common.io.Files;
import java.io.File;
import java.io.IOException;
import java.lang.reflect.Method;
import java.nio.charset.Charset;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.TestInfo;
import org.prlprg.bc.BCCompiler;
import org.prlprg.rds.RDSWriter;
import org.prlprg.sexp.CloSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;
import org.prlprg.util.AbstractGNURBasedTest;
import org.prlprg.util.Tests;

public class BC2CCompilerTest extends AbstractGNURBasedTest implements Tests {

  @Test
  public void testEmptyList(TestInfo info) throws IOException {
    testCall(info, """
                function (x) { y <- x + 42; y + 42 }
            """, "42");
  }

  public SEXP testCall(TestInfo testInfo, String code, String args) throws IOException {
    var funName = "f_" + testInfo.getTestMethod().map(Method::getName).get();
    var gnurFun = (CloSXP) R.eval(code);

    var ast2bc = new BCCompiler(gnurFun, rsession);
    var bc = ast2bc.compile().get();

    var bc2c = new BC2CCompiler(funName, bc);
    var c = bc2c.compile();

    var cFile = File.createTempFile("test-cfile", ".cpp");
    try (var cOut = Files.asCharSink(cFile, Charset.defaultCharset()).openBufferedStream()) {
      c.writeTo(cOut);
    }

    var cpFile = File.createTempFile("test-cpfile", ".RDS");
    try (var cpOut = Files.asByteSink(cpFile).openBufferedStream()) {
      RDSWriter.writeStream(rsession, cpOut, SEXPs.list2(bc2c.constants()));
    }

    var res =
        R.eval(
            """
      local({
        cpp11::cpp_source('%s')
        %s(new.env(), readRDS('%s'))
      })
"""
                .formatted(cFile.getAbsolutePath(), funName, cpFile.getAbsolutePath()));

    return res;
  }
}
