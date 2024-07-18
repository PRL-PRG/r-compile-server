package org.prlprg.util;

import static java.lang.String.format;
import static org.prlprg.AppConfig.R_BIN;

import java.io.*;
import java.util.UUID;
import java.util.concurrent.TimeUnit;
import javax.annotation.concurrent.NotThreadSafe;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.session.RSession;
import org.prlprg.sexp.SEXP;

@NotThreadSafe
public class GNUR implements AutoCloseable {
  private final RSession rsession;
  private final Process rprocess;
  private final PrintStream rin;
  private final BufferedReader rout;

  public GNUR(RSession rsession, Process rprocess) {
    this.rsession = rsession;
    this.rprocess = rprocess;
    this.rin = new PrintStream(rprocess.getOutputStream());
    this.rout = new BufferedReader(new InputStreamReader(rprocess.getInputStream()));
  }

  public void run(String code) {
    var requestId = UUID.randomUUID().toString();

    if (!rprocess.isAlive()) {
      throw new RuntimeException("R is not running");
    }

    rin.println(code);
    rin.printf("cat('%s\n')", requestId);
    rin.println();
    rin.flush();
    waitForCommand(requestId);
  }

  public SEXP eval(String source) {
    try {
      var sourceFile = File.createTempFile("RCS-test", ".R");
      var targetFile = File.createTempFile("RCS-test", ".rds");

      try (var w = new PrintWriter(sourceFile)) {
        w.println(source);
      }

      var code =
          format(
              "saveRDS(eval(parse(file='%s'), envir=new.env(parent=baseenv())), '%s', version=2, compress=FALSE)",
              sourceFile.getAbsoluteFile(), targetFile.getAbsoluteFile());

      run(code);

      var sxp = RDSReader.readFile(rsession, targetFile);

      assert (sourceFile.delete());
      assert (targetFile.delete());

      return sxp;
    } catch (Exception e) {
      throw new RuntimeException("Unable to eval R source", e);
    }
  }

  /**
   * Evaluate R source with input SEXP. The SEXP is passed from Java to the R world using RDS.
   *
   * @param source
   * @param input
   * @return
   */
  public SEXP eval(String source, SEXP input) {
    try {
      var inputFile = File.createTempFile("RCS-input", ".rds");
      RDSWriter.writeFile(inputFile, input);
      String full_source = "input <- readRDS('" + inputFile.getAbsolutePath() + "')\n" + source;

      return eval(full_source);
    } catch (Exception e) {
      throw new RuntimeException("Unable to eval R source", e);
    }
  }

  private void waitForCommand(String requestId) {
    var output = new StringBuilder();
    try {
      while (true) {
        if (!rprocess.isAlive()) {
          throw new RuntimeException("R exited unexpectedly");
        }

        var line = rout.readLine();
        if (line == null) {
          throw new RuntimeException("R exited unexpectedly");
        }

        if (line.equals(requestId)) {
          return;
        }

        output.append(line).append("\n");
      }
    } catch (Exception e) {
      int exit;
      try {
        exit = rprocess.waitFor();

        throw new RuntimeException(
            "R REPL died (status: " + exit + ") Output so far:\n " + output, e);

      } catch (InterruptedException ex) {
        throw new RuntimeException("Interrupted waiting for R process to finish dying", ex);
      }
    }
  }

  @Override
  public void close() {
    rprocess.destroy();
  }

  public static GNUR spawn(RSession session) {
    try {
      var versionProc = new ProcessBuilder(R_BIN, "--version").start();
      if (!versionProc.waitFor(10, TimeUnit.SECONDS)) {
        throw new RuntimeException("R (`" + R_BIN + " --version`) timed out");
      }
      String version;
      try (var versionReader = versionProc.inputReader()) {
        var versionStr = versionReader.readLine();
        if (versionStr == null || !versionStr.startsWith("R version ")) {
          throw new RuntimeException("R (`" + R_BIN + " --version`) returned unexpected output");
        }
        version = versionStr.substring("R version ".length()).split(" ", 2)[0];
      }
      if (!version.equals(session.version())) {
        throw new RuntimeException(
            "R version can't be used for compiler tests: expected version "
                + session.version()
                + " but found "
                + version
                + " (R_BIN = "
                + R_BIN
                + ")");
      }

      var proc =
          new ProcessBuilder(R_BIN, "--slave", "--vanilla").redirectErrorStream(true).start();
      return new GNUR(session, proc);
    } catch (IOException | SecurityException | UnsupportedOperationException e) {
      throw new RuntimeException("Unable to start R (R_BIN = " + R_BIN + ")", e);
    } catch (InterruptedException e) {
      throw new RuntimeException("Interrupted while running R (R_BIN = " + R_BIN + ")", e);
    }
  }
}
