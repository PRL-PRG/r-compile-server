package org.prlprg.util;

import java.io.File;
import java.io.PrintWriter;
import org.prlprg.rds.RDSReader;
import org.prlprg.sexp.SEXP;

public class R {
  public static final String R_BIN = "R";

  private R() {}

  public static SEXP eval(String source) {
    try {
      var sourceFile = File.createTempFile("RCS-test", ".R");
      var targetFile = File.createTempFile("RCS-test", ".rds");

      try (var w = new PrintWriter(sourceFile)) {
        w.println(source);
      }

      var code =
          String.format(
              "saveRDS(eval(parse(file=\"%s\")), \"%s\", compress=FALSE)",
              sourceFile.getAbsoluteFile(), targetFile.getAbsoluteFile());
      runCode(code);

      var sxp = RDSReader.readFile(targetFile).cast();

      assert (sourceFile.delete());
      assert (targetFile.delete());

      return sxp;
    } catch (Exception e) {
      throw new RuntimeException("Unable to eval R source", e);
    }
  }

  private static void runCode(String code) {
    try {
      var pb =
          new ProcessBuilder(R_BIN, "--slave", "--vanilla", "--no-save", "-e", code)
              .redirectErrorStream(true);
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
