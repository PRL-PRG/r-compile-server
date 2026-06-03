package org.prlprg.session.gnur;

import static java.lang.String.format;
import static org.prlprg.AppConfig.R_BIN;

import java.io.BufferedReader;
import java.io.File;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.io.PrintWriter;
import java.util.UUID;
import java.util.concurrent.TimeUnit;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.annotation.concurrent.NotThreadSafe;
import org.prlprg.rds.RDSReader;
import org.prlprg.rds.RDSWriter;
import org.prlprg.session.RSession;
import org.prlprg.session.TestRSession;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Pair;

@NotThreadSafe
class SingleGNURProcess implements GNUR {
  private static final Logger logger = Logger.getLogger(SingleGNURProcess.class.getName());

  private final TestRSession session;
  private final Process process;
  private final PrintStream in;
  private final BufferedReader out;

  SingleGNURProcess(TestRSession session) {
    this.session = session;

    // Start process
    try {
      String version;
      try (var versionProc = new ProcessBuilder(R_BIN, "--version").start()) {
        if (!versionProc.waitFor(10, TimeUnit.SECONDS)) {
          throw new RuntimeException("R (`" + R_BIN + " --version`) timed out");
        }

        try (var versionReader = versionProc.inputReader()) {
          var versionStr = versionReader.readLine();

          // Skip lines like "WARNING: ignoring environment value of R_HOME"
          while (versionStr.startsWith("WARNING:")) {
            versionStr = versionReader.readLine();
          }

          if (versionStr.startsWith("R version")) {
            version = versionStr.substring("R version ".length()).split(" ", 2)[0];
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
          } else if (versionStr.startsWith("R Under development (unstable)")) {
            // OK -- this should be a bundled version
            version = "bundled";
          } else {
            throw new RuntimeException(
                "R (`" + R_BIN + " --version`) returned unexpected output:\n" + versionStr);
          }
        }
      }

      process = new ProcessBuilder(R_BIN, "--slave", "--vanilla").redirectErrorStream(true).start();

      if (logger.isLoggable(Level.FINE)) {
        logger.fine("Started %s version: %s process: %d".formatted(R_BIN, version, process.pid()));
      }
    } catch (IOException | SecurityException | UnsupportedOperationException e) {
      throw new RuntimeException("Unable to start R (R_BIN = " + R_BIN + ")", e);
    } catch (InterruptedException e) {
      throw new RuntimeException("Interrupted while running R (R_BIN = " + R_BIN + ")", e);
    }

    in = new PrintStream(process.getOutputStream());
    out = new BufferedReader(new InputStreamReader(process.getInputStream()));
  }

  @Override
  public boolean isAlive() {
    return process.isAlive();
  }

  private String run(String code) {
    var requestId = UUID.randomUUID().toString();

    if (!process.isAlive()) {
      throw new RuntimeException("R is not running");
    }

    in.println(code);
    in.printf("cat('%s\n')", requestId);
    in.println();
    in.flush();
    return waitForCommand(requestId);
  }

  @Override
  public Pair<SEXP, String> capturingEval(String source) {
    String output = null;
    try {
      var sourceFile = File.createTempFile("RCS-test", ".R");
      var targetFile = File.createTempFile("RCS-test", ".rds");

      try (var w = new PrintWriter(sourceFile)) {
        w.println(source);
      }

      var code =
          format(
              "saveRDS(eval(parse(file='%s'), envir=new.env(parent=globalenv())), '%s', version=2, compress=FALSE)",
              sourceFile.getAbsoluteFile(), targetFile.getAbsoluteFile());

      output = run(code);

      var res = RDSReader.readFile(session, targetFile);

      var sourceDeleted = sourceFile.delete();
      var targetDeleted = targetFile.delete();
      assert sourceDeleted && targetDeleted;

      return Pair.of(res, output);
    } catch (IOException e) {
      throw new RuntimeException(
          "I/O exception during R source evaluation"
              + (output != null ? "\nOutput:\n" + output : ""),
          e);
    }
  }

  @Override
  public SEXP eval(String source) {
    return capturingEval(source).first();
  }

  @Override
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

  @Override
  public EnvSXP evalEnvironment(String source) {
    return (EnvSXP) eval(source + "\nenvironment()");
  }

  private String waitForCommand(String requestId) {
    var output = new StringBuilder();

    IOException exception = null;
    while (true) {
      String line = null;
      try {
        line = out.readLine();
      } catch (IOException e) {
        exception = e;
      }
      if (line == null) {
        break;
      }

      if (line.equals(requestId)) {
        return output.toString();
      }

      output.append(line).append("\n");
    }

    int exit;
    try {
      exit = process.waitFor();
      if (exit == 0) {
        throw new RuntimeException("R finished without printing request ID. Output:\n" + output);
      } else {
        throw new EvalException(exit, output.toString(), exception);
      }
    } catch (InterruptedException ex) {
      throw new RuntimeException("Interrupted waiting for R process to finish dying", ex);
    }
  }

  @Override
  public void close() {
    process.destroy();
  }

  @Override
  public RSession getSession() {
    return session;
  }
}
